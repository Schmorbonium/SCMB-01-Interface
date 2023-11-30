#include "scmb_comm.h"
#include <string>
#include <iostream>

using namespace machine;

SCMBComm::SCMBComm(MachineConfig config, bool load_symtab, bool load_executable)
    : Machine(config, load_symtab, load_executable) {

    std::cout << "Constructor Called";
}