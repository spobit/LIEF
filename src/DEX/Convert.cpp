#include "LIEF/BinaryStream/Convert.hpp"
#include "LIEF/BinaryStream/BinaryStream.hpp"
#include "LIEF/DEX/type_traits.hpp"
#include "LIEF/DEX/Structures.hpp"

namespace LIEF {
namespace Convert {
template<> void swap_endian<LIEF::DEX::class_def_item>(LIEF::DEX::class_def_item*) { }
template<> void swap_endian<LIEF::DEX::code_item>(LIEF::DEX::code_item*) { }
template<> void swap_endian<LIEF::DEX::field_id_item>(LIEF::DEX::field_id_item*) { }
template<> void swap_endian<LIEF::DEX::header>(LIEF::DEX::header*) { }
template<> void swap_endian<LIEF::DEX::map_items>(LIEF::DEX::map_items*) { }
template<> void swap_endian<LIEF::DEX::method_id_item>(LIEF::DEX::method_id_item*) { }
template<> void swap_endian<LIEF::DEX::proto_id_item>(LIEF::DEX::proto_id_item*) { }
}
}
