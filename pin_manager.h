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
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F18875
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
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

// get/set IO_RA0 aliases
#define IO_RA0_TRIS                 TRISAbits.TRISA0
#define IO_RA0_LAT                  LATAbits.LATA0
#define IO_RA0_PORT                 PORTAbits.RA0
#define IO_RA0_WPU                  WPUAbits.WPUA0
#define IO_RA0_OD                   ODCONAbits.ODCA0
#define IO_RA0_ANS                  ANSELAbits.ANSA0
#define IO_RA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define IO_RA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define IO_RA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define IO_RA0_GetValue()           PORTAbits.RA0
#define IO_RA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define IO_RA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define IO_RA0_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define IO_RA0_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define IO_RA0_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define IO_RA0_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define IO_RA0_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define IO_RA0_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set IO_RA1 aliases
#define IO_RA1_TRIS                 TRISAbits.TRISA1
#define IO_RA1_LAT                  LATAbits.LATA1
#define IO_RA1_PORT                 PORTAbits.RA1
#define IO_RA1_WPU                  WPUAbits.WPUA1
#define IO_RA1_OD                   ODCONAbits.ODCA1
#define IO_RA1_ANS                  ANSELAbits.ANSA1
#define IO_RA1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define IO_RA1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define IO_RA1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define IO_RA1_GetValue()           PORTAbits.RA1
#define IO_RA1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define IO_RA1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define IO_RA1_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define IO_RA1_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define IO_RA1_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define IO_RA1_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define IO_RA1_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define IO_RA1_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set IO_RA2 aliases
#define IO_RA2_TRIS                 TRISAbits.TRISA2
#define IO_RA2_LAT                  LATAbits.LATA2
#define IO_RA2_PORT                 PORTAbits.RA2
#define IO_RA2_WPU                  WPUAbits.WPUA2
#define IO_RA2_OD                   ODCONAbits.ODCA2
#define IO_RA2_ANS                  ANSELAbits.ANSA2
#define IO_RA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define IO_RA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define IO_RA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define IO_RA2_GetValue()           PORTAbits.RA2
#define IO_RA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define IO_RA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define IO_RA2_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define IO_RA2_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define IO_RA2_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define IO_RA2_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define IO_RA2_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define IO_RA2_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set IO_RA3 aliases
#define IO_RA3_TRIS                 TRISAbits.TRISA3
#define IO_RA3_LAT                  LATAbits.LATA3
#define IO_RA3_PORT                 PORTAbits.RA3
#define IO_RA3_WPU                  WPUAbits.WPUA3
#define IO_RA3_OD                   ODCONAbits.ODCA3
#define IO_RA3_ANS                  ANSELAbits.ANSA3
#define IO_RA3_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define IO_RA3_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define IO_RA3_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define IO_RA3_GetValue()           PORTAbits.RA3
#define IO_RA3_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define IO_RA3_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define IO_RA3_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define IO_RA3_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define IO_RA3_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define IO_RA3_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define IO_RA3_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define IO_RA3_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set IO_RA4 aliases
#define IO_RA4_TRIS                 TRISAbits.TRISA4
#define IO_RA4_LAT                  LATAbits.LATA4
#define IO_RA4_PORT                 PORTAbits.RA4
#define IO_RA4_WPU                  WPUAbits.WPUA4
#define IO_RA4_OD                   ODCONAbits.ODCA4
#define IO_RA4_ANS                  ANSELAbits.ANSA4
#define IO_RA4_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define IO_RA4_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define IO_RA4_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define IO_RA4_GetValue()           PORTAbits.RA4
#define IO_RA4_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define IO_RA4_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define IO_RA4_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define IO_RA4_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define IO_RA4_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define IO_RA4_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define IO_RA4_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define IO_RA4_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set IO_RA5 aliases
#define IO_RA5_TRIS                 TRISAbits.TRISA5
#define IO_RA5_LAT                  LATAbits.LATA5
#define IO_RA5_PORT                 PORTAbits.RA5
#define IO_RA5_WPU                  WPUAbits.WPUA5
#define IO_RA5_OD                   ODCONAbits.ODCA5
#define IO_RA5_ANS                  ANSELAbits.ANSA5
#define IO_RA5_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define IO_RA5_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define IO_RA5_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define IO_RA5_GetValue()           PORTAbits.RA5
#define IO_RA5_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define IO_RA5_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define IO_RA5_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define IO_RA5_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define IO_RA5_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define IO_RA5_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define IO_RA5_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define IO_RA5_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set IO_RA6 aliases
#define IO_RA6_TRIS                 TRISAbits.TRISA6
#define IO_RA6_LAT                  LATAbits.LATA6
#define IO_RA6_PORT                 PORTAbits.RA6
#define IO_RA6_WPU                  WPUAbits.WPUA6
#define IO_RA6_OD                   ODCONAbits.ODCA6
#define IO_RA6_ANS                  ANSELAbits.ANSA6
#define IO_RA6_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define IO_RA6_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define IO_RA6_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define IO_RA6_GetValue()           PORTAbits.RA6
#define IO_RA6_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define IO_RA6_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define IO_RA6_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define IO_RA6_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define IO_RA6_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define IO_RA6_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define IO_RA6_SetAnalogMode()      do { ANSELAbits.ANSA6 = 1; } while(0)
#define IO_RA6_SetDigitalMode()     do { ANSELAbits.ANSA6 = 0; } while(0)

