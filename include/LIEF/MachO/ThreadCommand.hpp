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
#ifndef LIEF_MACHO_THREAD_COMMAND_H_
#define LIEF_MACHO_THREAD_COMMAND_H_
#include <vector>
#include <iostream>

#include "LIEF/visibility.h"
#include "LIEF/types.hpp"

#include "LIEF/MachO/LoadCommand.hpp"

namespace LIEF {
namespace MachO {

class BinaryParser;
struct thread_command;

class LIEF_API ThreadCommand : public LoadCommand {
  friend class BinaryParser;
  public:
  ThreadCommand();
  ThreadCommand(const thread_command *cmd, CPU_TYPES arch=CPU_TYPES::CPU_TYPE_ANY);
  ThreadCommand(uint32_t flavor, uint32_t count, CPU_TYPES arch=CPU_TYPES::CPU_TYPE_ANY);

  ThreadCommand& operator=(const ThreadCommand& copy);
  ThreadCommand(const ThreadCommand& copy);

  virtual ThreadCommand* clone() const override;

  virtual ~ThreadCommand();

  uint32_t  flavor() const;
  uint32_t  count() const;
  CPU_TYPES architecture() const;

  const std::vector<uint8_t>& state() const;
  std::vector<uint8_t>& state();

  uint64_t pc() const;

  void state(const std::vector<uint8_t>& state);
  void flavor(uint32_t flavor);
  void count(uint32_t count);
  void architecture(CPU_TYPES arch);

  bool operator==(const ThreadCommand& rhs) const;
  bool operator!=(const ThreadCommand& rhs) const;

  virtual void accept(Visitor& visitor) const override;

  virtual std::ostream& print(std::ostream& os) const override;

  private:
  uint32_t             flavor_;
  uint32_t             count_;
  CPU_TYPES            architecture_;
  std::vector<uint8_t> state_;

};

}
}
#endif
