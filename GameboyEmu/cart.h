        #ifndef CART_H
        #define CART_H


        #include <stdint.h>
        #include <string.h>
        #include <stdbool.h>

        bool    Cart_Load(char *cart);
	uint8_t Cart_Read(uint16_t address);
	void    Cart_Write(uint16_t address, uint8_t value);

        extern uint8_t entry[4];
	extern uint8_t logo[0x30];
        
	extern char fileName[1024];
	extern char title[16];
	extern uint16_t newLicenseCode;
	extern uint8_t SGB_Flag;
	extern uint8_t type;
	extern uint8_t ROM_SIZE;

        extern uint32_t biggerRomSize;
	extern uint8_t *ROM_DATA;

	extern uint8_t RAM_SIZE;
        extern uint8_t dest_code;
	extern uint8_t licenseCode;
	extern uint8_t version;
	extern uint8_t checksum;

        #endif
