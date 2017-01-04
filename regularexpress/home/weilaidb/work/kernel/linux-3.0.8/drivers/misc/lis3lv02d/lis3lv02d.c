#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRIVER_NAME     "lis3lv02d"
#define MDPS_POLL_INTERVAL 50
#define MDPS_POLL_MIN	   0
#define MDPS_POLL_MAX	   2000
#define LIS3_SYSFS_POWERDOWN_DELAY 5000
#define SELFTEST_OK	       0
#define SELFTEST_FAIL	       -1
#define SELFTEST_IRQ	       -2
#define IRQ_LINE0	       0
#define IRQ_LINE1	       1
#define LIS3_PWRON_DELAY_WAI_12B	(5000)
#define LIS3_PWRON_DELAY_WAI_8B		(3000)
#define LIS3_ACCURACY			1024
#define LIS3_SENSITIVITY_12B		((LIS3_ACCURACY * 1000) / 1024)
#define LIS3_SENSITIVITY_8B		(18 * LIS3_ACCURACY)
#define LIS3_DEFAULT_FUZZ_12B		3
#define LIS3_DEFAULT_FLAT_12B		3
#define LIS3_DEFAULT_FUZZ_8B		1
#define LIS3_DEFAULT_FLAT_8B		1
struct lis3lv02d lis3_dev = ;
EXPORT_SYMBOL_GPL(lis3_dev);
static int param_set_axis(const char *val, const struct kernel_param *kp)
static struct kernel_param_ops param_ops_axis = ;
module_param_array_named(axes, lis3_dev.ac.as_array, axis, NULL, 0644);
MODULE_PARM_DESC(axes, "Axis-mapping for x,y,z directions");
static s16 lis3lv02d_read_8(struct lis3lv02d *lis3, int reg)
static s16 lis3lv02d_read_12(struct lis3lv02d *lis3, int reg)
static inline int lis3lv02d_get_axis(s8 axis, int hw_values[3])
static void lis3lv02d_get_xyz(struct lis3lv02d *lis3, int *x, int *y, int *z)
static int lis3_12_rates[4] = ;
static int lis3_8_rates[2] = ;
static int lis3_3dc_rates[16] = ;
static int lis3lv02d_get_odr(void)
static int lis3lv02d_set_odr(int rate)
static int lis3lv02d_selftest(struct lis3lv02d *lis3, s16 results[3])
static u8 lis3_wai8_regs[] = ;
static u8 lis3_wai12_regs[] = ;
static inline void lis3_context_save(struct lis3lv02d *lis3)
static inline void lis3_context_restore(struct lis3lv02d *lis3)
void lis3lv02d_poweroff(struct lis3lv02d *lis3)
EXPORT_SYMBOL_GPL(lis3lv02d_poweroff);
void lis3lv02d_poweron(struct lis3lv02d *lis3)
EXPORT_SYMBOL_GPL(lis3lv02d_poweron);
static void lis3lv02d_joystick_poll(struct input_polled_dev *pidev)
static void lis3lv02d_joystick_open(struct input_polled_dev *pidev)
static void lis3lv02d_joystick_close(struct input_polled_dev *pidev)
static irqreturn_t lis302dl_interrupt(int irq, void *dummy)
static void lis302dl_interrupt_handle_click(struct lis3lv02d *lis3)
static inline void lis302dl_data_ready(struct lis3lv02d *lis3, int index)
static irqreturn_t lis302dl_interrupt_thread1_8b(int irq, void *data)
static irqreturn_t lis302dl_interrupt_thread2_8b(int irq, void *data)
static int lis3lv02d_misc_open(struct inode *inode, struct file *file)
static int lis3lv02d_misc_release(struct inode *inode, struct file *file)
static ssize_t lis3lv02d_misc_read(struct file *file, char __user *buf,
size_t count, loff_t *pos)
static unsigned int lis3lv02d_misc_poll(struct file *file, poll_table *wait)
static int lis3lv02d_misc_fasync(int fd, struct file *file, int on)
static const struct file_operations lis3lv02d_misc_fops = ;
static struct miscdevice lis3lv02d_misc_device = ;
int lis3lv02d_joystick_enable(void)
EXPORT_SYMBOL_GPL(lis3lv02d_joystick_enable);
void lis3lv02d_joystick_disable(void)
EXPORT_SYMBOL_GPL(lis3lv02d_joystick_disable);
static void lis3lv02d_sysfs_poweron(struct lis3lv02d *lis3)
static ssize_t lis3lv02d_selftest_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t lis3lv02d_position_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t lis3lv02d_rate_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t lis3lv02d_rate_set(struct device *dev,
struct device_attribute *attr, const char *buf,
size_t count)
static DEVICE_ATTR(selftest, S_IRUSR, lis3lv02d_selftest_show, NULL);
static DEVICE_ATTR(position, S_IRUGO, lis3lv02d_position_show, NULL);
static DEVICE_ATTR(rate, S_IRUGO | S_IWUSR, lis3lv02d_rate_show,
lis3lv02d_rate_set);
static struct attribute *lis3lv02d_attributes[] = ;
static struct attribute_group lis3lv02d_attribute_group = ;
static int lis3lv02d_add_fs(struct lis3lv02d *lis3)
int lis3lv02d_remove_fs(struct lis3lv02d *lis3)
EXPORT_SYMBOL_GPL(lis3lv02d_remove_fs);
static void lis3lv02d_8b_configure(struct lis3lv02d *dev,
struct lis3lv02d_platform_data *p)
int lis3lv02d_init_device(struct lis3lv02d *dev)
EXPORT_SYMBOL_GPL(lis3lv02d_init_device);
MODULE_DESCRIPTION("ST LIS3LV02Dx three-axis digital accelerometer driver");
MODULE_AUTHOR("Yan Burman, Eric Piel, Pavel Machek");
MODULE_LICENSE("GPL");
