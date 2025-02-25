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
#include <iomanip>

#include "LIEF/utils.hpp"
#include "LIEF/PE/signature/Attribute.hpp"

namespace LIEF {
namespace PE {

Attribute::Attribute() = default;

Attribute::Attribute(SIG_ATTRIBUTE_TYPES type) :
  type_{type}
{}

Attribute::Attribute(const Attribute& other) :
  Object{other},
  type_{other.type_}
{}

Attribute& Attribute::operator=(const Attribute& other) {
  if (this != &other) {
    this->type_ = other.type_;
  }
  return *this;
}

Attribute::~Attribute() = default;

void Attribute::accept(Visitor& visitor) const {
  visitor.visit(*this);
}

std::ostream& operator<<(std::ostream& os, const Attribute& attribute) {
  os << attribute.print();
  return os;
}

}
}
