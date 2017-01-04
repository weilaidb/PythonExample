struct list_head hardif_list;
unsigned char broadcast_addr[] = ;
struct workqueue_struct *bat_event_workqueue;
static int __init batman_init(void)
static void __exit batman_exit(void)
int mesh_init(struct net_device *soft_iface)
void mesh_free(struct net_device *soft_iface)
void inc_module_count(void)
void dec_module_count(void)
int is_my_mac(uint8_t *addr)
module_init(batman_init);
module_exit(batman_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_SUPPORTED_DEVICE(DRIVER_DEVICE);
MODULE_VERSION(SOURCE_VERSION "-" REVISION_VERSION);
MODULE_VERSION(SOURCE_VERSION);
