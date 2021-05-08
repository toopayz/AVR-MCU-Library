
#include  <avr/io.h>
#include  <util/delay.h>
#include  "E:\#_MyGithub\AVR-MCU-Library\pyzGPIO.h"
#include  "E:\#_MyGithub\AVR-MCU-Library\PinMap.h"

void FalconLite_InitGPIO(void)
{
    //--------------------------------  Relay Control for GND
    pinMode_Output(OUT_REL_1);
    pinMode_Output(OUT_REL_2);
    pinMode_Output(OUT_REL_3);
    pinMode_Output(OUT_REL_4);
    //--------------------------------  Additional Relay Control
    pinMode_Output(OUT_REL_A);
    pinMode_Output(OUT_REL_B);
    pinMode_Output(OUT_REL_C);
    pinMode_Output(OUT_REL_D);
    pinMode_Output(OUT_REL_E);
    pinMode_Output(OUT_REL_F);
    pinMode_Output(OUT_REL_G);
    pinMode_Output(OUT_REL_H);
    //--------------------------------  TS, IO, and Wall_N Control
    pinMode_Output(OUT_TS_1);
    pinMode_Output(OUT_TS_2);
    pinMode_Output(OUT_TS_3);
    pinMode_Output(OUT_IO_1);
    pinMode_Output(OUT_IO_2);
    pinMode_Output(OUT_IO_3);
    pinMode_Output(OUT_WALLN);
    //--------------------------------  Digital Input
    pinMode_InputPullUp(INP_GND_1);
    pinMode_InputPullUp(INP_GND_2);
    pinMode_InputPullUp(INP_GND_3);
    pinMode_InputPullUp(INP_GND_4);
}

void FalconLite_DefaultGPIO(void)
{
    //--------------------------------  Relay Control for GND
    DigitalWrite_Low(OUT_REL_1);
    DigitalWrite_Low(OUT_REL_2);
    DigitalWrite_Low(OUT_REL_3);
    DigitalWrite_Low(OUT_REL_4);
    //--------------------------------  Additional Relay Control
    DigitalWrite_Low(OUT_REL_A);
    DigitalWrite_Low(OUT_REL_B);
    DigitalWrite_Low(OUT_REL_C);
    DigitalWrite_Low(OUT_REL_D);
    DigitalWrite_Low(OUT_REL_E);
    DigitalWrite_Low(OUT_REL_F);
    DigitalWrite_Low(OUT_REL_G);
    DigitalWrite_Low(OUT_REL_H);
    //--------------------------------  TS, IO, and Wall_N Control
    DigitalWrite_Low(OUT_TS_1);
    DigitalWrite_Low(OUT_TS_2);
    DigitalWrite_Low(OUT_TS_3);
    DigitalWrite_Low(OUT_IO_1);
    DigitalWrite_Low(OUT_IO_2);
    DigitalWrite_Low(OUT_IO_3);
    DigitalWrite_Low(OUT_WALLN);
}


//  ***********************************************************************************