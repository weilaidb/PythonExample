#define INT_MODULE_PARM(n, v) static int n = v; module_param(n, int, 0444)
INT_MODULE_PARM(probe_mem,	1);
INT_MODULE_PARM(probe_io,	1);
INT_MODULE_PARM(mem_limit,	0x10000);
struct resource_map ;
struct socket_data ;
#define MEM_PROBE_LOW	(1 << 0)
#define MEM_PROBE_HIGH	(1 << 1)
#define REMOVE_MANAGED_RESOURCE		1
#define ADD_MANAGED_RESOURCE		2
static struct resource *
claim_region(struct pcmcia_socket *s, resource_size_t base,
resource_size_t size, int type, char *name)
static void free_region(struct resource *res)
static int add_interval(struct resource_map *map, u_long base, u_long num)
static int sub_interval(struct resource_map *map, u_long base, u_long num)
static void do_io_probe(struct pcmcia_socket *s, unsigned int base,
unsigned int num)
static int readable(struct pcmcia_socket *s, struct resource *res,
unsigned int *count)
static int checksum(struct pcmcia_socket *s, struct resource *res,
unsigned int *value)
static int do_validate_mem(struct pcmcia_socket *s,
unsigned long base, unsigned long size,
int validate (struct pcmcia_socket *s,
struct resource *res,
unsigned int *value))
static int do_mem_probe(struct pcmcia_socket *s, u_long base, u_long num,
int validate (struct pcmcia_socket *s,
struct resource *res,
unsigned int *value),
int fallback (struct pcmcia_socket *s,
struct resource *res,
unsigned int *value))
static u_long inv_probe(struct resource_map *m, struct pcmcia_socket *s)
static int validate_mem(struct pcmcia_socket *s, unsigned int probe_mask)
static int validate_mem(struct pcmcia_socket *s, unsigned int probe_mask)
static int pcmcia_nonstatic_validate_mem(struct pcmcia_socket *s)
struct pcmcia_align_data ;
static resource_size_t pcmcia_common_align(struct pcmcia_align_data *align_data,
resource_size_t start)
static resource_size_t
pcmcia_align(void *align_data, const struct resource *res,
resource_size_t size, resource_size_t align)
static int __nonstatic_adjust_io_region(struct pcmcia_socket *s,
unsigned long r_start,
unsigned long r_end)
static struct resource *__nonstatic_find_io_region(struct pcmcia_socket *s,
unsigned long base, int num,
unsigned long align)
static int nonstatic_find_io(struct pcmcia_socket *s, unsigned int attr,
unsigned int *base, unsigned int num,
unsigned int align, struct resource **parent)
static struct resource *nonstatic_find_mem_region(u_long base, u_long num,
u_long align, int low, struct pcmcia_socket *s)
static int adjust_memory(struct pcmcia_socket *s, unsigned int action, unsigned long start, unsigned long end)
static int adjust_io(struct pcmcia_socket *s, unsigned int action, unsigned long start, unsigned long end)
static int nonstatic_autoadd_resources(struct pcmcia_socket *s)
{
struct resource *res;
int i, done = 0;
if (!s->cb_dev || !s->cb_dev->bus)
return -ENODEV;
#if defined(CONFIG_X86)
if (s->cb_dev->bus->number == 0)
return -EINVAL;
for (i = 0; i < PCI_BRIDGE_RESOURCE_NUM; i++)
static inline int nonstatic_autoadd_resources(struct pcmcia_socket *s)
static int nonstatic_init(struct pcmcia_socket *s)
static void nonstatic_release_resource_db(struct pcmcia_socket *s)
struct pccard_resource_ops pccard_nonstatic_ops = ;
EXPORT_SYMBOL(pccard_nonstatic_ops);
static ssize_t show_io_db(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_io_db(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(available_resources_io, 0600, show_io_db, store_io_db);
static ssize_t show_mem_db(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_mem_db(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(available_resources_mem, 0600, show_mem_db, store_mem_db);
static struct attribute *pccard_rsrc_attributes[] = ;
static const struct attribute_group rsrc_attributes = ;
static int __devinit pccard_sysfs_add_rsrc(struct device *dev,
struct class_interface *class_intf)
static void __devexit pccard_sysfs_remove_rsrc(struct device *dev,
struct class_interface *class_intf)
static struct class_interface pccard_rsrc_interface __refdata = ;
static int __init nonstatic_sysfs_init(void)
static void __exit nonstatic_sysfs_exit(void)
module_init(nonstatic_sysfs_init);
module_exit(nonstatic_sysfs_exit);
