#define DRIVER_DESC	"PS/2 mouse driver"
MODULE_AUTHOR("Vojtech Pavlik <vojtech@suse.cz>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
static unsigned int psmouse_max_proto = PSMOUSE_AUTO;
static int psmouse_set_maxproto(const char *val, const struct kernel_param *);
static int psmouse_get_maxproto(char *buffer, const struct kernel_param *kp);
static struct kernel_param_ops param_ops_proto_abbrev = ;
#define param_check_proto_abbrev(name, p)	__param_check(name, p, unsigned int)
module_param_named(proto, psmouse_max_proto, proto_abbrev, 0644);
MODULE_PARM_DESC(proto, "Highest protocol extension to probe (bare, imps, exps, any). Useful for KVM switches.");
static unsigned int psmouse_resolution = 200;
module_param_named(resolution, psmouse_resolution, uint, 0644);
MODULE_PARM_DESC(resolution, "Resolution, in dpi.");
static unsigned int psmouse_rate = 100;
module_param_named(rate, psmouse_rate, uint, 0644);
MODULE_PARM_DESC(rate, "Report rate, in reports per second.");
static unsigned int psmouse_smartscroll = 1;
module_param_named(smartscroll, psmouse_smartscroll, bool, 0644);
MODULE_PARM_DESC(smartscroll, "Logitech Smartscroll autorepeat, 1 = enabled (default), 0 = disabled.");
static unsigned int psmouse_resetafter = 5;
module_param_named(resetafter, psmouse_resetafter, uint, 0644);
MODULE_PARM_DESC(resetafter, "Reset device after so many bad packets (0 = never).");
static unsigned int psmouse_resync_time;
module_param_named(resync_time, psmouse_resync_time, uint, 0644);
MODULE_PARM_DESC(resync_time, "How long can mouse stay idle before forcing resync (in seconds, 0 = never).");
PSMOUSE_DEFINE_ATTR(protocol, S_IWUSR | S_IRUGO,
NULL,
psmouse_attr_show_protocol, psmouse_attr_set_protocol);
PSMOUSE_DEFINE_ATTR(rate, S_IWUSR | S_IRUGO,
(void *) offsetof(struct psmouse, rate),
psmouse_show_int_attr, psmouse_attr_set_rate);
PSMOUSE_DEFINE_ATTR(resolution, S_IWUSR | S_IRUGO,
(void *) offsetof(struct psmouse, resolution),
psmouse_show_int_attr, psmouse_attr_set_resolution);
PSMOUSE_DEFINE_ATTR(resetafter, S_IWUSR | S_IRUGO,
(void *) offsetof(struct psmouse, resetafter),
psmouse_show_int_attr, psmouse_set_int_attr);
PSMOUSE_DEFINE_ATTR(resync_time, S_IWUSR | S_IRUGO,
(void *) offsetof(struct psmouse, resync_time),
psmouse_show_int_attr, psmouse_set_int_attr);
static struct attribute *psmouse_attributes[] = ;
static struct attribute_group psmouse_attribute_group = ;
static DEFINE_MUTEX(psmouse_mutex);
static struct workqueue_struct *kpsmoused_wq;
struct psmouse_protocol ;
static psmouse_ret_t psmouse_process_byte(struct psmouse *psmouse)
void psmouse_queue_work(struct psmouse *psmouse, struct delayed_work *work,
unsigned long delay)
static inline void __psmouse_set_state(struct psmouse *psmouse, enum psmouse_state new_state)
void psmouse_set_state(struct psmouse *psmouse, enum psmouse_state new_state)
static int psmouse_handle_byte(struct psmouse *psmouse)
static irqreturn_t psmouse_interrupt(struct serio *serio,
unsigned char data, unsigned int flags)
int psmouse_sliced_command(struct psmouse *psmouse, unsigned char command)
int psmouse_reset(struct psmouse *psmouse)
static int genius_detect(struct psmouse *psmouse, bool set_properties)
static int intellimouse_detect(struct psmouse *psmouse, bool set_properties)
static int im_explorer_detect(struct psmouse *psmouse, bool set_properties)
static int thinking_detect(struct psmouse *psmouse, bool set_properties)
static int ps2bare_detect(struct psmouse *psmouse, bool set_properties)
static int cortron_detect(struct psmouse *psmouse, bool set_properties)
static int psmouse_extensions(struct psmouse *psmouse,
unsigned int max_proto, bool set_properties)
static const struct psmouse_protocol psmouse_protocols[] = ;
static const struct psmouse_protocol *psmouse_protocol_by_type(enum psmouse_type type)
static const struct psmouse_protocol *psmouse_protocol_by_name(const char *name, size_t len)
static int psmouse_probe(struct psmouse *psmouse)
void psmouse_set_resolution(struct psmouse *psmouse, unsigned int resolution)
static void psmouse_set_rate(struct psmouse *psmouse, unsigned int rate)
static void psmouse_initialize(struct psmouse *psmouse)
static void psmouse_activate(struct psmouse *psmouse)
static void psmouse_deactivate(struct psmouse *psmouse)
static int psmouse_poll(struct psmouse *psmouse)
static void psmouse_resync(struct work_struct *work)
static void psmouse_cleanup(struct serio *serio)
static void psmouse_disconnect(struct serio *serio)
static int psmouse_switch_protocol(struct psmouse *psmouse,
const struct psmouse_protocol *proto)
static int psmouse_connect(struct serio *serio, struct serio_driver *drv)
static int psmouse_reconnect(struct serio *serio)
static struct serio_device_id psmouse_serio_ids[] = ;
MODULE_DEVICE_TABLE(serio, psmouse_serio_ids);
static struct serio_driver psmouse_drv = ;
ssize_t psmouse_attr_show_helper(struct device *dev, struct device_attribute *devattr,
char *buf)
ssize_t psmouse_attr_set_helper(struct device *dev, struct device_attribute *devattr,
const char *buf, size_t count)
static ssize_t psmouse_show_int_attr(struct psmouse *psmouse, void *offset, char *buf)
static ssize_t psmouse_set_int_attr(struct psmouse *psmouse, void *offset, const char *buf, size_t count)
static ssize_t psmouse_attr_show_protocol(struct psmouse *psmouse, void *data, char *buf)
static ssize_t psmouse_attr_set_protocol(struct psmouse *psmouse, void *data, const char *buf, size_t count)
static ssize_t psmouse_attr_set_rate(struct psmouse *psmouse, void *data, const char *buf, size_t count)
static ssize_t psmouse_attr_set_resolution(struct psmouse *psmouse, void *data, const char *buf, size_t count)
static int psmouse_set_maxproto(const char *val, const struct kernel_param *kp)
static int psmouse_get_maxproto(char *buffer, const struct kernel_param *kp)
static int __init psmouse_init(void)
static void __exit psmouse_exit(void)
module_init(psmouse_init);
module_exit(psmouse_exit);
