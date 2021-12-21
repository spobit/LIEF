#include "LIEF/BinaryStream/Convert.hpp"
#include "LIEF/BinaryStream/BinaryStream.hpp"
#include "LIEF/OAT/type_traits.hpp"
#include "LIEF/OAT/Structures.hpp"

namespace LIEF {
namespace Convert {
template<> void swap_endian<LIEF::OAT::OAT_064::oat_header>(LIEF::OAT::OAT_064::oat_header*) { }
template<> void swap_endian<LIEF::OAT::OAT_064::oat_quick_method_header>(LIEF::OAT::OAT_064::oat_quick_method_header*) { }
template<> void swap_endian<LIEF::OAT::OAT_079::oat_quick_method_header>(LIEF::OAT::OAT_079::oat_quick_method_header*) { }
template<> void swap_endian<LIEF::OAT::OAT_124::oat_quick_method_header>(LIEF::OAT::OAT_124::oat_quick_method_header*) { }
template<> void swap_endian<LIEF::OAT::OAT_131::oat_header>(LIEF::OAT::OAT_131::oat_header*) { }

}
}
