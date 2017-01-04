#define BH1770_ALS_CONTROL	0x80
#define BH1770_PS_CONTROL	0x81
#define BH1770_I_LED		0x82
#define BH1770_I_LED3		0x83
#define BH1770_ALS_PS_MEAS	0x84
#define BH1770_PS_MEAS_RATE	0x85
#define BH1770_ALS_MEAS_RATE	0x86
#define BH1770_PART_ID		0x8a
#define BH1770_MANUFACT_ID	0x8b
#define BH1770_ALS_DATA_0	0x8c
#define BH1770_ALS_DATA_1	0x8d
#define BH1770_ALS_PS_STATUS	0x8e
#define BH1770_PS_DATA_LED1	0x8f
#define BH1770_PS_DATA_LED2	0x90
#define BH1770_PS_DATA_LED3	0x91
#define BH1770_INTERRUPT	0x92
#define BH1770_PS_TH_LED1	0x93
#define BH1770_PS_TH_LED2	0x94
#define BH1770_PS_TH_LED3	0x95
#define BH1770_ALS_TH_UP_0	0x96
#define BH1770_ALS_TH_UP_1	0x97
#define BH1770_ALS_TH_LOW_0	0x98
#define BH1770_ALS_TH_LOW_1	0x99
#define BH1770_MANUFACT_ROHM	0x01
#define BH1770_MANUFACT_OSRAM	0x03
#define BH1770_PART		0x90
#define BH1770_PART_MASK	0xf0
#define BH1770_REV_MASK		0x0f
#define BH1770_REV_SHIFT	0
#define BH1770_REV_0		0x00
#define BH1770_REV_1		0x01
#define BH1770_STANDBY		0x00
#define BH1770_FORCED		0x02
#define BH1770_STANDALONE	0x03
#define BH1770_SWRESET		(0x01 << 2)
#define BH1770_PS_TRIG_MEAS	(1 << 0)
#define BH1770_ALS_TRIG_MEAS	(1 << 1)
#define BH1770_INT_OUTPUT_MODE	(1 << 3)
#define BH1770_INT_POLARITY	(1 << 2)
#define BH1770_INT_ALS_ENA	(1 << 1)
#define BH1770_INT_PS_ENA	(1 << 0)
#define BH1770_INT_LED1_DATA	(1 << 0)
#define BH1770_INT_LED1_INT	(1 << 1)
#define BH1770_INT_LED2_DATA	(1 << 2)
#define BH1770_INT_LED2_INT	(1 << 3)
#define BH1770_INT_LED3_DATA	(1 << 4)
#define BH1770_INT_LED3_INT	(1 << 5)
#define BH1770_INT_LEDS_INT	((1 << 1) | (1 << 3) | (1 << 5))
#define BH1770_INT_ALS_DATA	(1 << 6)
#define BH1770_INT_ALS_INT	(1 << 7)
#define BH1770_LED1		0x00
#define BH1770_DISABLE		0
#define BH1770_ENABLE		1
#define BH1770_PROX_CHANNELS	1
#define BH1770_LUX_DEFAULT_RATE	1
#define BH1770_PROX_DEFAULT_RATE 1
#define BH1770_PROX_DEF_RATE_THRESH 6
#define BH1770_STARTUP_DELAY	50
#define BH1770_RESET_TIME	10
#define BH1770_TIMEOUT		2100
#define BH1770_LUX_RANGE	65535
#define BH1770_PROX_RANGE	255
#define BH1770_COEF_SCALER	1024
#define BH1770_CALIB_SCALER	8192
#define BH1770_LUX_NEUTRAL_CALIB_VALUE (1 * BH1770_CALIB_SCALER)
#define BH1770_LUX_DEF_THRES	1000
#define BH1770_PROX_DEF_THRES	70
#define BH1770_PROX_DEF_ABS_THRES   100
#define BH1770_DEFAULT_PERSISTENCE  10
#define BH1770_PROX_MAX_PERSISTENCE 50
#define BH1770_LUX_GA_SCALE	16384
#define BH1770_LUX_CF_SCALE	2048
#define BH1770_NEUTRAL_CF	BH1770_LUX_CF_SCALE
#define BH1770_LUX_CORR_SCALE	4096
#define PROX_ABOVE_THRESHOLD	1
#define PROX_BELOW_THRESHOLD	0
#define PROX_IGNORE_LUX_LIMIT	500
struct bh1770_chip ;
static const char reg_vcc[] = "Vcc";
static const char reg_vleds[] = "Vleds";
static const s16 prox_rates_hz[] = ;
static const s16 prox_rates_ms[] = ;
static const u8 prox_curr_ma[] = ;
static const s16 lux_rates_hz[] = ;
static inline int bh1770_lux_interrupt_control(struct bh1770_chip *chip,
int lux)
static inline int bh1770_prox_interrupt_control(struct bh1770_chip *chip,
int ps)
static int bh1770_lux_rate(struct bh1770_chip *chip, int rate_index)
static int bh1770_prox_rate(struct bh1770_chip *chip, int mode)
static inline int bh1770_led_cfg(struct bh1770_chip *chip)
static inline u8 bh1770_psraw_to_adjusted(struct bh1770_chip *chip, u8 psraw)
static inline u8 bh1770_psadjusted_to_raw(struct bh1770_chip *chip, u8 ps)
static int bh1770_prox_set_threshold(struct bh1770_chip *chip)
static inline u16 bh1770_lux_raw_to_adjusted(struct bh1770_chip *chip, u16 raw)
static inline u16 bh1770_lux_adjusted_to_raw(struct bh1770_chip *chip,
u16 adjusted)
static int bh1770_lux_update_thresholds(struct bh1770_chip *chip,
u16 threshold_hi, u16 threshold_lo)
static int bh1770_lux_get_result(struct bh1770_chip *chip)
static u32 bh1770_get_corr_value(struct bh1770_chip *chip)
static int bh1770_lux_read_result(struct bh1770_chip *chip)
static int bh1770_chip_on(struct bh1770_chip *chip)
static void bh1770_chip_off(struct bh1770_chip *chip)
static int bh1770_prox_mode_control(struct bh1770_chip *chip)
static int bh1770_prox_read_result(struct bh1770_chip *chip)
static int bh1770_detect(struct bh1770_chip *chip)
static void bh1770_prox_work(struct work_struct *work)
static irqreturn_t bh1770_irq(int irq, void *data)
static ssize_t bh1770_power_state_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t bh1770_power_state_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t bh1770_lux_result_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t bh1770_lux_range_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t bh1770_prox_enable_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t bh1770_prox_enable_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t bh1770_prox_result_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t bh1770_prox_range_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t bh1770_get_prox_rate_avail(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t bh1770_get_prox_rate_above(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t bh1770_get_prox_rate_below(struct device *dev,
struct device_attribute *attr, char *buf)
static int bh1770_prox_rate_validate(int rate)
static ssize_t bh1770_set_prox_rate_above(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t bh1770_set_prox_rate_below(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t bh1770_get_prox_thres(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t bh1770_set_prox_thres(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t bh1770_prox_persistence_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t bh1770_prox_persistence_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static ssize_t bh1770_prox_abs_thres_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t bh1770_prox_abs_thres_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static ssize_t bh1770_chip_id_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t bh1770_lux_calib_default_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t bh1770_lux_calib_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t bh1770_lux_calib_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static ssize_t bh1770_get_lux_rate_avail(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t bh1770_get_lux_rate(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t bh1770_set_lux_rate(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t bh1770_get_lux_thresh_above(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t bh1770_get_lux_thresh_below(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t bh1770_set_lux_thresh(struct bh1770_chip *chip, u16 *target,
const char *buf)
static ssize_t bh1770_set_lux_thresh_above(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static ssize_t bh1770_set_lux_thresh_below(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static DEVICE_ATTR(prox0_raw_en, S_IRUGO | S_IWUSR, bh1770_prox_enable_show,
bh1770_prox_enable_store);
static DEVICE_ATTR(prox0_thresh_above1_value, S_IRUGO | S_IWUSR,
bh1770_prox_abs_thres_show,
bh1770_prox_abs_thres_store);
static DEVICE_ATTR(prox0_thresh_above0_value, S_IRUGO | S_IWUSR,
bh1770_get_prox_thres,
bh1770_set_prox_thres);
static DEVICE_ATTR(prox0_raw, S_IRUGO, bh1770_prox_result_show, NULL);
static DEVICE_ATTR(prox0_sensor_range, S_IRUGO, bh1770_prox_range_show, NULL);
static DEVICE_ATTR(prox0_thresh_above_count, S_IRUGO | S_IWUSR,
bh1770_prox_persistence_show,
bh1770_prox_persistence_store);
static DEVICE_ATTR(prox0_rate_above, S_IRUGO | S_IWUSR,
bh1770_get_prox_rate_above,
bh1770_set_prox_rate_above);
static DEVICE_ATTR(prox0_rate_below, S_IRUGO | S_IWUSR,
bh1770_get_prox_rate_below,
bh1770_set_prox_rate_below);
static DEVICE_ATTR(prox0_rate_avail, S_IRUGO, bh1770_get_prox_rate_avail, NULL);
static DEVICE_ATTR(lux0_calibscale, S_IRUGO | S_IWUSR, bh1770_lux_calib_show,
bh1770_lux_calib_store);
static DEVICE_ATTR(lux0_calibscale_default, S_IRUGO,
bh1770_lux_calib_default_show,
NULL);
static DEVICE_ATTR(lux0_input, S_IRUGO, bh1770_lux_result_show, NULL);
static DEVICE_ATTR(lux0_sensor_range, S_IRUGO, bh1770_lux_range_show, NULL);
static DEVICE_ATTR(lux0_rate, S_IRUGO | S_IWUSR, bh1770_get_lux_rate,
bh1770_set_lux_rate);
static DEVICE_ATTR(lux0_rate_avail, S_IRUGO, bh1770_get_lux_rate_avail, NULL);
static DEVICE_ATTR(lux0_thresh_above_value, S_IRUGO | S_IWUSR,
bh1770_get_lux_thresh_above,
bh1770_set_lux_thresh_above);
static DEVICE_ATTR(lux0_thresh_below_value, S_IRUGO | S_IWUSR,
bh1770_get_lux_thresh_below,
bh1770_set_lux_thresh_below);
static DEVICE_ATTR(chip_id, S_IRUGO, bh1770_chip_id_show, NULL);
static DEVICE_ATTR(power_state, S_IRUGO | S_IWUSR, bh1770_power_state_show,
bh1770_power_state_store);
static struct attribute *sysfs_attrs[] = ;
static struct attribute_group bh1770_attribute_group = ;
static int __devinit bh1770_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit bh1770_remove(struct i2c_client *client)
static int bh1770_suspend(struct device *dev)
static int bh1770_resume(struct device *dev)
#define bh1770_suspend	NULL
#define bh1770_shutdown NULL
#define bh1770_resume	NULL
static int bh1770_runtime_suspend(struct device *dev)
static int bh1770_runtime_resume(struct device *dev)
static const struct i2c_device_id bh1770_id[] = ;
MODULE_DEVICE_TABLE(i2c, bh1770_id);
static const struct dev_pm_ops bh1770_pm_ops = ;
static struct i2c_driver bh1770_driver = ;
static int __init bh1770_init(void)
static void __exit bh1770_exit(void)
MODULE_DESCRIPTION("BH1770GLC / SFH7770 combined ALS and proximity sensor");
MODULE_AUTHOR("Samu Onkalo, Nokia Corporation");
MODULE_LICENSE("GPL v2");
module_init(bh1770_init);
module_exit(bh1770_exit);
