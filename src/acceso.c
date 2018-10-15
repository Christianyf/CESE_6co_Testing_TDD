#include "acceso.h"

#define ON  1
#define OFF 0

static int * puerto;
static int clave[4]={1,2,3,4};

void Gpio_Create(int *direccion){
	puerto=direccion;
	*puerto = OFF;
}

void Gpio_TurnOn(int *direccion){
	puerto=direccion;
	*puerto=ON;
}

void Gpio_TurnOff(int *direccion){
	puerto=direccion;
	*puerto=OFF;
}

char DelayTime(int time){
	int i=0;
	for (i=0;i<time;i++)
	{
			
	}
	return 1;
}

void EnableGpio(){
	int gpioVirtuales;
	int time=0xffff;
	Gpio_TurnOn(&gpioVirtuales);
	DelayTime(time);
	Gpio_TurnOff(&gpioVirtuales);	
}

char ValidatePassword(char *password){
	char i;
	char count_ascert=0;
	
	for(i=0;i<4;i++)
	{
		if(password[i]==clave[i])
			count_ascert++;
	}
	if(count_ascert==4)
	{
		return 1;
	}else 
		return 2;	
}

char acceso(char *password){
	
	int time=0xffff;
	int gpioVirtuales;
	
	if(ValidatePassword(password)==1){
		EnableGpio();
		return 1;
	}else
		return 2;
}

