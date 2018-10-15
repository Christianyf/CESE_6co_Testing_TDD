#include "acceso.h"

static int * puerto;

void Gpio_Create(int *direccion){
	puerto=direccion;
	*puerto = 0;
}

void Gpio_TurnOn(void){
	*puerto=1;
}

