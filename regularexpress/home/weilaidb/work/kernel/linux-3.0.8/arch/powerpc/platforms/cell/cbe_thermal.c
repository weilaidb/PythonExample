#define TEMP_MIN 65
#define TEMP_MAX 125
#define SYSDEV_PREFIX_ATTR(_prefix,_name,_mode)			\
struct sysdev_attribute attr_ ## _prefix ## _ ## _name = ;
static inline u8 reg_to_temp(u8 reg_value)
static inline u8 temp_to_reg(u8 temp)
static struct cbe_pmd_regs __iomem *get_pmd_regs(struct sys_device *sysdev)
static u8 spu_read_register_value(struct sys_device *sysdev, union spe_reg __iomem *reg)
static ssize_t spu_show_temp(struct sys_device *sysdev, struct sysdev_attribute *attr,
char *buf)
static ssize_t show_throttle(struct cbe_pmd_regs __iomem *pmd_regs, char *buf, int pos)
static ssize_t store_throttle(struct cbe_pmd_regs __iomem *pmd_regs, const char *buf, size_t size, int pos)
static ssize_t spu_show_throttle_end(struct sys_device *sysdev,
struct sysdev_attribute *attr, char *buf)
static ssize_t spu_show_throttle_begin(struct sys_device *sysdev,
struct sysdev_attribute *attr, char *buf)
static ssize_t spu_show_throttle_full_stop(struct sys_device *sysdev,
struct sysdev_attribute *attr, char *buf)
static ssize_t spu_store_throttle_end(struct sys_device *sysdev,
struct sysdev_attribute *attr, const char *buf, size_t size)
static ssize_t spu_store_throttle_begin(struct sys_device *sysdev,
struct sysdev_attribute *attr, const char *buf, size_t size)
static ssize_t spu_store_throttle_full_stop(struct sys_device *sysdev,
struct sysdev_attribute *attr, const char *buf, size_t size)
static ssize_t ppe_show_temp(struct sys_device *sysdev, char *buf, int pos)
static ssize_t ppe_show_temp0(struct sys_device *sysdev,
struct sysdev_attribute *attr, char *buf)
static ssize_t ppe_show_temp1(struct sys_device *sysdev,
struct sysdev_attribute *attr, char *buf)
static ssize_t ppe_show_throttle_end(struct sys_device *sysdev,
struct sysdev_attribute *attr, char *buf)
static ssize_t ppe_show_throttle_begin(struct sys_device *sysdev,
struct sysdev_attribute *attr, char *buf)
static ssize_t ppe_show_throttle_full_stop(struct sys_device *sysdev,
struct sysdev_attribute *attr, char *buf)
static ssize_t ppe_store_throttle_end(struct sys_device *sysdev,
struct sysdev_attribute *attr, const char *buf, size_t size)
static ssize_t ppe_store_throttle_begin(struct sys_device *sysdev,
struct sysdev_attribute *attr, const char *buf, size_t size)
static ssize_t ppe_store_throttle_full_stop(struct sys_device *sysdev,
struct sysdev_attribute *attr, const char *buf, size_t size)
static struct sysdev_attribute attr_spu_temperature = ;
static SYSDEV_PREFIX_ATTR(spu, throttle_end, 0600);
static SYSDEV_PREFIX_ATTR(spu, throttle_begin, 0600);
static SYSDEV_PREFIX_ATTR(spu, throttle_full_stop, 0600);
static struct attribute *spu_attributes[] = ;
static struct attribute_group spu_attribute_group = ;
static struct sysdev_attribute attr_ppe_temperature0 = ;
static struct sysdev_attribute attr_ppe_temperature1 = ;
static SYSDEV_PREFIX_ATTR(ppe, throttle_end, 0600);
static SYSDEV_PREFIX_ATTR(ppe, throttle_begin, 0600);
static SYSDEV_PREFIX_ATTR(ppe, throttle_full_stop, 0600);
static struct attribute *ppe_attributes[] = ;
static struct attribute_group ppe_attribute_group = ;
static int __init init_default_values(void)
static int __init thermal_init(void)
module_init(thermal_init);
static void __exit thermal_exit(void)
module_exit(thermal_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Christian Krafft <krafft@de.ibm.com>");
