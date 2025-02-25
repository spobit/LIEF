/* Copyright 2017 - 2021 R. Thomas
 * Copyright 2017 - 2021 Quarkslab
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef LIEF_MACHO_PARSER_CONFIG_H_
#define LIEF_MACHO_PARSER_CONFIG_H_
#include "LIEF/visibility.h"

namespace LIEF {
namespace MachO {

struct LIEF_API ParserConfig {
  //! @brief Return a configuration so that the all objects supported by
  //! LIEF are parsed
  //!
  //! With this configuration:
  //! * ``parse_dyldinfo_deeply`` is set to ``true``
  static ParserConfig deep();

  //! Return a configuration so that the parsing is quick
  //!
  //! With this configuration:
  //! * ``parse_dyldinfo_deeply`` is set to ``false``
  static ParserConfig quick();

  //! @brief If ``flag`` is set to ``true``,
  //! Exports, Bindings and Rebases opcodes are
  //! parsed.
  //!
  //! @warning Enabling this flag can slow down the parsing
  ParserConfig& full_dyldinfo(bool flag);

  bool parse_dyld_exports  = true;
  bool parse_dyld_bindings = true;
  bool parse_dyld_rebases  = true;
};

}
}
#endif
