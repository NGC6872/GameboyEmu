       #include "cart.h"
       #include <stdio.h>

       char fileName[1024];
       uint32_t biggerRomSize;
       uint8_t *ROM_DATA;
       char title[16];

       bool Cart_Load(char *cart) {
       
           snprintf(fileName, sizeof(fileName), "%s", cart);

	   FILE *file = fopen(cart, "r");

	   if (file == NULL) {
	   
	       printf("Failed to open %s", cart);
	   
	   }

	   else {
	   
	       printf("Successfully opened: %s", fileName);
	   
	   }
       
           fseek(file, 0, SEEK_END);
           biggerRomSize = ftell(file);

	   rewind(file);

           ROM_DATA = malloc(biggerRomSize);

	   fread(ROM_DATA, biggerRomSize, 1, file);

	   fclose(file); 
       
           title[15] = 0;

       }




	uint8_t Cart_Read(uint16_t adddress) {






	}

	void Cart_Write(uint16_t address, uint8_t value) {







	}


