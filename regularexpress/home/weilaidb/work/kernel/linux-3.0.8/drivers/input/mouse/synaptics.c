#define XMIN_NOMINAL 1472
#define XMAX_NOMINAL 5472
#define YMIN_NOMINAL 1408
#define YMAX_NOMINAL 4448
static int synaptics_mode_cmd(struct psmouse *psmouse, unsigned char mode)
int synaptics_detect(struct psmouse *psmouse, bool set_properties)
void synaptics_reset(struct psmouse *psmouse)
static int synaptics_send_cmd(struct psmouse *psmouse, unsigned char c, unsigned char *param)
static int synaptics_model_id(struct psmouse *psmouse)
static int synaptics_capability(struct psmouse *psmouse)
static int synaptics_identify(struct psmouse *psmouse)
static int synaptics_resolution(struct psmouse *psmouse)
static int synaptics_query_hardware(struct psmouse *psmouse)
static int synaptics_set_absolute_mode(struct psmouse *psmouse)
static void synaptics_set_rate(struct psmouse *psmouse, unsigned int rate)
static int synaptics_set_advanced_gesture_mode(struct psmouse *psmouse)
static int synaptics_pt_write(struct serio *serio, unsigned char c)
static int synaptics_pt_start(struct serio *serio)
static void synaptics_pt_stop(struct serio *serio)
static int synaptics_is_pt_packet(unsigned char *buf)
static void synaptics_pass_pt_packet(struct serio *ptport, unsigned char *packet)
static void synaptics_pt_activate(struct psmouse *psmouse)
static void synaptics_pt_create(struct psmouse *psmouse)
static int synaptics_parse_hw_state(const unsigned char buf[],
struct synaptics_data *priv,
struct synaptics_hw_state *hw)
static void set_slot(struct input_dev *dev, int slot, bool active, int x, int y)
static void synaptics_report_semi_mt_data(struct input_dev *dev,
const struct synaptics_hw_state *a,
const struct synaptics_hw_state *b,
int num_fingers)
static void synaptics_process_packet(struct psmouse *psmouse)
static int synaptics_validate_byte(unsigned char packet[], int idx, unsigned char pkt_type)
static unsigned char synaptics_detect_pkt_type(struct psmouse *psmouse)
static psmouse_ret_t synaptics_process_byte(struct psmouse *psmouse)
static void set_input_params(struct input_dev *dev, struct synaptics_data *priv)
static void synaptics_disconnect(struct psmouse *psmouse)
static int synaptics_reconnect(struct psmouse *psmouse)
static bool impaired_toshiba_kbc;
static const struct dmi_system_id __initconst toshiba_dmi_table[] = ;
static bool broken_olpc_ec;
static const struct dmi_system_id __initconst olpc_dmi_table[] = ;
void __init synaptics_module_init(void)
int synaptics_init(struct psmouse *psmouse)
bool synaptics_supported(void)
void __init synaptics_module_init(void)
int synaptics_init(struct psmouse *psmouse)
bool synaptics_supported(void)
