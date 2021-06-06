#include <stdio.h>
#define DEBUG_ENABLE // si deseas desactivar log favor de comentar esta linea

#if defined(DEBUG_ENABLE)
#define DEBUGOUT(...) printf(__VA_ARGS__)
#else
#define DEBUGOUT(...)
#endif 

void funcion(void)
{
	DEBUGOUT("Hola mundo\n");
}
