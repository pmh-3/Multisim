/*******************************************************************************
* File Name: cyfittergnu.inc
* 
* PSoC Creator  4.1 Update 1
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2017 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu_trm.inc"

/* Clock_1 */
.set Clock_1__CTRL_REGISTER, CYREG_PERI_PCLK_CTL19
.set Clock_1__DIV_ID, 0x00000040
.set Clock_1__DIV_REGISTER, CYREG_PERI_DIV_16_CTL0
.set Clock_1__PA_DIV_ID, 0x000000FF

/* X */
.set X__0__DR, CYREG_GPIO_PRT2_DR
.set X__0__DR_CLR, CYREG_GPIO_PRT2_DR_CLR
.set X__0__DR_INV, CYREG_GPIO_PRT2_DR_INV
.set X__0__DR_SET, CYREG_GPIO_PRT2_DR_SET
.set X__0__HSIOM, CYREG_HSIOM_PORT_SEL2
.set X__0__HSIOM_MASK, 0x0000000F
.set X__0__HSIOM_SHIFT, 0
.set X__0__INTCFG, CYREG_GPIO_PRT2_INTR_CFG
.set X__0__INTR, CYREG_GPIO_PRT2_INTR
.set X__0__INTR_CFG, CYREG_GPIO_PRT2_INTR_CFG
.set X__0__INTSTAT, CYREG_GPIO_PRT2_INTR
.set X__0__MASK, 0x01
.set X__0__PA__CFG0, CYREG_UDB_PA2_CFG0
.set X__0__PA__CFG1, CYREG_UDB_PA2_CFG1
.set X__0__PA__CFG10, CYREG_UDB_PA2_CFG10
.set X__0__PA__CFG11, CYREG_UDB_PA2_CFG11
.set X__0__PA__CFG12, CYREG_UDB_PA2_CFG12
.set X__0__PA__CFG13, CYREG_UDB_PA2_CFG13
.set X__0__PA__CFG14, CYREG_UDB_PA2_CFG14
.set X__0__PA__CFG2, CYREG_UDB_PA2_CFG2
.set X__0__PA__CFG3, CYREG_UDB_PA2_CFG3
.set X__0__PA__CFG4, CYREG_UDB_PA2_CFG4
.set X__0__PA__CFG5, CYREG_UDB_PA2_CFG5
.set X__0__PA__CFG6, CYREG_UDB_PA2_CFG6
.set X__0__PA__CFG7, CYREG_UDB_PA2_CFG7
.set X__0__PA__CFG8, CYREG_UDB_PA2_CFG8
.set X__0__PA__CFG9, CYREG_UDB_PA2_CFG9
.set X__0__PC, CYREG_GPIO_PRT2_PC
.set X__0__PC2, CYREG_GPIO_PRT2_PC2
.set X__0__PORT, 2
.set X__0__PS, CYREG_GPIO_PRT2_PS
.set X__0__SHIFT, 0
.set X__DR, CYREG_GPIO_PRT2_DR
.set X__DR_CLR, CYREG_GPIO_PRT2_DR_CLR
.set X__DR_INV, CYREG_GPIO_PRT2_DR_INV
.set X__DR_SET, CYREG_GPIO_PRT2_DR_SET
.set X__INTCFG, CYREG_GPIO_PRT2_INTR_CFG
.set X__INTR, CYREG_GPIO_PRT2_INTR
.set X__INTR_CFG, CYREG_GPIO_PRT2_INTR_CFG
.set X__INTSTAT, CYREG_GPIO_PRT2_INTR
.set X__MASK, 0x01
.set X__PA__CFG0, CYREG_UDB_PA2_CFG0
.set X__PA__CFG1, CYREG_UDB_PA2_CFG1
.set X__PA__CFG10, CYREG_UDB_PA2_CFG10
.set X__PA__CFG11, CYREG_UDB_PA2_CFG11
.set X__PA__CFG12, CYREG_UDB_PA2_CFG12
.set X__PA__CFG13, CYREG_UDB_PA2_CFG13
.set X__PA__CFG14, CYREG_UDB_PA2_CFG14
.set X__PA__CFG2, CYREG_UDB_PA2_CFG2
.set X__PA__CFG3, CYREG_UDB_PA2_CFG3
.set X__PA__CFG4, CYREG_UDB_PA2_CFG4
.set X__PA__CFG5, CYREG_UDB_PA2_CFG5
.set X__PA__CFG6, CYREG_UDB_PA2_CFG6
.set X__PA__CFG7, CYREG_UDB_PA2_CFG7
.set X__PA__CFG8, CYREG_UDB_PA2_CFG8
.set X__PA__CFG9, CYREG_UDB_PA2_CFG9
.set X__PC, CYREG_GPIO_PRT2_PC
.set X__PC2, CYREG_GPIO_PRT2_PC2
.set X__PORT, 2
.set X__PS, CYREG_GPIO_PRT2_PS
.set X__SHIFT, 0

