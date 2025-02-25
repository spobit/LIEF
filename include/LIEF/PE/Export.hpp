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
#ifndef LIEF_PE_EXPORT_H_
#define LIEF_PE_EXPORT_H_

#include <iostream>
#include <string>

#include "LIEF/Object.hpp"
#include "LIEF/visibility.h"

#include "LIEF/PE/type_traits.hpp"

namespace LIEF {
namespace PE {

class Builder;
class Parser;
struct pe_export_directory_table;

class LIEF_API Export : public Object {
  friend class Builder;
  friend class Parser;

  public:
  Export();
  Export(const pe_export_directory_table *header);
  Export(const Export&);
  Export& operator=(const Export&);
  virtual ~Export();

  uint32_t                export_flags() const;
  uint32_t                timestamp() const;
  uint16_t                major_version() const;
  uint16_t                minor_version() const;
  uint32_t                ordinal_base() const;
  const std::string&      name() const;
  it_export_entries       entries();
  it_const_export_entries entries() const;

  void export_flags(uint32_t flags);
  void timestamp(uint32_t timestamp);
  void major_version(uint16_t major_version);
  void minor_version(uint16_t minor_version);
  void ordinal_base(uint32_t ordinal_base);
  void name(const std::string& name);

  virtual void accept(Visitor& visitor) const override;

  bool operator==(const Export& rhs) const;
  bool operator!=(const Export& rhs) const;

  LIEF_API friend std::ostream& operator<<(std::ostream& os, const Export& exp);

  private:
  uint32_t         exportFlags_;
  uint32_t         timestamp_;
  uint16_t         majorVersion_;
  uint16_t         minorVersion_;
  uint32_t         ordinalBase_;
  std::string      name_;
  export_entries_t entries_;

};

}
}

#endif /* PE_EXPORT_H_ */
