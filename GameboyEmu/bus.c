        #include "bus.h"
        #include "cart.h"

        #include <stdio.h>

	uint8_t Bus_Read(uint16_t address) {
	 
	    if (address < 0x8000) {
	    
		return Cart_Read(address);
	    
	    } 

	    else {
	    
		printf("Bus_Read(): Not implemented yet\n");
	    
	    }

	}

	void Bus_Write(uint16_t address, uint8_t value) {

	    if (address < 0x8000) {
	    
		Cart_Write(address, value);
		return;

	    }

	    else {
	    
		printf("Bus_Write(): Not implemented yet\n");
	    
	    }

	}


