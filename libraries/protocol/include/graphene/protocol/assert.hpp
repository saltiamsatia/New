/*
 * Acloudbank
 */
#pragma once

#include <graphene/protocol/base.hpp>
#include <graphene/protocol/asset.hpp>

namespace graphene { namespace protocol { 

   /**
    *  Used to verify that account_id->name is equal to the given string literal.
    */
   struct account_name_eq_lit_predicate
   {
      account_id_type account_id;
      string          name;

      /**
       *  Perform state-independent checks.  Verify
       *  account_name is a valid account name.
       */
      bool validate()const;
   };

   /**
    *  Used to verify that asset_id->symbol is equal to the given string literal.
    */
   struct asset_symbol_eq_lit_predicate
   {
      asset_id_type   asset_id;
      string          symbol;

      /**
       *  Perform state independent checks.  Verify symbol is a
       *  valid asset symbol.
       */
      bool validate()const;

   };

   /**
    * Used to verify that a specific block is part of the
    * blockchain history.  This helps protect some high-value
    * transactions to newly created IDs
    *
    * The block ID must be within the last 2^16 blocks.
    */
   struct block_id_predicate
   {
      block_id_type id;
      bool validate()const{ return true; }
   };

   /**
    *  When defining predicates do not make the protocol dependent upon
    *  implementation details.
    */
   typedef static_variant<
      account_name_eq_lit_predicate,
      asset_symbol_eq_lit_predicate,
      block_id_predicate
     > predicate;


   /**
    *  @brief assert that some conditions are true.
    *  @ingroup operations
    *
    *  This operation performs no changes to the database state, but can but used to verify
    *  pre or post conditions for other operations.
    */
   struct assert_operation : public base_operation
   {
      struct fee_params_t { uint64_t fee = GRAPHENE_BLOCKCHAIN_PRECISION; };

      asset                      fee;
      account_id_type            fee_paying_account;
      vector<predicate>          predicates;
      flat_set<account_id_type>  required_auths;
      extensions_type            extensions;

      account_id_type fee_payer()const { return fee_paying_account; }
      void            validate()const;
      share_type      calculate_fee(const fee_params_t& k)const;
   };

} } // graphene::protocol

FC_REFLECT( graphene::protocol::assert_operation::fee_params_t, (fee) )
FC_REFLECT( graphene::protocol::account_name_eq_lit_predicate, (account_id)(name) )
FC_REFLECT( graphene::protocol::asset_symbol_eq_lit_predicate, (asset_id)(symbol) )
FC_REFLECT( graphene::protocol::block_id_predicate, (id) )
FC_REFLECT_TYPENAME( graphene::protocol::predicate )
FC_REFLECT( graphene::protocol::assert_operation, (fee)(fee_paying_account)(predicates)(required_auths)(extensions) )
 
GRAPHENE_DECLARE_EXTERNAL_SERIALIZATION( graphene::protocol::assert_operation::fee_params_t )
GRAPHENE_DECLARE_EXTERNAL_SERIALIZATION( graphene::protocol::assert_operation )
