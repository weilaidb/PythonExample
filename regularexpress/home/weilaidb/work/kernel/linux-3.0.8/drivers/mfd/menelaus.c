#define DRIVER_NAME			"menelaus"
#define MENELAUS_I2C_ADDRESS		0x72
#define MENELAUS_REV			0x01
#define MENELAUS_VCORE_CTRL1		0x02
#define MENELAUS_VCORE_CTRL2		0x03
#define MENELAUS_VCORE_CTRL3		0x04
#define MENELAUS_VCORE_CTRL4		0x05
#define MENELAUS_VCORE_CTRL5		0x06
#define MENELAUS_DCDC_CTRL1		0x07
#define MENELAUS_DCDC_CTRL2		0x08
#define MENELAUS_DCDC_CTRL3		0x09
#define MENELAUS_LDO_CTRL1		0x0A
#define MENELAUS_LDO_CTRL2		0x0B
#define MENELAUS_LDO_CTRL3		0x0C
#define MENELAUS_LDO_CTRL4		0x0D
#define MENELAUS_LDO_CTRL5		0x0E
#define MENELAUS_LDO_CTRL6		0x0F
#define MENELAUS_LDO_CTRL7		0x10
#define MENELAUS_LDO_CTRL8		0x11
#define MENELAUS_SLEEP_CTRL1		0x12
#define MENELAUS_SLEEP_CTRL2		0x13
#define MENELAUS_DEVICE_OFF		0x14
#define MENELAUS_OSC_CTRL		0x15
#define MENELAUS_DETECT_CTRL		0x16
#define MENELAUS_INT_MASK1		0x17
#define MENELAUS_INT_MASK2		0x18
#define MENELAUS_INT_STATUS1		0x19
#define MENELAUS_INT_STATUS2		0x1A
#define MENELAUS_INT_ACK1		0x1B
#define MENELAUS_INT_ACK2		0x1C
#define MENELAUS_GPIO_CTRL		0x1D
#define MENELAUS_GPIO_IN		0x1E
#define MENELAUS_GPIO_OUT		0x1F
#define MENELAUS_BBSMS			0x20
#define MENELAUS_RTC_CTRL		0x21
#define MENELAUS_RTC_UPDATE		0x22
#define MENELAUS_RTC_SEC		0x23
#define MENELAUS_RTC_MIN		0x24
#define MENELAUS_RTC_HR			0x25
#define MENELAUS_RTC_DAY		0x26
#define MENELAUS_RTC_MON		0x27
#define MENELAUS_RTC_YR			0x28
#define MENELAUS_RTC_WKDAY		0x29
#define MENELAUS_RTC_AL_SEC		0x2A
#define MENELAUS_RTC_AL_MIN		0x2B
#define MENELAUS_RTC_AL_HR		0x2C
#define MENELAUS_RTC_AL_DAY		0x2D
#define MENELAUS_RTC_AL_MON		0x2E
#define MENELAUS_RTC_AL_YR		0x2F
#define MENELAUS_RTC_COMP_MSB		0x30
#define MENELAUS_RTC_COMP_LSB		0x31
#define MENELAUS_S1_PULL_EN		0x32
#define MENELAUS_S1_PULL_DIR		0x33
#define MENELAUS_S2_PULL_EN		0x34
#define MENELAUS_S2_PULL_DIR		0x35
#define MENELAUS_MCT_CTRL1		0x36
#define MENELAUS_MCT_CTRL2		0x37
#define MENELAUS_MCT_CTRL3		0x38
#define MENELAUS_MCT_PIN_ST		0x39
#define MENELAUS_DEBOUNCE1		0x3A
#define IH_MENELAUS_IRQS		12
#define MENELAUS_MMC_S1CD_IRQ		0
#define MENELAUS_MMC_S2CD_IRQ		1
#define MENELAUS_MMC_S1D1_IRQ		2
#define MENELAUS_MMC_S2D1_IRQ		3
#define MENELAUS_LOWBAT_IRQ		4
#define MENELAUS_HOTDIE_IRQ		5
#define MENELAUS_UVLO_IRQ		6
#define MENELAUS_TSHUT_IRQ		7
#define MENELAUS_RTCTMR_IRQ		8
#define MENELAUS_RTCALM_IRQ		9
#define MENELAUS_RTCERR_IRQ		10
#define MENELAUS_PSHBTN_IRQ		11
#define MENELAUS_RESERVED12_IRQ		12
#define MENELAUS_RESERVED13_IRQ		13
#define MENELAUS_RESERVED14_IRQ		14
#define MENELAUS_RESERVED15_IRQ		15
#define VCORE_CTRL1_BYP_COMP		(1 << 5)
#define VCORE_CTRL1_HW_NSW		(1 << 7)
#define GPIO_CTRL_SLOTSELEN		(1 << 5)
#define GPIO_CTRL_SLPCTLEN		(1 << 6)
#define GPIO1_DIR_INPUT			(1 << 0)
#define GPIO2_DIR_INPUT			(1 << 1)
#define GPIO3_DIR_INPUT			(1 << 2)
#define MCT_CTRL1_S1_CMD_OD		(1 << 2)
#define MCT_CTRL1_S2_CMD_OD		(1 << 3)
#define MCT_CTRL2_VS2_SEL_D0		(1 << 0)
#define MCT_CTRL2_VS2_SEL_D1		(1 << 1)
#define MCT_CTRL2_S1CD_BUFEN		(1 << 4)
#define MCT_CTRL2_S2CD_BUFEN		(1 << 5)
#define MCT_CTRL2_S1CD_DBEN		(1 << 6)
#define MCT_CTRL2_S2CD_BEN		(1 << 7)
#define MCT_CTRL3_SLOT1_EN		(1 << 0)
#define MCT_CTRL3_SLOT2_EN		(1 << 1)
#define MCT_CTRL3_S1_AUTO_EN		(1 << 2)
#define MCT_CTRL3_S2_AUTO_EN		(1 << 3)
#define MCT_PIN_ST_S1_CD_ST		(1 << 0)
#define MCT_PIN_ST_S2_CD_ST		(1 << 1)
static void menelaus_work(struct work_struct *_menelaus);
struct menelaus_chip ;
static struct menelaus_chip *the_menelaus;
static int menelaus_write_reg(int reg, u8 value)
static int menelaus_read_reg(int reg)
static int menelaus_enable_irq(int irq)
static int menelaus_disable_irq(int irq)
static int menelaus_ack_irq(int irq)
static int menelaus_add_irq_work(int irq,
void (*handler)(struct menelaus_chip *))
static int menelaus_remove_irq_work(int irq)
static void menelaus_mmc_cd_work(struct menelaus_chip *menelaus_hw)
int menelaus_set_mmc_opendrain(int slot, int enable)
EXPORT_SYMBOL(menelaus_set_mmc_opendrain);
int menelaus_set_slot_sel(int enable)
EXPORT_SYMBOL(menelaus_set_slot_sel);
int menelaus_set_mmc_slot(int slot, int enable, int power, int cd_en)
EXPORT_SYMBOL(menelaus_set_mmc_slot);
int menelaus_register_mmc_callback(void (*callback)(void *data, u8 card_mask),
void *data)
EXPORT_SYMBOL(menelaus_register_mmc_callback);
void menelaus_unregister_mmc_callback(void)
EXPORT_SYMBOL(menelaus_unregister_mmc_callback);
struct menelaus_vtg ;
struct menelaus_vtg_value ;
static int menelaus_set_voltage(const struct menelaus_vtg *vtg, int mV,
int vtg_val, int mode)
static int menelaus_get_vtg_value(int vtg, const struct menelaus_vtg_value *tbl,
int n)
static const struct menelaus_vtg_value vcore_values[] = ;
int menelaus_set_vcore_sw(unsigned int mV)
int menelaus_set_vcore_hw(unsigned int roof_mV, unsigned int floor_mV)
static const struct menelaus_vtg vmem_vtg = ;
static const struct menelaus_vtg_value vmem_values[] = ;
int menelaus_set_vmem(unsigned int mV)
EXPORT_SYMBOL(menelaus_set_vmem);
static const struct menelaus_vtg vio_vtg = ;
static const struct menelaus_vtg_value vio_values[] = ;
int menelaus_set_vio(unsigned int mV)
EXPORT_SYMBOL(menelaus_set_vio);
static const struct menelaus_vtg_value vdcdc_values[] = ;
static const struct menelaus_vtg vdcdc2_vtg = ;
static const struct menelaus_vtg vdcdc3_vtg = ;
int menelaus_set_vdcdc(int dcdc, unsigned int mV)
static const struct menelaus_vtg_value vmmc_values[] = ;
static const struct menelaus_vtg vmmc_vtg = ;
int menelaus_set_vmmc(unsigned int mV)
EXPORT_SYMBOL(menelaus_set_vmmc);
static const struct menelaus_vtg_value vaux_values[] = ;
static const struct menelaus_vtg vaux_vtg = ;
int menelaus_set_vaux(unsigned int mV)
EXPORT_SYMBOL(menelaus_set_vaux);
int menelaus_get_slot_pin_states(void)
EXPORT_SYMBOL(menelaus_get_slot_pin_states);
int menelaus_set_regulator_sleep(int enable, u32 val)
static void menelaus_work(struct work_struct *_menelaus)
static irqreturn_t menelaus_irq(int irq, void *_menelaus)
#define RTC_CTRL_RTC_EN		(1 << 0)
#define RTC_CTRL_AL_EN		(1 << 1)
#define RTC_CTRL_MODE12		(1 << 2)
#define RTC_CTRL_EVERY_MASK	(3 << 3)
#define RTC_CTRL_EVERY_SEC	(0 << 3)
#define RTC_CTRL_EVERY_MIN	(1 << 3)
#define RTC_CTRL_EVERY_HR	(2 << 3)
#define RTC_CTRL_EVERY_DAY	(3 << 3)
#define RTC_UPDATE_EVERY	0x08
#define RTC_HR_PM		(1 << 7)
static void menelaus_to_time(char *regs, struct rtc_time *t)
static int time_to_menelaus(struct rtc_time *t, int regnum)
static int menelaus_read_time(struct device *dev, struct rtc_time *t)
static int menelaus_set_time(struct device *dev, struct rtc_time *t)
static int menelaus_read_alarm(struct device *dev, struct rtc_wkalrm *w)
static int menelaus_set_alarm(struct device *dev, struct rtc_wkalrm *w)
static void menelaus_rtc_update_work(struct menelaus_chip *m)
static int menelaus_ioctl(struct device *dev, unsigned cmd, unsigned long arg)
#define menelaus_ioctl	NULL
static const struct rtc_class_ops menelaus_rtc_ops = ;
static void menelaus_rtc_alarm_work(struct menelaus_chip *m)
static inline void menelaus_rtc_init(struct menelaus_chip *m)
static inline void menelaus_rtc_init(struct menelaus_chip *m)
static struct i2c_driver menelaus_i2c_driver;
static int menelaus_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __exit menelaus_remove(struct i2c_client *client)
static const struct i2c_device_id menelaus_id[] = ;
MODULE_DEVICE_TABLE(i2c, menelaus_id);
static struct i2c_driver menelaus_i2c_driver = ;
static int __init menelaus_init(void)
static void __exit menelaus_exit(void)
MODULE_AUTHOR("Texas Instruments, Inc. (and others)");
MODULE_DESCRIPTION("I2C interface for Menelaus.");
MODULE_LICENSE("GPL");
module_init(menelaus_init);
module_exit(menelaus_exit);
