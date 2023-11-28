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

Memory *SCMBComm::memory_rw()
{
    std::cout << "Return Reference to writable memory";
}

const Cache *SCMBComm::cache_program()
{
    std::cout << "Return cache for program";
}

const Cache *SCMBComm::cache_data()
{
    std::cout << "Return cache data";
}

Cache *SCMBComm::cache_data_rw()
{
    std::cout << "Return writable cache data";
}

void SCMBComm::cache_sync()
{
    std::cout << "Sync cache with machine";
}

const MemoryDataBus *SCMBComm::memory_data_bus()
{
    std::cout << "return reference to databus";
}

MemoryDataBus *SCMBComm::memory_data_bus_rw()
{
    std::cout << "Return writable memory databus";
}

SerialPort *SCMBComm::serial_port()
{
    std::cout << "Return reference to serial port";
}

PeripSpiLed *SCMBComm::peripheral_spi_led() 
{
    std::cout << "Return reference to peripheral spi";
}

LcdDisplay *SCMBComm::peripheral_lcd_display()
{
    std::cout << "return reference to peripheral lcd";
}

SymbolTable *SCMBComm::symbol_table_rw(bool create)
{
    std::cout << "Return symbol table or new if create";
}

const SymbolTable *SCMBComm::symbol_table(bool create)
{
    std::cout << "Return symbol table";
}

void SCMBComm::set_symbol(
    const QString &name,
    uint32_t value,
    uint32_t size,
    unsigned char info,
    unsigned char other
)
{
    std::cout << "Set a symbol in symbol table";
}

const Core *SCMBComm::core()
{
    std::cout << "Return pointer to core";
}

const CoreSingle *SCMBComm::core_singe()
{
    std::cout << "return single core access";
}

const CorePipelined *SCMBComm::core_pipelined()
{
    std::cout << "return pipelined core";
}

bool SCMBComm::executable_loaded() const
{
    std::cout << "Return if program is loaded into memory";
}

enum SCMBComm::Status SCMBComm::status()
{
    std::cout << "Return system status";
}

bool SCMBComm::exited()
{
    std::cout << "Return true if exited from program or trapped";
}

#define CTL_GUARD                                                              \
    do {                                                                       \
        if (exited() || stat == ST_BUSY)                                       \
            return;                                                            \
    } while (false)

void SCMBComm::play()
{
    std::cout << "Begin program running on core";
}

void SCMBComm::pause()
{
    std::cout << "Pause execution of instructions";
}

void SCMBComm::step_internal(bool skip_break)
{
    std::cout << "Step one instruction and break on skip_break";
}

void SCMBComm::step()
{
    std::cout << "step one instruction regardless of break";
}

void SCMBComm::step_timer()
{
    std::cout << "Step with timer";
}

void SCMBComm::restart()
{
    std::cout << "Restart instructions";
}

void SCMBComm::set_status(enum Status st)
{
    std::cout << "Set status to " + std::to_string(st);
}

void SCMBComm::register_exception_handler(
    ExceptionCause excause,
    ExceptionHandler *exhandler
)
{
    std::cout << "Register a new exception handler";
}

bool SCMBComm::memory_bus_insert_range(
    BackendMemory *mem_acces,
    Address start_addr,
    Address last_addr,
    bool move_ownership
)
{
    std::cout << "Set a new memory bus range";
}

void SCMBComm::insert_hwbreak(Address address)
{
    std::cout << "set address of a hardware break";
}

void SCMBComm::remove_hwbreak(Address address)
{
    std::cout << "remove Hardware break from address";
}

bool SCMBComm::is_hwbreak(Address address)
{
    std::cout << "Return if address has a breakpoint applied";
}

void SCMBComm::set_stop_on_exception(enum ExceptionCause excause, bool value)
{
    std::cout << "set a stop on an exception point";
}

bool SCMBComm::get_stop_on_exception(enum ExceptionCause excause) const
{
    std::cout << "get whether there is a stop for this type of exception";
}

void SCMBComm::set_step_over_exception(enum ExceptionCause excause, bool value)
{
    std::cout << "Sets a point to skip exception type";
}

bool SCMBComm::get_step_over_exception(enum ExceptionCause excause) const
{
    std::cout << "Get whether an exception type is skipped when stepping";
}

enum ExceptionCause SCMBComm::get_exception_cause() const
{
    std::cout << "Return what cause of an exception was";
}