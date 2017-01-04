static unsigned int tx_7segled_num;
static void (*tx_7segled_putc)(unsigned int pos, unsigned char val);
void __init txx9_7segled_init(unsigned int num,
void (*putc)(unsigned int pos, unsigned char val))
static SEG7_CONVERSION_MAP(txx9_seg7map, MAP_ASCII7SEG_ALPHANUM_LC);
int txx9_7segled_putc(unsigned int pos, char c)
static ssize_t ascii_store(struct sys_device *dev,
struct sysdev_attribute *attr,
const char *buf, size_t size)
static ssize_t raw_store(struct sys_device *dev,
struct sysdev_attribute *attr,
const char *buf, size_t size)
static SYSDEV_ATTR(ascii, 0200, NULL, ascii_store);
static SYSDEV_ATTR(raw, 0200, NULL, raw_store);
static ssize_t map_seg7_show(struct sysdev_class *class,
struct sysdev_class_attribute *attr,
char *buf)
static ssize_t map_seg7_store(struct sysdev_class *class,
struct sysdev_class_attribute *attr,
const char *buf, size_t size)
static SYSDEV_CLASS_ATTR(map_seg7, 0600, map_seg7_show, map_seg7_store);
static struct sysdev_class tx_7segled_sysdev_class = ;
static int __init tx_7segled_init_sysfs(void)
device_initcall(tx_7segled_init_sysfs);
