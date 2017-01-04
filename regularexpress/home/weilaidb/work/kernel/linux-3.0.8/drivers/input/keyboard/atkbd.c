#define DRIVER_DESC	"AT and PS/2 keyboard driver"
MODULE_AUTHOR("Vojtech Pavlik <vojtech@suse.cz>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
static int atkbd_set = 2;
module_param_named(set, atkbd_set, int, 0);
MODULE_PARM_DESC(set, "Select keyboard code set (2 = default, 3 = PS/2 native)");
#if defined(__i386__) || defined(__x86_64__) || defined(__hppa__)
static bool atkbd_reset;
static bool atkbd_reset = true;
module_param_named(reset, atkbd_reset, bool, 0);
MODULE_PARM_DESC(reset, "Reset keyboard during initialization");
static bool atkbd_softrepeat;
module_param_named(softrepeat, atkbd_softrepeat, bool, 0);
MODULE_PARM_DESC(softrepeat, "Use software keyboard repeat");
static bool atkbd_softraw = true;
module_param_named(softraw, atkbd_softraw, bool, 0);
MODULE_PARM_DESC(softraw, "Use software generated rawmode");
static bool atkbd_scroll;
module_param_named(scroll, atkbd_scroll, bool, 0);
MODULE_PARM_DESC(scroll, "Enable scroll-wheel on MS Office and similar keyboards");
static bool atkbd_extra;
module_param_named(extra, atkbd_extra, bool, 0);
MODULE_PARM_DESC(extra, "Enable extra LEDs and keys on IBM RapidAcces, EzKey and similar keyboards");
static bool atkbd_terminal;
module_param_named(terminal, atkbd_terminal, bool, 0);
MODULE_PARM_DESC(terminal, "Enable break codes on an IBM Terminal keyboard connected via AT/PS2");
#define ATKBD_KEYMAP_SIZE	512
static const unsigned short atkbd_set2_keycode[ATKBD_KEYMAP_SIZE] = ;
static const unsigned short atkbd_set3_keycode[ATKBD_KEYMAP_SIZE] = ;
static const unsigned short atkbd_unxlate_table[128] = ;
#define ATKBD_CMD_SETLEDS	0x10ed
#define ATKBD_CMD_GSCANSET	0x11f0
#define ATKBD_CMD_SSCANSET	0x10f0
#define ATKBD_CMD_GETID		0x02f2
#define ATKBD_CMD_SETREP	0x10f3
#define ATKBD_CMD_ENABLE	0x00f4
#define ATKBD_CMD_RESET_DIS	0x00f5
#define ATKBD_CMD_RESET_DEF	0x00f6
#define ATKBD_CMD_SETALL_MB	0x00f8
#define ATKBD_CMD_SETALL_MBR	0x00fa
#define ATKBD_CMD_RESET_BAT	0x02ff
#define ATKBD_CMD_RESEND	0x00fe
#define ATKBD_CMD_EX_ENABLE	0x10ea
#define ATKBD_CMD_EX_SETLEDS	0x20eb
#define ATKBD_CMD_OK_GETID	0x02e8
#define ATKBD_RET_ACK		0xfa
#define ATKBD_RET_NAK		0xfe
#define ATKBD_RET_BAT		0xaa
#define ATKBD_RET_EMUL0		0xe0
#define ATKBD_RET_EMUL1		0xe1
#define ATKBD_RET_RELEASE	0xf0
#define ATKBD_RET_HANJA		0xf1
#define ATKBD_RET_HANGEUL	0xf2
#define ATKBD_RET_ERR		0xff
#define ATKBD_KEY_UNKNOWN	0
#define ATKBD_KEY_NULL		255
#define ATKBD_SCR_1		0xfffe
#define ATKBD_SCR_2		0xfffd
#define ATKBD_SCR_4		0xfffc
#define ATKBD_SCR_8		0xfffb
#define ATKBD_SCR_CLICK		0xfffa
#define ATKBD_SCR_LEFT		0xfff9
#define ATKBD_SCR_RIGHT		0xfff8
#define ATKBD_SPECIAL		ATKBD_SCR_RIGHT
#define ATKBD_LED_EVENT_BIT	0
#define ATKBD_REP_EVENT_BIT	1
#define ATKBD_XL_ERR		0x01
#define ATKBD_XL_BAT		0x02
#define ATKBD_XL_ACK		0x04
#define ATKBD_XL_NAK		0x08
#define ATKBD_XL_HANGEUL	0x10
#define ATKBD_XL_HANJA		0x20
static const struct  atkbd_scroll_keys[] = ;
struct atkbd ;
static void (*atkbd_platform_fixup)(struct atkbd *, const void *data);
static void *atkbd_platform_fixup_data;
static unsigned int (*atkbd_platform_scancode_fixup)(struct atkbd *, unsigned int);
static ssize_t atkbd_attr_show_helper(struct device *dev, char *buf,
ssize_t (*handler)(struct atkbd *, char *));
static ssize_t atkbd_attr_set_helper(struct device *dev, const char *buf, size_t count,
ssize_t (*handler)(struct atkbd *, const char *, size_t));
#define ATKBD_DEFINE_ATTR(_name)						\
static ssize_t atkbd_show_##_name(struct atkbd *, char *);			\
static ssize_t atkbd_set_##_name(struct atkbd *, const char *, size_t);		\
static ssize_t atkbd_do_show_##_name(struct device *d,				\
struct device_attribute *attr, char *b)		\
\
static ssize_t atkbd_do_set_##_name(struct device *d,				\
struct device_attribute *attr, const char *b, size_t s)	\
\
static struct device_attribute atkbd_attr_##_name =				\
__ATTR(_name, S_IWUSR | S_IRUGO, atkbd_do_show_##_name, atkbd_do_set_##_name);
ATKBD_DEFINE_ATTR(extra);
ATKBD_DEFINE_ATTR(force_release);
ATKBD_DEFINE_ATTR(scroll);
ATKBD_DEFINE_ATTR(set);
ATKBD_DEFINE_ATTR(softrepeat);
ATKBD_DEFINE_ATTR(softraw);
#define ATKBD_DEFINE_RO_ATTR(_name)						\
static ssize_t atkbd_show_##_name(struct atkbd *, char *);			\
static ssize_t atkbd_do_show_##_name(struct device *d,				\
struct device_attribute *attr, char *b)		\
\
static struct device_attribute atkbd_attr_##_name =				\
__ATTR(_name, S_IRUGO, atkbd_do_show_##_name, NULL);
ATKBD_DEFINE_RO_ATTR(err_count);
static struct attribute *atkbd_attributes[] = ;
static struct attribute_group atkbd_attribute_group = ;
static const unsigned int xl_table[] = ;
static bool atkbd_need_xlate(unsigned long xl_bit, unsigned char code)
static void atkbd_calculate_xl_bit(struct atkbd *atkbd, unsigned char code)
static unsigned int atkbd_compat_scancode(struct atkbd *atkbd, unsigned int code)
static irqreturn_t atkbd_interrupt(struct serio *serio, unsigned char data,
unsigned int flags)
static int atkbd_set_repeat_rate(struct atkbd *atkbd)
static int atkbd_set_leds(struct atkbd *atkbd)
static void atkbd_event_work(struct work_struct *work)
static void atkbd_schedule_event_work(struct atkbd *atkbd, int event_bit)
static int atkbd_event(struct input_dev *dev,
unsigned int type, unsigned int code, int value)
static inline void atkbd_enable(struct atkbd *atkbd)
static inline void atkbd_disable(struct atkbd *atkbd)
static int atkbd_probe(struct atkbd *atkbd)
static int atkbd_select_set(struct atkbd *atkbd, int target_set, int allow_extra)
static int atkbd_reset_state(struct atkbd *atkbd)
static int atkbd_activate(struct atkbd *atkbd)
static void atkbd_cleanup(struct serio *serio)
static void atkbd_disconnect(struct serio *serio)
static void atkbd_apply_forced_release_keylist(struct atkbd* atkbd,
const void *data)
static unsigned int atkbd_dell_laptop_forced_release_keys[] = ;
static unsigned int atkbd_hp_forced_release_keys[] = ;
static unsigned int atkbd_samsung_forced_release_keys[] = ;
static unsigned int atkbd_amilo_pi3525_forced_release_keys[] = ;
static unsigned int atkbd_amilo_xi3650_forced_release_keys[] = ;
static unsigned int atkdb_soltech_ta12_forced_release_keys[] = ;
static unsigned int atkbd_volume_forced_release_keys[] = ;
static unsigned int atkbd_oqo_01plus_scancode_fixup(struct atkbd *atkbd,
unsigned int code)
static void atkbd_set_keycode_table(struct atkbd *atkbd)
static void atkbd_set_device_attrs(struct atkbd *atkbd)
static int atkbd_connect(struct serio *serio, struct serio_driver *drv)
static int atkbd_reconnect(struct serio *serio)
static struct serio_device_id atkbd_serio_ids[] = ;
MODULE_DEVICE_TABLE(serio, atkbd_serio_ids);
static struct serio_driver atkbd_drv = ;
static ssize_t atkbd_attr_show_helper(struct device *dev, char *buf,
ssize_t (*handler)(struct atkbd *, char *))
static ssize_t atkbd_attr_set_helper(struct device *dev, const char *buf, size_t count,
ssize_t (*handler)(struct atkbd *, const char *, size_t))
static ssize_t atkbd_show_extra(struct atkbd *atkbd, char *buf)
static ssize_t atkbd_set_extra(struct atkbd *atkbd, const char *buf, size_t count)
static ssize_t atkbd_show_force_release(struct atkbd *atkbd, char *buf)
static ssize_t atkbd_set_force_release(struct atkbd *atkbd,
const char *buf, size_t count)
static ssize_t atkbd_show_scroll(struct atkbd *atkbd, char *buf)
static ssize_t atkbd_set_scroll(struct atkbd *atkbd, const char *buf, size_t count)
static ssize_t atkbd_show_set(struct atkbd *atkbd, char *buf)
static ssize_t atkbd_set_set(struct atkbd *atkbd, const char *buf, size_t count)
static ssize_t atkbd_show_softrepeat(struct atkbd *atkbd, char *buf)
static ssize_t atkbd_set_softrepeat(struct atkbd *atkbd, const char *buf, size_t count)
static ssize_t atkbd_show_softraw(struct atkbd *atkbd, char *buf)
static ssize_t atkbd_set_softraw(struct atkbd *atkbd, const char *buf, size_t count)
static ssize_t atkbd_show_err_count(struct atkbd *atkbd, char *buf)
static int __init atkbd_setup_forced_release(const struct dmi_system_id *id)
static int __init atkbd_setup_scancode_fixup(const struct dmi_system_id *id)
static const struct dmi_system_id atkbd_dmi_quirk_table[] __initconst = ;
static int __init atkbd_init(void)
static void __exit atkbd_exit(void)
module_init(atkbd_init);
module_exit(atkbd_exit);
