#define DRIVER_DESC	"RC transmitter with 5-byte Zhen Hua protocol joystick driver"
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define ZHENHUA_MAX_LENGTH 5
struct zhenhua ;
static int zhenhua_bitreverse(int x)
static void zhenhua_process_packet(struct zhenhua *zhenhua)
static irqreturn_t zhenhua_interrupt(struct serio *serio, unsigned char data, unsigned int flags)
static void zhenhua_disconnect(struct serio *serio)
static int zhenhua_connect(struct serio *serio, struct serio_driver *drv)
static struct serio_device_id zhenhua_serio_ids[] = ;
MODULE_DEVICE_TABLE(serio, zhenhua_serio_ids);
static struct serio_driver zhenhua_drv = ;
static int __init zhenhua_init(void)
static void __exit zhenhua_exit(void)
module_init(zhenhua_init);
module_exit(zhenhua_exit);
