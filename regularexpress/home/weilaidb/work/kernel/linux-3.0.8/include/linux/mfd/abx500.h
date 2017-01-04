#define MFD_ABX500_H
#define AB3100_P1A	0xc0
#define AB3100_P1B	0xc1
#define AB3100_P1C	0xc2
#define AB3100_P1D	0xc3
#define AB3100_P1E	0xc4
#define AB3100_P1F	0xc5
#define AB3100_P1G	0xc6
#define AB3100_R2A	0xc7
#define AB3100_R2B	0xc8
#define AB3550_P1A	0x10
#define AB5500_1_0	0x20
#define AB5500_2_0	0x21
#define AB5500_2_1	0x22
#define AB8500_CUTEARLY	0x00
#define AB8500_CUT1P0	0x10
#define AB8500_CUT1P1	0x11
#define AB8500_CUT2P0	0x20
#define AB8500_CUT3P0	0x30
#define AB3100_EVENTA1_ONSWA				(0x01<<16)
#define AB3100_EVENTA1_ONSWB				(0x02<<16)
#define AB3100_EVENTA1_ONSWC				(0x04<<16)
#define AB3100_EVENTA1_DCIO				(0x08<<16)
#define AB3100_EVENTA1_OVER_TEMP			(0x10<<16)
#define AB3100_EVENTA1_SIM_OFF				(0x20<<16)
#define AB3100_EVENTA1_VBUS				(0x40<<16)
#define AB3100_EVENTA1_VSET_USB				(0x80<<16)
#define AB3100_EVENTA2_READY_TX				(0x01<<8)
#define AB3100_EVENTA2_READY_RX				(0x02<<8)
#define AB3100_EVENTA2_OVERRUN_ERROR			(0x04<<8)
#define AB3100_EVENTA2_FRAMING_ERROR			(0x08<<8)
#define AB3100_EVENTA2_CHARG_OVERCURRENT		(0x10<<8)
#define AB3100_EVENTA2_MIDR				(0x20<<8)
#define AB3100_EVENTA2_BATTERY_REM			(0x40<<8)
#define AB3100_EVENTA2_ALARM				(0x80<<8)
#define AB3100_EVENTA3_ADC_TRIG5			(0x01)
#define AB3100_EVENTA3_ADC_TRIG4			(0x02)
#define AB3100_EVENTA3_ADC_TRIG3			(0x04)
#define AB3100_EVENTA3_ADC_TRIG2			(0x08)
#define AB3100_EVENTA3_ADC_TRIGVBAT			(0x10)
#define AB3100_EVENTA3_ADC_TRIGVTX			(0x20)
#define AB3100_EVENTA3_ADC_TRIG1			(0x40)
#define AB3100_EVENTA3_ADC_TRIG0			(0x80)
#define AB3100_STR_ONSWA				(0x01)
#define AB3100_STR_ONSWB				(0x02)
#define AB3100_STR_ONSWC				(0x04)
#define AB3100_STR_DCIO					(0x08)
#define AB3100_STR_BOOT_MODE				(0x10)
#define AB3100_STR_SIM_OFF				(0x20)
#define AB3100_STR_BATT_REMOVAL				(0x40)
#define AB3100_STR_VBUS					(0x80)
#define AB3100_NUM_REGULATORS				10
struct ab3100 ;
struct ab3100_platform_data ;
int ab3100_event_register(struct ab3100 *ab3100,
struct notifier_block *nb);
int ab3100_event_unregister(struct ab3100 *ab3100,
struct notifier_block *nb);
#define AB3550_STR_ONSWA				(0x01)
#define AB3550_STR_ONSWB				(0x02)
#define AB3550_STR_ONSWC				(0x04)
#define AB3550_STR_DCIO					(0x08)
#define AB3550_STR_BOOT_MODE				(0x10)
#define AB3550_STR_SIM_OFF				(0x20)
#define AB3550_STR_BATT_REMOVAL				(0x40)
#define AB3550_STR_VBUS					(0x80)
#define AB3550_IMR1 0x29
#define AB3550_IMR2 0x2a
#define AB3550_IMR3 0x2b
#define AB3550_IMR4 0x2c
#define AB3550_IMR5 0x2d
enum ab3550_devid ;
struct abx500_init_settings ;
struct ab3550_platform_data ;
int abx500_set_register_interruptible(struct device *dev, u8 bank, u8 reg,
u8 value);
int abx500_get_register_interruptible(struct device *dev, u8 bank, u8 reg,
u8 *value);
int abx500_get_register_page_interruptible(struct device *dev, u8 bank,
u8 first_reg, u8 *regvals, u8 numregs);
int abx500_set_register_page_interruptible(struct device *dev, u8 bank,
u8 first_reg, u8 *regvals, u8 numregs);
int abx500_mask_and_set_register_interruptible(struct device *dev, u8 bank,
u8 reg, u8 bitmask, u8 bitvalues);
int abx500_get_chip_id(struct device *dev);
int abx500_event_registers_startup_state_get(struct device *dev, u8 *event);
int abx500_startup_irq_enabled(struct device *dev, unsigned int irq);
struct abx500_ops ;
int abx500_register_ops(struct device *core_dev, struct abx500_ops *ops);
void abx500_remove_ops(struct device *dev);
