MODULE_AUTHOR("Dmitry Eremin-Solenikov <dbaryshkov@gmail.com>");
MODULE_DESCRIPTION("TQC PS/2 Multiplexer driver");
MODULE_LICENSE("GPL");
#define PS2MULT_KB_SELECTOR		0xA0
#define PS2MULT_MS_SELECTOR		0xA1
#define PS2MULT_ESCAPE			0x7D
#define PS2MULT_BSYNC			0x7E
#define PS2MULT_SESSION_START		0x55
#define PS2MULT_SESSION_END		0x56
struct ps2mult_port ;
#define PS2MULT_NUM_PORTS	2
#define PS2MULT_KBD_PORT	0
#define PS2MULT_MOUSE_PORT	1
struct ps2mult ;
static const unsigned char ps2mult_controls[] = ;
static const struct serio_device_id ps2mult_serio_ids[] = ;
MODULE_DEVICE_TABLE(serio, ps2mult_serio_ids);
static void ps2mult_select_port(struct ps2mult *psm, struct ps2mult_port *port)
static int ps2mult_serio_write(struct serio *serio, unsigned char data)
static int ps2mult_serio_start(struct serio *serio)
static void ps2mult_serio_stop(struct serio *serio)
static int ps2mult_create_port(struct ps2mult *psm, int i)
static void ps2mult_reset(struct ps2mult *psm)
static int ps2mult_connect(struct serio *serio, struct serio_driver *drv)
static void ps2mult_disconnect(struct serio *serio)
static int ps2mult_reconnect(struct serio *serio)
static irqreturn_t ps2mult_interrupt(struct serio *serio,
unsigned char data, unsigned int dfl)
static struct serio_driver ps2mult_drv = ;
static int __init ps2mult_init(void)
static void __exit ps2mult_exit(void)
module_init(ps2mult_init);
module_exit(ps2mult_exit);
