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
#ifndef LIEF_MACHO_DYLINKER_COMMAND_H_
#define LIEF_MACHO_DYLINKER_COMMAND_H_
#include <string>
#include <iostream>

#include "LIEF/types.hpp"
#include "LIEF/visibility.h"

#include "LIEF/MachO/LoadCommand.hpp"


namespace LIEF {
namespace MachO {
struct dylinker_command;

class LIEF_API DylinkerCommand : public LoadCommand {
  public:
  DylinkerCommand();
  DylinkerCommand(const dylinker_command *cmd);

  DylinkerCommand& operator=(const DylinkerCommand& copy);
  DylinkerCommand(const DylinkerCommand& copy);

  virtual DylinkerCommand* clone() const override;

  virtual ~DylinkerCommand();

  virtual std::ostream& print(std::ostream& os) const override;

  const std::string& name() const;

  void name(const std::string& name);

  bool operator==(const DylinkerCommand& rhs) const;
  bool operator!=(const DylinkerCommand& rhs) const;

  virtual void accept(Visitor& visitor) const override;


  private:
  std::string name_;
};

}
}
#endif
