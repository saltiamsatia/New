/*
 * Acloudbank
 */


#include "restriction_predicate.hxx"

/* This file contains explicit specializations of the create_predicate_function template.
 * Generate using the following shell code, and paste below.

FWD_FIELD_TYPES="share_type asset_id_type flat_set<asset_id_type> asset price"
FWD_FIELD_TYPES="$FWD_FIELD_TYPES string std::vector<char> time_point_sec"

for T in $FWD_FIELD_TYPES; do
    echo "template"
    echo "object_restriction_predicate<$T> create_predicate_function( "
    echo "    restriction_function func, restriction_argument arg );"
done
 */

namespace graphene { namespace protocol {

template
object_restriction_predicate<share_type> create_predicate_function(
    restriction_function func, restriction_argument arg );
template
object_restriction_predicate<asset_id_type> create_predicate_function(
    restriction_function func, restriction_argument arg );
template
object_restriction_predicate<flat_set<asset_id_type>> create_predicate_function(
    restriction_function func, restriction_argument arg );
template
object_restriction_predicate<asset> create_predicate_function(
    restriction_function func, restriction_argument arg );
template
object_restriction_predicate<price> create_predicate_function(
    restriction_function func, restriction_argument arg );
template
object_restriction_predicate<string> create_predicate_function(
    restriction_function func, restriction_argument arg );
template
object_restriction_predicate<std::vector<char>> create_predicate_function(
    restriction_function func, restriction_argument arg );
template
object_restriction_predicate<time_point_sec> create_predicate_function(
    restriction_function func, restriction_argument arg );

} } // namespace graphene::protocol
