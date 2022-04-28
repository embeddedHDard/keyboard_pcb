#include "mcc_generated_files/mcc.h"
#include <string.h>
/*
 Main application
 */
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();
    uint8_t column = 0x0;
    uint16_t count = 0;
    //char key[3] = "S0";
    

    
    //**** MODO 1: SIN PD NI PU ****//
    //TRISEbits.TRISE0 = 1;
    //TRISAbits.TRISA7 = 1; // EN PINES SIN PU O PD SE ACOPLA MUCHO RUIDO EN PCB DE PRUEBAS
    
    //**** MODO 2: CON PU ****//
    /*TRISEbits.TRISE0 = 1;
    WPUEbits.WPUE0 = 1;
    TRISCbits.TRISC1 = 0; 
    WPUCbits.WPUC1 = 1;*/
    
    //**** MODO 3: COMPLETO, Configurado en pin_manager.c ****//
        
    //**** MODO 4: Pruebas con la curiosity y dos pulsadores S1 y S2 ****//
    //TRISCbits.TRISC5 = 1;
    //TRISBbits.TRISB4 = 1;

    while (1)
    {         
    
    
    //**** MODO 1: SIN PD NI PU ****//
    /*LATCbits.LATC1 = 0x01;
    if ((PORTAbits.RA7)&&(PORTCbits.RC1)) {                                     
        __delay_ms(100);
         if ((PORTAbits.RA7)&&(PORTCbits.RC1)) {    
                LATAbits.LATA4 = 1;
                __delay_ms(1000);
                LATAbits.LATA4 = 0;                   
            }
    }*/
    //**** MODO 2: CON PU ****//    
    //LATCbits.LATC1 = 0x00;  
    
    /*if ((!(PORTEbits.RE0))&&(!(PORTCbits.RC1))) {                                     
        __delay_ms(100);
        if ((!(PORTEbits.RE0))&&(!(PORTCbits.RC1))) {    
            LATAbits.LATA4 = 1;
            __delay_ms(1000);
            LATAbits.LATA4 = 0;                   
        }
    }*/
        
    //**** MODO 3: CON PU en todos los pines implicados ****//       
        
    // Comprobar las posibles combinaciones
    // Como ejemplo, si ponemos la fila 3 HIGH y se lee que la columna 1 está también HIGH, eso implica que S9 se ha pulsado.
    // Se pone a 1 la fila X y se escanea si algún botón de la columna se ha puesto a 1 para identificar el botón pulsado.
    // Pin 1 Columna 1, Pin 2 Columna 2, Pin 3 Columna 3 y Pin 4 Columna 4
    // Pin 5 Fila 4, Pin 6 Fila 3, Pin 7 Fila 2 y Pin 8 Fila 1
          
        PORTCbits.RC7 = 0;  // PORTCbits -> 01111111, C7 FILA 1
        if ((!(PORTDbits.RD4))&&(!(PORTCbits.RC7)))
            {                               
            __delay_ms(200);                            // 100ms de retraso para pulsos espureos
            if (!((PORTDbits.RD4))&&(!(PORTCbits.RC7)))       // VUelve a comprobar si se ha pulsado ese botón
                {
                    //strcpy(key, "S1"); // 1                 // En caso de ser así, confirmamos que es la tecla correspondiente
                    LATAbits.LATA3 = 1; //RA3 A 1
                    __delay_ms(500);
                    LATAbits.LATA3 = 0; //RA3 A 0
                }
            }
        else if ((!(PORTDbits.RD5))&&(!(PORTCbits.RC7)))  
            {                               
            __delay_ms(200);                        
            if ((!(PORTDbits.RD5))&&(!(PORTCbits.RC7)))     
                {
                    //strcpy(key, "S2");  // 2    
                    LATEbits.LATE1 = 1; //RE1 A 1
                    __delay_ms(500);
                    LATEbits.LATE1 = 0; //RE1 A 0
                }
            }
        else if ((!(PORTDbits.RD6))&&(!(PORTCbits.RC7)))  
            {                               
            __delay_ms(200);                        
            if ((!(PORTDbits.RD6))&&(!(PORTCbits.RC7)))   
                {
                    //strcpy(key, "S3");      // 3                       
                    LATCbits.LATC3 = 1; //RC3 A 1
                    __delay_ms(500);
                    LATCbits.LATC3 = 0; //RC3 A 0
            }                            
            }
        else if ((!(PORTDbits.RD7))&&(!(PORTCbits.RC7))) 
            {                                       
            __delay_ms(200);                        
            if ((!(PORTDbits.RD7))&&(!(PORTCbits.RC7)))   
                {
                    //strcpy(key, "S4");         // A   
                    LATDbits.LATD1 = 1;
                    __delay_ms(500);
                    LATDbits.LATD1 = 0; 
                }
            }            
        PORTCbits.RC7 = 1;
        PORTCbits.RC6 = 0;  // PORCbits -> 10111111, C6 FILA 2
        if ((!(PORTDbits.RD4))&&(!(PORTCbits.RC6)))           // columna 1 (RD4) 1 a 1?
            {                                       
            __delay_ms(200);                        
            if ((!(PORTDbits.RD4))&&(!(PORTCbits.RC6)))   
                {
                    //strcpy(key, "S5");   // 4 
                    LATAbits.LATA2 = 1;
                    __delay_ms(500);
                    LATAbits.LATA2 = 0;
                }
            }
        else if ((!(PORTDbits.RD5))&&(!(PORTCbits.RC6)))      // columna 2 (RD5) 1 a 1?
            {                               
            __delay_ms(200);                        
            if ((!(PORTDbits.RD5))&&(!(PORTCbits.RC6)))   
                {
                    //strcpy(key, "S6");       // 5 
                    LATEbits.LATE0 = 1;
                    __delay_ms(500);
                    LATEbits.LATE0 = 0;
                }
            }
        else if ((!(PORTDbits.RD6))&&(!(PORTCbits.RC6)))      // columna 3 (RD6) 1 a 1?
            {                               
            __delay_ms(200);                        
            if ((!(PORTDbits.RD6))&&(!(PORTCbits.RC6)))   
                {
                    //strcpy(key, "S7");       // 6     
                    LATCbits.LATC0 = 1;
                    __delay_ms(500);
                    LATCbits.LATC0 = 0;
                }
            }
        else if ((!(PORTDbits.RD7))&&(!(PORTCbits.RC6)))      // columna 4 (RD7) 1 a 1?
            {                                       
            __delay_ms(200);                        
            if ((!(PORTDbits.RD7))&&(!(PORTCbits.RC6)))   
                {
                    //strcpy(key, "S8");      // B    
                    LATDbits.LATD0 = 1;
                    __delay_ms(500);
                    LATDbits.LATD0 = 0;                   
                }
            }
        PORTCbits.RC6 = 1;
        PORTDbits.RD2 = 0;                                // PORDbits -> 11111011, D2 FILA 3
        if ((!(PORTDbits.RD4))&&(!(PORTDbits.RD2)))
            {                                       
            __delay_ms(200);                        
            if ((!(PORTDbits.RD4))&&(!(PORTDbits.RD2)))  
                {
                    //strcpy(key, "S9");      // 7 
                    LATAbits.LATA1 = 1;
                    __delay_ms(500);
                    LATAbits.LATA1 = 0;
                }
            }
        else if ((!(PORTDbits.RD5))&&(!(PORTDbits.RD2)))
            {                                       
            __delay_ms(200);                        
            if ((!(PORTDbits.RD5))&&(!(PORTDbits.RD2)))   
                {
                    //strcpy(key, "S10");       // 8   
                    LATAbits.LATA5 = 1;
                    __delay_ms(500);
                    LATAbits.LATA5 = 0;
                }
            }
        else if ((!(PORTDbits.RD6))&&(!(PORTDbits.RD2)))
            {                                       
            __delay_ms(200);                        
            if ((!(PORTDbits.RD6))&&(!(PORTDbits.RD2)))  
                {
                    //strcpy(key, "S11");         // 9  
                    LATAbits.LATA6 = 1;
                    __delay_ms(500);
                    LATAbits.LATA6 = 0;
                }
            }
         else if ((!(PORTDbits.RD7))&&(!(PORTDbits.RD2)))
            {                                      
            __delay_ms(200);                       
            if ((!(PORTDbits.RD7))&&(!(PORTDbits.RD2)))
                {
                    //strcpy(key, "S12");       // C  
                    LATCbits.LATC3 = 1;
                    __delay_ms(500);
                    LATCbits.LATC3 = 0;                    
                }
            }
        PORTDbits.RD2 = 1;
        PORTDbits.RD3 = 0;                                  // PORDbits -> 00001000, D3 FILA 4
        if ((!(PORTDbits.RD4))&&(!(PORTDbits.RD3)))
            {                                       
            __delay_ms(200);                        
            if ((!(PORTDbits.RD4))&&(!(PORTDbits.RD3)))   
                {
                    //strcpy(key, "S13");        // *   
                    LATAbits.LATA0 = 1;
                    __delay_ms(500);
                    LATAbits.LATA0 = 0;
                }
            }
        else if ((!(PORTDbits.RD5))&&(!(PORTDbits.RD3)))
            {                                       
            __delay_ms(200);                        
            if ((!(PORTDbits.RD5))&&(!(PORTDbits.RD3)))   
                {
                    //strcpy(key, "S14");         // 0  
                    LATAbits.LATA4 = 1;
                    __delay_ms(500);
                    LATAbits.LATA4 = 0;
                }
            }
        else if ((!(PORTDbits.RD6))&&(!(PORTDbits.RD3)))
            {                               
            __delay_ms(200);                        
            if ((!(PORTDbits.RD6))&&(!(PORTDbits.RD3))) 
                {
                    //strcpy(key, "S15");         // #    
                    LATAbits.LATA7 = 1;
                    __delay_ms(500);
                    LATAbits.LATA7 = 0;  
                }
            }
         else if ((!(PORTDbits.RD7))&&(!(PORTDbits.RD3)))
            {                               
            __delay_ms(200);                        
            if ((!(PORTDbits.RD7))&&(!(PORTDbits.RD3)))   
                {
                    //strcpy(key, "S16");         // D  
                    LATCbits.LATC2 = 1;
                    __delay_ms(500);
                    LATCbits.LATC2 = 0;                      
                }
            }
        PORTDbits.RD3 = 1;
//**** MODO 4: Pruebas con la curiosity y dos pulsadores S1 y S2 ****//
        /*if ((!(PORTCbits.RC5))&&(!(PORTBbits.RB4))) {                                       
            __delay_ms(200);                        
            if ((!(PORTCbits.RC5))&&(!(PORTBbits.RB4)))   
                {
                    strcpy(key, "S14");         // 0  
                    LATAbits.LATA4 = 1;
                    __delay_ms(500);
                    LATAbits.LATA4 = 0;
                    __delay_ms(500);
                }
            }*/   
    }
}
/**
 End of File
*/