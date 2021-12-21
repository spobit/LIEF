#include "LIEF/BinaryStream/Convert.hpp"
#include "LIEF/BinaryStream/BinaryStream.hpp"
#include "LIEF/PE/LoadConfigurations.hpp"
#include "LIEF/PE/Structures.hpp"

namespace LIEF {
namespace Convert {

template<> void swap_endian<LIEF::PE::pe_dos_header>(LIEF::PE::pe_dos_header*) { }
template<> void swap_endian<LIEF::PE::pe_header>(LIEF::PE::pe_header*) { }
template<> void swap_endian<LIEF::PE::pe32_optional_header>(LIEF::PE::pe32_optional_header*) { }
template<> void swap_endian<LIEF::PE::pe64_optional_header>(LIEF::PE::pe64_optional_header*) { }
template<> void swap_endian<LIEF::PE::pe_import>(LIEF::PE::pe_import*) { }
template<> void swap_endian<LIEF::PE::pe64_tls>(LIEF::PE::pe64_tls*) { }
template<> void swap_endian<LIEF::PE::pe32_tls>(LIEF::PE::pe32_tls*) { }
template<> void swap_endian<LIEF::PE::pe_export_directory_table>(LIEF::PE::pe_export_directory_table*) { }
template<> void swap_endian<LIEF::PE::pe_base_relocation_block>(LIEF::PE::pe_base_relocation_block*) { }
template<> void swap_endian<LIEF::PE::pe_resource_directory_table>(LIEF::PE::pe_resource_directory_table*) { }
template<> void swap_endian<LIEF::PE::pe_resource_data_entry>(LIEF::PE::pe_resource_data_entry*) { }
template<> void swap_endian<LIEF::PE::pe_symbol>(LIEF::PE::pe_symbol*) { }
template<> void swap_endian<LIEF::PE::pe_pdb_70>(LIEF::PE::pe_pdb_70*) { }
template<> void swap_endian<LIEF::PE::pe_dialog_template_ext>(LIEF::PE::pe_dialog_template_ext*) { }
template<> void swap_endian<LIEF::PE::pe_dialog_item_template_ext>(LIEF::PE::pe_dialog_item_template_ext*) { }
template<> void swap_endian<LIEF::PE::pe_dialog_item_template>(LIEF::PE::pe_dialog_item_template*) { }
template<> void swap_endian<LIEF::PE::pe_resource_acceltableentry>(LIEF::PE::pe_resource_acceltableentry*) { }
template<> void swap_endian<const LIEF::PE::pe_resource_acceltableentry>(const LIEF::PE::pe_resource_acceltableentry*) { }
template<> void swap_endian<LIEF::PE::pe_exception_entry_x64>(LIEF::PE::pe_exception_entry_x64*) { }
template<> void swap_endian<LIEF::PE::pe_debug>(LIEF::PE::pe_debug*) { }
template<> void swap_endian<LIEF::PE::pe_pogo>(LIEF::PE::pe_pogo*) { }
template<> void swap_endian<LIEF::PE::pe_resource_directory_entries>(LIEF::PE::pe_resource_directory_entries*) { }
template<> void swap_endian<LIEF::PE::pe_resource_fixed_file_info>(LIEF::PE::pe_resource_fixed_file_info*) { }

template<> void swap_endian<LIEF::PE::load_configuration<uint32_t>>(LIEF::PE::load_configuration<uint32_t>*) { }
template<> void swap_endian<LIEF::PE::load_configuration<uint64_t>>(LIEF::PE::load_configuration<uint64_t>*) { }
template<> void swap_endian<LIEF::PE::load_configuration_v0<uint32_t>>(LIEF::PE::load_configuration_v0<uint32_t>*) { }
template<> void swap_endian<LIEF::PE::load_configuration_v0<uint64_t>>(LIEF::PE::load_configuration_v0<uint64_t>*) { }
template<> void swap_endian<LIEF::PE::load_configuration_v1<uint32_t>>(LIEF::PE::load_configuration_v1<uint32_t>*) { }
template<> void swap_endian<LIEF::PE::load_configuration_v1<uint64_t>>(LIEF::PE::load_configuration_v1<uint64_t>*) { }
template<> void swap_endian<LIEF::PE::load_configuration_v2<uint32_t>>(LIEF::PE::load_configuration_v2<uint32_t>*) { }
template<> void swap_endian<LIEF::PE::load_configuration_v2<uint64_t>>(LIEF::PE::load_configuration_v2<uint64_t>*) { }
template<> void swap_endian<LIEF::PE::load_configuration_v3<uint32_t>>(LIEF::PE::load_configuration_v3<uint32_t>*) { }
template<> void swap_endian<LIEF::PE::load_configuration_v3<uint64_t>>(LIEF::PE::load_configuration_v3<uint64_t>*) { }
template<> void swap_endian<LIEF::PE::load_configuration_v4<uint32_t>>(LIEF::PE::load_configuration_v4<uint32_t>*) { }
template<> void swap_endian<LIEF::PE::load_configuration_v4<uint64_t>>(LIEF::PE::load_configuration_v4<uint64_t>*) { }
template<> void swap_endian<LIEF::PE::load_configuration_v5<uint32_t>>(LIEF::PE::load_configuration_v5<uint32_t>*) { }
template<> void swap_endian<LIEF::PE::load_configuration_v5<uint64_t>>(LIEF::PE::load_configuration_v5<uint64_t>*) { }
template<> void swap_endian<LIEF::PE::load_configuration_v6<uint32_t>>(LIEF::PE::load_configuration_v6<uint32_t>*) { }
template<> void swap_endian<LIEF::PE::load_configuration_v6<uint64_t>>(LIEF::PE::load_configuration_v6<uint64_t>*) { }
template<> void swap_endian<LIEF::PE::load_configuration_v7<uint32_t>>(LIEF::PE::load_configuration_v7<uint32_t>*) { }
template<> void swap_endian<LIEF::PE::load_configuration_v7<uint64_t>>(LIEF::PE::load_configuration_v7<uint64_t>*) { }

}
}
