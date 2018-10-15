#include "acceso.h"

#define ON  1
#define OFF 0

static int * puerto;
static int clave[4]={1,2,3,4};

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

