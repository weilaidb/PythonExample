#define KBD_STATUS_REG		0x64
#define KBD_DATA_REG		0x60
#define KBD_STAT_OBF 		0x01
#define KBD_STAT_MOUSE_OBF	0x20
static int kbd_exists;
int kdb_get_kbd_char(void)
EXPORT_SYMBOL_GPL(kdb_get_kbd_char);
