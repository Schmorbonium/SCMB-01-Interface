
#include "machine.h"

namespace machine {

class SCMBComm : public Machine {
public: 
    explicit SCMBComm(MachineConfig config, bool load_symtab = false, bool load_executable = true);
};

}