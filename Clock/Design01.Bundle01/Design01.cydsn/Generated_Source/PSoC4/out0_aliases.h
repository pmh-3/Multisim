/*******************************************************************************
* File Name: out0.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_out0_ALIASES_H) /* Pins out0_ALIASES_H */
#define CY_PINS_out0_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define out0_0			(out0__0__PC)
#define out0_0_PS		(out0__0__PS)
#define out0_0_PC		(out0__0__PC)
#define out0_0_DR		(out0__0__DR)
#define out0_0_SHIFT	(out0__0__SHIFT)
#define out0_0_INTR	((uint16)((uint16)0x0003u << (out0__0__SHIFT*2u)))

#define out0_INTR_ALL	 ((uint16)(out0_0_INTR))


#endif /* End Pins out0_ALIASES_H */


/* [] END OF FILE */
