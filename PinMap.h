/*
    Porting.h
    is file to define all port and other macro define of Board.
*/

#ifndef _FalconLite_PinMap_H
#define _FalconLite_PinMap_H

#define BUILT_IN_LED    DDRB,PORTB,PINB,7

//  ----------------------------------- Relay 1 ~ 4 OnBoard Relay
#define OUT_REL_1       DDRC,PORTC,PINC,5       //  D32
#define OUT_REL_2       DDRC,PORTC,PINC,4       //  D33
#define OUT_REL_3       DDRC,PORTC,PINC,3       //  D34
#define OUT_REL_4       DDRC,PORTC,PINC,2       //  D35

//  ----------------------------------- Detect Input GND
#define INP_GND_1       DDRC,PORTC,PINC,1       //  D36
#define INP_GND_2       DDRC,PORTC,PINC,0       //  D37
#define INP_GND_3       DDRD,PORTD,PIND,7       //  D38
#define INP_GND_4       DDRG,PORTG,PING,2       //  D39

//  ----------------------------------- Control Output TS and FSIO
#define OUT_TS_1        DDRG,PORTG,PING,1       //  D40
#define OUT_TS_2        DDRG,PORTG,PING,0       //  D41
#define OUT_TS_3        DDRL,PORTL,PINL,7       //  D42
#define OUT_IO_1        DDRL,PORTL,PINL,6       //  D43
#define OUT_IO_2        DDRL,PORTL,PINL,5       //  D44
#define OUT_IO_3        DDRL,PORTL,PINL,4       //  D45
#define OUT_WALLN       DDRL,PORTL,PINL,3       //  D46

//  ----------------------------------- Relay A ~ H Control Additional Relay Board
#define OUT_REL_A       DDRK,PORTK,PINK,0       //  A8
#define OUT_REL_B       DDRK,PORTK,PINK,1       //  A9
#define OUT_REL_C       DDRK,PORTK,PINK,2       //  A10
#define OUT_REL_D       DDRK,PORTK,PINK,3       //  A11
#define OUT_REL_E       DDRK,PORTK,PINK,4       //  A12
#define OUT_REL_F       DDRK,PORTK,PINK,5       //  A13
#define OUT_REL_G       DDRK,PORTK,PINK,6       //  A14
#define OUT_REL_H       DDRK,PORTK,PINK,7       //  A15


//  ----------------------------------- function header List
extern void FalconLite_InitGPIO(void);
extern void FalconLite_DefaultGPIO(void);


#endif      //      _FalconLite_PinMap_H