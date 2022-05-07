    #ifndef CPU_H
    #define CPU_H

    #include <stdint.h>

    struct Registers {

        uint8_t a;
        uint8_t b;
        uint8_t c;
        uint8_t d;
        uint8_t e;
        uint8_t h;
        uint8_t l;

        uint16_t SP;
        uint16_t PC;

    };
    
    void CPU_Init();
    bool CPU_Step();

    #endif
