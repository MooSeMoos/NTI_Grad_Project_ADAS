/**********************************************************************************/
/***						Date: 20/9/2023	Day: Wednesday						***/
/***    NVIC driver for STM32F401 a graduation project for thE NTI 	program	    ***/
/**********************************************************************************/

#ifndef NVIC_INTERFACE_H_
#define NVIC_INTERFACE_H_

// Libraries includes
#include "../Inc/LIB/STD_TYPES.h"
#include "../Inc/LIB/BIT_MATH.h"

/* Enables the IRQx interrupt										*/
/* Input Parameters: IRQx ID										*/
/* Return value: STD_TRUE -> Success, STD_FALSE -> Failed			*/
STD_ReturnType NVIC_u8EnableIRQ( u8 );

/* Disable the IRQx interrupt										*/
/* Input Parameters: IRQx ID										*/
/* Return value: STD_TRUE -> Success, STD_FALSE -> Failed			*/
STD_ReturnType NVIC_u8DisableIRQ( u8 );

/* Set pinding flag for the IRQx interrupt							*/
/* Input Parameters: IRQx ID										*/
/* Return value: STD_TRUE -> Success, STD_FALSE -> Failed			*/
STD_ReturnType NVIC_u8SetPendingIRQ( u8 );

/* Clear pinding flag for the IRQx interrupt						*/
/* Input Parameters: IRQx ID										*/
/* Return value: STD_TRUE -> Success, STD_FALSE -> Failed			*/
STD_ReturnType NVIC_u8ClearPendingIRQ( u8 );

/* Get pinding and active flags value for the IRQx interrupt		*/
/* Input Parameters: IRQx ID, Pointer to u8 variable				*/
/* Return value: STD_TRUE -> Success, STD_FALSE -> Failed			*/
STD_ReturnType NVIC_u8GetStateIRQ( u8 , u8* );

/* Set priority value for the IRQx interrupt						*/
/* Input Parameters: IRQx ID, Priority u8 value						*/
/* Return value: STD_TRUE -> Success, STD_FALSE -> Failed			*/
STD_ReturnType NVIC_u8SetPriority( u8, u8 );

/* Get priority value for the IRQx interrupt						*/
/* Input Parameters: IRQx ID, Pointer to u8 variable				*/
/* Return value: STD_TRUE -> Success, STD_FALSE -> Failed			*/
STD_ReturnType NVIC_u8GetPriority( u8 , u8* );

#endif /* NVIC_INTERFACE_H_ */
