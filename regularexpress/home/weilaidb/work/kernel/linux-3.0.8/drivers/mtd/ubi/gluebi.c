#define err_msg(fmt, ...)                                   \
printk(KERN_DEBUG "gluebi (pid %d): %s: " fmt "\n", \
current->pid, __func__, ##__VA_ARGS__)
struct gluebi_device ;
static LIST_HEAD(gluebi_devices);
static DEFINE_MUTEX(devices_mutex);
static struct gluebi_device *find_gluebi_nolock(int ubi_num, int vol_id)
static int gluebi_get_device(struct mtd_info *mtd)
static void gluebi_put_device(struct mtd_info *mtd)
static int gluebi_read(struct mtd_info *mtd, loff_t from, size_t len,
size_t *retlen, unsigned char *buf)
static int gluebi_write(struct mtd_info *mtd, loff_t to, size_t len,
size_t *retlen, const u_char *buf)
static int gluebi_erase(struct mtd_info *mtd, struct erase_info *instr)
static int gluebi_create(struct ubi_device_info *di,
struct ubi_volume_info *vi)
static int gluebi_remove(struct ubi_volume_info *vi)
static int gluebi_updated(struct ubi_volume_info *vi)
static int gluebi_resized(struct ubi_volume_info *vi)
static int gluebi_notify(struct notifier_block *nb, unsigned long l,
void *ns_ptr)
static struct notifier_block gluebi_notifier = ;
static int __init ubi_gluebi_init(void)
static void __exit ubi_gluebi_exit(void)
module_init(ubi_gluebi_init);
module_exit(ubi_gluebi_exit);
MODULE_DESCRIPTION("MTD emulation layer over UBI volumes");
MODULE_AUTHOR("Artem Bityutskiy, Joern Engel");
MODULE_LICENSE("GPL");
