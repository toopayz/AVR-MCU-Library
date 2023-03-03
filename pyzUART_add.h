/*
    Porting.h
    is file to define all port and other macro define of Board.
*/

#ifndef _pyzUART_ADD_H
#define _pyzUART_ADD_H

#ifndef pyzUART_STRING_BUFFER
    #define pyzUART_STRING_BUFFER   128
#endif

/**
 * @brief    Check Data Recieve with uart0_available() and 
 * @param    s program memory string to be transmitted
 * @return   none
 * @see      uart0_puts_P
 */

extern void     uart0_ResetAll(void);
extern int8_t   uart0_Recv_byFormat(char chStart, char chEnd, bool echoOn);
extern void     uart0_Recv_BuffToWrite(void);


#endif      //      _pyzUART_ADD_H