// get/set IO_RA7 aliases
#define IO_RA7_TRIS                 TRISAbits.TRISA7
#define IO_RA7_LAT                  LATAbits.LATA7
#define IO_RA7_PORT                 PORTAbits.RA7
#define IO_RA7_WPU                  WPUAbits.WPUA7
#define IO_RA7_OD                   ODCONAbits.ODCA7
#define IO_RA7_ANS                  ANSELAbits.ANSA7
#define IO_RA7_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define IO_RA7_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define IO_RA7_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define IO_RA7_GetValue()           PORTAbits.RA7
#define IO_RA7_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define IO_RA7_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define IO_RA7_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define IO_RA7_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define IO_RA7_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define IO_RA7_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define IO_RA7_SetAnalogMode()      do { ANSELAbits.ANSA7 = 1; } while(0)
#define IO_RA7_SetDigitalMode()     do { ANSELAbits.ANSA7 = 0; } while(0)

// get/set IO_RB0 aliases
#define IO_RB0_TRIS                 TRISBbits.TRISB0
#define IO_RB0_LAT                  LATBbits.LATB0
#define IO_RB0_PORT                 PORTBbits.RB0
#define IO_RB0_WPU                  WPUBbits.WPUB0
#define IO_RB0_OD                   ODCONBbits.ODCB0
#define IO_RB0_ANS                  ANSELBbits.ANSB0
#define IO_RB0_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define IO_RB0_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define IO_RB0_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define IO_RB0_GetValue()           PORTBbits.RB0
#define IO_RB0_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define IO_RB0_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define IO_RB0_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define IO_RB0_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define IO_RB0_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define IO_RB0_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define IO_RB0_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define IO_RB0_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set IO_RB1 aliases
#define IO_RB1_TRIS                 TRISBbits.TRISB1
#define IO_RB1_LAT                  LATBbits.LATB1
#define IO_RB1_PORT                 PORTBbits.RB1
#define IO_RB1_WPU                  WPUBbits.WPUB1
#define IO_RB1_OD                   ODCONBbits.ODCB1
#define IO_RB1_ANS                  ANSELBbits.ANSB1
#define IO_RB1_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define IO_RB1_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define IO_RB1_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define IO_RB1_GetValue()           PORTBbits.RB1
#define IO_RB1_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define IO_RB1_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define IO_RB1_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define IO_RB1_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define IO_RB1_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define IO_RB1_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define IO_RB1_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define IO_RB1_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set IO_RB2 aliases
#define IO_RB2_TRIS                 TRISBbits.TRISB2
#define IO_RB2_LAT                  LATBbits.LATB2
#define IO_RB2_PORT                 PORTBbits.RB2
#define IO_RB2_WPU                  WPUBbits.WPUB2
#define IO_RB2_OD                   ODCONBbits.ODCB2
#define IO_RB2_ANS                  ANSELBbits.ANSB2
#define IO_RB2_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define IO_RB2_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define IO_RB2_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define IO_RB2_GetValue()           PORTBbits.RB2
#define IO_RB2_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define IO_RB2_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define IO_RB2_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define IO_RB2_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define IO_RB2_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define IO_RB2_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define IO_RB2_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define IO_RB2_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set IO_RB3 aliases
#define IO_RB3_TRIS                 TRISBbits.TRISB3
#define IO_RB3_LAT                  LATBbits.LATB3
#define IO_RB3_PORT                 PORTBbits.RB3
#define IO_RB3_WPU                  WPUBbits.WPUB3
#define IO_RB3_OD                   ODCONBbits.ODCB3
#define IO_RB3_ANS                  ANSELBbits.ANSB3
#define IO_RB3_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define IO_RB3_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define IO_RB3_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define IO_RB3_GetValue()           PORTBbits.RB3
#define IO_RB3_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define IO_RB3_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define IO_RB3_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define IO_RB3_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define IO_RB3_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define IO_RB3_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define IO_RB3_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define IO_RB3_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set IO_RB4 aliases
#define IO_RB4_TRIS                 TRISBbits.TRISB4
#define IO_RB4_LAT                  LATBbits.LATB4
#define IO_RB4_PORT                 PORTBbits.RB4
#define IO_RB4_WPU                  WPUBbits.WPUB4
#define IO_RB4_OD                   ODCONBbits.ODCB4
#define IO_RB4_ANS                  ANSELBbits.ANSB4
#define IO_RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define IO_RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define IO_RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define IO_RB4_GetValue()           PORTBbits.RB4
#define IO_RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define IO_RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define IO_RB4_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define IO_RB4_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define IO_RB4_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define IO_RB4_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define IO_RB4_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define IO_RB4_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set IO_RB5 aliases
#define IO_RB5_TRIS                 TRISBbits.TRISB5
#define IO_RB5_LAT                  LATBbits.LATB5
#define IO_RB5_PORT                 PORTBbits.RB5
#define IO_RB5_WPU                  WPUBbits.WPUB5
#define IO_RB5_OD                   ODCONBbits.ODCB5
#define IO_RB5_ANS                  ANSELBbits.ANSB5
#define IO_RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define IO_RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define IO_RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define IO_RB5_GetValue()           PORTBbits.RB5
#define IO_RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define IO_RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define IO_RB5_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define IO_RB5_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define IO_RB5_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define IO_RB5_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define IO_RB5_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define IO_RB5_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set IO_RB6 aliases
#define IO_RB6_TRIS                 TRISBbits.TRISB6
#define IO_RB6_LAT                  LATBbits.LATB6
#define IO_RB6_PORT                 PORTBbits.RB6
#define IO_RB6_WPU                  WPUBbits.WPUB6
#define IO_RB6_OD                   ODCONBbits.ODCB6
#define IO_RB6_ANS                  ANSELBbits.ANSB6
#define IO_RB6_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define IO_RB6_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define IO_RB6_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define IO_RB6_GetValue()           PORTBbits.RB6
#define IO_RB6_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define IO_RB6_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define IO_RB6_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define IO_RB6_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define IO_RB6_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define IO_RB6_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define IO_RB6_SetAnalogMode()      do { ANSELBbits.ANSB6 = 1; } while(0)
#define IO_RB6_SetDigitalMode()     do { ANSELBbits.ANSB6 = 0; } while(0)

