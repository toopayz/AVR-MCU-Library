/*
    GPIO.h
    Macro for GPIO access.
    Can use to Arduino, Atmel studio, or VS-Code.
    http://ww1.microchip.com/downloads/en/Appnotes/doc1497.pdf
*/

#ifndef _pyzGPIO_H
#define _pyzGPIO_H

//  ***********************************************************************************
#pragma region          Common Macro for BIT manipulation

//  --------------------------------------------------- Bit Manipulation
/* default Bit maniputation macro is using _BV
#define _BV(bit)                    (1 &lt;&lt; bit)  */
#define BIT(x)                      (0x01 << (x))
#define LONGBIT(x)                  ((unsigned long)0x00000001 << (x))

//  --------------------------------------------------- Bit Common Macro
#define SETBIT(Addr,x)              (Addr |=  (1<<x))
#define CLEARBIT(Addr,x)            (Addr &= ~(1<<x))
#define FLIPBIT(Addr,x)             (Addr ^=  (1<<x))
#define CHECKBIT(Addr,x)            (Addr &   (1<<x))

//  --------------------------------------------------- Masking Common Macro
#define SETBITMASK(Addr,x)          (Addr |= (x))
#define CLEARBITMASK(Addr,x)        (Addr &= (~x))
#define FLIPBITMASK(Addr,x)         (Addr ^= (x))
#define CHECKBITMASK(Addr,x)        (Addr &  (x))

//  --------------------------------------------------- Combine Common Macro
#define VARFROMCOMB(x, y)           x
#define BITFROMCOMB(x, y)           y

#define COMB_SETBIT(comb)           SETBIT(VARFROMCOMB(comb), BITFROMCOMB(comb))
#define COMB_CLEARBIT(comb)         CLEARBIT(VARFROMCOMB(comb), BITFROMCOMB(comb))
#define COMB_FLIPBIT(comb)          FLIPBIT(VARFROMCOMB(comb), BITFROMCOMB(comb))
#define COMB_CHECKBIT(comb)         CHECKBIT(VARFROMCOMB(comb), BITFROMCOMB(comb))

#pragma endregion       Common Macro for BIT manipulation


//  ***********************************************************************************
#pragma region          Macro Ready to use for GPIO

//  --------------------------------------------------- General: Set as Input or Output
#define SET_AS_OUTPUT(DDR, x)       SETBIT(DDR, x)
#define SET_AS_INPUT(DDR, x)        CLEARBIT(DDR, x)
//#define SET_AS_INP_PULLUP(DDR, x) 
//  --------------------------------------------------- General: Write Output Pin
#define SET_HIGH(PORT, x)           SETBIT(PORT, x)
#define SET_LOW(PORT, x)            CLEARBIT(PORT, x)
#define SET_TOGGLE(PORT, x)         FLIPBIT(PORT, x)
#define SET_ON_OFF_ON(PORT, x)      FLIPBIT(PORT, x)
//  --------------------------------------------------- General: Read Pin
#define IS_HIGH(PIN, x)             CHECKBIT(PIN, x)
#define IS_LOW(PIN, x)              ~CHECKBIT(PIN, x)

//  --------------------------------------------------- Combination: Set as Input or Output
#define SetAsOutput(comb)           SETBIT(VARFROMCOMB(comb), BITFROMCOMB(comb))
#define SetAsInput(comb)            CLEARBIT(VARFROMCOMB(comb), BITFROMCOMB(comb))
//#define SetAsInputPullUp(comb)    
//  --------------------------------------------------- Combination: Write Output Pin
#define SetHigh(comb)               SETBIT(VARFROMCOMB(comb), BITFROMCOMB(comb))
#define SetLow(comb)                CLEARBIT(VARFROMCOMB(comb), BITFROMCOMB(comb))
#define SetToggle(comb)             FLIPBIT(VARFROMCOMB(comb), BITFROMCOMB(comb))
#define SetOnOffOn(comb)            FLIPBIT(VARFROMCOMB(comb), BITFROMCOMB(comb))
//  --------------------------------------------------- Combination: Read Pin
#define IsHigh(comb)                CHECKBIT(VARFROMCOMB(comb), BITFROMCOMB(comb))
#define isLow(comb)                 ~CHECKBIT(VARFROMCOMB(comb), BITFROMCOMB(comb))

//  --------------------------------------------------- Arduino: Set as Input or Output
#define pinMode_Output(comb)        SETBIT(VARFROMCOMB(comb), BITFROMCOMB(comb))
#define pinMode_Input(comb)         CLEARBIT(VARFROMCOMB(comb), BITFROMCOMB(comb))
//#define pinMode_InputPullUp(comb) 
//  --------------------------------------------------- Arduino: Write Output Pin
#define DigitalWrite_High(comb)     SETBIT(VARFROMCOMB(comb), BITFROMCOMB(comb))
#define DigitalWrite_Low(comb)      CLEARBIT(VARFROMCOMB(comb), BITFROMCOMB(comb))
//  --------------------------------------------------- Arduino: Read Pin
#define DigitalRead_isHigh(comb)    CHECKBIT(VARFROMCOMB(comb), BITFROMCOMB(comb))
#define DigitalRead_isLow(comb)     ~CHECKBIT(VARFROMCOMB(comb), BITFROMCOMB(comb))


#pragma endregion       Macro Ready to use for GPIO


//  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#endif      //  _pyzGPIO_H