#include "LIEF/BinaryStream/Convert.hpp"
#include "LIEF/BinaryStream/BinaryStream.hpp"
#include "LIEF/VDEX/type_traits.hpp"
#include "LIEF/VDEX/Structures.hpp"

namespace LIEF {
namespace Convert {
template<> void swap_endian<LIEF::VDEX::header>(LIEF::VDEX::header*) { }
}
}