// get/set IO_RB7 aliases
#define IO_RB7_TRIS                 TRISBbits.TRISB7
#define IO_RB7_LAT                  LATBbits.LATB7
#define IO_RB7_PORT                 PORTBbits.RB7
#define IO_RB7_WPU                  WPUBbits.WPUB7
#define IO_RB7_OD                   ODCONBbits.ODCB7
#define IO_RB7_ANS                  ANSELBbits.ANSB7
#define IO_RB7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define IO_RB7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define IO_RB7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define IO_RB7_GetValue()           PORTBbits.RB7
#define IO_RB7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define IO_RB7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define IO_RB7_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define IO_RB7_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define IO_RB7_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define IO_RB7_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define IO_RB7_SetAnalogMode()      do { ANSELBbits.ANSB7 = 1; } while(0)
#define IO_RB7_SetDigitalMode()     do { ANSELBbits.ANSB7 = 0; } while(0)

// get/set out_row1 aliases
#define out_row1_TRIS                 TRISDbits.TRISD0
#define out_row1_LAT                  LATDbits.LATD0
#define out_row1_PORT                 PORTDbits.RD0
#define out_row1_WPU                  WPUDbits.WPUD0
#define out_row1_OD                   ODCONDbits.ODCD0
#define out_row1_ANS                  ANSELDbits.ANSD0
#define out_row1_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define out_row1_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define out_row1_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define out_row1_GetValue()           PORTDbits.RD0
#define out_row1_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define out_row1_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define out_row1_SetPullup()          do { WPUDbits.WPUD0 = 1; } while(0)
#define out_row1_ResetPullup()        do { WPUDbits.WPUD0 = 0; } while(0)
#define out_row1_SetPushPull()        do { ODCONDbits.ODCD0 = 0; } while(0)
#define out_row1_SetOpenDrain()       do { ODCONDbits.ODCD0 = 1; } while(0)
#define out_row1_SetAnalogMode()      do { ANSELDbits.ANSD0 = 1; } while(0)
#define out_row1_SetDigitalMode()     do { ANSELDbits.ANSD0 = 0; } while(0)

