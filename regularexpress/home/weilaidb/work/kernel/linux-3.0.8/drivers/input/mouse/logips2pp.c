#define PS2PP_KIND_WHEEL	1
#define PS2PP_KIND_MX		2
#define PS2PP_KIND_TP3		3
#define PS2PP_KIND_TRACKMAN	4
#define PS2PP_WHEEL		0x01
#define PS2PP_HWHEEL		0x02
#define PS2PP_SIDE_BTN		0x04
#define PS2PP_EXTRA_BTN		0x08
#define PS2PP_TASK_BTN		0x10
#define PS2PP_NAV_BTN		0x20
struct ps2pp_info ;
static psmouse_ret_t ps2pp_process_byte(struct psmouse *psmouse)
static int ps2pp_cmd(struct psmouse *psmouse, unsigned char *param, unsigned char command)
static void ps2pp_set_smartscroll(struct psmouse *psmouse, bool smartscroll)
static ssize_t ps2pp_attr_show_smartscroll(struct psmouse *psmouse,
void *data, char *buf)
static ssize_t ps2pp_attr_set_smartscroll(struct psmouse *psmouse, void *data,
const char *buf, size_t count)
PSMOUSE_DEFINE_ATTR(smartscroll, S_IWUSR | S_IRUGO, NULL,
ps2pp_attr_show_smartscroll, ps2pp_attr_set_smartscroll);
static void ps2pp_set_resolution(struct psmouse *psmouse, unsigned int resolution)
static void ps2pp_disconnect(struct psmouse *psmouse)
static const struct ps2pp_info *get_model_info(unsigned char model)
static void ps2pp_set_model_properties(struct psmouse *psmouse,
const struct ps2pp_info *model_info,
bool using_ps2pp)
int ps2pp_init(struct psmouse *psmouse, bool set_properties)
