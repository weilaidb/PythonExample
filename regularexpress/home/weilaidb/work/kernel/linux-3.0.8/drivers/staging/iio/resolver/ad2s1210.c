#define DRV_NAME "ad2s1210"
#define DEF_CONTROL		0x7E
#define MSB_IS_HIGH		0x80
#define MSB_IS_LOW		0x7F
#define PHASE_LOCK_RANGE_44	0x20
#define ENABLE_HYSTERESIS	0x10
#define SET_ENRES1		0x08
#define SET_ENRES0		0x04
#define SET_RES1		0x02
#define SET_RES0		0x01
#define SET_ENRESOLUTION	(SET_ENRES1 | SET_ENRES0)
#define SET_RESOLUTION		(SET_RES1 | SET_RES0)
#define REG_POSITION		0x80
#define REG_VELOCITY		0x82
#define REG_LOS_THRD		0x88
#define REG_DOS_OVR_THRD	0x89
#define REG_DOS_MIS_THRD	0x8A
#define REG_DOS_RST_MAX_THRD	0x8B
#define REG_DOS_RST_MIN_THRD	0x8C
#define REG_LOT_HIGH_THRD	0x8D
#define REG_LOT_LOW_THRD	0x8E
#define REG_EXCIT_FREQ		0x91
#define REG_CONTROL		0x92
#define REG_SOFT_RESET		0xF0
#define REG_FAULT		0xFF
#define AD2S1210_SAA		3
#if defined(CONFIG_AD2S1210_GPIO_INPUT) || defined(CONFIG_AD2S1210_GPIO_OUTPUT)
# define AD2S1210_RES		2
# define AD2S1210_RES		0
#define AD2S1210_PN		(AD2S1210_SAA + AD2S1210_RES)
#define AD2S1210_MIN_CLKIN	6144000
#define AD2S1210_MAX_CLKIN	10240000
#define AD2S1210_MIN_EXCIT	2000
#define AD2S1210_MAX_EXCIT	20000
#define AD2S1210_MIN_FCW	0x4
#define AD2S1210_MAX_FCW	0x50
#define AD2S1210_DEF_CLKIN	8192000
#define AD2S1210_DEF_TCK	(1000000000/AD2S1210_DEF_CLKIN)
#define AD2S1210_DEF_EXCIT	10000
enum ad2s1210_mode ;
enum ad2s1210_res ;
static unsigned int resolution_value[] = ;
struct ad2s1210_state ;
static inline void start_sample(struct ad2s1210_state *st)
static inline void stop_sample(struct ad2s1210_state *st)
static inline void set_mode(enum ad2s1210_mode mode, struct ad2s1210_state *st)
static int config_write(struct ad2s1210_state *st,
unsigned char data)
static int config_read(struct ad2s1210_state *st,
unsigned char address,
unsigned char *data)
static inline void update_frequency_control_word(struct ad2s1210_state *st)
#if defined(CONFIG_AD2S1210_GPIO_INPUT)
static inline unsigned char read_resolution_pin(struct ad2s1210_state *st)
#elif defined(CONFIG_AD2S1210_GPIO_OUTPUT)
static inline void set_resolution_pin(struct ad2s1210_state *st)
static inline void soft_reset(struct ad2s1210_state *st)
static ssize_t ad2s1210_show_raw(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ad2s1210_store_raw(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static ssize_t ad2s1210_store_softreset(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static ssize_t ad2s1210_show_fclkin(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ad2s1210_store_fclkin(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static ssize_t ad2s1210_show_fexcit(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ad2s1210_store_fexcit(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static ssize_t ad2s1210_show_control(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ad2s1210_store_control(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static ssize_t ad2s1210_show_resolution(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ad2s1210_store_resolution(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static ssize_t ad2s1210_show_fault(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ad2s1210_clear_fault(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static ssize_t ad2s1210_show_reg(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ad2s1210_store_reg(struct device *dev,
struct device_attribute *attr, const char *buf, size_t len)
static ssize_t ad2s1210_show_pos(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ad2s1210_show_vel(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ad2s1210_show_pos_vel(struct device *dev,
struct device_attribute *attr, char *buf)
static IIO_CONST_ATTR(description,
"Variable Resolution, 10-Bit to 16Bit R/D\n\
Converter with Reference Oscillator");
static IIO_DEVICE_ATTR(raw_io, S_IRUGO | S_IWUSR,
ad2s1210_show_raw, ad2s1210_store_raw, 0);
static IIO_DEVICE_ATTR(reset, S_IWUSR,
NULL, ad2s1210_store_softreset, 0);
static IIO_DEVICE_ATTR(fclkin, S_IRUGO | S_IWUSR,
ad2s1210_show_fclkin, ad2s1210_store_fclkin, 0);
static IIO_DEVICE_ATTR(fexcit, S_IRUGO | S_IWUSR,
ad2s1210_show_fexcit,	ad2s1210_store_fexcit, 0);
static IIO_DEVICE_ATTR(control, S_IRUGO | S_IWUSR,
ad2s1210_show_control, ad2s1210_store_control, 0);
static IIO_DEVICE_ATTR(bits, S_IRUGO | S_IWUSR,
ad2s1210_show_resolution, ad2s1210_store_resolution, 0);
static IIO_DEVICE_ATTR(fault, S_IRUGO | S_IWUSR,
ad2s1210_show_fault, ad2s1210_clear_fault, 0);
static IIO_DEVICE_ATTR(pos, S_IRUGO,
ad2s1210_show_pos, NULL, 0);
static IIO_DEVICE_ATTR(vel, S_IRUGO,
ad2s1210_show_vel, NULL, 0);
static IIO_DEVICE_ATTR(pos_vel, S_IRUGO,
ad2s1210_show_pos_vel, NULL, 0);
static IIO_DEVICE_ATTR(los_thrd, S_IRUGO | S_IWUSR,
ad2s1210_show_reg, ad2s1210_store_reg, REG_LOS_THRD);
static IIO_DEVICE_ATTR(dos_ovr_thrd, S_IRUGO | S_IWUSR,
ad2s1210_show_reg, ad2s1210_store_reg, REG_DOS_OVR_THRD);
static IIO_DEVICE_ATTR(dos_mis_thrd, S_IRUGO | S_IWUSR,
ad2s1210_show_reg, ad2s1210_store_reg, REG_DOS_MIS_THRD);
static IIO_DEVICE_ATTR(dos_rst_max_thrd, S_IRUGO | S_IWUSR,
ad2s1210_show_reg, ad2s1210_store_reg, REG_DOS_RST_MAX_THRD);
static IIO_DEVICE_ATTR(dos_rst_min_thrd, S_IRUGO | S_IWUSR,
ad2s1210_show_reg, ad2s1210_store_reg, REG_DOS_RST_MIN_THRD);
static IIO_DEVICE_ATTR(lot_high_thrd, S_IRUGO | S_IWUSR,
ad2s1210_show_reg, ad2s1210_store_reg, REG_LOT_HIGH_THRD);
static IIO_DEVICE_ATTR(lot_low_thrd, S_IRUGO | S_IWUSR,
ad2s1210_show_reg, ad2s1210_store_reg, REG_LOT_LOW_THRD);
static struct attribute *ad2s1210_attributes[] = ;
static const struct attribute_group ad2s1210_attribute_group = ;
static int __devinit ad2s1210_initial(struct ad2s1210_state *st)
static const struct iio_info ad2s1210_info = ;
static int __devinit ad2s1210_probe(struct spi_device *spi)
static int __devexit ad2s1210_remove(struct spi_device *spi)
static struct spi_driver ad2s1210_driver = ;
static __init int ad2s1210_spi_init(void)
module_init(ad2s1210_spi_init);
static __exit void ad2s1210_spi_exit(void)
module_exit(ad2s1210_spi_exit);
MODULE_AUTHOR("Graff Yang <graff.yang@gmail.com>");
MODULE_DESCRIPTION("Analog Devices AD2S1210 Resolver to Digital SPI driver");
MODULE_LICENSE("GPL v2");
