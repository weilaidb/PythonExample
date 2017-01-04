#define pr_fmt(fmt) KBUILD_BASENAME ": " fmt
#define elantech_debug(fmt, ...)					\
do  while (0)
static bool force_elantech;
module_param_named(force_elantech, force_elantech, bool, 0644);
MODULE_PARM_DESC(force_elantech, "Force the Elantech PS/2 protocol extension to be used, 1 = enabled, 0 = disabled (default).");
static int synaptics_send_cmd(struct psmouse *psmouse, unsigned char c,
unsigned char *param)
static int elantech_ps2_command(struct psmouse *psmouse,
unsigned char *param, int command)
static int elantech_read_reg(struct psmouse *psmouse, unsigned char reg,
unsigned char *val)
static int elantech_write_reg(struct psmouse *psmouse, unsigned char reg,
unsigned char val)
static void elantech_packet_dump(unsigned char *packet, int size)
static void elantech_report_absolute_v1(struct psmouse *psmouse)
static void elantech_set_slot(struct input_dev *dev, int slot, bool active,
unsigned int x, unsigned int y)
static void elantech_report_semi_mt_data(struct input_dev *dev,
unsigned int num_fingers,
unsigned int x1, unsigned int y1,
unsigned int x2, unsigned int y2)
static void elantech_report_absolute_v2(struct psmouse *psmouse)
static int elantech_check_parity_v1(struct psmouse *psmouse)
static psmouse_ret_t elantech_process_byte(struct psmouse *psmouse)
static int elantech_set_absolute_mode(struct psmouse *psmouse)
static void elantech_set_input_params(struct psmouse *psmouse)
struct elantech_attr_data ;
static ssize_t elantech_show_int_attr(struct psmouse *psmouse, void *data,
char *buf)
static ssize_t elantech_set_int_attr(struct psmouse *psmouse,
void *data, const char *buf, size_t count)
#define ELANTECH_INT_ATTR(_name, _register)				\
static struct elantech_attr_data elantech_attr_##_name = ;								\
PSMOUSE_DEFINE_ATTR(_name, S_IWUSR | S_IRUGO,			\
&elantech_attr_##_name,			\
elantech_show_int_attr,			\
elantech_set_int_attr)
ELANTECH_INT_ATTR(reg_10, 0x10);
ELANTECH_INT_ATTR(reg_11, 0x11);
ELANTECH_INT_ATTR(reg_20, 0x20);
ELANTECH_INT_ATTR(reg_21, 0x21);
ELANTECH_INT_ATTR(reg_22, 0x22);
ELANTECH_INT_ATTR(reg_23, 0x23);
ELANTECH_INT_ATTR(reg_24, 0x24);
ELANTECH_INT_ATTR(reg_25, 0x25);
ELANTECH_INT_ATTR(reg_26, 0x26);
ELANTECH_INT_ATTR(debug, 0);
ELANTECH_INT_ATTR(paritycheck, 0);
static struct attribute *elantech_attrs[] = ;
static struct attribute_group elantech_attr_group = ;
static bool elantech_is_signature_valid(const unsigned char *param)
int elantech_detect(struct psmouse *psmouse, bool set_properties)
static void elantech_disconnect(struct psmouse *psmouse)
static int elantech_reconnect(struct psmouse *psmouse)
int elantech_init(struct psmouse *psmouse)
