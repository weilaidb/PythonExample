#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static bool force;
module_param(force, bool, 0);
MODULE_PARM_DESC(force, "Force driver load, ignore DMI data");
static bool debug;
module_param(debug, bool, 0644);
MODULE_PARM_DESC(debug, "Show debug output");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Keith Mannthey <kmmanth@us.ibm.com>");
MODULE_AUTHOR("Vernon Mauery <vernux@us.ibm.com>");
#define RTL_ADDR_TYPE_IO    1
#define RTL_ADDR_TYPE_MMIO  2
#define RTL_CMD_ENTER_PRTM  1
#define RTL_CMD_EXIT_PRTM   2
struct ibm_rtl_table  __attribute__((packed));
#define RTL_SIGNATURE 0x0000005f4c54525fULL
#define RTL_MASK      0x000000ffffffffffULL
#define RTL_DEBUG(fmt, ...)				\
do  while (0)
static DEFINE_MUTEX(rtl_lock);
static struct ibm_rtl_table __iomem *rtl_table;
static void __iomem *ebda_map;
static void __iomem *rtl_cmd_addr;
static u8 rtl_cmd_type;
static u8 rtl_cmd_width;
static inline __u64 readq(const volatile void __iomem *addr)
static void __iomem *rtl_port_map(phys_addr_t addr, unsigned long len)
static void rtl_port_unmap(void __iomem *addr)
static int ibm_rtl_write(u8 value)
static ssize_t rtl_show_version(struct sysdev_class * dev,
struct sysdev_class_attribute *attr,
char *buf)
static ssize_t rtl_show_state(struct sysdev_class *dev,
struct sysdev_class_attribute *attr,
char *buf)
static ssize_t rtl_set_state(struct sysdev_class *dev,
struct sysdev_class_attribute *attr,
const char *buf,
size_t count)
static struct sysdev_class class_rtl = ;
static SYSDEV_CLASS_ATTR(version, S_IRUGO, rtl_show_version, NULL);
static SYSDEV_CLASS_ATTR(state, 0600, rtl_show_state, rtl_set_state);
static struct sysdev_class_attribute *rtl_attributes[] = ;
static int rtl_setup_sysfs(void)
static void rtl_teardown_sysfs(void)
static struct dmi_system_id __initdata ibm_rtl_dmi_table[] = ;
static int __init ibm_rtl_init(void)
static void __exit ibm_rtl_exit(void)
module_init(ibm_rtl_init);
module_exit(ibm_rtl_exit);
