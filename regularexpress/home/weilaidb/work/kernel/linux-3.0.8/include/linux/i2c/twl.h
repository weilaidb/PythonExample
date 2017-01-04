#define __TWL_H_
#define TWL4030_MODULE_USB		0x00
#define TWL4030_MODULE_AUDIO_VOICE	0x01
#define TWL4030_MODULE_GPIO		0x02
#define TWL4030_MODULE_INTBR		0x03
#define TWL4030_MODULE_PIH		0x04
#define TWL4030_MODULE_TEST		0x05
#define TWL4030_MODULE_KEYPAD		0x06
#define TWL4030_MODULE_MADC		0x07
#define TWL4030_MODULE_INTERRUPTS	0x08
#define TWL4030_MODULE_LED		0x09
#define TWL4030_MODULE_MAIN_CHARGE	0x0A
#define TWL4030_MODULE_PRECHARGE	0x0B
#define TWL4030_MODULE_PWM0		0x0C
#define TWL4030_MODULE_PWM1		0x0D
#define TWL4030_MODULE_PWMA		0x0E
#define TWL4030_MODULE_PWMB		0x0F
#define TWL5031_MODULE_ACCESSORY	0x10
#define TWL5031_MODULE_INTERRUPTS	0x11
#define TWL4030_MODULE_BACKUP		0x12
#define TWL4030_MODULE_INT		0x13
#define TWL4030_MODULE_PM_MASTER	0x14
#define TWL4030_MODULE_PM_RECEIVER	0x15
#define TWL4030_MODULE_RTC		0x16
#define TWL4030_MODULE_SECURED_REG	0x17
#define TWL_MODULE_USB		TWL4030_MODULE_USB
#define TWL_MODULE_AUDIO_VOICE	TWL4030_MODULE_AUDIO_VOICE
#define TWL_MODULE_PIH		TWL4030_MODULE_PIH
#define TWL_MODULE_MADC		TWL4030_MODULE_MADC
#define TWL_MODULE_MAIN_CHARGE	TWL4030_MODULE_MAIN_CHARGE
#define TWL_MODULE_PM_MASTER	TWL4030_MODULE_PM_MASTER
#define TWL_MODULE_PM_RECEIVER	TWL4030_MODULE_PM_RECEIVER
#define TWL_MODULE_RTC		TWL4030_MODULE_RTC
#define TWL_MODULE_PWM		TWL4030_MODULE_PWM0
#define TWL6030_MODULE_ID0	0x0D
#define TWL6030_MODULE_ID1	0x0E
#define TWL6030_MODULE_ID2	0x0F
#define GPIO_INTR_OFFSET	0
#define KEYPAD_INTR_OFFSET	1
#define BCI_INTR_OFFSET		2
#define MADC_INTR_OFFSET	3
#define USB_INTR_OFFSET		4
#define CHARGERFAULT_INTR_OFFSET 5
#define BCI_PRES_INTR_OFFSET	9
#define USB_PRES_INTR_OFFSET	10
#define RTC_INTR_OFFSET		11
#define PWR_INTR_OFFSET		0
#define HOTDIE_INTR_OFFSET	12
#define SMPSLDO_INTR_OFFSET	13
#define BATDETECT_INTR_OFFSET	14
#define SIMDETECT_INTR_OFFSET	15
#define MMCDETECT_INTR_OFFSET	16
#define GASGAUGE_INTR_OFFSET	17
#define USBOTG_INTR_OFFSET	4
#define CHARGER_INTR_OFFSET	2
#define RSV_INTR_OFFSET		0
#define REG_INT_STS_A			0x00
#define REG_INT_STS_B			0x01
#define REG_INT_STS_C			0x02
#define REG_INT_MSK_LINE_A		0x03
#define REG_INT_MSK_LINE_B		0x04
#define REG_INT_MSK_LINE_C		0x05
#define REG_INT_MSK_STS_A		0x06
#define REG_INT_MSK_STS_B		0x07
#define REG_INT_MSK_STS_C		0x08
#define TWL6030_PWR_INT_MASK 		0x07
#define TWL6030_RTC_INT_MASK 		0x18
#define TWL6030_HOTDIE_INT_MASK 	0x20
#define TWL6030_SMPSLDOA_INT_MASK	0xC0
#define TWL6030_SMPSLDOB_INT_MASK 	0x01
#define TWL6030_BATDETECT_INT_MASK 	0x02
#define TWL6030_SIMDETECT_INT_MASK 	0x04
#define TWL6030_MMCDETECT_INT_MASK 	0x08
#define TWL6030_GPADC_INT_MASK 		0x60
#define TWL6030_GASGAUGE_INT_MASK 	0x80
#define TWL6030_USBOTG_INT_MASK  	0x0F
#define TWL6030_CHARGER_CTRL_INT_MASK 	0x10
#define TWL6030_CHARGER_FAULT_INT_MASK 	0x60
#define TWL6030_MMCCTRL		0xEE
#define VMMC_AUTO_OFF			(0x1 << 3)
#define SW_FC				(0x1 << 2)
#define STS_MMC			0x1
#define TWL6030_CFG_INPUT_PUPD3	0xF2
#define MMC_PU				(0x1 << 3)
#define MMC_PD				(0x1 << 2)
#define TWL_SIL_TYPE(rev)		((rev) & 0x00FFFFFF)
#define TWL_SIL_REV(rev)		((rev) >> 24)
#define TWL_SIL_5030			0x09002F
#define TWL5030_REV_1_0			0x00
#define TWL5030_REV_1_1			0x10
#define TWL5030_REV_1_2			0x30
#define TWL4030_CLASS_ID 		0x4030
#define TWL6030_CLASS_ID 		0x6030
unsigned int twl_rev(void);
#define GET_TWL_REV (twl_rev())
#define TWL_CLASS_IS(class, id)			\
static inline int twl_class_is_ ##class(void)	\
TWL_CLASS_IS(4030, TWL4030_CLASS_ID)
TWL_CLASS_IS(6030, TWL6030_CLASS_ID)
#define TWL6025_SUBCLASS	BIT(4)
int twl_i2c_write_u8(u8 mod_no, u8 val, u8 reg);
int twl_i2c_read_u8(u8 mod_no, u8 *val, u8 reg);
int twl_i2c_write(u8 mod_no, u8 *value, u8 reg, unsigned num_bytes);
int twl_i2c_read(u8 mod_no, u8 *value, u8 reg, unsigned num_bytes);
int twl_get_type(void);
int twl_get_version(void);
int twl6030_interrupt_unmask(u8 bit_mask, u8 offset);
int twl6030_interrupt_mask(u8 bit_mask, u8 offset);
int twl6030_mmc_card_detect_config(void);
static inline int twl6030_mmc_card_detect_config(void)
int twl6030_mmc_card_detect(struct device *dev, int slot);
static inline int twl6030_mmc_card_detect(struct device *dev, int slot)
#define TWL4030_SIH_CTRL_EXCLEN_MASK	BIT(0)
#define TWL4030_SIH_CTRL_PENDDIS_MASK	BIT(1)
#define TWL4030_SIH_CTRL_COR_MASK	BIT(2)
#define REG_GPIODATAIN1			0x0
#define REG_GPIODATAIN2			0x1
#define REG_GPIODATAIN3			0x2
#define REG_GPIODATADIR1		0x3
#define REG_GPIODATADIR2		0x4
#define REG_GPIODATADIR3		0x5
#define REG_GPIODATAOUT1		0x6
#define REG_GPIODATAOUT2		0x7
#define REG_GPIODATAOUT3		0x8
#define REG_CLEARGPIODATAOUT1		0x9
#define REG_CLEARGPIODATAOUT2		0xA
#define REG_CLEARGPIODATAOUT3		0xB
#define REG_SETGPIODATAOUT1		0xC
#define REG_SETGPIODATAOUT2		0xD
#define REG_SETGPIODATAOUT3		0xE
#define REG_GPIO_DEBEN1			0xF
#define REG_GPIO_DEBEN2			0x10
#define REG_GPIO_DEBEN3			0x11
#define REG_GPIO_CTRL			0x12
#define REG_GPIOPUPDCTR1		0x13
#define REG_GPIOPUPDCTR2		0x14
#define REG_GPIOPUPDCTR3		0x15
#define REG_GPIOPUPDCTR4		0x16
#define REG_GPIOPUPDCTR5		0x17
#define REG_GPIO_ISR1A			0x19
#define REG_GPIO_ISR2A			0x1A
#define REG_GPIO_ISR3A			0x1B
#define REG_GPIO_IMR1A			0x1C
#define REG_GPIO_IMR2A			0x1D
#define REG_GPIO_IMR3A			0x1E
#define REG_GPIO_ISR1B			0x1F
#define REG_GPIO_ISR2B			0x20
#define REG_GPIO_ISR3B			0x21
#define REG_GPIO_IMR1B			0x22
#define REG_GPIO_IMR2B			0x23
#define REG_GPIO_IMR3B			0x24
#define REG_GPIO_EDR1			0x28
#define REG_GPIO_EDR2			0x29
#define REG_GPIO_EDR3			0x2A
#define REG_GPIO_EDR4			0x2B
#define REG_GPIO_EDR5			0x2C
#define REG_GPIO_SIH_CTRL		0x2D
#define TWL4030_GPIO_MAX		18
#define REG_IDCODE_7_0			0x00
#define REG_IDCODE_15_8			0x01
#define REG_IDCODE_16_23		0x02
#define REG_IDCODE_31_24		0x03
#define REG_GPPUPDCTR1			0x0F
#define REG_UNLOCK_TEST_REG		0x12
#define I2C_SCL_CTRL_PU			BIT(0)
#define I2C_SDA_CTRL_PU			BIT(2)
#define SR_I2C_SCL_CTRL_PU		BIT(4)
#define SR_I2C_SDA_CTRL_PU		BIT(6)
#define TWL_EEPROM_R_UNLOCK		0x49
#define TWL4030_KEYPAD_KEYP_ISR1	0x11
#define TWL4030_KEYPAD_KEYP_IMR1	0x12
#define TWL4030_KEYPAD_KEYP_ISR2	0x13
#define TWL4030_KEYPAD_KEYP_IMR2	0x14
#define TWL4030_KEYPAD_KEYP_SIR		0x15
#define TWL4030_KEYPAD_KEYP_EDR		0x16
#define TWL4030_KEYPAD_KEYP_SIH_CTRL	0x17
#define TWL4030_MADC_ISR1		0x61
#define TWL4030_MADC_IMR1		0x62
#define TWL4030_MADC_ISR2		0x63
#define TWL4030_MADC_IMR2		0x64
#define TWL4030_MADC_SIR		0x65
#define TWL4030_MADC_EDR		0x66
#define TWL4030_MADC_SIH_CTRL		0x67
#define TWL4030_INTERRUPTS_BCIISR1A	0x0
#define TWL4030_INTERRUPTS_BCIISR2A	0x1
#define TWL4030_INTERRUPTS_BCIIMR1A	0x2
#define TWL4030_INTERRUPTS_BCIIMR2A	0x3
#define TWL4030_INTERRUPTS_BCIISR1B	0x4
#define TWL4030_INTERRUPTS_BCIISR2B	0x5
#define TWL4030_INTERRUPTS_BCIIMR1B	0x6
#define TWL4030_INTERRUPTS_BCIIMR2B	0x7
#define TWL4030_INTERRUPTS_BCISIR1	0x8
#define TWL4030_INTERRUPTS_BCISIR2	0x9
#define TWL4030_INTERRUPTS_BCIEDR1	0xa
#define TWL4030_INTERRUPTS_BCIEDR2	0xb
#define TWL4030_INTERRUPTS_BCIEDR3	0xc
#define TWL4030_INTERRUPTS_BCISIHCTRL	0xd
#define TWL4030_INT_PWR_ISR1		0x0
#define TWL4030_INT_PWR_IMR1		0x1
#define TWL4030_INT_PWR_ISR2		0x2
#define TWL4030_INT_PWR_IMR2		0x3
#define TWL4030_INT_PWR_SIR		0x4
#define TWL4030_INT_PWR_EDR1		0x5
#define TWL4030_INT_PWR_EDR2		0x6
#define TWL4030_INT_PWR_SIH_CTRL	0x7
#define TWL5031_ACIIMR_LSB		0x05
#define TWL5031_ACIIMR_MSB		0x06
#define TWL5031_ACIIDR_LSB		0x07
#define TWL5031_ACIIDR_MSB		0x08
#define TWL5031_ACCISR1			0x0F
#define TWL5031_ACCIMR1			0x10
#define TWL5031_ACCISR2			0x11
#define TWL5031_ACCIMR2			0x12
#define TWL5031_ACCSIR			0x13
#define TWL5031_ACCEDR1			0x14
#define TWL5031_ACCSIHCTRL		0x15
#define TWL5031_INTERRUPTS_BCIISR1	0x0
#define TWL5031_INTERRUPTS_BCIIMR1	0x1
#define TWL5031_INTERRUPTS_BCIISR2	0x2
#define TWL5031_INTERRUPTS_BCIIMR2	0x3
#define TWL5031_INTERRUPTS_BCISIR	0x4
#define TWL5031_INTERRUPTS_BCIEDR1	0x5
#define TWL5031_INTERRUPTS_BCIEDR2	0x6
#define TWL5031_INTERRUPTS_BCISIHCTRL	0x7
#define TWL4030_PM_MASTER_CFG_P1_TRANSITION	0x00
#define TWL4030_PM_MASTER_CFG_P2_TRANSITION	0x01
#define TWL4030_PM_MASTER_CFG_P3_TRANSITION	0x02
#define TWL4030_PM_MASTER_CFG_P123_TRANSITION	0x03
#define TWL4030_PM_MASTER_STS_BOOT		0x04
#define TWL4030_PM_MASTER_CFG_BOOT		0x05
#define TWL4030_PM_MASTER_SHUNDAN		0x06
#define TWL4030_PM_MASTER_BOOT_BCI		0x07
#define TWL4030_PM_MASTER_CFG_PWRANA1		0x08
#define TWL4030_PM_MASTER_CFG_PWRANA2		0x09
#define TWL4030_PM_MASTER_BACKUP_MISC_STS	0x0b
#define TWL4030_PM_MASTER_BACKUP_MISC_CFG	0x0c
#define TWL4030_PM_MASTER_BACKUP_MISC_TST	0x0d
#define TWL4030_PM_MASTER_PROTECT_KEY		0x0e
#define TWL4030_PM_MASTER_STS_HW_CONDITIONS	0x0f
#define TWL4030_PM_MASTER_P1_SW_EVENTS		0x10
#define TWL4030_PM_MASTER_P2_SW_EVENTS		0x11
#define TWL4030_PM_MASTER_P3_SW_EVENTS		0x12
#define TWL4030_PM_MASTER_STS_P123_STATE	0x13
#define TWL4030_PM_MASTER_PB_CFG		0x14
#define TWL4030_PM_MASTER_PB_WORD_MSB		0x15
#define TWL4030_PM_MASTER_PB_WORD_LSB		0x16
#define TWL4030_PM_MASTER_SEQ_ADD_W2P		0x1c
#define TWL4030_PM_MASTER_SEQ_ADD_P2A		0x1d
#define TWL4030_PM_MASTER_SEQ_ADD_A2W		0x1e
#define TWL4030_PM_MASTER_SEQ_ADD_A2S		0x1f
#define TWL4030_PM_MASTER_SEQ_ADD_S2A12		0x20
#define TWL4030_PM_MASTER_SEQ_ADD_S2A3		0x21
#define TWL4030_PM_MASTER_SEQ_ADD_WARM		0x22
#define TWL4030_PM_MASTER_MEMORY_ADDRESS	0x23
#define TWL4030_PM_MASTER_MEMORY_DATA		0x24
#define TWL4030_PM_MASTER_KEY_CFG1		0xc0
#define TWL4030_PM_MASTER_KEY_CFG2		0x0c
#define TWL4030_PM_MASTER_KEY_TST1		0xe0
#define TWL4030_PM_MASTER_KEY_TST2		0x0e
#define TWL4030_PM_MASTER_GLOBAL_TST		0xb6
#define DEV_GRP_NULL		0x0
#define DEV_GRP_P1		0x1
#define DEV_GRP_P2		0x2
#define DEV_GRP_P3		0x4
#define RES_GRP_RES		0x0
#define RES_GRP_PP		0x1
#define RES_GRP_RC		0x2
#define RES_GRP_PP_RC		0x3
#define RES_GRP_PR		0x4
#define RES_GRP_PP_PR		0x5
#define RES_GRP_RC_PR		0x6
#define RES_GRP_ALL		0x7
#define RES_TYPE2_R0		0x0
#define RES_TYPE_ALL		0x7
#define RES_STATE_WRST		0xF
#define RES_STATE_ACTIVE	0xE
#define RES_STATE_SLEEP		0x8
#define RES_STATE_OFF		0x0
#define RES_VAUX1               1
#define RES_VAUX2               2
#define RES_VAUX3               3
#define RES_VAUX4               4
#define RES_VMMC1               5
#define RES_VMMC2               6
#define RES_VPLL1               7
#define RES_VPLL2               8
#define RES_VSIM                9
#define RES_VDAC                10
#define RES_VINTANA1            11
#define RES_VINTANA2            12
#define RES_VINTDIG             13
#define RES_VIO                 14
#define RES_VDD1                15
#define RES_VDD2                16
#define RES_VUSB_1V5            17
#define RES_VUSB_1V8            18
#define RES_VUSB_3V1            19
#define RES_VUSBCP              20
#define RES_REGEN               21
#define RES_NRES_PWRON          22
#define RES_CLKEN               23
#define RES_SYSEN               24
#define RES_HFCLKOUT            25
#define RES_32KCLKOUT           26
#define RES_RESET               27
#define RES_MAIN_REF            28
#define TOTAL_RESOURCES		28
#define MSG_BROADCAST(devgrp, grp, type, type2, state) \
( (devgrp) << 13 | 1 << 12 | (grp) << 9 | (type2) << 7 \
| (type) << 4 | (state))
#define MSG_SINGULAR(devgrp, id, state) \
((devgrp) << 13 | 0 << 12 | (id) << 4 | (state))
#define MSG_BROADCAST_ALL(devgrp, state) \
((devgrp) << 5 | (state))
#define MSG_BROADCAST_REF MSG_BROADCAST_ALL
#define MSG_BROADCAST_PROV MSG_BROADCAST_ALL
#define MSG_BROADCAST__CLK_RST MSG_BROADCAST_ALL
struct twl4030_clock_init_data ;
struct twl4030_bci_platform_data ;
struct twl4030_gpio_platform_data ;
struct twl4030_madc_platform_data ;
#define PERSISTENT_KEY(r, c)	KEY((r), (c), KEY_RESERVED)
struct twl4030_keypad_data ;
enum twl4030_usb_mode ;
struct twl4030_usb_data ;
struct twl4030_ins ;
struct twl4030_script ;
struct twl4030_resconfig ;
struct twl4030_power_data ;
extern void twl4030_power_init(struct twl4030_power_data *triton2_scripts);
extern int twl4030_remove_script(u8 flags);
struct twl4030_codec_audio_data ;
struct twl4030_codec_vibra_data ;
struct twl4030_codec_data ;
struct twl4030_platform_data ;
int twl4030_sih_setup(int module);
#define TWL4030_VDAC_DEV_GRP		0x3B
#define TWL4030_VDAC_DEDICATED		0x3E
#define TWL4030_VAUX1_DEV_GRP		0x17
#define TWL4030_VAUX1_DEDICATED		0x1A
#define TWL4030_VAUX2_DEV_GRP		0x1B
#define TWL4030_VAUX2_DEDICATED		0x1E
#define TWL4030_VAUX3_DEV_GRP		0x1F
#define TWL4030_VAUX3_DEDICATED		0x22
static inline int twl4030charger_usb_en(int enable)
#define TWL4030_REG_VDD1	0
#define TWL4030_REG_VDD2	1
#define TWL4030_REG_VIO		2
#define TWL4030_REG_VDAC	3
#define TWL4030_REG_VPLL1	4
#define TWL4030_REG_VPLL2	5
#define TWL4030_REG_VMMC1	6
#define TWL4030_REG_VMMC2	7
#define TWL4030_REG_VSIM	8
#define TWL4030_REG_VAUX1	9
#define TWL4030_REG_VAUX2_4030	10
#define TWL4030_REG_VAUX2	11
#define TWL4030_REG_VAUX3	12
#define TWL4030_REG_VAUX4	13
#define TWL4030_REG_VINTANA1	14
#define TWL4030_REG_VINTANA2	15
#define TWL4030_REG_VINTDIG	16
#define TWL4030_REG_VUSB1V5	17
#define TWL4030_REG_VUSB1V8	18
#define TWL4030_REG_VUSB3V1	19
#define TWL6030_REG_VDD1	30
#define TWL6030_REG_VDD2	31
#define TWL6030_REG_VDD3	32
#define TWL6030_REG_VMEM	33
#define TWL6030_REG_V2V1	34
#define TWL6030_REG_V1V29	35
#define TWL6030_REG_V1V8	36
#define TWL6030_REG_VAUX1_6030	37
#define TWL6030_REG_VAUX2_6030	38
#define TWL6030_REG_VAUX3_6030	39
#define TWL6030_REG_VMMC	40
#define TWL6030_REG_VPP		41
#define TWL6030_REG_VUSIM	42
#define TWL6030_REG_VANA	43
#define TWL6030_REG_VCXIO	44
#define TWL6030_REG_VDAC	45
#define TWL6030_REG_VUSB	46
#define TWL6030_REG_VRTC	47
#define TWL6030_REG_CLK32KG	48
#define TWL6025_REG_LDO2	49
#define TWL6025_REG_LDO4	50
#define TWL6025_REG_LDO3	51
#define TWL6025_REG_LDO5	52
#define TWL6025_REG_LDO1	53
#define TWL6025_REG_LDO7	54
#define TWL6025_REG_LDO6	55
#define TWL6025_REG_LDOLN	56
#define TWL6025_REG_LDOUSB	57
#define TWL6025_REG_SMPS3	58
#define TWL6025_REG_SMPS4	59
#define TWL6025_REG_VIO		60