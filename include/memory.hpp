#ifndef MEMORY__H
#define MEMORY__H

#include "constants.hpp"


class memory
{
private:
    std::array<uint8_t, MEMORY_SIZE> mem{};

public:
    uint8_t read(addr_t adrr);
    void write(addr_t adrr, uint8_t data);
};

#endif // MEMORY__H