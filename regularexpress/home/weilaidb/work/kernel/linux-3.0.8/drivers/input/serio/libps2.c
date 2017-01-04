#define DRIVER_DESC	"PS/2 driver library"
MODULE_AUTHOR("Dmitry Torokhov <dtor@mail.ru>");
MODULE_DESCRIPTION("PS/2 driver library");
MODULE_LICENSE("GPL");
int ps2_sendbyte(struct ps2dev *ps2dev, unsigned char byte, int timeout)
EXPORT_SYMBOL(ps2_sendbyte);
void ps2_begin_command(struct ps2dev *ps2dev)
EXPORT_SYMBOL(ps2_begin_command);
void ps2_end_command(struct ps2dev *ps2dev)
EXPORT_SYMBOL(ps2_end_command);
void ps2_drain(struct ps2dev *ps2dev, int maxbytes, int timeout)
EXPORT_SYMBOL(ps2_drain);
int ps2_is_keyboard_id(char id_byte)
EXPORT_SYMBOL(ps2_is_keyboard_id);
static int ps2_adjust_timeout(struct ps2dev *ps2dev, int command, int timeout)
int __ps2_command(struct ps2dev *ps2dev, unsigned char *param, int command)
EXPORT_SYMBOL(__ps2_command);
int ps2_command(struct ps2dev *ps2dev, unsigned char *param, int command)
EXPORT_SYMBOL(ps2_command);
void ps2_init(struct ps2dev *ps2dev, struct serio *serio)
EXPORT_SYMBOL(ps2_init);
int ps2_handle_ack(struct ps2dev *ps2dev, unsigned char data)
EXPORT_SYMBOL(ps2_handle_ack);
int ps2_handle_response(struct ps2dev *ps2dev, unsigned char data)
EXPORT_SYMBOL(ps2_handle_response);
void ps2_cmd_aborted(struct ps2dev *ps2dev)
EXPORT_SYMBOL(ps2_cmd_aborted);
