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
#ifndef LIEF_PE_SYMBOLS_H_
#define LIEF_PE_SYMBOLS_H_

#include <string>
#include <vector>
#include <iostream>

#include "LIEF/Object.hpp"
#include "LIEF/visibility.h"

#include "LIEF/Abstract/Symbol.hpp"
#include "LIEF/PE/Structures.hpp"

namespace LIEF {
namespace PE {

class Parser;
class Builder;
class Section;

class LIEF_API Symbol : public LIEF::Symbol {

  friend class Parser;
  friend class Builder;

  public:
  Symbol(const pe_symbol* header);

  Symbol();
  virtual ~Symbol();

  Symbol& operator=(Symbol other);
  Symbol(const Symbol& copy);
  void swap(Symbol& other);

  int16_t              section_number() const;
  uint16_t             type() const;
  SYMBOL_BASE_TYPES    base_type() const;
  SYMBOL_COMPLEX_TYPES complex_type() const;
  SYMBOL_STORAGE_CLASS storage_class() const;
  uint8_t              numberof_aux_symbols() const;
  std::wstring         wname() const;
  Section&             section();
  const Section&       section() const;

  //! @brief ``True`` if symbols are located in a section
  bool has_section() const;

  virtual void accept(Visitor& visitor) const override;

  bool operator==(const Symbol& rhs) const;
  bool operator!=(const Symbol& rhs) const;

  LIEF_API friend std::ostream& operator<<(std::ostream& os, const Symbol& entry);

  private:
  int16_t              section_number_;
  uint16_t             type_;
  SYMBOL_STORAGE_CLASS storage_class_;
  uint8_t              numberof_aux_symbols_;
  Section*             section_{nullptr};

};


} // namespace PE
} // namespace LIEF
#endif /* SYMBOLS_H_ */