// get/set out_row2 aliases
#define out_row2_TRIS                 TRISDbits.TRISD1
#define out_row2_LAT                  LATDbits.LATD1
#define out_row2_PORT                 PORTDbits.RD1
#define out_row2_WPU                  WPUDbits.WPUD1
#define out_row2_OD                   ODCONDbits.ODCD1
#define out_row2_ANS                  ANSELDbits.ANSD1
#define out_row2_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define out_row2_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define out_row2_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define out_row2_GetValue()           PORTDbits.RD1
#define out_row2_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define out_row2_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define out_row2_SetPullup()          do { WPUDbits.WPUD1 = 1; } while(0)
#define out_row2_ResetPullup()        do { WPUDbits.WPUD1 = 0; } while(0)
#define out_row2_SetPushPull()        do { ODCONDbits.ODCD1 = 0; } while(0)
#define out_row2_SetOpenDrain()       do { ODCONDbits.ODCD1 = 1; } while(0)
#define out_row2_SetAnalogMode()      do { ANSELDbits.ANSD1 = 1; } while(0)
#define out_row2_SetDigitalMode()     do { ANSELDbits.ANSD1 = 0; } while(0)

// get/set out_row3 aliases
#define out_row3_TRIS                 TRISDbits.TRISD2
#define out_row3_LAT                  LATDbits.LATD2
#define out_row3_PORT                 PORTDbits.RD2
#define out_row3_WPU                  WPUDbits.WPUD2
#define out_row3_OD                   ODCONDbits.ODCD2
#define out_row3_ANS                  ANSELDbits.ANSD2
#define out_row3_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define out_row3_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define out_row3_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define out_row3_GetValue()           PORTDbits.RD2
#define out_row3_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define out_row3_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define out_row3_SetPullup()          do { WPUDbits.WPUD2 = 1; } while(0)
#define out_row3_ResetPullup()        do { WPUDbits.WPUD2 = 0; } while(0)
#define out_row3_SetPushPull()        do { ODCONDbits.ODCD2 = 0; } while(0)
#define out_row3_SetOpenDrain()       do { ODCONDbits.ODCD2 = 1; } while(0)
#define out_row3_SetAnalogMode()      do { ANSELDbits.ANSD2 = 1; } while(0)
#define out_row3_SetDigitalMode()     do { ANSELDbits.ANSD2 = 0; } while(0)

