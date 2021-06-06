#include <stdio.h>
#include <stdint.h> //Aqui encontramos las variables uintx_t

/* 
 * getByte - Extrae el byte n de la variable x 
 * 	 Ejemplo: get_byte(0x12345678,0) = 0x78
 * 			  get_byte(0x12345678,1) = 0x56
 * 			  get_byte(0x12345678,2) = 0x34
 * 			  get_byte(0x12345678,3) = 0x12
 * 
 * 	 Funciona de la siguiente forma:
 * 	 x			n		(n << 3)		(x >> (n << 3)) & 0xff			return
 * 0x12345678	0(00)	0 (0000 0000)	(0x12345678 >> 0) & 0x000000ff	0x78
 * 0x12345678	1(01)	8 (0000 1000)	(0x12345678 >> 8) & 0x000000ff  0x56
 * 0x12345678	2(10)	16(0001 0000)	(0x12345678 >> 16)& 0x000000ff  0x34
 * 0x12345678	3(11)	24(0001 1000)	(0x12345678 >> 24)& 0x000000ff  0x12
 */

uint8_t get_byte(uint32_t x, uint32_t n) {
  return (x >> (n << 3)) & 0xff;
}
