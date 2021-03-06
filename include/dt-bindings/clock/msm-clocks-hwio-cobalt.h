/* Copyright (c) 2015, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#define CLKFLAG_NO_RATE_CACHE					0x00004000

#define FMAX_LOWER						0
#define FMAX_LOW						1
#define FMAX_NOM						2
#define FMAX_TURBO						3

#define HALT_CHECK_DELAY					5

#define RPM_MISC_CLK_TYPE					0x306b6c63
#define RPM_BUS_CLK_TYPE					0x316b6c63
#define RPM_MEM_CLK_TYPE					0x326b6c63
#define RPM_IPA_CLK_TYPE					0x617069
#define RPM_CE_CLK_TYPE						0x6563
#define RPM_AGGR_CLK_TYPE					0x72676761
#define RPM_SMD_KEY_ENABLE					0x62616E45
#define RPM_MMAXI_CLK_TYPE					0x69786d6d

#define CXO_CLK_SRC_ID						0x0
#define QDSS_CLK_ID						0x1
#define PNOC_CLK_ID						0x0
#define SNOC_CLK_ID						0x1
#define CNOC_CLK_ID						0x2
#define BIMC_CLK_ID						0x0
#define IPA_CLK_ID						0x0
#define CE1_CLK_ID						0x0
#define RF_CLK1_ID						0x4
#define RF_CLK2_ID						0x5
#define RF_CLK3_ID						0x6
#define LN_BB_CLK1_ID						0x1
#define LN_BB_CLK2_ID						0x2
#define LN_BB_CLK3_ID						0x3
#define DIV_CLK1_ID						0xb
#define DIV_CLK2_ID						0xc
#define DIV_CLK3_ID						0xd
#define RF_CLK1_PIN_ID						0x4
#define RF_CLK2_PIN_ID						0x5
#define RF_CLK3_PIN_ID						0x6
#define LN_BB_CLK1_PIN_ID					0x1
#define LN_BB_CLK2_PIN_ID					0x2
#define LN_BB_CLK3_PIN_ID					0x3
#define AGGR1_NOC_ID						0x1
#define AGGR2_NOC_ID						0x2
#define MMSSNOC_AXI_CLK_ID					0x0

#define GCC_APCS_GPLL_ENA_VOTE					0x52000
#define GCC_APCS_CLOCK_BRANCH_ENA_VOTE				0x52004
#define GCC_APCS_CLOCK_BRANCH_ENA_VOTE_1			0x5200C
#define PLLTEST_PAD_CFG						0x6200C
#define GCC_XO_DIV4_CBCR				        0x43008
#define CLOCK_FRQ_MEASURE_CTL				        0x62004
#define CLOCK_FRQ_MEASURE_STATUS			        0x62008
#define GCC_GPLL0_MODE						0x00000
#define GCC_GPLL4_MODE						0x77000
#define GCC_HMSS_AHB_CMD_RCGR					0x48014
#define GCC_USB30_MASTER_CMD_RCGR				0x0F014
#define GCC_PCIE_AUX_CMD_RCGR					0x6C000
#define GCC_UFS_AXI_CMD_RCGR					0x75018
#define GCC_BLSP1_QUP1_I2C_APPS_CMD_RCGR			0x19020
#define GCC_BLSP1_QUP1_SPI_APPS_CMD_RCGR			0x1900C
#define GCC_BLSP1_QUP2_I2C_APPS_CMD_RCGR			0x1B020
#define GCC_BLSP1_QUP2_SPI_APPS_CMD_RCGR			0x1B00C
#define GCC_BLSP1_QUP3_I2C_APPS_CMD_RCGR			0x1D020
#define GCC_BLSP1_QUP3_SPI_APPS_CMD_RCGR			0x1D00C
#define GCC_BLSP1_QUP4_I2C_APPS_CMD_RCGR			0x1F020
#define GCC_BLSP1_QUP4_SPI_APPS_CMD_RCGR			0x1F00C
#define GCC_BLSP1_QUP5_I2C_APPS_CMD_RCGR			0x21020
#define GCC_BLSP1_QUP5_SPI_APPS_CMD_RCGR			0x2100C
#define GCC_BLSP1_QUP6_I2C_APPS_CMD_RCGR			0x23020
#define GCC_BLSP1_QUP6_SPI_APPS_CMD_RCGR			0x2300C
#define GCC_BLSP1_UART1_APPS_CMD_RCGR				0x1A00C
#define GCC_BLSP1_UART2_APPS_CMD_RCGR				0x1C00C
#define GCC_BLSP1_UART3_APPS_CMD_RCGR				0x1E00C
#define GCC_BLSP2_QUP1_I2C_APPS_CMD_RCGR			0x26020
#define GCC_BLSP2_QUP2_I2C_APPS_CMD_RCGR			0x28020
#define GCC_BLSP2_QUP3_I2C_APPS_CMD_RCGR			0x2A020
#define GCC_BLSP2_QUP4_I2C_APPS_CMD_RCGR			0x2C020
#define GCC_BLSP2_QUP5_I2C_APPS_CMD_RCGR			0x2E020
#define GCC_BLSP2_QUP6_I2C_APPS_CMD_RCGR			0x30020
#define GCC_BLSP2_QUP1_SPI_APPS_CMD_RCGR			0x2600C
#define GCC_BLSP2_QUP2_SPI_APPS_CMD_RCGR			0x2800C
#define GCC_BLSP2_QUP3_SPI_APPS_CMD_RCGR			0x2A00C
#define GCC_BLSP2_QUP4_SPI_APPS_CMD_RCGR			0x2C00C
#define GCC_BLSP2_QUP5_SPI_APPS_CMD_RCGR			0x2E00C
#define GCC_BLSP2_QUP6_SPI_APPS_CMD_RCGR			0x3000C
#define GCC_BLSP2_UART1_APPS_CMD_RCGR				0x2700C
#define GCC_BLSP2_UART2_APPS_CMD_RCGR				0x2900C
#define GCC_BLSP2_UART3_APPS_CMD_RCGR				0x2B00C
#define GCC_GLM_CMD_RCGR					0x8B010
#define GCC_GP1_CMD_RCGR					0x64004
#define GCC_GP2_CMD_RCGR					0x65004
#define GCC_GP3_CMD_RCGR					0x66004
#define GCC_HMSS_RBCPR_CMD_RCGR					0x48044
#define GCC_PDM2_CMD_RCGR					0x33010
#define GCC_SDCC2_APPS_CMD_RCGR					0x14010
#define GCC_SDCC4_APPS_CMD_RCGR					0x16010
#define GCC_TSIF_REF_CMD_RCGR					0x36010
#define GCC_UFS_ICE_CORE_CMD_RCGR				0x76010
#define GCC_UFS_PHY_AUX_CMD_RCGR				0x76044
#define GCC_UFS_UNIPRO_CORE_CMD_RCGR				0x76028
#define GCC_USB30_MOCK_UTMI_CMD_RCGR				0x0F028
#define GCC_USB3_PHY_AUX_CMD_RCGR				0x5000C
#define GCC_PCIE_0_PHY_BCR					0x6C01C
#define GCC_HDMI_CLKREF_EN					0x88000
#define GCC_UFS_CLKREF_EN					0x88004
#define GCC_USB3_CLKREF_EN					0x88008
#define GCC_PCIE_CLKREF_EN					0x8800C
#define GCC_RX1_USB2_CLKREF_EN					0x88014
#define GCC_USB3_PHY_BCR					0x50020
#define GCC_AGGRE1_NOC_XO_CBCR					0x8202C
#define GCC_AGGRE1_UFS_AXI_CBCR					0x82028
#define GCC_AGGRE1_USB3_AXI_CBCR				0x82024
#define GCC_BIMC_MSS_Q6_AXI_CBCR				0x4401C
#define GCC_BLSP1_AHB_CBCR					0x17004
#define GCC_BLSP1_QUP1_SPI_APPS_CBCR				0x19004
#define GCC_BLSP1_QUP1_I2C_APPS_CBCR				0x19008
#define GCC_BLSP1_QUP2_SPI_APPS_CBCR				0x1B004
#define GCC_BLSP1_QUP2_I2C_APPS_CBCR				0x1B008
#define GCC_BLSP1_QUP3_SPI_APPS_CBCR				0x1D004
#define GCC_BLSP1_QUP3_I2C_APPS_CBCR				0x1D008
#define GCC_BLSP1_QUP4_SPI_APPS_CBCR				0x1F004
#define GCC_BLSP1_QUP4_I2C_APPS_CBCR				0x1F008
#define GCC_BLSP1_QUP5_SPI_APPS_CBCR				0x21004
#define GCC_BLSP1_QUP5_I2C_APPS_CBCR				0x21008
#define GCC_BLSP1_QUP6_SPI_APPS_CBCR				0x23004
#define GCC_BLSP1_QUP6_I2C_APPS_CBCR				0x23008
#define GCC_BLSP1_UART1_APPS_CBCR				0x1A004
#define GCC_BLSP1_UART2_APPS_CBCR				0x1C004
#define GCC_BLSP1_UART3_APPS_CBCR				0x1E004
#define GCC_BLSP2_AHB_CBCR					0x25004
#define GCC_BLSP2_QUP1_SPI_APPS_CBCR				0x26004
#define GCC_BLSP2_QUP1_I2C_APPS_CBCR				0x26008
#define GCC_BLSP2_QUP2_I2C_APPS_CBCR				0x28008
#define GCC_BLSP2_QUP2_SPI_APPS_CBCR				0x28004
#define GCC_BLSP2_QUP3_SPI_APPS_CBCR				0x2A004
#define GCC_BLSP2_QUP3_I2C_APPS_CBCR				0x2A008
#define GCC_BLSP2_QUP4_SPI_APPS_CBCR				0x2C004
#define GCC_BLSP2_QUP4_I2C_APPS_CBCR				0x2C008
#define GCC_BLSP2_QUP5_SPI_APPS_CBCR				0x2E004
#define GCC_BLSP2_QUP5_I2C_APPS_CBCR				0x2E008
#define GCC_BLSP2_QUP6_SPI_APPS_CBCR				0x30004
#define GCC_BLSP2_QUP6_I2C_APPS_CBCR				0x30008
#define GCC_BLSP2_UART1_APPS_CBCR				0x27004
#define GCC_BLSP2_UART2_APPS_CBCR				0x29004
#define GCC_BLSP2_UART3_APPS_CBCR				0x2B004
#define GCC_BOOT_ROM_AHB_CBCR					0x38004
#define GCC_BOOT_ROM_BCR					0x38000
#define GCC_CFG_NOC_USB3_AXI_CBCR				0x05018
#define GCC_BIMC_GFX_CBCR					0x46040
#define GCC_GLM_AHB_CBCR					0x8B004
#define GCC_GLM_CBCR						0x8B008
#define GCC_GLM_XO_CBCR						0x8B00C
#define GCC_GP1_CBCR						0x64000
#define GCC_GP2_CBCR						0x65000
#define GCC_GP3_CBCR						0x66000
#define GCC_GPU_BIMC_GFX_CBCR					0x71010
#define GCC_GPU_BIMC_GFX_SRC_CBCR				0x7100C
#define GCC_GPU_CFG_AHB_CBCR					0x71004
#define GCC_GPU_SNOC_DVM_GFX_CBCR				0x71018
#define GCC_BIMC_HMSS_AXI_CBCR					0x48004
#define GCC_HMSS_AHB_CBCR					0x48000
#define GCC_HMSS_DVM_BUS_CBCR					0x4808C
#define GCC_HMSS_RBCPR_CBCR					0x48008
#define GCC_MMSS_SYS_NOC_AXI_CBCR				0x09000
#define GCC_MMSS_NOC_CFG_AHB_CBCR				0x09004
#define GCC_MMSS_QM_AHB_CBCR					0x09030
#define GCC_MMSS_QM_CORE_CBCR					0x0900C
#define GCC_PCIE_0_SLV_AXI_CBCR					0x6B008
#define GCC_PCIE_0_MSTR_AXI_CBCR				0x6B00C
#define GCC_PCIE_0_CFG_AHB_CBCR					0x6B010
#define GCC_PCIE_0_AUX_CBCR					0x6B014
#define GCC_PCIE_0_PIPE_CBCR					0x6B018
#define GCC_PCIE_PHY_AUX_CBCR					0x6F004
#define GCC_PCIE_PHY_BCR					0x6F000
#define GCC_PCIE_PHY_COM_BCR					0x6F014
#define GCC_PCIE_PHY_NOCSR_COM_PHY_BCR				0x6F00C
#define GCC_QUSB2PHY_PRIM_BCR					0x12000
#define GCC_QUSB2PHY_SEC_BCR					0x12004
#define GCC_PDM2_CBCR						0x3300C
#define GCC_PDM_AHB_CBCR					0x33004
#define GCC_PRNG_AHB_CBCR					0x34004
#define GCC_PRNG_BCR						0x34000
#define GCC_SDCC2_APPS_CBCR					0x14004
#define GCC_SDCC2_AHB_CBCR					0x14008
#define GCC_SDCC4_APPS_CBCR					0x16004
#define GCC_SDCC4_AHB_CBCR					0x16008
#define GCC_TSIF_AHB_CBCR					0x36004
#define GCC_TSIF_REF_CBCR					0x36008
#define GCC_UFS_AXI_CBCR					0x75008
#define GCC_UFS_AHB_CBCR					0x7500C
#define GCC_UFS_TX_SYMBOL_0_CBCR				0x75010
#define GCC_UFS_RX_SYMBOL_0_CBCR				0x75014
#define GCC_UFS_UNIPRO_CORE_CBCR				0x76008
#define GCC_UFS_ICE_CORE_CBCR					0x7600C
#define GCC_UFS_PHY_AUX_CBCR					0x76040
#define GCC_USB30_MASTER_CBCR					0x0F008
#define GCC_USB30_SLEEP_CBCR					0x0F00C
#define GCC_USB30_MOCK_UTMI_CBCR				0x0F010
#define GCC_USB_30_BCR						0x0F000
#define GCC_USB3_PHY_AUX_CBCR					0x50000
#define GCC_USB3_PHY_PIPE_CBCR					0x50004
#define GCC_USB3PHY_PHY_BCR					0x50024
#define GCC_USB_PHY_CFG_AHB2PHY_CBCR				0x6A004
#define GCC_WCSS_AHB_S0_CBCR					0x11004
#define GCC_WCSS_AXI_M_CBCR					0x11008
#define GCC_WCSS_ECAHB_CBCR					0x1100C
#define GCC_WCSS_SHDREG_AHB_CBCR				0x11010
#define GCC_APCS_CLOCK_SLEEP_ENA_VOTE				0x52008
#define GCC_MSS_CFG_AHB_CBCR					0x8A000
#define GCC_MSS_Q6_BIMC_AXI_CBCR				0x8A040
#define GCC_MSS_MNOC_BIMC_AXI_CBCR				0x8A004
#define GCC_MSS_SNOC_AXI_CBCR					0x8A03C
#define GCC_HMSS_GPLL0_CMD_RCGR					0x4805C
#define GCC_MSS_CFG_AHB_CBCR					0x8A000
#define GCC_MSS_Q6_BIMC_AXI_CBCR				0x8A040
#define GCC_MSS_MNOC_BIMC_AXI_CBCR				0x8A004
#define GCC_MSS_SNOC_AXI_CBCR					0x8A03C
#define GCC_HLOS1_VOTE_LPASS_CORE_SMMU_CBCR			0x7D010
#define GCC_HLOS1_VOTE_LPASS_ADSP_SMMU_CBCR			0x7D014