// get/set out_row4 aliases
#define out_row4_TRIS                 TRISDbits.TRISD3
#define out_row4_LAT                  LATDbits.LATD3
#define out_row4_PORT                 PORTDbits.RD3
#define out_row4_WPU                  WPUDbits.WPUD3
#define out_row4_OD                   ODCONDbits.ODCD3
#define out_row4_ANS                  ANSELDbits.ANSD3
#define out_row4_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define out_row4_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define out_row4_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define out_row4_GetValue()           PORTDbits.RD3
#define out_row4_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define out_row4_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define out_row4_SetPullup()          do { WPUDbits.WPUD3 = 1; } while(0)
#define out_row4_ResetPullup()        do { WPUDbits.WPUD3 = 0; } while(0)
#define out_row4_SetPushPull()        do { ODCONDbits.ODCD3 = 0; } while(0)
#define out_row4_SetOpenDrain()       do { ODCONDbits.ODCD3 = 1; } while(0)
#define out_row4_SetAnalogMode()      do { ANSELDbits.ANSD3 = 1; } while(0)
#define out_row4_SetDigitalMode()     do { ANSELDbits.ANSD3 = 0; } while(0)

// get/set in_column_1 aliases
#define in_column_1_TRIS                 TRISDbits.TRISD4
#define in_column_1_LAT                  LATDbits.LATD4
#define in_column_1_PORT                 PORTDbits.RD4
#define in_column_1_WPU                  WPUDbits.WPUD4
#define in_column_1_OD                   ODCONDbits.ODCD4
#define in_column_1_ANS                  ANSELDbits.ANSD4
#define in_column_1_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define in_column_1_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define in_column_1_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define in_column_1_GetValue()           PORTDbits.RD4
#define in_column_1_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define in_column_1_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define in_column_1_SetPullup()          do { WPUDbits.WPUD4 = 1; } while(0)
#define in_column_1_ResetPullup()        do { WPUDbits.WPUD4 = 0; } while(0)
#define in_column_1_SetPushPull()        do { ODCONDbits.ODCD4 = 0; } while(0)
#define in_column_1_SetOpenDrain()       do { ODCONDbits.ODCD4 = 1; } while(0)
#define in_column_1_SetAnalogMode()      do { ANSELDbits.ANSD4 = 1; } while(0)
#define in_column_1_SetDigitalMode()     do { ANSELDbits.ANSD4 = 0; } while(0)

// get/set in_column_2 aliases
#define in_column_2_TRIS                 TRISDbits.TRISD5
#define in_column_2_LAT                  LATDbits.LATD5
#define in_column_2_PORT                 PORTDbits.RD5
#define in_column_2_WPU                  WPUDbits.WPUD5
#define in_column_2_OD                   ODCONDbits.ODCD5
#define in_column_2_ANS                  ANSELDbits.ANSD5
#define in_column_2_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define in_column_2_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define in_column_2_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define in_column_2_GetValue()           PORTDbits.RD5
#define in_column_2_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define in_column_2_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define in_column_2_SetPullup()          do { WPUDbits.WPUD5 = 1; } while(0)
#define in_column_2_ResetPullup()        do { WPUDbits.WPUD5 = 0; } while(0)
#define in_column_2_SetPushPull()        do { ODCONDbits.ODCD5 = 0; } while(0)
#define in_column_2_SetOpenDrain()       do { ODCONDbits.ODCD5 = 1; } while(0)
#define in_column_2_SetAnalogMode()      do { ANSELDbits.ANSD5 = 1; } while(0)
#define in_column_2_SetDigitalMode()     do { ANSELDbits.ANSD5 = 0; } while(0)

// get/set in_column_3 aliases
#define in_column_3_TRIS                 TRISDbits.TRISD6
#define in_column_3_LAT                  LATDbits.LATD6
#define in_column_3_PORT                 PORTDbits.RD6
#define in_column_3_WPU                  WPUDbits.WPUD6
#define in_column_3_OD                   ODCONDbits.ODCD6
#define in_column_3_ANS                  ANSELDbits.ANSD6
#define in_column_3_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define in_column_3_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define in_column_3_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define in_column_3_GetValue()           PORTDbits.RD6
#define in_column_3_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define in_column_3_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define in_column_3_SetPullup()          do { WPUDbits.WPUD6 = 1; } while(0)
#define in_column_3_ResetPullup()        do { WPUDbits.WPUD6 = 0; } while(0)
#define in_column_3_SetPushPull()        do { ODCONDbits.ODCD6 = 0; } while(0)
#define in_column_3_SetOpenDrain()       do { ODCONDbits.ODCD6 = 1; } while(0)
#define in_column_3_SetAnalogMode()      do { ANSELDbits.ANSD6 = 1; } while(0)
#define in_column_3_SetDigitalMode()     do { ANSELDbits.ANSD6 = 0; } while(0)

