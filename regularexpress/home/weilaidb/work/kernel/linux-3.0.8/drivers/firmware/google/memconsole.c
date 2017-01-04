#define BIOS_MEMCONSOLE_V1_MAGIC	0xDEADBABE
#define BIOS_MEMCONSOLE_V2_MAGIC	(('M')|('C'<<8)|('O'<<16)|('N'<<24))
struct biosmemcon_ebda  __packed;
static char *memconsole_baseaddr;
static size_t memconsole_length;
static ssize_t memconsole_read(struct file *filp, struct kobject *kobp,
struct bin_attribute *bin_attr, char *buf,
loff_t pos, size_t count)
static struct bin_attribute memconsole_bin_attr = ;
static void found_v1_header(struct biosmemcon_ebda *hdr)
static void found_v2_header(struct biosmemcon_ebda *hdr)
static bool found_memconsole(void)
static struct dmi_system_id memconsole_dmi_table[] __initdata = ;
MODULE_DEVICE_TABLE(dmi, memconsole_dmi_table);
static int __init memconsole_init(void)
static void __exit memconsole_exit(void)
module_init(memconsole_init);
module_exit(memconsole_exit);
MODULE_AUTHOR("Google, Inc.");
MODULE_LICENSE("GPL");
