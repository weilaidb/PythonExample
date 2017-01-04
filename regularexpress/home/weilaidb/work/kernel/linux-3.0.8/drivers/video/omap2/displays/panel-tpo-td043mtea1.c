#define TPO_R02_MODE(x)		((x) & 7)
#define TPO_R02_MODE_800x480	7
#define TPO_R02_NCLK_RISING	BIT(3)
#define TPO_R02_HSYNC_HIGH	BIT(4)
#define TPO_R02_VSYNC_HIGH	BIT(5)
#define TPO_R03_NSTANDBY	BIT(0)
#define TPO_R03_EN_CP_CLK	BIT(1)
#define TPO_R03_EN_VGL_PUMP	BIT(2)
#define TPO_R03_EN_PWM		BIT(3)
#define TPO_R03_DRIVING_CAP_100	BIT(4)
#define TPO_R03_EN_PRE_CHARGE	BIT(6)
#define TPO_R03_SOFTWARE_CTL	BIT(7)
#define TPO_R04_NFLIP_H		BIT(0)
#define TPO_R04_NFLIP_V		BIT(1)
#define TPO_R04_CP_CLK_FREQ_1H	BIT(2)
#define TPO_R04_VGL_FREQ_1H	BIT(4)
#define TPO_R03_VAL_NORMAL (TPO_R03_NSTANDBY | TPO_R03_EN_CP_CLK | \
TPO_R03_EN_VGL_PUMP |  TPO_R03_EN_PWM | \
TPO_R03_DRIVING_CAP_100 | TPO_R03_EN_PRE_CHARGE | \
TPO_R03_SOFTWARE_CTL)
#define TPO_R03_VAL_STANDBY (TPO_R03_DRIVING_CAP_100 | \
TPO_R03_EN_PRE_CHARGE | TPO_R03_SOFTWARE_CTL)
static const u16 tpo_td043_def_gamma[12] = ;
struct tpo_td043_device ;
static int tpo_td043_write(struct spi_device *spi, u8 addr, u8 data)
static void tpo_td043_write_gamma(struct spi_device *spi, u16 gamma[12])
static int tpo_td043_write_mirror(struct spi_device *spi, bool h, bool v)
static int tpo_td043_set_hmirror(struct omap_dss_device *dssdev, bool enable)
static bool tpo_td043_get_hmirror(struct omap_dss_device *dssdev)
static ssize_t tpo_td043_vmirror_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t tpo_td043_vmirror_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t tpo_td043_mode_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t tpo_td043_mode_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t tpo_td043_gamma_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t tpo_td043_gamma_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(vmirror, S_IRUGO | S_IWUSR,
tpo_td043_vmirror_show, tpo_td043_vmirror_store);
static DEVICE_ATTR(mode, S_IRUGO | S_IWUSR,
tpo_td043_mode_show, tpo_td043_mode_store);
static DEVICE_ATTR(gamma, S_IRUGO | S_IWUSR,
tpo_td043_gamma_show, tpo_td043_gamma_store);
static struct attribute *tpo_td043_attrs[] = ;
static struct attribute_group tpo_td043_attr_group = ;
static const struct omap_video_timings tpo_td043_timings = ;
static int tpo_td043_power_on(struct omap_dss_device *dssdev)
static void tpo_td043_power_off(struct omap_dss_device *dssdev)
static int tpo_td043_enable(struct omap_dss_device *dssdev)
static void tpo_td043_disable(struct omap_dss_device *dssdev)
static int tpo_td043_suspend(struct omap_dss_device *dssdev)
static int tpo_td043_resume(struct omap_dss_device *dssdev)
static int tpo_td043_probe(struct omap_dss_device *dssdev)
static void tpo_td043_remove(struct omap_dss_device *dssdev)
static struct omap_dss_driver tpo_td043_driver = ;
static int tpo_td043_spi_probe(struct spi_device *spi)
static int __devexit tpo_td043_spi_remove(struct spi_device *spi)
static struct spi_driver tpo_td043_spi_driver = ;
static int __init tpo_td043_init(void)
static void __exit tpo_td043_exit(void)
module_init(tpo_td043_init);
module_exit(tpo_td043_exit);
MODULE_AUTHOR("Gražvydas Ignotas <notasas@gmail.com>");
MODULE_DESCRIPTION("TPO TD043MTEA1 LCD Driver");
MODULE_LICENSE("GPL");
