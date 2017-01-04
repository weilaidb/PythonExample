#undef DEBUG
#define dbg(format, arg...) printk(KERN_INFO "alps.c: " format "\n", ## arg)
#define dbg(format, arg...) do  while (0)
#define ALPS_OLDPROTO		0x01
#define ALPS_DUALPOINT		0x02
#define ALPS_PASS		0x04
#define ALPS_WHEEL		0x08
#define ALPS_FW_BK_1		0x10
#define ALPS_FW_BK_2		0x20
#define ALPS_FOUR_BUTTONS	0x40
#define ALPS_PS2_INTERLEAVED	0x80
static const struct alps_model_info alps_model_data[] = ;
static bool alps_is_valid_first_byte(const struct alps_model_info *model,
unsigned char data)
static void alps_report_buttons(struct psmouse *psmouse,
struct input_dev *dev1, struct input_dev *dev2,
int left, int right, int middle)
static void alps_process_packet(struct psmouse *psmouse)
static void alps_report_bare_ps2_packet(struct psmouse *psmouse,
unsigned char packet[],
bool report_buttons)
static psmouse_ret_t alps_handle_interleaved_ps2(struct psmouse *psmouse)
static void alps_flush_packet(unsigned long data)
static psmouse_ret_t alps_process_byte(struct psmouse *psmouse)
static const struct alps_model_info *alps_get_model(struct psmouse *psmouse, int *version)
static int alps_passthrough_mode(struct psmouse *psmouse, bool enable)
static int alps_absolute_mode(struct psmouse *psmouse)
static int alps_get_status(struct psmouse *psmouse, char *param)
static int alps_tap_mode(struct psmouse *psmouse, int enable)
static int alps_poll(struct psmouse *psmouse)
static int alps_hw_init(struct psmouse *psmouse)
static int alps_reconnect(struct psmouse *psmouse)
static void alps_disconnect(struct psmouse *psmouse)
int alps_init(struct psmouse *psmouse)
int alps_detect(struct psmouse *psmouse, bool set_properties)