/* out0 */
.set out0__0__DR, CYREG_GPIO_PRT0_DR
.set out0__0__DR_CLR, CYREG_GPIO_PRT0_DR_CLR
.set out0__0__DR_INV, CYREG_GPIO_PRT0_DR_INV
.set out0__0__DR_SET, CYREG_GPIO_PRT0_DR_SET
.set out0__0__HSIOM, CYREG_HSIOM_PORT_SEL0
.set out0__0__HSIOM_MASK, 0xF0000000
.set out0__0__HSIOM_SHIFT, 28
.set out0__0__INTCFG, CYREG_GPIO_PRT0_INTR_CFG
.set out0__0__INTR, CYREG_GPIO_PRT0_INTR
.set out0__0__INTR_CFG, CYREG_GPIO_PRT0_INTR_CFG
.set out0__0__INTSTAT, CYREG_GPIO_PRT0_INTR
.set out0__0__MASK, 0x80
.set out0__0__OUT_SEL, CYREG_UDB_PA0_CFG10
.set out0__0__OUT_SEL_SHIFT, 14
.set out0__0__OUT_SEL_VAL, 0
.set out0__0__PA__CFG0, CYREG_UDB_PA0_CFG0
.set out0__0__PA__CFG1, CYREG_UDB_PA0_CFG1
.set out0__0__PA__CFG10, CYREG_UDB_PA0_CFG10
.set out0__0__PA__CFG11, CYREG_UDB_PA0_CFG11
.set out0__0__PA__CFG12, CYREG_UDB_PA0_CFG12
.set out0__0__PA__CFG13, CYREG_UDB_PA0_CFG13
.set out0__0__PA__CFG14, CYREG_UDB_PA0_CFG14
.set out0__0__PA__CFG2, CYREG_UDB_PA0_CFG2
.set out0__0__PA__CFG3, CYREG_UDB_PA0_CFG3
.set out0__0__PA__CFG4, CYREG_UDB_PA0_CFG4
.set out0__0__PA__CFG5, CYREG_UDB_PA0_CFG5
.set out0__0__PA__CFG6, CYREG_UDB_PA0_CFG6
.set out0__0__PA__CFG7, CYREG_UDB_PA0_CFG7
.set out0__0__PA__CFG8, CYREG_UDB_PA0_CFG8
.set out0__0__PA__CFG9, CYREG_UDB_PA0_CFG9
.set out0__0__PC, CYREG_GPIO_PRT0_PC
.set out0__0__PC2, CYREG_GPIO_PRT0_PC2
.set out0__0__PORT, 0
.set out0__0__PS, CYREG_GPIO_PRT0_PS
.set out0__0__SHIFT, 7
.set out0__DR, CYREG_GPIO_PRT0_DR
.set out0__DR_CLR, CYREG_GPIO_PRT0_DR_CLR
.set out0__DR_INV, CYREG_GPIO_PRT0_DR_INV
.set out0__DR_SET, CYREG_GPIO_PRT0_DR_SET
.set out0__INTCFG, CYREG_GPIO_PRT0_INTR_CFG
.set out0__INTR, CYREG_GPIO_PRT0_INTR
.set out0__INTR_CFG, CYREG_GPIO_PRT0_INTR_CFG
.set out0__INTSTAT, CYREG_GPIO_PRT0_INTR
.set out0__MASK, 0x80
.set out0__PA__CFG0, CYREG_UDB_PA0_CFG0
.set out0__PA__CFG1, CYREG_UDB_PA0_CFG1
.set out0__PA__CFG10, CYREG_UDB_PA0_CFG10
.set out0__PA__CFG11, CYREG_UDB_PA0_CFG11
.set out0__PA__CFG12, CYREG_UDB_PA0_CFG12
.set out0__PA__CFG13, CYREG_UDB_PA0_CFG13
.set out0__PA__CFG14, CYREG_UDB_PA0_CFG14
.set out0__PA__CFG2, CYREG_UDB_PA0_CFG2
.set out0__PA__CFG3, CYREG_UDB_PA0_CFG3
.set out0__PA__CFG4, CYREG_UDB_PA0_CFG4
.set out0__PA__CFG5, CYREG_UDB_PA0_CFG5
.set out0__PA__CFG6, CYREG_UDB_PA0_CFG6
.set out0__PA__CFG7, CYREG_UDB_PA0_CFG7
.set out0__PA__CFG8, CYREG_UDB_PA0_CFG8
.set out0__PA__CFG9, CYREG_UDB_PA0_CFG9
.set out0__PC, CYREG_GPIO_PRT0_PC
.set out0__PC2, CYREG_GPIO_PRT0_PC2
.set out0__PORT, 0
.set out0__PS, CYREG_GPIO_PRT0_PS
.set out0__SHIFT, 7

