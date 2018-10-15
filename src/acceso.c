#include "acceso.h"

#define ON  1
#define OFF 0

static int * puerto;

void Gpio_Create(int *direccion){
	puerto=direccion;
	*puerto = OFF;
}

void Gpio_TurnOn(void){
	*puerto=ON;
}

void Gpio_TurnOff(void){
	*puerto=OFF;
}

char DelayTime(int time){
	int i=0;
	for (i=0;i<time;i++)
	{
			
	}
	return 1;
}