// get/set in_column_4 aliases
#define in_column_4_TRIS                 TRISDbits.TRISD7
#define in_column_4_LAT                  LATDbits.LATD7
#define in_column_4_PORT                 PORTDbits.RD7
#define in_column_4_WPU                  WPUDbits.WPUD7
#define in_column_4_OD                   ODCONDbits.ODCD7
#define in_column_4_ANS                  ANSELDbits.ANSD7
#define in_column_4_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define in_column_4_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define in_column_4_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define in_column_4_GetValue()           PORTDbits.RD7
#define in_column_4_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define in_column_4_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define in_column_4_SetPullup()          do { WPUDbits.WPUD7 = 1; } while(0)
#define in_column_4_ResetPullup()        do { WPUDbits.WPUD7 = 0; } while(0)
#define in_column_4_SetPushPull()        do { ODCONDbits.ODCD7 = 0; } while(0)
#define in_column_4_SetOpenDrain()       do { ODCONDbits.ODCD7 = 1; } while(0)
#define in_column_4_SetAnalogMode()      do { ANSELDbits.ANSD7 = 1; } while(0)
#define in_column_4_SetDigitalMode()     do { ANSELDbits.ANSD7 = 0; } while(0)

// get/set IO_RE0 aliases
#define IO_RE0_TRIS                 TRISEbits.TRISE0
#define IO_RE0_LAT                  LATEbits.LATE0
#define IO_RE0_PORT                 PORTEbits.RE0
#define IO_RE0_WPU                  WPUEbits.WPUE0
#define IO_RE0_OD                   ODCONEbits.ODCE0
#define IO_RE0_ANS                  ANSELEbits.ANSE0
#define IO_RE0_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define IO_RE0_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define IO_RE0_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define IO_RE0_GetValue()           PORTEbits.RE0
#define IO_RE0_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define IO_RE0_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define IO_RE0_SetPullup()          do { WPUEbits.WPUE0 = 1; } while(0)
#define IO_RE0_ResetPullup()        do { WPUEbits.WPUE0 = 0; } while(0)
#define IO_RE0_SetPushPull()        do { ODCONEbits.ODCE0 = 0; } while(0)
#define IO_RE0_SetOpenDrain()       do { ODCONEbits.ODCE0 = 1; } while(0)
#define IO_RE0_SetAnalogMode()      do { ANSELEbits.ANSE0 = 1; } while(0)
#define IO_RE0_SetDigitalMode()     do { ANSELEbits.ANSE0 = 0; } while(0)

// get/set IO_RE1 aliases
#define IO_RE1_TRIS                 TRISEbits.TRISE1
#define IO_RE1_LAT                  LATEbits.LATE1
#define IO_RE1_PORT                 PORTEbits.RE1
#define IO_RE1_WPU                  WPUEbits.WPUE1
#define IO_RE1_OD                   ODCONEbits.ODCE1
#define IO_RE1_ANS                  ANSELEbits.ANSE1
#define IO_RE1_SetHigh()            do { LATEbits.LATE1 = 1; } while(0)
#define IO_RE1_SetLow()             do { LATEbits.LATE1 = 0; } while(0)
#define IO_RE1_Toggle()             do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define IO_RE1_GetValue()           PORTEbits.RE1
#define IO_RE1_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define IO_RE1_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
#define IO_RE1_SetPullup()          do { WPUEbits.WPUE1 = 1; } while(0)
#define IO_RE1_ResetPullup()        do { WPUEbits.WPUE1 = 0; } while(0)
#define IO_RE1_SetPushPull()        do { ODCONEbits.ODCE1 = 0; } while(0)
#define IO_RE1_SetOpenDrain()       do { ODCONEbits.ODCE1 = 1; } while(0)
#define IO_RE1_SetAnalogMode()      do { ANSELEbits.ANSE1 = 1; } while(0)
#define IO_RE1_SetDigitalMode()     do { ANSELEbits.ANSE1 = 0; } while(0)

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