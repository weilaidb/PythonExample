#define pr_fmt(fmt) "intel_mid_thermal: " fmt
#define MSIC_THERMAL_SENSORS	4
#define MSIC_THERM_ADC1CNTL1	0x1C0
#define MSIC_ADC_ENBL		0x10
#define MSIC_ADC_START		0x08
#define MSIC_THERM_ADC1CNTL3	0x1C2
#define MSIC_ADCTHERM_ENBL	0x04
#define MSIC_ADCRRDATA_ENBL	0x05
#define MSIC_CHANL_MASK_VAL	0x0F
#define MSIC_STOPBIT_MASK	16
#define MSIC_ADCTHERM_MASK	4
#define ADC_CHANLS_MAX		15
#define ADC_LOOP_MAX		(ADC_CHANLS_MAX - MSIC_THERMAL_SENSORS)
#define SKIN_SENSOR0_CODE	0x08
#define SKIN_SENSOR1_CODE	0x09
#define SYS_SENSOR_CODE		0x0A
#define MSIC_DIE_SENSOR_CODE	0x03
#define SKIN_THERM_SENSOR0	0
#define SKIN_THERM_SENSOR1	1
#define SYS_THERM_SENSOR2	2
#define MSIC_DIE_THERM_SENSOR3	3
#define ADC_MAX			977
#define ADC_MIN			162
#define ADC_VAL0C		887
#define ADC_VAL20C		720
#define ADC_VAL40C		508
#define ADC_VAL60C		315
#define ADC_CHNL_START_ADDR	0x1C5
#define ADC_DATA_START_ADDR	0x1D4
#define MSIC_DIE_ADC_MIN	488
#define MSIC_DIE_ADC_MAX	1004
static int channel_index;
struct platform_info ;
struct thermal_device_info ;
static int to_msic_die_temp(uint16_t adc_val)
static int is_valid_adc(uint16_t adc_val, uint16_t min, uint16_t max)
static int adc_to_temp(int direct, uint16_t adc_val, unsigned long *tp)
static int mid_read_temp(struct thermal_zone_device *tzd, unsigned long *temp)
static int configure_adc(int val)
static int set_up_therm_channel(u16 base_addr)
static int reset_stopbit(uint16_t addr)
static int find_free_channel(void)
static int mid_initialize_adc(struct device *dev)
static struct thermal_device_info *initialize_sensor(int index)
static int mid_thermal_resume(struct platform_device *pdev)
static int mid_thermal_suspend(struct platform_device *pdev, pm_message_t mesg)
static int read_curr_temp(struct thermal_zone_device *tzd, unsigned long *temp)
static struct thermal_zone_device_ops tzd_ops = ;
static int mid_thermal_probe(struct platform_device *pdev)
static int mid_thermal_remove(struct platform_device *pdev)
#define DRIVER_NAME "msic_sensor"
static const struct platform_device_id therm_id_table[] = ;
static struct platform_driver mid_thermal_driver = ;
static int __init mid_thermal_module_init(void)
static void __exit mid_thermal_module_exit(void)
module_init(mid_thermal_module_init);
module_exit(mid_thermal_module_exit);
MODULE_AUTHOR("Durgadoss R <durgadoss.r@intel.com>");
MODULE_DESCRIPTION("Intel Medfield Platform Thermal Driver");
MODULE_LICENSE("GPL");
