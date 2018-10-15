#include "unity.h"
#include "acceso.h"

void setUp(void){
}

void tearDown(void){
}

void test_GpioOffAfterCreate(void){
	int gpioVirtuales=0xFFFF;
	Gpio_Create(&gpioVirtuales);
	TEST_ASSERT_EQUAL_HEX16(0,gpioVirtuales);
}

void test_TurnOnGpioCero(void){
	int gpioVirtuales;
	Gpio_Create(&gpioVirtuales);
	Gpio_TurnOn();
	TEST_ASSERT_EQUAL_HEX16(1,gpioVirtuales);
}

void test_TurnOffGpioCero(void){
	int gpioVirtuales;
	Gpio_Create(&gpioVirtuales);
	Gpio_TurnOff();
	TEST_ASSERT_EQUAL_HEX16(0,gpioVirtuales);
}



