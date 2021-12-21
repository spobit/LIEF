#include "LIEF/BinaryStream/Convert.hpp"
#include "LIEF/BinaryStream/BinaryStream.hpp"
#include "LIEF/ART/type_traits.hpp"
#include "LIEF/ART/Structures.hpp"

namespace LIEF {
namespace Convert {
template<> void swap_endian<LIEF::ART::ART_17::header>(LIEF::ART::ART_17::header*) { }
template<> void swap_endian<LIEF::ART::ART_29::header>(LIEF::ART::ART_29::header*) { }
template<> void swap_endian<LIEF::ART::ART_30::header>(LIEF::ART::ART_30::header*) { }
template<> void swap_endian<LIEF::ART::ART_44::header>(LIEF::ART::ART_44::header*) { }
template<> void swap_endian<LIEF::ART::ART_56::header>(LIEF::ART::ART_56::header*) { }
}
}
