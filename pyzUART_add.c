

#include <avr/io.h>
#include <stdlib.h>
#include <util/delay.h>
#include "pyzUART.h"
#include "E:\#_MyGithub\AVR-MCU-Library\pyzUART_add.h"

char Recv_String[UART_RX0_BUFFER_SIZE];
uint8_t Recv_Length = 0;

//  ----------------------------------------------------------------------- Reset All Buffer
void uart0_ResetAll(void)
{
    Recv_Length = 0;
    uint8_t x=UART_RX0_BUFFER_SIZE;
    while(x--) Recv_String[x] = 0;
}

//  ----------------------------------------------------------------------- Get and put All Recieve Data to Buffer
int8_t uart0_Recv_byFormat(char chStart, char chEnd, bool echoOn)
{
    int8_t dataCount=0;
    char tmpRecv = uart0_getc();
    if (echoOn && tmpRecv>=' ') uart0_putc(tmpRecv);
    //---------------------------------------------
         if (tmpRecv == chStart)    uart0_ResetAll();
    else if (tmpRecv == chEnd)      dataCount = Recv_Length + 1;
    if (tmpRecv >= ' ' && tmpRecv <= '~')
    {
        Recv_String[Recv_Length] = tmpRecv;
        Recv_Length++;
    }
    //---------------------------------------------
    return dataCount;
}

//  ----------------------------------------------------------------------- Send Back Recieve Data
void uart0_Recv_BuffToWrite(void)
{
    uart0_puts(Recv_String);
}



//  ***********************************************************************************