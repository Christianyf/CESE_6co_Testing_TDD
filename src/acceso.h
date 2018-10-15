#include <stdint.h>


void Gpio_Create(int *puerto);
void Gpio_TurnOn(int *puerto);
void Gpio_TurnOff(int *puerto);
char DelayTime(int time);
void EnableGpio();
char ValidatePassword(char *password);
char acceso(char *password);
