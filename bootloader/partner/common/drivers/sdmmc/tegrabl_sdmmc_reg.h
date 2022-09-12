/*
 * Copyright (c) 2015, NVIDIA CORPORATION.  All rights reserved.
 *
 * NVIDIA CORPORATION and its licensors retain all intellectual property
 * and proprietary rights in and to this software, related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA CORPORATION is strictly prohibited.
 */

#ifndef INCLUDED_SDMMC_REG_H
#define INCLUDED_SDMMC_REG_H


#define VENDOR_SYS_SW_CNTL						0x104
#define IO_TRIM_BYPASS_MASK						0x4

#define VENDOR_CLOCK_CNTRL						0x100
#define TRIM_VAL_MASK							0x1F000000
#define TRIM_VAL_SHIFT							24
#define TAP_VAL_MASK							0xFF0000
#define TAP_VAL_SHIFT							16

#define SYSTEM_ADDRESS							0x0
#define BLOCK_SIZE_BLOCK_COUNT					0x4
#define BLOCK_COUNT_MASK						0xFFFF0000
#define BLOCK_COUNT_SHIFT						16
#define HOST_DMA_BUFFER_DMA512K					0x7000
#define XFER_BLOCK_SIZE_11_MASK					0xFFF
#define XFER_BLOCK_SIZE_11_SHIFT				0

#define ARGUMENT								0x8

#define CMD_XFER_MODE							0xc
#define COMMAND_INDEX_MASK						0x3F000000
#define COMMAND_INDEX_SHIFT						24
#define COMMAND_INDEX_STOP_TRANSMISSION			0xC000000
#define COMMAND_TYPE_ABORT						0xC00000
#define DATA_PRESENT_SELECT_DATA_TRANSFER		0x200000
#define DATA_PRESENT_SELECT_SHIFT				21
#define CMD_INDEX_CHECK_EN_ENABLE				0x100000
#define CMD_CRC_CHECK_EN_ENABLE					0x80000
#define DATA_XFER_DIR_SEL_READ					0x10
#define BLOCK_COUNT_EN_ENABLE					0x2
#define BLOCK_COUNT_EN_SHIFT					1
#define DMA_EN_ENABLE							0x1
#define DMA_EN_SHIFT							0
#define MULTI_BLOCK_SELECT_ENABLE				0x20
#define AUTO_CMD12_ENABLE						0x4
#define RESP_TYPE_SELECT_MASK					0x30000
#define RESP_TYPE_SELECT_RESP_LENGTH_136		0x10000
#define RESP_TYPE_SELECT_RESP_LENGTH_48			0x20000
#define RESP_TYPE_SELECT_RESP_LENGTH_48BUSY		0x30000

#define RESPONSE_R0_R1							0x10
#define RESPONSE_R2_R3							0x14
#define RESPONSE_R4_R5							0x18
#define RESPONSE_R6_R7							0x1c

#define PRESENT_STATE							0x24
#define DAT_3_0_LINE_LEVEL_DEFAULT				0xF00000
#define DAT_LINE_ACTIVE_MASK					0x4
#define CMD_INHIBIT_DAT_ACTIVE					0x2
#define CMD_INHIBIT_CMD_ACTIVE					0x1
#define CARD_STATE_STABLE_MASK					0x20000
#define CARD_INSERTED_MASK						0x10000

#define POWER_CONTROL_HOST						0x28
#define DATA_XFER_WIDTH_SHIFT					1
#define DATA_XFER_WIDTH_MASK					0x2
#define EXTENDED_DATA_TRANSFER_WIDTH_SHIFT		5
#define EXTENDED_DATA_TRANSFER_WIDTH_MASK		0x20
#define SD_BUS_VOLTAGE_SELECT_V3_3				0xE00
#define SD_BUS_VOLTAGE_SELECT_V3_0				0xC00
#define SD_BUS_VOLTAGE_SELECT_V1_8				0xA00
#define SD_BUS_POWER_POWER_ON					0x100
#define HIGH_SPEED_EN_MASK						0x4
#define HIGH_SPEED_EN_SHIFT						2

