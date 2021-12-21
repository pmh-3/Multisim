/*******************************************************************************
* File Name: out0.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_out0_H) /* Pins out0_H */
#define CY_PINS_out0_H

#include "cytypes.h"
#include "cyfitter.h"
#include "out0_aliases.h"


/***************************************
*     Data Struct Definitions
***************************************/

/**
* \addtogroup group_structures
* @{
*/
    
/* Structure for sleep mode support */
typedef struct
{
    uint32 pcState; /**< State of the port control register */
    uint32 sioState; /**< State of the SIO configuration */
    uint32 usbState; /**< State of the USBIO regulator */
} out0_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   out0_Read(void);
void    out0_Write(uint8 value);
uint8   out0_ReadDataReg(void);
#if defined(out0__PC) || (CY_PSOC4_4200L) 
    void    out0_SetDriveMode(uint8 mode);
#endif
void    out0_SetInterruptMode(uint16 position, uint16 mode);
uint8   out0_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void out0_Sleep(void); 
void out0_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(out0__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define out0_DRIVE_MODE_BITS        (3)
    #define out0_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - out0_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the out0_SetDriveMode() function.
         *  @{
         */
        #define out0_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define out0_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define out0_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define out0_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define out0_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define out0_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define out0_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define out0_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define out0_MASK               out0__MASK
#define out0_SHIFT              out0__SHIFT
#define out0_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in out0_SetInterruptMode() function.
     *  @{
     */
        #define out0_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define out0_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define out0_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define out0_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(out0__SIO)
    #define out0_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(out0__PC) && (CY_PSOC4_4200L)
    #define out0_USBIO_ENABLE               ((uint32)0x80000000u)
    #define out0_USBIO_DISABLE              ((uint32)(~out0_USBIO_ENABLE))
    #define out0_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define out0_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define out0_USBIO_ENTER_SLEEP          ((uint32)((1u << out0_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << out0_USBIO_SUSPEND_DEL_SHIFT)))
    #define out0_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << out0_USBIO_SUSPEND_SHIFT)))
    #define out0_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << out0_USBIO_SUSPEND_DEL_SHIFT)))
    #define out0_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(out0__PC)
    /* Port Configuration */
    #define out0_PC                 (* (reg32 *) out0__PC)
#endif
/* Pin State */
#define out0_PS                     (* (reg32 *) out0__PS)
/* Data Register */
#define out0_DR                     (* (reg32 *) out0__DR)
/* Input Buffer Disable Override */
#define out0_INP_DIS                (* (reg32 *) out0__PC2)

/* Interrupt configuration Registers */
#define out0_INTCFG                 (* (reg32 *) out0__INTCFG)
#define out0_INTSTAT                (* (reg32 *) out0__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define out0_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(out0__SIO)
    #define out0_SIO_REG            (* (reg32 *) out0__SIO)
#endif /* (out0__SIO_CFG) */

/* USBIO registers */
#if !defined(out0__PC) && (CY_PSOC4_4200L)
    #define out0_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define out0_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define out0_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define out0_DRIVE_MODE_SHIFT       (0x00u)
#define out0_DRIVE_MODE_MASK        (0x07u << out0_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins out0_H */


/* [] END OF FILE */
