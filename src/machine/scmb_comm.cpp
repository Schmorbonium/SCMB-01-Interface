#include "scmb_comm.h"
#include <string>
#include <iostream>

using namespace machine;

SCMBComm::SCMBComm(MachineConfig config, bool load_symtab, bool load_executable)
    : Machine(config, load_symtab, load_executable) {

    std::cout << "Constructor Called";
}

void SCMBComm::setup_lcd_display()
{
    std::cout << "Setup LCD Called";
}

void SCMBComm::setup_perip_spi_led() 
{
    std::cout << "Setup SPI Peripheral called";
}

void SCMBComm::setup_serial_port()
{
    std::cout << "Setup Serial Interface called";
}

SCMBComm::~SCMBComm()
{
    std::cout << "Deconstructor called";
}

const MachineConfig &SCMBComm::config()
{
    std::cout << "Return MachineConfig here";
}

void SCMBComm::set_speed(unsigned int ips, unsigned int time_chunk)
{
    std::string output = "Setting speed to " + std::to_string(ips) + " instructions per second";
    std::cout << output;
}

const Registers *SCMBComm::registers()
{
    std::cout << "Return values contained in registers";
}

const CSR::ControlState *SCMBComm::control_state()
{
    std::cout << "Return control state";
}

const Memory *SCMBComm::memory()
{
    std::cout << "Return memory object";
}