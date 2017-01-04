#define DEBUG
#define ILLEGAL_XY 999999
static bool tpdebug;
module_param(tpdebug, bool, 0644);
MODULE_PARM_DESC(tpdebug, "enable debugging, dumping packets to KERN_DEBUG.");
static int recalib_delta = 100;
module_param(recalib_delta, int, 0644);
MODULE_PARM_DESC(recalib_delta,
"packets containing a delta this large will be discarded, and a "
"recalibration may be scheduled.");
static int jumpy_delay = 20;
module_param(jumpy_delay, int, 0644);
MODULE_PARM_DESC(jumpy_delay,
"delay (ms) before recal after jumpiness detected");
static int spew_delay = 1;
module_param(spew_delay, int, 0644);
MODULE_PARM_DESC(spew_delay,
"delay (ms) before recal after packet spew detected");
static int recal_guard_time;
module_param(recal_guard_time, int, 0644);
MODULE_PARM_DESC(recal_guard_time,
"interval (ms) during which recal will be restarted if packet received");
static int post_interrupt_delay = 40;
module_param(post_interrupt_delay, int, 0644);
MODULE_PARM_DESC(post_interrupt_delay,
"delay (ms) before recal after recal interrupt detected");
static bool autorecal = true;
module_param(autorecal, bool, 0644);
MODULE_PARM_DESC(autorecal, "enable recalibration in the driver");
static char hgpk_mode_name[16];
module_param_string(hgpk_mode, hgpk_mode_name, sizeof(hgpk_mode_name), 0644);
MODULE_PARM_DESC(hgpk_mode,
"default hgpk mode: mouse, glidesensor or pentablet");
static int hgpk_default_mode = HGPK_MODE_MOUSE;
static const char * const hgpk_mode_names[] = ;
static int hgpk_mode_from_name(const char *buf, int len)
static int approx_half(int curr, int prev)
static int hgpk_discard_decay_hack(struct psmouse *psmouse, int x, int y)
static void hgpk_reset_spew_detection(struct hgpk_data *priv)
static void hgpk_reset_hack_state(struct psmouse *psmouse)
static void hgpk_spewing_hack(struct psmouse *psmouse,
int l, int r, int x, int y)
static bool hgpk_is_byte_valid(struct psmouse *psmouse, unsigned char *packet)
static void hgpk_process_advanced_packet(struct psmouse *psmouse)
static void hgpk_process_simple_packet(struct psmouse *psmouse)
static psmouse_ret_t hgpk_process_byte(struct psmouse *psmouse)
static int hgpk_select_mode(struct psmouse *psmouse)
static void hgpk_setup_input_device(struct input_dev *input,
struct input_dev *old_input,
enum hgpk_mode mode)
static int hgpk_reset_device(struct psmouse *psmouse, bool recalibrate)
static int hgpk_force_recalibrate(struct psmouse *psmouse)
static int hgpk_toggle_powersave(struct psmouse *psmouse, int enable)
static int hgpk_poll(struct psmouse *psmouse)
static int hgpk_reconnect(struct psmouse *psmouse)
static ssize_t hgpk_show_powered(struct psmouse *psmouse, void *data, char *buf)
static ssize_t hgpk_set_powered(struct psmouse *psmouse, void *data,
const char *buf, size_t count)
__PSMOUSE_DEFINE_ATTR(powered, S_IWUSR | S_IRUGO, NULL,
hgpk_show_powered, hgpk_set_powered, false);
static ssize_t attr_show_mode(struct psmouse *psmouse, void *data, char *buf)
static ssize_t attr_set_mode(struct psmouse *psmouse, void *data,
const char *buf, size_t len)
PSMOUSE_DEFINE_ATTR(hgpk_mode, S_IWUSR | S_IRUGO, NULL,
attr_show_mode, attr_set_mode);
static ssize_t hgpk_trigger_recal_show(struct psmouse *psmouse,
void *data, char *buf)
static ssize_t hgpk_trigger_recal(struct psmouse *psmouse, void *data,
const char *buf, size_t count)
__PSMOUSE_DEFINE_ATTR(recalibrate, S_IWUSR | S_IRUGO, NULL,
hgpk_trigger_recal_show, hgpk_trigger_recal, false);
static void hgpk_disconnect(struct psmouse *psmouse)
static void hgpk_recalib_work(struct work_struct *work)
static int hgpk_register(struct psmouse *psmouse)
int hgpk_init(struct psmouse *psmouse)
static enum hgpk_model_t hgpk_get_model(struct psmouse *psmouse)
int hgpk_detect(struct psmouse *psmouse, bool set_properties)
void hgpk_module_init(void)
