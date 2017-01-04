#define pr_fmt(fmt) "mrst: " fmt
__cpuinitdata enum mrst_timer_options mrst_timer_options;
static u32 sfi_mtimer_usage[SFI_MTMR_MAX_NUM];
static struct sfi_timer_table_entry sfi_mtimer_array[SFI_MTMR_MAX_NUM];
enum mrst_cpu_type __mrst_cpu_chip;
EXPORT_SYMBOL_GPL(__mrst_cpu_chip);
int sfi_mtimer_num;
struct sfi_rtc_table_entry sfi_mrtc_array[SFI_MRTC_MAX];
EXPORT_SYMBOL_GPL(sfi_mrtc_array);
int sfi_mrtc_num;
static int __init sfi_parse_mtmr(struct sfi_table_header *table)
struct sfi_timer_table_entry *sfi_get_mtmr(int hint)
void sfi_free_mtmr(struct sfi_timer_table_entry *mtmr)
int __init sfi_parse_mrtc(struct sfi_table_header *table)
static unsigned long __init mrst_calibrate_tsc(void)
static void __init mrst_time_init(void)
static void __cpuinit mrst_arch_setup(void)
static int mrst_i8042_detect(void)
static void mrst_power_off(void)
static void mrst_reboot(void)
void __init x86_mrst_early_setup(void)
static inline int __init setup_x86_mrst_timer(char *arg)
__setup("x86_mrst_timer=", setup_x86_mrst_timer);
static struct sfi_gpio_table_entry *gpio_table;
static int gpio_num_entry;
static int __init sfi_parse_gpio(struct sfi_table_header *table)
static int get_gpio_by_name(const char *name)
struct devs_id ;
#define MRST_IRQ_OFFSET 0x100
static void __init *pmic_gpio_platform_data(void *info)
static void __init *max3111_platform_data(void *info)
#define MAX7315_NUM 2
static void __init *max7315_platform_data(void *info)
static void __init *emc1403_platform_data(void *info)
static void __init *lis331dl_platform_data(void *info)
static void __init *no_platform_data(void *info)
static const struct devs_id __initconst device_ids[] = ;
#define MAX_IPCDEVS	24
static struct platform_device *ipc_devs[MAX_IPCDEVS];
static int ipc_next_dev;
#define MAX_SCU_SPI	24
static struct spi_board_info *spi_devs[MAX_SCU_SPI];
static int spi_next_dev;
#define MAX_SCU_I2C	24
static struct i2c_board_info *i2c_devs[MAX_SCU_I2C];
static int i2c_bus[MAX_SCU_I2C];
static int i2c_next_dev;
static void __init intel_scu_device_register(struct platform_device *pdev)
static void __init intel_scu_spi_device_register(struct spi_board_info *sdev)
static void __init intel_scu_i2c_device_register(int bus,
struct i2c_board_info *idev)
void intel_scu_devices_create(void)
EXPORT_SYMBOL_GPL(intel_scu_devices_create);
void intel_scu_devices_destroy(void)
EXPORT_SYMBOL_GPL(intel_scu_devices_destroy);
static void __init install_irq_resource(struct platform_device *pdev, int irq)
static void __init sfi_handle_ipc_dev(struct platform_device *pdev)
static void __init sfi_handle_spi_dev(struct spi_board_info *spi_info)
static void __init sfi_handle_i2c_dev(int bus, struct i2c_board_info *i2c_info)
static int __init sfi_parse_devs(struct sfi_table_header *table)
static int __init mrst_platform_init(void)
arch_initcall(mrst_platform_init);
static struct gpio_keys_button gpio_button[] = ;
static struct gpio_keys_platform_data mrst_gpio_keys = ;
static struct platform_device pb_device = ;
static int __init pb_keys_init(void)
late_initcall(pb_keys_init);
