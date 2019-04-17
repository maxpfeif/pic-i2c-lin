/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.76
        Device            :  PIC16F1718
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.00
        MPLAB 	          :  MPLAB X 5.10	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LED aliases
#define LED_TRIS                 TRISBbits.TRISB0
#define LED_LAT                  LATBbits.LATB0
#define LED_PORT                 PORTBbits.RB0
#define LED_WPU                  WPUBbits.WPUB0
#define LED_OD                   ODCONBbits.ODB0
#define LED_ANS                  ANSELBbits.ANSB0
#define LED_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define LED_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define LED_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define LED_GetValue()           PORTBbits.RB0
#define LED_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define LED_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define LED_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define LED_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define LED_SetPushPull()        do { ODCONBbits.ODB0 = 0; } while(0)
#define LED_SetOpenDrain()       do { ODCONBbits.ODB0 = 1; } while(0)
#define LED_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define LED_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set SCL aliases
#define SCL_TRIS                 TRISCbits.TRISC0
#define SCL_LAT                  LATCbits.LATC0
#define SCL_PORT                 PORTCbits.RC0
#define SCL_WPU                  WPUCbits.WPUC0
#define SCL_OD                   ODCONCbits.ODC0
#define SCL_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define SCL_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define SCL_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define SCL_GetValue()           PORTCbits.RC0
#define SCL_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define SCL_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define SCL_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define SCL_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define SCL_SetPushPull()        do { ODCONCbits.ODC0 = 0; } while(0)
#define SCL_SetOpenDrain()       do { ODCONCbits.ODC0 = 1; } while(0)

// get/set SDA aliases
#define SDA_TRIS                 TRISCbits.TRISC1
#define SDA_LAT                  LATCbits.LATC1
#define SDA_PORT                 PORTCbits.RC1
#define SDA_WPU                  WPUCbits.WPUC1
#define SDA_OD                   ODCONCbits.ODC1
#define SDA_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define SDA_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define SDA_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define SDA_GetValue()           PORTCbits.RC1
#define SDA_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define SDA_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define SDA_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define SDA_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define SDA_SetPushPull()        do { ODCONCbits.ODC1 = 0; } while(0)
#define SDA_SetOpenDrain()       do { ODCONCbits.ODC1 = 1; } while(0)

// get/set TXE aliases
#define TXE_TRIS                 TRISCbits.TRISC3
#define TXE_LAT                  LATCbits.LATC3
#define TXE_PORT                 PORTCbits.RC3
#define TXE_WPU                  WPUCbits.WPUC3
#define TXE_OD                   ODCONCbits.ODC3
#define TXE_ANS                  ANSELCbits.ANSC3
#define TXE_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define TXE_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define TXE_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define TXE_GetValue()           PORTCbits.RC3
#define TXE_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define TXE_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define TXE_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define TXE_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define TXE_SetPushPull()        do { ODCONCbits.ODC3 = 0; } while(0)
#define TXE_SetOpenDrain()       do { ODCONCbits.ODC3 = 1; } while(0)
#define TXE_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define TXE_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set CS aliases
#define CS_TRIS                 TRISCbits.TRISC4
#define CS_LAT                  LATCbits.LATC4
#define CS_PORT                 PORTCbits.RC4
#define CS_WPU                  WPUCbits.WPUC4
#define CS_OD                   ODCONCbits.ODC4
#define CS_ANS                  ANSELCbits.ANSC4
#define CS_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define CS_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define CS_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define CS_GetValue()           PORTCbits.RC4
#define CS_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define CS_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define CS_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define CS_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define CS_SetPushPull()        do { ODCONCbits.ODC4 = 0; } while(0)
#define CS_SetOpenDrain()       do { ODCONCbits.ODC4 = 1; } while(0)
#define CS_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define CS_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetPullup()             do { WPUCbits.WPUC6 = 1; } while(0)
#define RC6_ResetPullup()           do { WPUCbits.WPUC6 = 0; } while(0)
#define RC6_SetAnalogMode()         do { ANSELCbits.ANSC6 = 1; } while(0)
#define RC6_SetDigitalMode()        do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetPullup()             do { WPUCbits.WPUC7 = 1; } while(0)
#define RC7_ResetPullup()           do { WPUCbits.WPUC7 = 0; } while(0)
#define RC7_SetAnalogMode()         do { ANSELCbits.ANSC7 = 1; } while(0)
#define RC7_SetDigitalMode()        do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/