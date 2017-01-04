#define CAP_INLINE_H
#define CAP_CONFIG0_VPM_DIS          0x00000001
#define CAP_CONFIG0_ETH_PHY0_DIS     0x00000002
#define CAP_CONFIG0_ETH_PHY1_DIS     0x00000004
#define CAP_CONFIG0_ETH_GMII0_DIS    0x00000008
#define CAP_CONFIG0_ETH_GMII1_DIS    0x00000010
#define CAP_CONFIG0_ETH_SGMII0_DIS   0x00000020
#define CAP_CONFIG0_ETH_SGMII1_DIS   0x00000040
#define CAP_CONFIG0_USB0_DIS         0x00000080
#define CAP_CONFIG0_USB1_DIS         0x00000100
#define CAP_CONFIG0_TSC_DIS          0x00000200
#define CAP_CONFIG0_EHSS0_DIS        0x00000400
#define CAP_CONFIG0_EHSS1_DIS        0x00000800
#define CAP_CONFIG0_SDIO0_DIS        0x00001000
#define CAP_CONFIG0_SDIO1_DIS        0x00002000
#define CAP_CONFIG0_UARTB_DIS        0x00004000
#define CAP_CONFIG0_KEYPAD_DIS       0x00008000
#define CAP_CONFIG0_CLCD_DIS         0x00010000
#define CAP_CONFIG0_GE_DIS           0x00020000
#define CAP_CONFIG0_LEDM_DIS         0x00040000
#define CAP_CONFIG0_BBL_DIS          0x00080000
#define CAP_CONFIG0_VDEC_DIS         0x00100000
#define CAP_CONFIG0_PIF_DIS          0x00200000
#define CAP_CONFIG0_RESERVED1_DIS    0x00400000
#define CAP_CONFIG0_RESERVED2_DIS    0x00800000
#define CAP_CONFIG1_APMA_DIS         0x00000001
#define CAP_CONFIG1_APMB_DIS         0x00000002
#define CAP_CONFIG1_APMC_DIS         0x00000004
#define CAP_CONFIG1_CLCD_RES_MASK    0x00000600
#define CAP_CONFIG1_CLCD_RES_SHIFT   9
#define CAP_CONFIG1_CLCD_RES_WVGA    (CAP_LCD_WVGA << CAP_CONFIG1_CLCD_RES_SHIFT)
#define CAP_CONFIG1_CLCD_RES_VGA     (CAP_LCD_VGA << CAP_CONFIG1_CLCD_RES_SHIFT)
#define CAP_CONFIG1_CLCD_RES_WQVGA   (CAP_LCD_WQVGA << CAP_CONFIG1_CLCD_RES_SHIFT)
#define CAP_CONFIG1_CLCD_RES_QVGA    (CAP_LCD_QVGA << CAP_CONFIG1_CLCD_RES_SHIFT)
#define CAP_CONFIG2_SPU_DIS          0x00000010
#define CAP_CONFIG2_PKA_DIS          0x00000020
#define CAP_CONFIG2_RNG_DIS          0x00000080
#if   (CFG_GLOBAL_CHIP == BCM11107)
#define capConfig0 0
#define capConfig1 CAP_CONFIG1_CLCD_RES_WVGA
#define capConfig2 0
#define CAP_APM_MAX_NUM_CHANS 3
#elif (CFG_GLOBAL_CHIP == FPGA11107)
#define capConfig0 0
#define capConfig1 CAP_CONFIG1_CLCD_RES_WVGA
#define capConfig2 0
#define CAP_APM_MAX_NUM_CHANS 3
#elif (CFG_GLOBAL_CHIP == BCM11109)
#define capConfig0 (CAP_CONFIG0_USB1_DIS | CAP_CONFIG0_EHSS1_DIS | CAP_CONFIG0_SDIO1_DIS | CAP_CONFIG0_GE_DIS | CAP_CONFIG0_BBL_DIS | CAP_CONFIG0_VDEC_DIS)
#define capConfig1 (CAP_CONFIG1_APMC_DIS | CAP_CONFIG1_CLCD_RES_WQVGA)
#define capConfig2 (CAP_CONFIG2_SPU_DIS | CAP_CONFIG2_PKA_DIS)
#define CAP_APM_MAX_NUM_CHANS 2
#elif (CFG_GLOBAL_CHIP == BCM11170)
#define capConfig0 (CAP_CONFIG0_ETH_GMII0_DIS | CAP_CONFIG0_ETH_GMII1_DIS | CAP_CONFIG0_USB0_DIS | CAP_CONFIG0_USB1_DIS | CAP_CONFIG0_TSC_DIS | CAP_CONFIG0_EHSS1_DIS | CAP_CONFIG0_SDIO0_DIS | CAP_CONFIG0_SDIO1_DIS | CAP_CONFIG0_UARTB_DIS | CAP_CONFIG0_CLCD_DIS | CAP_CONFIG0_GE_DIS | CAP_CONFIG0_BBL_DIS | CAP_CONFIG0_VDEC_DIS)
#define capConfig1 (CAP_CONFIG1_APMC_DIS | CAP_CONFIG1_CLCD_RES_WQVGA)
#define capConfig2 (CAP_CONFIG2_SPU_DIS | CAP_CONFIG2_PKA_DIS)
#define CAP_APM_MAX_NUM_CHANS 2
#elif (CFG_GLOBAL_CHIP == BCM11110)
#define capConfig0 (CAP_CONFIG0_USB1_DIS | CAP_CONFIG0_TSC_DIS | CAP_CONFIG0_EHSS1_DIS | CAP_CONFIG0_SDIO0_DIS | CAP_CONFIG0_SDIO1_DIS | CAP_CONFIG0_UARTB_DIS | CAP_CONFIG0_GE_DIS | CAP_CONFIG0_BBL_DIS | CAP_CONFIG0_VDEC_DIS)
#define capConfig1 CAP_CONFIG1_APMC_DIS
#define capConfig2 (CAP_CONFIG2_SPU_DIS | CAP_CONFIG2_PKA_DIS)
#define CAP_APM_MAX_NUM_CHANS 2
#elif (CFG_GLOBAL_CHIP == BCM11211)
#define capConfig0 (CAP_CONFIG0_ETH_PHY0_DIS | CAP_CONFIG0_ETH_GMII0_DIS | CAP_CONFIG0_ETH_GMII1_DIS | CAP_CONFIG0_ETH_SGMII0_DIS | CAP_CONFIG0_ETH_SGMII1_DIS | CAP_CONFIG0_CLCD_DIS)
#define capConfig1 CAP_CONFIG1_APMC_DIS
#define capConfig2 0
#define CAP_APM_MAX_NUM_CHANS 2
#error CFG_GLOBAL_CHIP type capabilities not defined
#if   ((CFG_GLOBAL_CHIP == BCM11107) || (CFG_GLOBAL_CHIP == FPGA11107))
#define CAP_HW_CFG_ARM_CLK_HZ 500000000
#elif ((CFG_GLOBAL_CHIP == BCM11109) || (CFG_GLOBAL_CHIP == BCM11170) || (CFG_GLOBAL_CHIP == BCM11110))
#define CAP_HW_CFG_ARM_CLK_HZ 300000000
#elif (CFG_GLOBAL_CHIP == BCM11211)
#define CAP_HW_CFG_ARM_CLK_HZ 666666666
#error CFG_GLOBAL_CHIP type capabilities not defined
#if ((CFG_GLOBAL_CHIP == BCM11107) || (CFG_GLOBAL_CHIP == BCM11211) || (CFG_GLOBAL_CHIP == FPGA11107))
#define CAP_HW_CFG_VPM_CLK_HZ 333333333
#elif ((CFG_GLOBAL_CHIP == BCM11109) || (CFG_GLOBAL_CHIP == BCM11170) || (CFG_GLOBAL_CHIP == BCM11110))
#define CAP_HW_CFG_VPM_CLK_HZ 200000000
#error CFG_GLOBAL_CHIP type capabilities not defined
static inline CAP_RC_T cap_isPresent(CAP_CAPABILITY_T capability, int index)
static inline uint32_t cap_getMaxArmSpeedHz(void)
static inline uint32_t cap_getMaxVpmSpeedHz(void)
static inline CAP_LCD_RES_T cap_getMaxLcdRes(void)