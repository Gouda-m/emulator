#ifndef CPU__H
#define CPU__H


#include <stdint.h>
class cpu
{
private:
    struct  
    {
        uint8_t H;
        uint8_t L;
    }program_counter;
    
    uint8_t stack_ptr;
    uint8_t acc;
    uint8_t X;
    uint8_t Y;
    uint8_t instruction_reg;
    uint8_t status_reg;
    
    uint8_t cycle;
};


#endif // CPU__H