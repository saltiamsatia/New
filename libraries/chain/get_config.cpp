/*
 * Acloudbank
 */

#include <graphene/chain/get_config.hpp>
#include <graphene/chain/config.hpp>
#include <graphene/protocol/types.hpp>

namespace graphene { namespace chain {

fc::variant_object get_config()
{
   fc::mutable_variant_object result;

   result[ "GRAPHENE_SYMBOL" ] = GRAPHENE_SYMBOL;
   result[ "GRAPHENE_ADDRESS_PREFIX" ] = GRAPHENE_ADDRESS_PREFIX;
   result[ "GRAPHENE_MIN_ACCOUNT_NAME_LENGTH" ] = GRAPHENE_MIN_ACCOUNT_NAME_LENGTH;
   result[ "GRAPHENE_MAX_ACCOUNT_NAME_LENGTH" ] = GRAPHENE_MAX_ACCOUNT_NAME_LENGTH;
   result[ "GRAPHENE_MIN_ASSET_SYMBOL_LENGTH" ] = GRAPHENE_MIN_ASSET_SYMBOL_LENGTH;
   result[ "GRAPHENE_MAX_ASSET_SYMBOL_LENGTH" ] = GRAPHENE_MAX_ASSET_SYMBOL_LENGTH;
   result[ "GRAPHENE_MAX_SHARE_SUPPLY" ] = GRAPHENE_MAX_SHARE_SUPPLY;
   result[ "GRAPHENE_MAX_SIG_CHECK_DEPTH" ] = GRAPHENE_MAX_SIG_CHECK_DEPTH;
   result[ "GRAPHENE_MIN_TRANSACTION_SIZE_LIMIT" ] = GRAPHENE_MIN_TRANSACTION_SIZE_LIMIT;
   result[ "GRAPHENE_MIN_BLOCK_INTERVAL" ] = GRAPHENE_MIN_BLOCK_INTERVAL;
   result[ "GRAPHENE_MAX_BLOCK_INTERVAL" ] = GRAPHENE_MAX_BLOCK_INTERVAL;
   result[ "GRAPHENE_DEFAULT_BLOCK_INTERVAL" ] = GRAPHENE_DEFAULT_BLOCK_INTERVAL;
   result[ "GRAPHENE_DEFAULT_MAX_TRANSACTION_SIZE" ] = GRAPHENE_DEFAULT_MAX_TRANSACTION_SIZE;
   result[ "GRAPHENE_DEFAULT_MAX_BLOCK_SIZE" ] = GRAPHENE_DEFAULT_MAX_BLOCK_SIZE;
   result[ "GRAPHENE_DEFAULT_MAX_TIME_UNTIL_EXPIRATION" ] = GRAPHENE_DEFAULT_MAX_TIME_UNTIL_EXPIRATION;
   result[ "GRAPHENE_DEFAULT_MAINTENANCE_INTERVAL" ] = GRAPHENE_DEFAULT_MAINTENANCE_INTERVAL;
   result[ "GRAPHENE_DEFAULT_MAINTENANCE_SKIP_SLOTS" ] = GRAPHENE_DEFAULT_MAINTENANCE_SKIP_SLOTS;
   result[ "GRAPHENE_MIN_UNDO_HISTORY" ] = GRAPHENE_MIN_UNDO_HISTORY;
   result[ "GRAPHENE_MAX_UNDO_HISTORY" ] = GRAPHENE_MAX_UNDO_HISTORY;
   result[ "GRAPHENE_MIN_BLOCK_SIZE_LIMIT" ] = GRAPHENE_MIN_BLOCK_SIZE_LIMIT;
   result[ "GRAPHENE_BLOCKCHAIN_PRECISION" ] = GRAPHENE_BLOCKCHAIN_PRECISION;
   result[ "GRAPHENE_BLOCKCHAIN_PRECISION_DIGITS" ] = GRAPHENE_BLOCKCHAIN_PRECISION_DIGITS;
   result[ "GRAPHENE_100_PERCENT" ] = GRAPHENE_100_PERCENT;
   result[ "GRAPHENE_1_PERCENT" ] = GRAPHENE_1_PERCENT;
   result[ "GRAPHENE_MAX_MARKET_FEE_PERCENT" ] = GRAPHENE_MAX_MARKET_FEE_PERCENT;
   result[ "GRAPHENE_DEFAULT_FORCE_SETTLEMENT_DELAY" ] = GRAPHENE_DEFAULT_FORCE_SETTLEMENT_DELAY;
   result[ "GRAPHENE_DEFAULT_FORCE_SETTLEMENT_OFFSET" ] = GRAPHENE_DEFAULT_FORCE_SETTLEMENT_OFFSET;
   result[ "GRAPHENE_DEFAULT_FORCE_SETTLEMENT_MAX_VOLUME" ] = GRAPHENE_DEFAULT_FORCE_SETTLEMENT_MAX_VOLUME;
   result[ "GRAPHENE_DEFAULT_PRICE_FEED_LIFETIME" ] = GRAPHENE_DEFAULT_PRICE_FEED_LIFETIME;
   result[ "GRAPHENE_DEFAULT_MAX_AUTHORITY_MEMBERSHIP" ] = GRAPHENE_DEFAULT_MAX_AUTHORITY_MEMBERSHIP;
   result[ "GRAPHENE_DEFAULT_MAX_ASSET_WHITELIST_AUTHORITIES" ] = GRAPHENE_DEFAULT_MAX_ASSET_WHITELIST_AUTHORITIES;
   result[ "GRAPHENE_DEFAULT_MAX_ASSET_FEED_PUBLISHERS" ] = GRAPHENE_DEFAULT_MAX_ASSET_FEED_PUBLISHERS;
   result[ "GRAPHENE_COLLATERAL_RATIO_DENOM" ] = GRAPHENE_COLLATERAL_RATIO_DENOM;
   result[ "GRAPHENE_MIN_COLLATERAL_RATIO" ] = GRAPHENE_MIN_COLLATERAL_RATIO;
   result[ "GRAPHENE_MAX_COLLATERAL_RATIO" ] = GRAPHENE_MAX_COLLATERAL_RATIO;
   result[ "GRAPHENE_DEFAULT_MAINTENANCE_COLLATERAL_RATIO" ] = GRAPHENE_DEFAULT_MAINTENANCE_COLLATERAL_RATIO;
   result[ "GRAPHENE_DEFAULT_MAX_SHORT_SQUEEZE_RATIO" ] = GRAPHENE_DEFAULT_MAX_SHORT_SQUEEZE_RATIO;
   result[ "GRAPHENE_DEFAULT_MAX_WITNESSES" ] = GRAPHENE_DEFAULT_MAX_WITNESSES;
   result[ "GRAPHENE_DEFAULT_MAX_COMMITTEE" ] = GRAPHENE_DEFAULT_MAX_COMMITTEE;
   result[ "GRAPHENE_DEFAULT_MAX_PROPOSAL_LIFETIME_SEC" ] = GRAPHENE_DEFAULT_MAX_PROPOSAL_LIFETIME_SEC;
   result[ "GRAPHENE_DEFAULT_COMMITTEE_PROPOSAL_REVIEW_PERIOD_SEC" ] = GRAPHENE_DEFAULT_COMMITTEE_PROPOSAL_REVIEW_PERIOD_SEC;
   result[ "GRAPHENE_DEFAULT_NETWORK_PERCENT_OF_FEE" ] = GRAPHENE_DEFAULT_NETWORK_PERCENT_OF_FEE;
   result[ "GRAPHENE_DEFAULT_LIFETIME_REFERRER_PERCENT_OF_FEE" ] = GRAPHENE_DEFAULT_LIFETIME_REFERRER_PERCENT_OF_FEE;
   result[ "GRAPHENE_DEFAULT_CASHBACK_VESTING_PERIOD_SEC" ] = GRAPHENE_DEFAULT_CASHBACK_VESTING_PERIOD_SEC;
   result[ "GRAPHENE_DEFAULT_CASHBACK_VESTING_THRESHOLD" ] = GRAPHENE_DEFAULT_CASHBACK_VESTING_THRESHOLD;
   result[ "GRAPHENE_DEFAULT_BURN_PERCENT_OF_FEE" ] = GRAPHENE_DEFAULT_BURN_PERCENT_OF_FEE;
   result[ "GRAPHENE_DEFAULT_MAX_ASSERT_OPCODE" ] = GRAPHENE_DEFAULT_MAX_ASSERT_OPCODE;
   result[ "GRAPHENE_DEFAULT_FEE_LIQUIDATION_THRESHOLD" ] = GRAPHENE_DEFAULT_FEE_LIQUIDATION_THRESHOLD;
   result[ "GRAPHENE_DEFAULT_ACCOUNTS_PER_FEE_SCALE" ] = GRAPHENE_DEFAULT_ACCOUNTS_PER_FEE_SCALE;
   result[ "GRAPHENE_DEFAULT_ACCOUNT_FEE_SCALE_BITSHIFTS" ] = GRAPHENE_DEFAULT_ACCOUNT_FEE_SCALE_BITSHIFTS;
   result[ "GRAPHENE_MAX_WORKER_NAME_LENGTH" ] = GRAPHENE_MAX_WORKER_NAME_LENGTH;
   result[ "GRAPHENE_MAX_URL_LENGTH" ] = GRAPHENE_MAX_URL_LENGTH;
   result[ "GRAPHENE_CORE_ASSET_CYCLE_RATE" ] = GRAPHENE_CORE_ASSET_CYCLE_RATE;
   result[ "GRAPHENE_CORE_ASSET_CYCLE_RATE_BITS" ] = GRAPHENE_CORE_ASSET_CYCLE_RATE_BITS;
   result[ "GRAPHENE_DEFAULT_WITNESS_PAY_PER_BLOCK" ] = GRAPHENE_DEFAULT_WITNESS_PAY_PER_BLOCK;
   result[ "GRAPHENE_DEFAULT_WITNESS_PAY_VESTING_SECONDS" ] = GRAPHENE_DEFAULT_WITNESS_PAY_VESTING_SECONDS;
   result[ "GRAPHENE_DEFAULT_WORKER_BUDGET_PER_DAY" ] = GRAPHENE_DEFAULT_WORKER_BUDGET_PER_DAY;
   result[ "GRAPHENE_COMMITTEE_ACCOUNT" ] = fc::variant(GRAPHENE_COMMITTEE_ACCOUNT, GRAPHENE_MAX_NESTED_OBJECTS);
   result[ "GRAPHENE_WITNESS_ACCOUNT" ] = fc::variant(GRAPHENE_WITNESS_ACCOUNT, GRAPHENE_MAX_NESTED_OBJECTS);
   result[ "GRAPHENE_RELAXED_COMMITTEE_ACCOUNT" ] = fc::variant(GRAPHENE_RELAXED_COMMITTEE_ACCOUNT, GRAPHENE_MAX_NESTED_OBJECTS);
   result[ "GRAPHENE_NULL_ACCOUNT" ] = fc::variant(GRAPHENE_NULL_ACCOUNT, GRAPHENE_MAX_NESTED_OBJECTS);
   result[ "GRAPHENE_TEMP_ACCOUNT" ] = fc::variant(GRAPHENE_TEMP_ACCOUNT, GRAPHENE_MAX_NESTED_OBJECTS);

   return result;
}

} } // graphene::chain
