#define	HPET_USER_FREQ	(64)
#define	HPET_DRIFT	(500)
#define HPET_RANGE_SIZE		1024
#if BITS_PER_LONG == 64
#define	write_counter(V, MC)	writeq(V, MC)
#define	read_counter(MC)	readq(MC)
#define	write_counter(V, MC)	writel(V, MC)
#define	read_counter(MC)	readl(MC)
static DEFINE_MUTEX(hpet_mutex);
static u32 hpet_nhpet, hpet_max_freq = HPET_USER_FREQ;
static void __iomem *hpet_mctr;
static cycle_t read_hpet(struct clocksource *cs)
static struct clocksource clocksource_hpet = ;
static struct clocksource *hpet_clocksource;
static DEFINE_SPINLOCK(hpet_lock);
#define	HPET_DEV_NAME	(7)
struct hpet_dev ;
struct hpets ;
static struct hpets *hpets;
#define	HPET_OPEN		0x0001
#define	HPET_IE			0x0002
#define	HPET_PERIODIC		0x0004
#define	HPET_SHARED_IRQ		0x0008
static inline unsigned long long readq(void __iomem *addr)
static inline void writeq(unsigned long long v, void __iomem *addr)
static irqreturn_t hpet_interrupt(int irq, void *data)
static void hpet_timer_set_irq(struct hpet_dev *devp)
static int hpet_open(struct inode *inode, struct file *file)
static ssize_t
hpet_read(struct file *file, char __user *buf, size_t count, loff_t * ppos)
static unsigned int hpet_poll(struct file *file, poll_table * wait)
static int hpet_mmap(struct file *file, struct vm_area_struct *vma)
static int hpet_fasync(int fd, struct file *file, int on)
static int hpet_release(struct inode *inode, struct file *file)
static int hpet_ioctl_ieon(struct hpet_dev *devp)
static inline unsigned long hpet_time_div(struct hpets *hpets,
unsigned long dis)
static int
hpet_ioctl_common(struct hpet_dev *devp, int cmd, unsigned long arg,
struct hpet_info *info)
static long
hpet_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
struct compat_hpet_info ;
static long
hpet_compat_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static const struct file_operations hpet_fops = ;
static int hpet_is_known(struct hpet_data *hdp)
static ctl_table hpet_table[] = ;
static ctl_table hpet_root[] = ;
static ctl_table dev_root[] = ;
static struct ctl_table_header *sysctl_header;
#define	TICK_CALIBRATE	(1000UL)
static unsigned long __hpet_calibrate(struct hpets *hpetp)
static unsigned long hpet_calibrate(struct hpets *hpetp)
int hpet_alloc(struct hpet_data *hdp)
static acpi_status hpet_resources(struct acpi_resource *res, void *data)
static int hpet_acpi_add(struct acpi_device *device)
static int hpet_acpi_remove(struct acpi_device *device, int type)
static const struct acpi_device_id hpet_device_ids[] = ;
MODULE_DEVICE_TABLE(acpi, hpet_device_ids);
static struct acpi_driver hpet_acpi_driver = ;
static struct miscdevice hpet_misc = ;
static int __init hpet_init(void)
static void __exit hpet_exit(void)
module_init(hpet_init);
module_exit(hpet_exit);
MODULE_AUTHOR("Bob Picco <Robert.Picco@hp.com>");
MODULE_LICENSE("GPL");