/* out1 */
.set out1__0__DR, CYREG_GPIO_PRT0_DR
.set out1__0__DR_CLR, CYREG_GPIO_PRT0_DR_CLR
.set out1__0__DR_INV, CYREG_GPIO_PRT0_DR_INV
.set out1__0__DR_SET, CYREG_GPIO_PRT0_DR_SET
.set out1__0__HSIOM, CYREG_HSIOM_PORT_SEL0
.set out1__0__HSIOM_MASK, 0x000000F0
.set out1__0__HSIOM_SHIFT, 4
.set out1__0__INTCFG, CYREG_GPIO_PRT0_INTR_CFG
.set out1__0__INTR, CYREG_GPIO_PRT0_INTR
.set out1__0__INTR_CFG, CYREG_GPIO_PRT0_INTR_CFG
.set out1__0__INTSTAT, CYREG_GPIO_PRT0_INTR
.set out1__0__MASK, 0x02
.set out1__0__OUT_SEL, CYREG_UDB_PA0_CFG10
.set out1__0__OUT_SEL_SHIFT, 2
.set out1__0__OUT_SEL_VAL, 3
.set out1__0__PA__CFG0, CYREG_UDB_PA0_CFG0
.set out1__0__PA__CFG1, CYREG_UDB_PA0_CFG1
.set out1__0__PA__CFG10, CYREG_UDB_PA0_CFG10
.set out1__0__PA__CFG11, CYREG_UDB_PA0_CFG11
.set out1__0__PA__CFG12, CYREG_UDB_PA0_CFG12
.set out1__0__PA__CFG13, CYREG_UDB_PA0_CFG13
.set out1__0__PA__CFG14, CYREG_UDB_PA0_CFG14
.set out1__0__PA__CFG2, CYREG_UDB_PA0_CFG2
.set out1__0__PA__CFG3, CYREG_UDB_PA0_CFG3
.set out1__0__PA__CFG4, CYREG_UDB_PA0_CFG4
.set out1__0__PA__CFG5, CYREG_UDB_PA0_CFG5
.set out1__0__PA__CFG6, CYREG_UDB_PA0_CFG6
.set out1__0__PA__CFG7, CYREG_UDB_PA0_CFG7
.set out1__0__PA__CFG8, CYREG_UDB_PA0_CFG8
.set out1__0__PA__CFG9, CYREG_UDB_PA0_CFG9
.set out1__0__PC, CYREG_GPIO_PRT0_PC
.set out1__0__PC2, CYREG_GPIO_PRT0_PC2
.set out1__0__PORT, 0
.set out1__0__PS, CYREG_GPIO_PRT0_PS
.set out1__0__SHIFT, 1
.set out1__DR, CYREG_GPIO_PRT0_DR
.set out1__DR_CLR, CYREG_GPIO_PRT0_DR_CLR
.set out1__DR_INV, CYREG_GPIO_PRT0_DR_INV
.set out1__DR_SET, CYREG_GPIO_PRT0_DR_SET
.set out1__INTCFG, CYREG_GPIO_PRT0_INTR_CFG
.set out1__INTR, CYREG_GPIO_PRT0_INTR
.set out1__INTR_CFG, CYREG_GPIO_PRT0_INTR_CFG
.set out1__INTSTAT, CYREG_GPIO_PRT0_INTR
.set out1__MASK, 0x02
.set out1__PA__CFG0, CYREG_UDB_PA0_CFG0
.set out1__PA__CFG1, CYREG_UDB_PA0_CFG1
.set out1__PA__CFG10, CYREG_UDB_PA0_CFG10
.set out1__PA__CFG11, CYREG_UDB_PA0_CFG11
.set out1__PA__CFG12, CYREG_UDB_PA0_CFG12
.set out1__PA__CFG13, CYREG_UDB_PA0_CFG13
.set out1__PA__CFG14, CYREG_UDB_PA0_CFG14
.set out1__PA__CFG2, CYREG_UDB_PA0_CFG2
.set out1__PA__CFG3, CYREG_UDB_PA0_CFG3
.set out1__PA__CFG4, CYREG_UDB_PA0_CFG4
.set out1__PA__CFG5, CYREG_UDB_PA0_CFG5
.set out1__PA__CFG6, CYREG_UDB_PA0_CFG6
.set out1__PA__CFG7, CYREG_UDB_PA0_CFG7
.set out1__PA__CFG8, CYREG_UDB_PA0_CFG8
.set out1__PA__CFG9, CYREG_UDB_PA0_CFG9
.set out1__PC, CYREG_GPIO_PRT0_PC
.set out1__PC2, CYREG_GPIO_PRT0_PC2
.set out1__PORT, 0
.set out1__PS, CYREG_GPIO_PRT0_PS
.set out1__SHIFT, 1

