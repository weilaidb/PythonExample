#define APDS990X_ENABLE	 0x00
#define APDS990X_ATIME	 0x01
#define APDS990X_PTIME	 0x02
#define APDS990X_WTIME	 0x03
#define APDS990X_AILTL	 0x04
#define APDS990X_AILTH	 0x05
#define APDS990X_AIHTL	 0x06
#define APDS990X_AIHTH	 0x07
#define APDS990X_PILTL	 0x08
#define APDS990X_PILTH	 0x09
#define APDS990X_PIHTL	 0x0a
#define APDS990X_PIHTH	 0x0b
#define APDS990X_PERS	 0x0c
#define APDS990X_CONFIG	 0x0d
#define APDS990X_PPCOUNT 0x0e
#define APDS990X_CONTROL 0x0f
#define APDS990X_REV	 0x11
#define APDS990X_ID	 0x12
#define APDS990X_STATUS	 0x13
#define APDS990X_CDATAL	 0x14
#define APDS990X_CDATAH	 0x15
#define APDS990X_IRDATAL 0x16
#define APDS990X_IRDATAH 0x17
#define APDS990X_PDATAL	 0x18
#define APDS990X_PDATAH	 0x19
#define APDS990X_MAX_AGAIN	3
#define APDS990X_EN_PIEN	(0x1 << 5)
#define APDS990X_EN_AIEN	(0x1 << 4)
#define APDS990X_EN_WEN		(0x1 << 3)
#define APDS990X_EN_PEN		(0x1 << 2)
#define APDS990X_EN_AEN		(0x1 << 1)
#define APDS990X_EN_PON		(0x1 << 0)
#define APDS990X_EN_DISABLE_ALL 0
#define APDS990X_ST_PINT	(0x1 << 5)
#define APDS990X_ST_AINT	(0x1 << 4)
#define APDS990x_CMD_TYPE_MASK	(0x03 << 5)
#define APDS990x_CMD_TYPE_RB	(0x00 << 5)
#define APDS990x_CMD_TYPE_INC	(0x01 << 5)
#define APDS990x_CMD_TYPE_SPE	(0x03 << 5)
#define APDS990x_ADDR_SHIFT	0
#define APDS990x_CMD		0x80
#define APDS990X_INT_ACK_ALS	0x6
#define APDS990X_INT_ACK_PS	0x5
#define APDS990X_INT_ACK_BOTH	0x7
#define APDS990X_PTIME_DEFAULT	0xff
#define APDS990X_WTIME_DEFAULT	0xee
#define APDS990X_TIME_TO_ADC	1024
#define APDS990X_APERS_SHIFT	0
#define APDS990X_PPERS_SHIFT	4
#define APDS990X_ID_0		0x0
#define APDS990X_ID_4		0x4
#define APDS990X_ID_29		0x29
#define APDS_PGAIN_1X	       0x0
#define APDS_PDIODE_IR	       0x2
#define APDS990X_LUX_OUTPUT_SCALE 10
struct reverse_factors ;
struct apds990x_chip ;
#define APDS_CALIB_SCALER		8192
#define APDS_LUX_NEUTRAL_CALIB_VALUE	(1 * APDS_CALIB_SCALER)
#define APDS_PROX_NEUTRAL_CALIB_VALUE	(1 * APDS_CALIB_SCALER)
#define APDS_PROX_DEF_THRES		600
#define APDS_PROX_HYSTERESIS		50
#define APDS_LUX_DEF_THRES_HI		101
#define APDS_LUX_DEF_THRES_LO		100
#define APDS_DEFAULT_PROX_PERS		1
#define APDS_TIMEOUT			2000
#define APDS_STARTUP_DELAY		25000
#define APDS_RANGE			65535
#define APDS_PROX_RANGE			1023
#define APDS_LUX_GAIN_LO_LIMIT		100
#define APDS_LUX_GAIN_LO_LIMIT_STRICT	25
#define TIMESTEP			87
#define TIME_STEP_SCALER		32
#define APDS_LUX_AVERAGING_TIME		50
#define APDS_LUX_DEFAULT_RATE		200
static const u8 again[]	= ;
static const u8 ir_currents[]	= ;
static const u16 arates_hz[] = ;
static const u8 apersis[] = ;
static const char reg_vcc[] = "Vdd";
static const char reg_vled[] = "Vled";
static int apds990x_read_byte(struct apds990x_chip *chip, u8 reg, u8 *data)
static int apds990x_read_word(struct apds990x_chip *chip, u8 reg, u16 *data)
static int apds990x_write_byte(struct apds990x_chip *chip, u8 reg, u8 data)
static int apds990x_write_word(struct apds990x_chip *chip, u8 reg, u16 data)
static int apds990x_mode_on(struct apds990x_chip *chip)
static u16 apds990x_lux_to_threshold(struct apds990x_chip *chip, u32 lux)
static inline int apds990x_set_atime(struct apds990x_chip *chip, u32 time_ms)
static int apds990x_refresh_pthres(struct apds990x_chip *chip, int data)
static int apds990x_refresh_athres(struct apds990x_chip *chip)
static void apds990x_force_a_refresh(struct apds990x_chip *chip)
static void apds990x_force_p_refresh(struct apds990x_chip *chip)
static int apds990x_calc_again(struct apds990x_chip *chip)
static int apds990x_get_lux(struct apds990x_chip *chip, int clear, int ir)
static int apds990x_ack_int(struct apds990x_chip *chip, u8 mode)
static irqreturn_t apds990x_irq(int irq, void *data)
static int apds990x_configure(struct apds990x_chip *chip)
static int apds990x_detect(struct apds990x_chip *chip)
#if defined(CONFIG_PM) || defined(CONFIG_PM_RUNTIME)
static int apds990x_chip_on(struct apds990x_chip *chip)
static int apds990x_chip_off(struct apds990x_chip *chip)
static ssize_t apds990x_lux_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(lux0_input, S_IRUGO, apds990x_lux_show, NULL);
static ssize_t apds990x_lux_range_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(lux0_sensor_range, S_IRUGO, apds990x_lux_range_show, NULL);
static ssize_t apds990x_lux_calib_format_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(lux0_calibscale_default, S_IRUGO,
apds990x_lux_calib_format_show, NULL);
static ssize_t apds990x_lux_calib_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t apds990x_lux_calib_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static DEVICE_ATTR(lux0_calibscale, S_IRUGO | S_IWUSR, apds990x_lux_calib_show,
apds990x_lux_calib_store);
static ssize_t apds990x_rate_avail(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t apds990x_rate_show(struct device *dev,
struct device_attribute *attr, char *buf)
static int apds990x_set_arate(struct apds990x_chip *chip, int rate)
static ssize_t apds990x_rate_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static DEVICE_ATTR(lux0_rate_avail, S_IRUGO, apds990x_rate_avail, NULL);
static DEVICE_ATTR(lux0_rate, S_IRUGO | S_IWUSR, apds990x_rate_show,
apds990x_rate_store);
static ssize_t apds990x_prox_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(prox0_raw, S_IRUGO, apds990x_prox_show, NULL);
static ssize_t apds990x_prox_range_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(prox0_sensor_range, S_IRUGO, apds990x_prox_range_show, NULL);
static ssize_t apds990x_prox_enable_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t apds990x_prox_enable_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static DEVICE_ATTR(prox0_raw_en, S_IRUGO | S_IWUSR, apds990x_prox_enable_show,
apds990x_prox_enable_store);
static const char reporting_modes[][9] = ;
static ssize_t apds990x_prox_reporting_mode_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t apds990x_prox_reporting_mode_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static DEVICE_ATTR(prox0_reporting_mode, S_IRUGO | S_IWUSR,
apds990x_prox_reporting_mode_show,
apds990x_prox_reporting_mode_store);
static ssize_t apds990x_prox_reporting_avail_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(prox0_reporting_mode_avail, S_IRUGO | S_IWUSR,
apds990x_prox_reporting_avail_show, NULL);
static ssize_t apds990x_lux_thresh_above_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t apds990x_lux_thresh_below_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t apds990x_set_lux_thresh(struct apds990x_chip *chip, u32 *target,
const char *buf)
static ssize_t apds990x_lux_thresh_above_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static ssize_t apds990x_lux_thresh_below_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static DEVICE_ATTR(lux0_thresh_above_value, S_IRUGO | S_IWUSR,
apds990x_lux_thresh_above_show,
apds990x_lux_thresh_above_store);
static DEVICE_ATTR(lux0_thresh_below_value, S_IRUGO | S_IWUSR,
apds990x_lux_thresh_below_show,
apds990x_lux_thresh_below_store);
static ssize_t apds990x_prox_threshold_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t apds990x_prox_threshold_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static DEVICE_ATTR(prox0_thresh_above_value, S_IRUGO | S_IWUSR,
apds990x_prox_threshold_show,
apds990x_prox_threshold_store);
static ssize_t apds990x_power_state_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t apds990x_power_state_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static DEVICE_ATTR(power_state, S_IRUGO | S_IWUSR,
apds990x_power_state_show,
apds990x_power_state_store);
static ssize_t apds990x_chip_id_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(chip_id, S_IRUGO, apds990x_chip_id_show, NULL);
static struct attribute *sysfs_attrs_ctrl[] = ;
static struct attribute_group apds990x_attribute_group[] = ;
static int __devinit apds990x_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit apds990x_remove(struct i2c_client *client)
static int apds990x_suspend(struct device *dev)
static int apds990x_resume(struct device *dev)
#define apds990x_suspend  NULL
#define apds990x_resume	  NULL
#define apds990x_shutdown NULL
static int apds990x_runtime_suspend(struct device *dev)
static int apds990x_runtime_resume(struct device *dev)
static const struct i2c_device_id apds990x_id[] = ;
MODULE_DEVICE_TABLE(i2c, apds990x_id);
static const struct dev_pm_ops apds990x_pm_ops = ;
static struct i2c_driver apds990x_driver = ;
static int __init apds990x_init(void)
static void __exit apds990x_exit(void)
MODULE_DESCRIPTION("APDS990X combined ALS and proximity sensor");
MODULE_AUTHOR("Samu Onkalo, Nokia Corporation");
MODULE_LICENSE("GPL v2");
module_init(apds990x_init);
module_exit(apds990x_exit);