#define SW_RESET_TIMEOUT_CTRL_CLOCK_CONTROL		0x2c
#define INTERNAL_CLOCK_STABLE_MASK				0x2
#define INTERNAL_CLOCK_STABLE_SHIFT				1
#define SD_CLOCK_EN_MASK						0x4
#define SD_CLOCK_EN_ENABLE						0x4
#define SD_CLOCK_EN_SHIFT						2
#define SDCLK_FREQUENCYSELECT_MASK				0xFF00
#define SDCLK_FREQUENCYSELECT_SHIFT				8
#define DATA_TIMEOUT_COUNTER_VALUE_MASK			0xF0000
#define DATA_TIMEOUT_COUNTER_VALUE_0XE			0xE0000
#define DATA_TIMEOUT_COUNTER_VALUE_SHIFT		16
#define SW_RESET_FOR_ALL_RESETED				0x1000000
#define SW_RESET_FOR_ALL_MASK					0x1000000
#define SW_RESET_FOR_ALL_SHIFT					24
#define INTERNAL_CLOCK_EN_OSCILLATE				0x1
#define SDCLK_FREQUENCYSELECT_DIV64				0x2000
#define SDCLK_FREQUENCYSELECT_DIV256			0x8000
#define SW_RESET_FOR_CMD_LINE_RESETED			0x2000000
#define SW_RESET_FOR_DAT_LINE_RESETED			0x4000000

#define VENDOR_MISC_CNTRL						0x120
#define SPARE0_DDR_50							0x200

#define INTERRUPT_STATUS						0x30
#define CMD_COMPLETE_GEN_INT					0x1
#define DATA_END_BIT_ERR_ERR					0x400000
#define DATA_CRC_ERR_ERR						0x200000
#define DATA_TIMEOUT_ERR_TIMEOUT				0x100000
#define DMA_INTERRUPT_GEN_INT					0x8
#define XFER_COMPLETE_MASK						0x2
#define XFER_COMPLETE_SHIFT						1
#define CMD_COMPLETE_MASK						0x1
#define CMD_COMPLETE_SHIFT						0
#define COMMAND_INDEX_ERR_GENERATED				0x80000
#define COMMAND_END_BIT_ERR_GENERATED			0x40000
#define COMMAND_CRC_ERR_GENERATED				0x20000
#define COMMAND_TIMEOUT_ERR_GENERATED			0x10000

#define INTERRUPT_STATUS_ENABLE					0x34
#define DATA_END_BIT_ERR_ENABLE					0x400000
#define DATA_CRC_ERR_ENABLE						0x200000
#define DATA_TIMEOUT_ERR_ENABLE					0x100000
#define COMMAND_INDEX_ERR_ENABLE				0x80000
#define COMMAND_END_BIT_ERR_ENABLE				0x40000
#define COMMAND_CRC_ERR_ENABLE					0x20000
#define COMMAND_TIMEOUT_ERR_ENABLE				0x10000
#define CARD_REMOVAL_ENABLE						0x80
#define CARD_INSERTION_ENABLE					0x40
#define DMA_INTERRUPT_ENABLE					0x8
#define TRANSFER_COMPLETE_ENABLE				0x2
#define COMMAND_COMPLETE_ENABLE					0x1

#define AUTO_CMD12_ERR_STATUS					0x3c
#define UHS_MODE_SEL_DDR50						0x40000

#define CAPABILITIES							0x40
#define VOLTAGE_SUPPORT_1_8_V_MASK				0x4000000
#define VOLTAGE_SUPPORT_3_0_V_MASK				0x2000000
#define VOLTAGE_SUPPORT_3_3_V_MASK				0x1000000
#define HIGH_SPEED_SUPPORT_MASK					0x200000

#define CAPABILITIES_HIGHER						0x44
#define CAPABILITIES_HIGHER_DDR50_MASK			0x4

#define IO_SPARE								0x1f0
#define SPARE_OUT3_SHIFT						19

#define VENDOR_IO_TRIM_CNTRL					0x1ac
#define SEL_VREG_SHIFT							0x2

#define AUTO_CAL_CONFIG							0x1e4
#define AUTO_CAL_ENABLE_SHIFT					29
#define AUTO_CAL_START_SHIFT					31

#define AUTO_CAL_STATUS							0x1ec
#define AUTO_CAL_ACTIVE_SHIFT					31

#define NV_ADDRESS_MAP_APB_MISC_BASE			0x70000000
#define APB_MISC_GP_EMMC4_PAD_CFGPADCTRL_0		0xab4
#define CFG2TMC_EMMC4_PAD_DRVDN_COMP_VAL		0x00000040
#define CFG2TMC_EMMC4_PAD_DRVUP_COMP_VAL		0x00001000
#define CFG2TMC_EMMC4_PAD_DRVDN_COMP_MASK		0xFFFFFF03
#define CFG2TMC_EMMC4_PAD_DRVUP_COMP_MASK		0xFFFFC0FF

#endif /* INCLUDED_SDMMC_REG_H */