/* Miscellaneous */
.set CYDEV_BCLK__HFCLK__HZ, 48000000
.set CYDEV_BCLK__HFCLK__KHZ, 48000
.set CYDEV_BCLK__HFCLK__MHZ, 48
.set CYDEV_BCLK__SYSCLK__HZ, 48000000
.set CYDEV_BCLK__SYSCLK__KHZ, 48000
.set CYDEV_BCLK__SYSCLK__MHZ, 48
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PSOC4A, 16
.set CYDEV_CHIP_DIE_PSOC5LP, 2
.set CYDEV_CHIP_DIE_PSOC5TM, 3
.set CYDEV_CHIP_DIE_TMA4, 4
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_FM0P, 5
.set CYDEV_CHIP_FAMILY_FM3, 6
.set CYDEV_CHIP_FAMILY_FM4, 7
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_PSOC6, 4
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC4
.set CYDEV_CHIP_JTAG_ID, 0x112D11A1
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 16
.set CYDEV_CHIP_MEMBER_4D, 12
.set CYDEV_CHIP_MEMBER_4E, 6
.set CYDEV_CHIP_MEMBER_4F, 17
.set CYDEV_CHIP_MEMBER_4G, 4
.set CYDEV_CHIP_MEMBER_4H, 15
.set CYDEV_CHIP_MEMBER_4I, 21
.set CYDEV_CHIP_MEMBER_4J, 13
.set CYDEV_CHIP_MEMBER_4K, 14
.set CYDEV_CHIP_MEMBER_4L, 20
.set CYDEV_CHIP_MEMBER_4M, 19
.set CYDEV_CHIP_MEMBER_4N, 9
.set CYDEV_CHIP_MEMBER_4O, 7
.set CYDEV_CHIP_MEMBER_4P, 18
.set CYDEV_CHIP_MEMBER_4Q, 11
.set CYDEV_CHIP_MEMBER_4R, 8
.set CYDEV_CHIP_MEMBER_4S, 10
.set CYDEV_CHIP_MEMBER_4U, 5
.set CYDEV_CHIP_MEMBER_5A, 3
.set CYDEV_CHIP_MEMBER_5B, 2
.set CYDEV_CHIP_MEMBER_6A, 22
.set CYDEV_CHIP_MEMBER_FM3, 26
.set CYDEV_CHIP_MEMBER_FM4, 27
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1, 23
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2, 24
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3, 25
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_4M
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES0, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES1, 1
.set CYDEV_CHIP_REV_PSOC5TM_PRODUCTION, 1
.set CYDEV_CHIP_REV_TMA4_ES, 17
.set CYDEV_CHIP_REV_TMA4_ES2, 33
.set CYDEV_CHIP_REV_TMA4_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4I_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4J_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4K_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4N_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4O_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4P_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Q_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4R_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4S_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_6A_NO_UDB, 0
.set CYDEV_CHIP_REVISION_6A_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_FM3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_FM4_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_4M_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_READ_ACCELERATOR, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_Disallowed
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_PROTECT_KILL, 4
.set CYDEV_DEBUG_PROTECT_OPEN, 1
.set CYDEV_DEBUG_PROTECT, CYDEV_DEBUG_PROTECT_OPEN
.set CYDEV_DEBUG_PROTECT_PROTECTED, 2
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DFT_SELECT_CLK0, 10
.set CYDEV_DFT_SELECT_CLK1, 11
.set CYDEV_DMA_CHANNELS_AVAILABLE, 8
.set CYDEV_HEAP_SIZE, 0x80
.set CYDEV_IMO_TRIMMED_BY_USB, 0
.set CYDEV_IMO_TRIMMED_BY_WCO, 0
.set CYDEV_INTR_NUMBER_DMA, 13
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_STACK_SIZE, 0x0800
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 1
.set CYDEV_VDDA_MV, 3300
.set CYDEV_VDDD_MV, 3300
.set CYDEV_VDDIO_MV, 3300
.set CYDEV_WDT_GENERATE_ISR, 1
.set CYIPBLOCK_m0s8can_VERSION, 1
.set CYIPBLOCK_m0s8cpussv2_VERSION, 1
.set CYIPBLOCK_m0s8csd_VERSION, 1
.set CYIPBLOCK_m0s8ioss_VERSION, 1
.set CYIPBLOCK_m0s8lcd_VERSION, 2
.set CYIPBLOCK_m0s8lpcomp_VERSION, 2
.set CYIPBLOCK_m0s8peri_VERSION, 1
.set CYIPBLOCK_m0s8scb_VERSION, 2
.set CYIPBLOCK_m0s8srssv2_VERSION, 1
.set CYIPBLOCK_m0s8tcpwm_VERSION, 2
.set CYIPBLOCK_m0s8udbif_VERSION, 1
.set CYIPBLOCK_m0s8wco_VERSION, 1
.set CYIPBLOCK_s8pass4al_VERSION, 1
.set DMA_CHANNELS_USED__MASK, 0
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif