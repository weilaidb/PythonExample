MODULE_AUTHOR("Sebastien Bouchard <sebastien.bouchard@ca.kontron.com>");
MODULE_LICENSE("GPL");
#define RESET_ON	0x00
#define RESET_OFF	0x01
#define NORMAL_MODE 	0x00
#define HOLDOVER_MODE	0x10
#define FREERUN_MODE	0x20
#define FILTER_6HZ	0x04
#define FILTER_12HZ	0x00
#define REF_CLK1_8kHz		0x00
#define REF_CLK2_19_44MHz	0x02
#define PRIMARY_CLOCK	0x00
#define SECONDARY_CLOCK	0x01
#define CLK_8kHz	0xff
#define CLK_16_384MHz	0xfb
#define CLK_1_544MHz	0x00
#define CLK_2_048MHz	0x01
#define CLK_4_096MHz	0x02
#define CLK_6_312MHz	0x03
#define CLK_8_192MHz	0x04
#define CLK_19_440MHz	0x06
#define CLK_8_592MHz	0x08
#define CLK_11_184MHz	0x09
#define CLK_34_368MHz	0x0b
#define CLK_44_736MHz	0x0a
#define AMC_B1 0
#define AMC_B2 1
#define HW_ENABLE	0x80
#define HW_DISABLE	0x00
#define PLL_HOLDOVER	0x40
#define LOST_CLOCK	0x00
#define UNLOCK_MASK	0x10
#define HOLDOVER_MASK	0x20
#define SEC_LOST_MASK	0x40
#define PRI_LOST_MASK	0x80
#define PRI_LOS_01_MASK		0x01
#define PRI_LOS_10_MASK		0x02
#define SEC_LOS_01_MASK		0x04
#define SEC_LOS_10_MASK		0x08
#define HOLDOVER_01_MASK	0x10
#define HOLDOVER_10_MASK	0x20
#define UNLOCK_01_MASK		0x40
#define UNLOCK_10_MASK		0x80
struct tlclk_alarms ;
#define TLCLK_BASE 0xa08
#define TLCLK_REG0 TLCLK_BASE
#define TLCLK_REG1 (TLCLK_BASE+1)
#define TLCLK_REG2 (TLCLK_BASE+2)
#define TLCLK_REG3 (TLCLK_BASE+3)
#define TLCLK_REG4 (TLCLK_BASE+4)
#define TLCLK_REG5 (TLCLK_BASE+5)
#define TLCLK_REG6 (TLCLK_BASE+6)
#define TLCLK_REG7 (TLCLK_BASE+7)
#define SET_PORT_BITS(port, mask, val) outb(((inb(port) & mask) | val), port)
#define TLCLK_MAJOR 0
static unsigned int telclk_interrupt;
static int int_events;
static int got_event;
static void switchover_timeout(unsigned long data);
static struct timer_list switchover_timer =
TIMER_INITIALIZER(switchover_timeout , 0, 0);
static unsigned long tlclk_timer_data;
static struct tlclk_alarms *alarm_events;
static DEFINE_SPINLOCK(event_lock);
static int tlclk_major = TLCLK_MAJOR;
static irqreturn_t tlclk_interrupt(int irq, void *dev_id);
static DECLARE_WAIT_QUEUE_HEAD(wq);
static unsigned long useflags;
static DEFINE_MUTEX(tlclk_mutex);
static int tlclk_open(struct inode *inode, struct file *filp)
static int tlclk_release(struct inode *inode, struct file *filp)
static ssize_t tlclk_read(struct file *filp, char __user *buf, size_t count,
loff_t *f_pos)
static const struct file_operations tlclk_fops = ;
static struct miscdevice tlclk_miscdev = ;
static ssize_t show_current_ref(struct device *d,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(current_ref, S_IRUGO, show_current_ref, NULL);
static ssize_t show_telclock_version(struct device *d,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(telclock_version, S_IRUGO,
show_telclock_version, NULL);
static ssize_t show_alarms(struct device *d,
struct device_attribute *attr,  char *buf)
static DEVICE_ATTR(alarms, S_IRUGO, show_alarms, NULL);
static ssize_t store_received_ref_clk3a(struct device *d,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(received_ref_clk3a, (S_IWUSR|S_IWGRP), NULL,
store_received_ref_clk3a);
static ssize_t store_received_ref_clk3b(struct device *d,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(received_ref_clk3b, (S_IWUSR|S_IWGRP), NULL,
store_received_ref_clk3b);
static ssize_t store_enable_clk3b_output(struct device *d,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(enable_clk3b_output, (S_IWUSR|S_IWGRP), NULL,
store_enable_clk3b_output);
static ssize_t store_enable_clk3a_output(struct device *d,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(enable_clk3a_output, (S_IWUSR|S_IWGRP), NULL,
store_enable_clk3a_output);
static ssize_t store_enable_clkb1_output(struct device *d,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(enable_clkb1_output, (S_IWUSR|S_IWGRP), NULL,
store_enable_clkb1_output);
static ssize_t store_enable_clka1_output(struct device *d,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(enable_clka1_output, (S_IWUSR|S_IWGRP), NULL,
store_enable_clka1_output);
static ssize_t store_enable_clkb0_output(struct device *d,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(enable_clkb0_output, (S_IWUSR|S_IWGRP), NULL,
store_enable_clkb0_output);
static ssize_t store_enable_clka0_output(struct device *d,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(enable_clka0_output, (S_IWUSR|S_IWGRP), NULL,
store_enable_clka0_output);
static ssize_t store_select_amcb2_transmit_clock(struct device *d,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(select_amcb2_transmit_clock, (S_IWUSR|S_IWGRP), NULL,
store_select_amcb2_transmit_clock);
static ssize_t store_select_amcb1_transmit_clock(struct device *d,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(select_amcb1_transmit_clock, (S_IWUSR|S_IWGRP), NULL,
store_select_amcb1_transmit_clock);
static ssize_t store_select_redundant_clock(struct device *d,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(select_redundant_clock, (S_IWUSR|S_IWGRP), NULL,
store_select_redundant_clock);
static ssize_t store_select_ref_frequency(struct device *d,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(select_ref_frequency, (S_IWUSR|S_IWGRP), NULL,
store_select_ref_frequency);
static ssize_t store_filter_select(struct device *d,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(filter_select, (S_IWUSR|S_IWGRP), NULL, store_filter_select);
static ssize_t store_hardware_switching_mode(struct device *d,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(hardware_switching_mode, (S_IWUSR|S_IWGRP), NULL,
store_hardware_switching_mode);
static ssize_t store_hardware_switching(struct device *d,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(hardware_switching, (S_IWUSR|S_IWGRP), NULL,
store_hardware_switching);
static ssize_t store_refalign (struct device *d,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(refalign, (S_IWUSR|S_IWGRP), NULL, store_refalign);
static ssize_t store_mode_select (struct device *d,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(mode_select, (S_IWUSR|S_IWGRP), NULL, store_mode_select);
static ssize_t store_reset (struct device *d,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(reset, (S_IWUSR|S_IWGRP), NULL, store_reset);
static struct attribute *tlclk_sysfs_entries[] = ;
static struct attribute_group tlclk_attribute_group = ;
static struct platform_device *tlclk_device;
static int __init tlclk_init(void)
static void __exit tlclk_cleanup(void)
static void switchover_timeout(unsigned long data)
static irqreturn_t tlclk_interrupt(int irq, void *dev_id)
module_init(tlclk_init);
module_exit(tlclk_cleanup);
