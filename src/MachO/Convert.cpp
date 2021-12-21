#include "LIEF/BinaryStream/Convert.hpp"
#include "LIEF/BinaryStream/BinaryStream.hpp"
#include "LIEF/MachO/Structures.hpp"

namespace LIEF {
namespace Convert {

template<> void swap_endian<LIEF::MachO::build_tool_version>(LIEF::MachO::build_tool_version*) { }
template<> void swap_endian<LIEF::MachO::build_version_command>(LIEF::MachO::build_version_command*) { }
template<> void swap_endian<LIEF::MachO::dyld_info_command>(LIEF::MachO::dyld_info_command*) { }
template<> void swap_endian<LIEF::MachO::dylib_command>(LIEF::MachO::dylib_command*) { }
template<> void swap_endian<LIEF::MachO::dylinker_command>(LIEF::MachO::dylinker_command*) { }
template<> void swap_endian<LIEF::MachO::dysymtab_command>(LIEF::MachO::dysymtab_command*) { }
template<> void swap_endian<LIEF::MachO::encryption_info_command>(LIEF::MachO::encryption_info_command*) { }
template<> void swap_endian<LIEF::MachO::entry_point_command>(LIEF::MachO::entry_point_command*) { }
template<> void swap_endian<LIEF::MachO::fat_header>(LIEF::MachO::fat_header*) { }
template<> void swap_endian<LIEF::MachO::fileset_entry_command>(LIEF::MachO::fileset_entry_command*) { }

template<> void swap_endian<LIEF::MachO::linkedit_data_command>(LIEF::MachO::linkedit_data_command*) { }
template<> void swap_endian<LIEF::MachO::load_command>(LIEF::MachO::load_command*) { }
template<> void swap_endian<LIEF::MachO::mach_header>(LIEF::MachO::mach_header*) { }
template<> void swap_endian<LIEF::MachO::mach_header_64>(LIEF::MachO::mach_header_64*) { }
template<> void swap_endian<LIEF::MachO::relocation_info>(LIEF::MachO::relocation_info*) { }
template<> void swap_endian<LIEF::MachO::rpath_command>(LIEF::MachO::rpath_command*) { }
template<> void swap_endian<LIEF::MachO::scattered_relocation_info>(LIEF::MachO::scattered_relocation_info*) { }
template<> void swap_endian<LIEF::MachO::section_32>(LIEF::MachO::section_32*) { }
template<> void swap_endian<LIEF::MachO::section_64>(LIEF::MachO::section_64*) { }
template<> void swap_endian<LIEF::MachO::segment_command_32>(LIEF::MachO::segment_command_32*) { }
template<> void swap_endian<LIEF::MachO::segment_command_64>(LIEF::MachO::segment_command_64*) { }
template<> void swap_endian<LIEF::MachO::source_version_command>(LIEF::MachO::source_version_command*) { }
template<> void swap_endian<LIEF::MachO::sub_framework_command>(LIEF::MachO::sub_framework_command*) { }
template<> void swap_endian<LIEF::MachO::symtab_command>(LIEF::MachO::symtab_command*) { }
template<> void swap_endian<LIEF::MachO::thread_command>(LIEF::MachO::thread_command*) { }
template<> void swap_endian<LIEF::MachO::unwind_info_compressed_second_level_page_header>(LIEF::MachO::unwind_info_compressed_second_level_page_header*) { }
template<> void swap_endian<LIEF::MachO::unwind_info_regular_second_level_page_header>(LIEF::MachO::unwind_info_regular_second_level_page_header*) { }
template<> void swap_endian<LIEF::MachO::unwind_info_section_header>(LIEF::MachO::unwind_info_section_header*) { }
template<> void swap_endian<LIEF::MachO::unwind_info_section_header_index_entry>(LIEF::MachO::unwind_info_section_header_index_entry*) { }
template<> void swap_endian<LIEF::MachO::unwind_info_section_header_lsda_index_entry>(LIEF::MachO::unwind_info_section_header_lsda_index_entry*) { }
template<> void swap_endian<LIEF::MachO::uuid_command>(LIEF::MachO::uuid_command*) { }
template<> void swap_endian<LIEF::MachO::version_min_command>(LIEF::MachO::version_min_command*) { }
}
}
