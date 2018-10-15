#include "build/temp/_test_acceso.c"
#include "acceso.h"
#include "unity.h"


void setUp(void){

}



void tearDown(void){

}



void test_GpioOffAfterCreate(void){

 int gpioVirtuales=0xFFFF;

 Gpio_Create(&gpioVirtuales);

 UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((0)), (UNITY_INT)(UNITY_INT16)((gpioVirtuales)), (

((void *)0)

), (UNITY_UINT)(13), UNITY_DISPLAY_STYLE_HEX16);

}



void test_TurnOnGpioCero(void){

 int gpioVirtuales;

 Gpio_Create(&gpioVirtuales);

 Gpio_TurnOn();

 UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((1)), (UNITY_INT)(UNITY_INT16)((gpioVirtuales)), (

((void *)0)

), (UNITY_UINT)(20), UNITY_DISPLAY_STYLE_HEX16);

}



void test_TurnOffGpioCero(void){

 int gpioVirtuales;

 Gpio_Create(&gpioVirtuales);

 Gpio_TurnOff();

 UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((0)), (UNITY_INT)(UNITY_INT16)((gpioVirtuales)), (

((void *)0)

), (UNITY_UINT)(27), UNITY_DISPLAY_STYLE_HEX16);

}



void test_TimeCondition(){

 char flag;

 int time=0xffff;

 flag=DelayTime(time);

 UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((flag)), (

((void *)0)

), (UNITY_UINT)(34), UNITY_DISPLAY_STYLE_INT);

}



void test_TurnOnGpioByTimeCondition(){

 int gpioVirtuales;

 char flag;

 int time=0xffff;

 UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((0)), (UNITY_INT)(UNITY_INT16)((gpioVirtuales)), (

((void *)0)

), (UNITY_UINT)(41), UNITY_DISPLAY_STYLE_HEX16);

 Gpio_Create(&gpioVirtuales);

 Gpio_TurnOn();

 UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((1)), (UNITY_INT)(UNITY_INT16)((gpioVirtuales)), (

((void *)0)

), (UNITY_UINT)(44), UNITY_DISPLAY_STYLE_HEX16);

 flag=DelayTime(time);

 Gpio_TurnOff();

 UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((0)), (UNITY_INT)(UNITY_INT16)((gpioVirtuales)), (

((void *)0)

), (UNITY_UINT)(47), UNITY_DISPLAY_STYLE_HEX16);

}



void test_ValidatePassword(){

 char password[4]={1,2,3,4};

 char flag;

 flag=ValidatePassword(password);

 UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((flag)), (

((void *)0)

), (UNITY_UINT)(54), UNITY_DISPLAY_STYLE_INT);

}
