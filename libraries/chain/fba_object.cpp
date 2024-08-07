/*
 * Acloudbank
 */

#include <graphene/chain/database.hpp>
#include <graphene/chain/evaluator.hpp>
#include <graphene/chain/fba_object.hpp>

namespace graphene { namespace chain {

bool fba_accumulator_object::is_configured( const database& db )const
{
   if( !designated_asset.valid() )
   {
      ilog( "FBA fee in block ${b} not paid because designated asset was not configured", ("b", db.head_block_num()) );
      return false;
   }
   const asset_object* dasset = db.find(*designated_asset);
   if( dasset == nullptr )
   {
      ilog( "FBA fee in block ${b} not paid because of FBA misconfiguration:  designated asset does not exist", ("b", db.head_block_num()) );
      return false;
   }
   if( dasset->is_market_issued() )
   {
      ilog( "FBA fee in block ${b} not paid because of FBA misconfiguration:  FBA is a BitAsset", ("b", db.head_block_num()) );
      return false;
   }

   const uint16_t allowed_flags = charge_market_fee;

   // check enabled issuer_permissions bits is subset of allowed_flags bits
   if( (dasset->options.issuer_permissions & allowed_flags) != dasset->options.issuer_permissions )
   {
      ilog( "FBA fee in block ${b} not paid because of FBA misconfiguration:  Disallowed permissions enabled", ("b", db.head_block_num()) );
      return false;
   }

   // check enabled issuer_permissions bits is subset of allowed_flags bits
   if( (dasset->options.flags & allowed_flags) != dasset->options.flags )
   {
      ilog( "FBA fee in block ${b} not paid because of FBA misconfiguration:  Disallowed flags enabled", ("b", db.head_block_num()) );
      return false;
   }

   if( !dasset->buyback_account.valid() )
   {
      ilog( "FBA fee in block ${b} not paid because of FBA misconfiguration:  designated asset does not have a buyback account", ("b", db.head_block_num()) );
      return false;
   }
   const account_object& issuer_acct = dasset->issuer(db);

   if( !issuer_acct.owner_special_authority.is_type< top_holders_special_authority >() )
   {
      ilog( "FBA fee in block ${b} not paid because of FBA misconfiguration:  designated asset issuer has not set owner top_n control", ("b", db.head_block_num()) );
      return false;
   }
   if( !issuer_acct.active_special_authority.is_type< top_holders_special_authority >() )
   {
      ilog( "FBA fee in block ${b} not paid because of FBA misconfiguration:  designated asset issuer has not set active top_n control", ("b", db.head_block_num()) );
      return false;
   }
   if( issuer_acct.owner_special_authority.get< top_holders_special_authority >().asset != *designated_asset )
   {
      ilog( "FBA fee in block ${b} not paid because of FBA misconfiguration:  designated asset issuer's top_n_control is not set to designated asset", ("b", db.head_block_num()) );
      return false;
   }
   if( issuer_acct.active_special_authority.get< top_holders_special_authority >().asset != *designated_asset )
   {
      ilog( "FBA fee in block ${b} not paid because of FBA misconfiguration:  designated asset issuer's top_n_control is not set to designated asset", ("b", db.head_block_num()) );
      return false;
   }

   if( issuer_acct.top_n_control_flags != (account_object::top_n_control_owner | account_object::top_n_control_active) )
   {
      ilog( "FBA fee in block ${b} not paid because designated asset's top_n control has not yet activated (wait until next maintenance interval)", ("b", db.head_block_num()) );
      return false;
   }

   return true;
}

} }
