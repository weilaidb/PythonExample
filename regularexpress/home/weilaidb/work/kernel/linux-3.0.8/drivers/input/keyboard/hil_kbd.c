#define PREFIX "HIL: "
MODULE_AUTHOR("Brian S. Julin <bri@calyx.com>");
MODULE_DESCRIPTION("HIL keyboard/mouse driver");
MODULE_LICENSE("Dual BSD/GPL");
MODULE_ALIAS("serio:ty03pr25id00ex*");
MODULE_ALIAS("serio:ty03pr25id0Fex*");
#define HIL_PACKET_MAX_LENGTH 16
#define HIL_KBD_SET1_UPBIT 0x01
#define HIL_KBD_SET1_SHIFT 1
static unsigned int hil_kbd_set1[HIL_KEYCODES_SET1_TBLSIZE] __read_mostly =
;
#define HIL_KBD_SET2_UPBIT 0x01
#define HIL_KBD_SET2_SHIFT 1
#define HIL_KBD_SET3_UPBIT 0x80
#define HIL_KBD_SET3_SHIFT 0
static unsigned int hil_kbd_set3[HIL_KEYCODES_SET3_TBLSIZE] __read_mostly =
;
static const char hil_language[][16] = ;
struct hil_dev ;
static bool hil_dev_is_command_response(hil_packet p)
static void hil_dev_handle_command_response(struct hil_dev *dev)
static void hil_dev_handle_kbd_events(struct hil_dev *kbd)
static void hil_dev_handle_ptr_events(struct hil_dev *ptr)
static void hil_dev_process_err(struct hil_dev *dev)
static irqreturn_t hil_dev_interrupt(struct serio *serio,
unsigned char data, unsigned int flags)
static void hil_dev_disconnect(struct serio *serio)
static void hil_dev_keyboard_setup(struct hil_dev *kbd)
static void hil_dev_pointer_setup(struct hil_dev *ptr)
static int hil_dev_connect(struct serio *serio, struct serio_driver *drv)
static struct serio_device_id hil_dev_ids[] = ;
MODULE_DEVICE_TABLE(serio, hil_dev_ids);
static struct serio_driver hil_serio_drv = ;
static int __init hil_dev_init(void)
static void __exit hil_dev_exit(void)
module_init(hil_dev_init);
module_exit(hil_dev_exit);
