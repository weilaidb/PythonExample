#define DRIVER_DESC	"Elo serial touchscreen driver"
MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define ELO_MAX_LENGTH		10
#define ELO10_PACKET_LEN	8
#define ELO10_TOUCH		0x03
#define ELO10_PRESSURE		0x80
#define ELO10_LEAD_BYTE		'U'
#define ELO10_ID_CMD		'i'
#define ELO10_TOUCH_PACKET	'T'
#define ELO10_ACK_PACKET	'A'
#define ELI10_ID_PACKET		'I'
struct elo ;
static void elo_process_data_10(struct elo *elo, unsigned char data)
static void elo_process_data_6(struct elo *elo, unsigned char data)
static void elo_process_data_3(struct elo *elo, unsigned char data)
static irqreturn_t elo_interrupt(struct serio *serio,
unsigned char data, unsigned int flags)
static int elo_command_10(struct elo *elo, unsigned char *packet)
static int elo_setup_10(struct elo *elo)
static void elo_disconnect(struct serio *serio)
static int elo_connect(struct serio *serio, struct serio_driver *drv)
static struct serio_device_id elo_serio_ids[] = ;
MODULE_DEVICE_TABLE(serio, elo_serio_ids);
static struct serio_driver elo_drv = ;
static int __init elo_init(void)
static void __exit elo_exit(void)
module_init(elo_init);
module_exit(elo_exit);
