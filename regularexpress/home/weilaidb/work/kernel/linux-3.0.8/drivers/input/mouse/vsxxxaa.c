#define DRIVER_DESC "Driver for DEC VSXXX-AA and -GA mice and VSXXX-AB tablet"
MODULE_AUTHOR("Jan-Benedict Glaw <jbglaw@lug-owl.de>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#undef VSXXXAA_DEBUG
#define DBG(x...) printk(x)
#define DBG(x...) do  while (0)
#define VSXXXAA_INTRO_MASK	0x80
#define VSXXXAA_INTRO_HEAD	0x80
#define IS_HDR_BYTE(x)			\
(((x) & VSXXXAA_INTRO_MASK) == VSXXXAA_INTRO_HEAD)
#define VSXXXAA_PACKET_MASK	0xe0
#define VSXXXAA_PACKET_REL	0x80
#define VSXXXAA_PACKET_ABS	0xc0
#define VSXXXAA_PACKET_POR	0xa0
#define MATCH_PACKET_TYPE(data, type)	\
(((data) & VSXXXAA_PACKET_MASK) == (type))
struct vsxxxaa ;
static void vsxxxaa_drop_bytes(struct vsxxxaa *mouse, int num)
static void vsxxxaa_queue_byte(struct vsxxxaa *mouse, unsigned char byte)
static void vsxxxaa_detection_done(struct vsxxxaa *mouse)
static int vsxxxaa_check_packet(struct vsxxxaa *mouse, int packet_len)
static inline int vsxxxaa_smells_like_packet(struct vsxxxaa *mouse,
unsigned char type, size_t len)
static void vsxxxaa_handle_REL_packet(struct vsxxxaa *mouse)
static void vsxxxaa_handle_ABS_packet(struct vsxxxaa *mouse)
static void vsxxxaa_handle_POR_packet(struct vsxxxaa *mouse)
static void vsxxxaa_parse_buffer(struct vsxxxaa *mouse)
static irqreturn_t vsxxxaa_interrupt(struct serio *serio,
unsigned char data, unsigned int flags)
static void vsxxxaa_disconnect(struct serio *serio)
static int vsxxxaa_connect(struct serio *serio, struct serio_driver *drv)
static struct serio_device_id vsxxaa_serio_ids[] = ;
MODULE_DEVICE_TABLE(serio, vsxxaa_serio_ids);
static struct serio_driver vsxxxaa_drv = ;
static int __init vsxxxaa_init(void)
static void __exit vsxxxaa_exit(void)
module_init(vsxxxaa_init);
module_exit(vsxxxaa_exit);
