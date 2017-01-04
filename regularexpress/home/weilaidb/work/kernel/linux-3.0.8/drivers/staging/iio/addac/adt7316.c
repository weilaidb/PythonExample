#define ADT7316_INT_STAT1		0x0
#define ADT7316_INT_STAT2		0x1
#define ADT7316_LSB_IN_TEMP_VDD		0x3
#define ADT7316_LSB_IN_TEMP_MASK	0x3
#define ADT7316_LSB_VDD_MASK		0xC
#define ADT7316_LSB_VDD_OFFSET		2
#define ADT7316_LSB_EX_TEMP_AIN		0x4
#define ADT7316_LSB_EX_TEMP_MASK	0x3
#define ADT7516_LSB_AIN_SHIFT		2
#define ADT7316_AD_MSB_DATA_BASE        0x6
#define ADT7316_AD_MSB_DATA_REGS        3
#define ADT7516_AD_MSB_DATA_REGS        6
#define ADT7316_MSB_VDD			0x6
#define ADT7316_MSB_IN_TEMP		0x7
#define ADT7316_MSB_EX_TEMP		0x8
#define ADT7516_MSB_AIN1		0x8
#define ADT7516_MSB_AIN2		0x9
#define ADT7516_MSB_AIN3		0xA
#define ADT7516_MSB_AIN4		0xB
#define ADT7316_DA_DATA_BASE		0x10
#define ADT7316_DA_MSB_DATA_REGS	4
#define ADT7316_LSB_DAC_A		0x10
#define ADT7316_MSB_DAC_A		0x11
#define ADT7316_LSB_DAC_B		0x12
#define ADT7316_MSB_DAC_B		0x13
#define ADT7316_LSB_DAC_C		0x14
#define ADT7316_MSB_DAC_C		0x15
#define ADT7316_LSB_DAC_D		0x16
#define ADT7316_MSB_DAC_D		0x17
#define ADT7316_CONFIG1			0x18
#define ADT7316_CONFIG2			0x19
#define ADT7316_CONFIG3			0x1A
#define ADT7316_LDAC_CONFIG		0x1B
#define ADT7316_DAC_CONFIG		0x1C
#define ADT7316_INT_MASK1		0x1D
#define ADT7316_INT_MASK2		0x1E
#define ADT7316_IN_TEMP_OFFSET		0x1F
#define ADT7316_EX_TEMP_OFFSET		0x20
#define ADT7316_IN_ANALOG_TEMP_OFFSET	0x21
#define ADT7316_EX_ANALOG_TEMP_OFFSET	0x22
#define ADT7316_VDD_HIGH		0x23
#define ADT7316_VDD_LOW			0x24
#define ADT7316_IN_TEMP_HIGH		0x25
#define ADT7316_IN_TEMP_LOW		0x26
#define ADT7316_EX_TEMP_HIGH		0x27
#define ADT7316_EX_TEMP_LOW		0x28
#define ADT7516_AIN2_HIGH		0x2B
#define ADT7516_AIN2_LOW		0x2C
#define ADT7516_AIN3_HIGH		0x2D
#define ADT7516_AIN3_LOW		0x2E
#define ADT7516_AIN4_HIGH		0x2F
#define ADT7516_AIN4_LOW		0x30
#define ADT7316_DEVICE_ID		0x4D
#define ADT7316_MANUFACTURE_ID		0x4E
#define ADT7316_DEVICE_REV		0x4F
#define ADT7316_SPI_LOCK_STAT		0x7F
#define ADT7316_EN			0x1
#define ADT7516_SEL_EX_TEMP		0x4
#define ADT7516_SEL_AIN1_2_EX_TEMP_MASK	0x6
#define ADT7516_SEL_AIN3		0x8
#define ADT7316_INT_EN			0x20
#define ADT7316_INT_POLARITY		0x40
#define ADT7316_PD			0x80
#define ADT7316_AD_SINGLE_CH_MASK	0x3
#define ADT7516_AD_SINGLE_CH_MASK	0x7
#define ADT7316_AD_SINGLE_CH_VDD	0
#define ADT7316_AD_SINGLE_CH_IN		1
#define ADT7316_AD_SINGLE_CH_EX		2
#define ADT7516_AD_SINGLE_CH_AIN1	2
#define ADT7516_AD_SINGLE_CH_AIN2	3
#define ADT7516_AD_SINGLE_CH_AIN3	4
#define ADT7516_AD_SINGLE_CH_AIN4	5
#define ADT7316_AD_SINGLE_CH_MODE	0x10
#define ADT7316_DISABLE_AVERAGING	0x20
#define ADT7316_EN_SMBUS_TIMEOUT	0x40
#define ADT7316_RESET			0x80
#define ADT7316_ADCLK_22_5		0x1
#define ADT7316_DA_HIGH_RESOLUTION	0x2
#define ADT7316_DA_EN_VIA_DAC_LDCA	0x4
#define ADT7516_AIN_IN_VREF		0x10
#define ADT7316_EN_IN_TEMP_PROP_DACA	0x20
#define ADT7316_EN_EX_TEMP_PROP_DACB	0x40
#define ADT7316_DA_2VREF_CH_MASK	0xF
#define ADT7316_DA_EN_MODE_MASK		0x30
#define ADT7316_DA_EN_MODE_SINGLE	0x00
#define ADT7316_DA_EN_MODE_AB_CD	0x10
#define ADT7316_DA_EN_MODE_ABCD		0x20
#define ADT7316_DA_EN_MODE_LDAC		0x30
#define ADT7316_VREF_BYPASS_DAC_AB	0x40
#define ADT7316_VREF_BYPASS_DAC_CD	0x80
#define ADT7316_LDAC_EN_DA_MASK		0xF
#define ADT7316_DAC_IN_VREF		0x10
#define ADT7516_DAC_AB_IN_VREF		0x10
#define ADT7516_DAC_CD_IN_VREF		0x20
#define ADT7516_DAC_IN_VREF_OFFSET	4
#define ADT7516_DAC_IN_VREF_MASK	0x30
#define ADT7316_INT_MASK2_VDD		0x10
#define ADT7316_VALUE_MASK		0xfff
#define ADT7316_T_VALUE_SIGN		0x400
#define ADT7316_T_VALUE_FLOAT_OFFSET	2
#define ADT7316_T_VALUE_FLOAT_MASK	0x2
#define ID_ADT7316		0x1
#define ID_ADT7317		0x2
#define ID_ADT7318		0x3
#define ID_ADT7516		0x11
#define ID_ADT7517		0x12
#define ID_ADT7519		0x14
#define ID_FAMILY_MASK		0xF0
#define ID_ADT73XX		0x0
#define ID_ADT75XX		0x10
struct adt7316_chip_info ;
#define ADT7316_IN_TEMP_HIGH_INT_MASK	0x1
#define ADT7316_IN_TEMP_LOW_INT_MASK	0x2
#define ADT7316_EX_TEMP_HIGH_INT_MASK	0x4
#define ADT7316_EX_TEMP_LOW_INT_MASK	0x8
#define ADT7316_EX_TEMP_FAULT_INT_MASK	0x10
#define ADT7516_AIN1_INT_MASK		0x4
#define ADT7516_AIN2_INT_MASK		0x20
#define ADT7516_AIN3_INT_MASK		0x40
#define ADT7516_AIN4_INT_MASK		0x80
#define ADT7316_VDD_INT_MASK		0x100
#define ADT7316_TEMP_INT_MASK		0x1F
#define ADT7516_AIN_INT_MASK		0xE0
#define ADT7316_TEMP_AIN_INT_MASK	\
(ADT7316_TEMP_INT_MASK | ADT7316_TEMP_INT_MASK)
struct adt7316_limit_regs ;
static ssize_t adt7316_show_enabled(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t _adt7316_store_enabled(struct adt7316_chip_info *chip,
int enable)
static ssize_t adt7316_store_enabled(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(enabled, S_IRUGO | S_IWUSR,
adt7316_show_enabled,
adt7316_store_enabled,
0);
static ssize_t adt7316_show_select_ex_temp(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt7316_store_select_ex_temp(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(select_ex_temp, S_IRUGO | S_IWUSR,
adt7316_show_select_ex_temp,
adt7316_store_select_ex_temp,
0);
static ssize_t adt7316_show_mode(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt7316_store_mode(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(mode, S_IRUGO | S_IWUSR,
adt7316_show_mode,
adt7316_store_mode,
0);
static ssize_t adt7316_show_all_modes(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(all_modes, S_IRUGO, adt7316_show_all_modes, NULL, 0);
static ssize_t adt7316_show_ad_channel(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt7316_store_ad_channel(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(ad_channel, S_IRUGO | S_IWUSR,
adt7316_show_ad_channel,
adt7316_store_ad_channel,
0);
static ssize_t adt7316_show_all_ad_channels(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(all_ad_channels, S_IRUGO,
adt7316_show_all_ad_channels, NULL, 0);
static ssize_t adt7316_show_disable_averaging(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt7316_store_disable_averaging(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(disable_averaging, S_IRUGO | S_IWUSR,
adt7316_show_disable_averaging,
adt7316_store_disable_averaging,
0);
static ssize_t adt7316_show_enable_smbus_timeout(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt7316_store_enable_smbus_timeout(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(enable_smbus_timeout, S_IRUGO | S_IWUSR,
adt7316_show_enable_smbus_timeout,
adt7316_store_enable_smbus_timeout,
0);
static ssize_t adt7316_store_reset(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(reset, S_IWUSR,
NULL,
adt7316_store_reset,
0);
static ssize_t adt7316_show_powerdown(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt7316_store_powerdown(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(powerdown, S_IRUGO | S_IWUSR,
adt7316_show_powerdown,
adt7316_store_powerdown,
0);
static ssize_t adt7316_show_fast_ad_clock(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt7316_store_fast_ad_clock(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(fast_ad_clock, S_IRUGO | S_IWUSR,
adt7316_show_fast_ad_clock,
adt7316_store_fast_ad_clock,
0);
static ssize_t adt7316_show_da_high_resolution(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt7316_store_da_high_resolution(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(da_high_resolution, S_IRUGO | S_IWUSR,
adt7316_show_da_high_resolution,
adt7316_store_da_high_resolution,
0);
static ssize_t adt7316_show_AIN_internal_Vref(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt7316_store_AIN_internal_Vref(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(AIN_internal_Vref, S_IRUGO | S_IWUSR,
adt7316_show_AIN_internal_Vref,
adt7316_store_AIN_internal_Vref,
0);
static ssize_t adt7316_show_enable_prop_DACA(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt7316_store_enable_prop_DACA(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(enable_proportion_DACA, S_IRUGO | S_IWUSR,
adt7316_show_enable_prop_DACA,
adt7316_store_enable_prop_DACA,
0);
static ssize_t adt7316_show_enable_prop_DACB(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt7316_store_enable_prop_DACB(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(enable_proportion_DACB, S_IRUGO | S_IWUSR,
adt7316_show_enable_prop_DACB,
adt7316_store_enable_prop_DACB,
0);
static ssize_t adt7316_show_DAC_2Vref_ch_mask(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt7316_store_DAC_2Vref_ch_mask(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(DAC_2Vref_channels_mask, S_IRUGO | S_IWUSR,
adt7316_show_DAC_2Vref_ch_mask,
adt7316_store_DAC_2Vref_ch_mask,
0);
static ssize_t adt7316_show_DAC_update_mode(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt7316_store_DAC_update_mode(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(DAC_update_mode, S_IRUGO | S_IWUSR,
adt7316_show_DAC_update_mode,
adt7316_store_DAC_update_mode,
0);
static ssize_t adt7316_show_all_DAC_update_modes(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(all_DAC_update_modes, S_IRUGO,
adt7316_show_all_DAC_update_modes, NULL, 0);
static ssize_t adt7316_store_update_DAC(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(update_DAC, S_IRUGO | S_IWUSR,
NULL,
adt7316_store_update_DAC,
0);
static ssize_t adt7316_show_DA_AB_Vref_bypass(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt7316_store_DA_AB_Vref_bypass(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(DA_AB_Vref_bypass, S_IRUGO | S_IWUSR,
adt7316_show_DA_AB_Vref_bypass,
adt7316_store_DA_AB_Vref_bypass,
0);
static ssize_t adt7316_show_DA_CD_Vref_bypass(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt7316_store_DA_CD_Vref_bypass(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(DA_CD_Vref_bypass, S_IRUGO | S_IWUSR,
adt7316_show_DA_CD_Vref_bypass,
adt7316_store_DA_CD_Vref_bypass,
0);
static ssize_t adt7316_show_DAC_internal_Vref(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt7316_store_DAC_internal_Vref(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(DAC_internal_Vref, S_IRUGO | S_IWUSR,
adt7316_show_DAC_internal_Vref,
adt7316_store_DAC_internal_Vref,
0);
static ssize_t adt7316_show_ad(struct adt7316_chip_info *chip,
int channel, char *buf)
static ssize_t adt7316_show_VDD(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(VDD, S_IRUGO, adt7316_show_VDD, NULL, 0);
static ssize_t adt7316_show_in_temp(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(in_temp, S_IRUGO, adt7316_show_in_temp, NULL, 0);
static ssize_t adt7316_show_ex_temp_AIN1(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(ex_temp_AIN1, S_IRUGO, adt7316_show_ex_temp_AIN1, NULL, 0);
static IIO_DEVICE_ATTR(ex_temp, S_IRUGO, adt7316_show_ex_temp_AIN1, NULL, 0);
static ssize_t adt7316_show_AIN2(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(AIN2, S_IRUGO, adt7316_show_AIN2, NULL, 0);
static ssize_t adt7316_show_AIN3(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(AIN3, S_IRUGO, adt7316_show_AIN3, NULL, 0);
static ssize_t adt7316_show_AIN4(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(AIN4, S_IRUGO, adt7316_show_AIN4, NULL, 0);
static ssize_t adt7316_show_temp_offset(struct adt7316_chip_info *chip,
int offset_addr, char *buf)
static ssize_t adt7316_store_temp_offset(struct adt7316_chip_info *chip,
int offset_addr, const char *buf, size_t len)
static ssize_t adt7316_show_in_temp_offset(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt7316_store_in_temp_offset(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(in_temp_offset, S_IRUGO | S_IWUSR,
adt7316_show_in_temp_offset,
adt7316_store_in_temp_offset, 0);
static ssize_t adt7316_show_ex_temp_offset(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt7316_store_ex_temp_offset(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(ex_temp_offset, S_IRUGO | S_IWUSR,
adt7316_show_ex_temp_offset,
adt7316_store_ex_temp_offset, 0);
static ssize_t adt7316_show_in_analog_temp_offset(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt7316_store_in_analog_temp_offset(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(in_analog_temp_offset, S_IRUGO | S_IWUSR,
adt7316_show_in_analog_temp_offset,
adt7316_store_in_analog_temp_offset, 0);
static ssize_t adt7316_show_ex_analog_temp_offset(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt7316_store_ex_analog_temp_offset(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(ex_analog_temp_offset, S_IRUGO | S_IWUSR,
adt7316_show_ex_analog_temp_offset,
adt7316_store_ex_analog_temp_offset, 0);
static ssize_t adt7316_show_DAC(struct adt7316_chip_info *chip,
int channel, char *buf)
static ssize_t adt7316_store_DAC(struct adt7316_chip_info *chip,
int channel, const char *buf, size_t len)
static ssize_t adt7316_show_DAC_A(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt7316_store_DAC_A(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(DAC_A, S_IRUGO | S_IWUSR, adt7316_show_DAC_A,
adt7316_store_DAC_A, 0);
static ssize_t adt7316_show_DAC_B(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt7316_store_DAC_B(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(DAC_B, S_IRUGO | S_IWUSR, adt7316_show_DAC_B,
adt7316_store_DAC_B, 0);
static ssize_t adt7316_show_DAC_C(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt7316_store_DAC_C(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(DAC_C, S_IRUGO | S_IWUSR, adt7316_show_DAC_C,
adt7316_store_DAC_C, 0);
static ssize_t adt7316_show_DAC_D(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt7316_store_DAC_D(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(DAC_D, S_IRUGO | S_IWUSR, adt7316_show_DAC_D,
adt7316_store_DAC_D, 0);
static ssize_t adt7316_show_device_id(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(device_id, S_IRUGO, adt7316_show_device_id, NULL, 0);
static ssize_t adt7316_show_manufactorer_id(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(manufactorer_id, S_IRUGO,
adt7316_show_manufactorer_id, NULL, 0);
static ssize_t adt7316_show_device_rev(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(device_rev, S_IRUGO, adt7316_show_device_rev, NULL, 0);
static ssize_t adt7316_show_bus_type(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(bus_type, S_IRUGO, adt7316_show_bus_type, NULL, 0);
static struct attribute *adt7316_attributes[] = ;
static const struct attribute_group adt7316_attribute_group = ;
static struct attribute *adt7516_attributes[] = ;
static const struct attribute_group adt7516_attribute_group = ;
static irqreturn_t adt7316_event_handler(int irq, void *private)
static ssize_t adt7316_show_int_mask(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt7316_set_int_mask(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static inline ssize_t adt7316_show_ad_bound(struct device *dev,
struct device_attribute *attr,
char *buf)
static inline ssize_t adt7316_set_ad_bound(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static ssize_t adt7316_show_int_enabled(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt7316_set_int_enabled(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(int_mask,
S_IRUGO | S_IWUSR,
adt7316_show_int_mask, adt7316_set_int_mask,
0);
static IIO_DEVICE_ATTR(in_temp_high_value,
S_IRUGO | S_IWUSR,
adt7316_show_ad_bound, adt7316_set_ad_bound,
ADT7316_IN_TEMP_HIGH);
static IIO_DEVICE_ATTR(in_temp_low_value,
S_IRUGO | S_IWUSR,
adt7316_show_ad_bound, adt7316_set_ad_bound,
ADT7316_IN_TEMP_LOW);
static IIO_DEVICE_ATTR(ex_temp_high_value,
S_IRUGO | S_IWUSR,
adt7316_show_ad_bound, adt7316_set_ad_bound,
ADT7316_EX_TEMP_HIGH);
static IIO_DEVICE_ATTR(ex_temp_low_value,
S_IRUGO | S_IWUSR,
adt7316_show_ad_bound, adt7316_set_ad_bound,
ADT7316_EX_TEMP_LOW);
static IIO_DEVICE_ATTR(ex_temp_ain1_high_value,
S_IRUGO | S_IWUSR,
adt7316_show_ad_bound, adt7316_set_ad_bound,
ADT7316_EX_TEMP_HIGH);
static IIO_DEVICE_ATTR(ex_temp_ain1_low_value,
S_IRUGO | S_IWUSR,
adt7316_show_ad_bound, adt7316_set_ad_bound,
ADT7316_EX_TEMP_LOW);
static IIO_DEVICE_ATTR(ain2_high_value,
S_IRUGO | S_IWUSR,
adt7316_show_ad_bound, adt7316_set_ad_bound,
ADT7516_AIN2_HIGH);
static IIO_DEVICE_ATTR(ain2_low_value,
S_IRUGO | S_IWUSR,
adt7316_show_ad_bound, adt7316_set_ad_bound,
ADT7516_AIN2_LOW);
static IIO_DEVICE_ATTR(ain3_high_value,
S_IRUGO | S_IWUSR,
adt7316_show_ad_bound, adt7316_set_ad_bound,
ADT7516_AIN3_HIGH);
static IIO_DEVICE_ATTR(ain3_low_value,
S_IRUGO | S_IWUSR,
adt7316_show_ad_bound, adt7316_set_ad_bound,
ADT7516_AIN3_LOW);
static IIO_DEVICE_ATTR(ain4_high_value,
S_IRUGO | S_IWUSR,
adt7316_show_ad_bound, adt7316_set_ad_bound,
ADT7516_AIN4_HIGH);
static IIO_DEVICE_ATTR(ain4_low_value,
S_IRUGO | S_IWUSR,
adt7316_show_ad_bound, adt7316_set_ad_bound,
ADT7516_AIN4_LOW);
static IIO_DEVICE_ATTR(int_enabled,
S_IRUGO | S_IWUSR,
adt7316_show_int_enabled,
adt7316_set_int_enabled, 0);
static struct attribute *adt7316_event_attributes[] = ;
static struct attribute_group adt7316_event_attribute_group = ;
static struct attribute *adt7516_event_attributes[] = ;
static struct attribute_group adt7516_event_attribute_group = ;
int adt7316_disable(struct device *dev)
EXPORT_SYMBOL(adt7316_disable);
int adt7316_enable(struct device *dev)
EXPORT_SYMBOL(adt7316_enable);
static const struct iio_info adt7316_info = ;
static const struct iio_info adt7516_info = ;
int __devinit adt7316_probe(struct device *dev, struct adt7316_bus *bus,
const char *name)
EXPORT_SYMBOL(adt7316_probe);
int __devexit adt7316_remove(struct device *dev)
EXPORT_SYMBOL(adt7316_remove);
MODULE_AUTHOR("Sonic Zhang <sonic.zhang@analog.com>");
MODULE_DESCRIPTION("Analog Devices ADT7316/7/8 and ADT7516/7/9 digital"
" temperature sensor, ADC and DAC driver");
MODULE_LICENSE("GPL v2");
