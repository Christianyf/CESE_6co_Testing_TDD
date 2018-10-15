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

 int gpioVirtuales=0;

 Gpio_TurnOn(&gpioVirtuales);

 UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((1)), (UNITY_INT)(UNITY_INT16)((gpioVirtuales)), (

((void *)0)

), (UNITY_UINT)(19), UNITY_DISPLAY_STYLE_HEX16);

}



void test_TurnOffGpioCero(void){

 int gpioVirtuales=0xFFFF;

 Gpio_TurnOff(&gpioVirtuales);

 UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((0)), (UNITY_INT)(UNITY_INT16)((gpioVirtuales)), (

((void *)0)

), (UNITY_UINT)(25), UNITY_DISPLAY_STYLE_HEX16);

}



void test_TimeCondition(){

 char flag;

 int time=0xffff;

 flag=DelayTime(time);

 UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((flag)), (

((void *)0)

), (UNITY_UINT)(32), UNITY_DISPLAY_STYLE_INT);

}



void test_TurnOnGpioByTimeCondition(){

 char flag;

 int gpioVirtuales;



 EnableGpio();



 UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((0)), (UNITY_INT)(UNITY_INT16)((gpioVirtuales)), (

((void *)0)

), (UNITY_UINT)(41), UNITY_DISPLAY_STYLE_HEX16);

}



void test_ValidatePassword(){

 char password[4]={1,2,3,4};

 char flag;

 flag=ValidatePassword(password);

 UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((flag)), (

((void *)0)

), (UNITY_UINT)(48), UNITY_DISPLAY_STYLE_INT);

}



void test_TurnOnGpioByPasswordCondition(){

 char password[4]={1,2,3,4};

 char flag;



 flag=acceso(password);

 UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((flag)), (

((void *)0)

), (UNITY_UINT)(56), UNITY_DISPLAY_STYLE_INT);

}
