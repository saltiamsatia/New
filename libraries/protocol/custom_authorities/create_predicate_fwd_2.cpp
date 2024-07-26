/*
 * Acloudbank
 */


#include "restriction_predicate.hxx"

/* This file contains explicit specializations of the create_predicate_function template.
 * Generate using the following shell code, and paste below.

FWD_FIELD_TYPES="account_id_type flat_set<account_id_type> public_key_type authority optional<authority>"

for T in $FWD_FIELD_TYPES; do
    echo "template"
    echo "object_restriction_predicate<$T> create_predicate_function( "
    echo "    restriction_function func, restriction_argument arg );"
done
 */

namespace graphene { namespace protocol {

template
object_restriction_predicate<account_id_type> create_predicate_function(
    restriction_function func, restriction_argument arg );
template
object_restriction_predicate<flat_set<account_id_type>> create_predicate_function(
    restriction_function func, restriction_argument arg );
template
object_restriction_predicate<public_key_type> create_predicate_function(
    restriction_function func, restriction_argument arg );
template
object_restriction_predicate<authority> create_predicate_function(
    restriction_function func, restriction_argument arg );
template
object_restriction_predicate<optional<authority>> create_predicate_function(
    restriction_function func, restriction_argument arg );

} } // namespace graphene::protocol
