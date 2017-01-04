#define DRIVER_AUTHOR "Takahiro Hirofuchi"
#define DRIVER_DESC "USB/IP Host Driver"
struct kmem_cache *stub_priv_cache;
#define MAX_BUSID 16
static struct bus_id_priv busid_table[MAX_BUSID];
static spinlock_t busid_table_lock;
int match_busid(const char *busid)
struct bus_id_priv *get_busid_priv(const char *busid)
static ssize_t show_match_busid(struct device_driver *drv, char *buf)
static int add_match_busid(char *busid)
int del_match_busid(char *busid)
static void init_busid_table(void)
static ssize_t store_match_busid(struct device_driver *dev, const char *buf,
size_t count)
static DRIVER_ATTR(match_busid, S_IRUSR|S_IWUSR, show_match_busid,
store_match_busid);
static struct stub_priv *stub_priv_pop_from_listhead(struct list_head *listhead)
static struct stub_priv *stub_priv_pop(struct stub_device *sdev)
void stub_device_cleanup_urbs(struct stub_device *sdev)
static int __init usb_stub_init(void)
static void __exit usb_stub_exit(void)
module_init(usb_stub_init);
module_exit(usb_stub_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
MODULE_VERSION(USBIP_VERSION);
