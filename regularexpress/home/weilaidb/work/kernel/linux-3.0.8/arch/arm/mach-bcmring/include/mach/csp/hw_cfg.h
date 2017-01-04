#define CSP_HW_CFG_H
#if defined(__KERNEL__)
#if defined(CFG_GLOBAL_CHIP)
#if (CFG_GLOBAL_CHIP == FPGA11107)
#define HW_CFG_BUS_CLK_HZ            5000000
#define HW_CFG_DDR_CTLR_CLK_HZ      10000000
#define HW_CFG_DDR_PHY_OMIT
#define HW_CFG_UART_CLK_HZ           7500000
#define HW_CFG_PLL_VCO_HZ           2000000000
#define HW_CFG_PLL2_VCO_HZ          1800000000
#define HW_CFG_ARM_CLK_HZ            CAP_HW_CFG_ARM_CLK_HZ
#define HW_CFG_BUS_CLK_HZ            166666666
#define HW_CFG_DDR_CTLR_CLK_HZ       333333333
#define HW_CFG_DDR_PHY_CLK_HZ        (2 * HW_CFG_DDR_CTLR_CLK_HZ)
#define HW_CFG_UART_CLK_HZ           142857142
#define HW_CFG_VPM_CLK_HZ            CAP_HW_CFG_VPM_CLK_HZ
#define HW_CFG_PLL_VCO_HZ           1800000000
#define HW_CFG_PLL2_VCO_HZ          1800000000
#define HW_CFG_ARM_CLK_HZ            450000000
#define HW_CFG_BUS_CLK_HZ            150000000
#define HW_CFG_DDR_CTLR_CLK_HZ       300000000
#define HW_CFG_DDR_PHY_CLK_HZ        (2 * HW_CFG_DDR_CTLR_CLK_HZ)
#define HW_CFG_UART_CLK_HZ           150000000
#define HW_CFG_VPM_CLK_HZ            300000000
