struct smsg_callback ;
MODULE_AUTHOR
("(C) 2003 IBM Corporation by Martin Schwidefsky (schwidefsky@de.ibm.com)");
MODULE_DESCRIPTION ("Linux for S/390 IUCV special message driver");
static struct iucv_path *smsg_path;
static struct device *smsg_dev;
static DEFINE_SPINLOCK(smsg_list_lock);
static LIST_HEAD(smsg_list);
static int iucv_path_connected;
static int smsg_path_pending(struct iucv_path *, u8 ipvmid[8], u8 ipuser[16]);
static void smsg_message_pending(struct iucv_path *, struct iucv_message *);
static struct iucv_handler smsg_handler = ;
static int smsg_path_pending(struct iucv_path *path, u8 ipvmid[8],
u8 ipuser[16])
static void smsg_message_pending(struct iucv_path *path,
struct iucv_message *msg)
int smsg_register_callback(const char *prefix,
void (*callback)(const char *from, char *str))
void smsg_unregister_callback(const char *prefix,
void (*callback)(const char *from,
char *str))
static int smsg_pm_freeze(struct device *dev)
static int smsg_pm_restore_thaw(struct device *dev)
static const struct dev_pm_ops smsg_pm_ops = ;
static struct device_driver smsg_driver = ;
static void __exit smsg_exit(void)
static int __init smsg_init(void)
module_init(smsg_init);
module_exit(smsg_exit);
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(smsg_register_callback);
EXPORT_SYMBOL(smsg_unregister_callback);
