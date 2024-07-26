/*
 * Acloudbank
 */


#include "restriction_predicate.hxx"

/* This file contains explicit specializations of the create_predicate_function template.
 * Generate using the following shell code, and paste below.

FWD_FIELD_TYPES="bool uint8_t uint16_t uint32_t unsigned_int extensions_type"

for T in $FWD_FIELD_TYPES; do
    echo "template"
    echo "object_restriction_predicate<$T> create_predicate_function( "
    echo "    restriction_function func, restriction_argument arg );"
done
 */

namespace graphene { namespace protocol {

template
object_restriction_predicate<bool> create_predicate_function(
    restriction_function func, restriction_argument arg );
template
object_restriction_predicate<uint8_t> create_predicate_function(
    restriction_function func, restriction_argument arg );
template
object_restriction_predicate<uint16_t> create_predicate_function(
    restriction_function func, restriction_argument arg );
template
object_restriction_predicate<uint32_t> create_predicate_function(
    restriction_function func, restriction_argument arg );
template
object_restriction_predicate<unsigned_int> create_predicate_function(
    restriction_function func, restriction_argument arg );
template
object_restriction_predicate<extensions_type> create_predicate_function(
    restriction_function func, restriction_argument arg );

} } // namespace graphene::protocol
