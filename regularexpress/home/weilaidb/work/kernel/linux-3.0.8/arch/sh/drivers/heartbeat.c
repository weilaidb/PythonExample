#define DRV_NAME "heartbeat"
#define DRV_VERSION "0.1.2"
static unsigned char default_bit_pos[] = ;
static inline void heartbeat_toggle_bit(struct heartbeat_data *hd,
unsigned bit, unsigned int inverted)
static void heartbeat_timer(unsigned long data)
static int heartbeat_drv_probe(struct platform_device *pdev)
static int heartbeat_drv_remove(struct platform_device *pdev)
static struct platform_driver heartbeat_driver = ;
static int __init heartbeat_init(void)
static void __exit heartbeat_exit(void)
module_init(heartbeat_init);
module_exit(heartbeat_exit);
MODULE_VERSION(DRV_VERSION);
MODULE_AUTHOR("Paul Mundt");
MODULE_LICENSE("GPL v2");
