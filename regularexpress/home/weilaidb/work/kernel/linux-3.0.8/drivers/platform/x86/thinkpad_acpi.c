#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define TPACPI_VERSION "0.24"
#define TPACPI_SYSFS_VERSION 0x020700
#define TP_CMOS_VOLUME_DOWN	0
#define TP_CMOS_VOLUME_UP	1
#define TP_CMOS_VOLUME_MUTE	2
#define TP_CMOS_BRIGHTNESS_UP	4
#define TP_CMOS_BRIGHTNESS_DOWN	5
#define TP_CMOS_THINKLIGHT_ON	12
#define TP_CMOS_THINKLIGHT_OFF	13
enum tp_nvram_addr ;
enum ;
enum ;
#define TPACPI_ACPI_IBM_HKEY_HID	"IBM0068"
#define TPACPI_ACPI_LENOVO_HKEY_HID	"LEN0068"
#define TPACPI_ACPI_EC_HID		"PNP0C09"
#define TPACPI_HKEY_INPUT_PRODUCT	0x5054
#define TPACPI_HKEY_INPUT_VERSION	0x4101
enum ;
enum ;
enum tpacpi_hkey_event_t ;
#define TPACPI_NAME "thinkpad"
#define TPACPI_DESC "ThinkPad ACPI Extras"
#define TPACPI_FILE TPACPI_NAME "_acpi"
#define TPACPI_URL "http:
#define TPACPI_MAIL "ibm-acpi-devel@lists.sourceforge.net"
#define TPACPI_PROC_DIR "ibm"
#define TPACPI_ACPI_EVENT_PREFIX "ibm"
#define TPACPI_DRVR_NAME TPACPI_FILE
#define TPACPI_DRVR_SHORTNAME "tpacpi"
#define TPACPI_HWMON_DRVR_NAME TPACPI_NAME "_hwmon"
#define TPACPI_NVRAM_KTHREAD_NAME "ktpacpi_nvramd"
#define TPACPI_WORKQUEUE_NAME "ktpacpid"
#define TPACPI_MAX_ACPI_ARGS 3
#define TPACPI_DBG_ALL		0xffff
#define TPACPI_DBG_DISCLOSETASK	0x8000
#define TPACPI_DBG_INIT		0x0001
#define TPACPI_DBG_EXIT		0x0002
#define TPACPI_DBG_RFKILL	0x0004
#define TPACPI_DBG_HKEY		0x0008
#define TPACPI_DBG_FAN		0x0010
#define TPACPI_DBG_BRGHT	0x0020
#define TPACPI_DBG_MIXER	0x0040
#define onoff(status, bit) ((status) & (1 << (bit)) ? "on" : "off")
#define enabled(status, bit) ((status) & (1 << (bit)) ? "enabled" : "disabled")
#define strlencmp(a, b) (strncmp((a), (b), strlen(b)))
struct ibm_struct;
struct tp_acpi_drv_struct ;
struct ibm_struct ;
struct ibm_init_struct ;
static struct  tp_features;
static struct  tp_warned;
struct thinkpad_id_data ;
static struct thinkpad_id_data thinkpad_id;
static enum  tpacpi_lifecycle;
static int experimental;
static u32 dbg_level;
static struct workqueue_struct *tpacpi_wq;
enum led_status_t ;
struct tpacpi_led_classdev ;
static unsigned int bright_maxlvl;
static int dbg_wlswemul;
static int tpacpi_wlsw_emulstate;
static int dbg_bluetoothemul;
static int tpacpi_bluetooth_emulstate;
static int dbg_wwanemul;
static int tpacpi_wwan_emulstate;
static int dbg_uwbemul;
static int tpacpi_uwb_emulstate;
#define dbg_printk(a_dbg_level, format, arg...)				\
do  while (0)
#define vdbg_printk dbg_printk
static const char *str_supported(int is_supported);
static inline const char *str_supported(int is_supported)
#define vdbg_printk(a_dbg_level, format, arg...)	\
no_printk(format, ##arg)
static void tpacpi_log_usertask(const char * const what)
#define tpacpi_disclose_usertask(what, format, arg...)			\
do  while (0)
#define TPACPI_MATCH_ANY		0xffffU
#define TPACPI_MATCH_UNKNOWN		0U
#define TPID(__c1, __c2) (((__c2) << 8) | (__c1))
#define TPACPI_Q_IBM(__id1, __id2, __quirk)	\
#define TPACPI_Q_LNV(__id1, __id2, __quirk)	\
#define TPACPI_QEC_LNV(__id1, __id2, __quirk)	\
struct tpacpi_quirk ;
static unsigned long __init tpacpi_check_quirks(
const struct tpacpi_quirk *qlist,
unsigned int qlist_size)
static inline bool __pure __init tpacpi_is_lenovo(void)
static inline bool __pure __init tpacpi_is_ibm(void)
static acpi_handle root_handle;
static acpi_handle ec_handle;
#define TPACPI_HANDLE(object, parent, paths...)			\
static acpi_handle  object##_handle;			\
static const acpi_handle *object##_parent __initdata =	\
&parent##_handle; \
static char *object##_paths[] __initdata =
TPACPI_HANDLE(ecrd, ec, "ECRD");
TPACPI_HANDLE(ecwr, ec, "ECWR");
TPACPI_HANDLE(cmos, root, "\\UCMS",
"\\CMOS",
"\\CMS",
);
TPACPI_HANDLE(hkey, ec, "\\_SB.HKEY",
"^HKEY",
"HKEY",
);
static int acpi_evalf(acpi_handle handle,
void *res, char *method, char *fmt, ...)
static int acpi_ec_read(int i, u8 *p)
static int acpi_ec_write(int i, u8 v)
static int issue_thinkpad_cmos_command(int cmos_cmd)
#define TPACPI_ACPIHANDLE_INIT(object) \
drv_acpi_handle_init(#object, &object##_handle, *object##_parent, \
object##_paths, ARRAY_SIZE(object##_paths))
static void __init drv_acpi_handle_init(const char *name,
acpi_handle *handle, const acpi_handle parent,
char **paths, const int num_paths)
static acpi_status __init tpacpi_acpi_handle_locate_callback(acpi_handle handle,
u32 level, void *context, void **return_value)
static void __init tpacpi_acpi_handle_locate(const char *name,
const char *hid,
acpi_handle *handle)
static void dispatch_acpi_notify(acpi_handle handle, u32 event, void *data)
static int __init setup_acpi_notify(struct ibm_struct *ibm)
static int __init tpacpi_device_add(struct acpi_device *device)
static int __init register_tpacpi_subdriver(struct ibm_struct *ibm)
static int dispatch_proc_show(struct seq_file *m, void *v)
static int dispatch_proc_open(struct inode *inode, struct file *file)
static ssize_t dispatch_proc_write(struct file *file,
const char __user *userbuf,
size_t count, loff_t *pos)
static const struct file_operations dispatch_proc_fops = ;
static char *next_cmd(char **cmds)
static struct platform_device *tpacpi_pdev;
static struct platform_device *tpacpi_sensors_pdev;
static struct device *tpacpi_hwmon;
static struct input_dev *tpacpi_inputdev;
static struct mutex tpacpi_inputdev_send_mutex;
static LIST_HEAD(tpacpi_all_drivers);
static int tpacpi_suspend_handler(struct platform_device *pdev,
pm_message_t state)
static int tpacpi_resume_handler(struct platform_device *pdev)
static void tpacpi_shutdown_handler(struct platform_device *pdev)
static struct platform_driver tpacpi_pdriver = ;
static struct platform_driver tpacpi_hwmon_pdriver = ;
struct attribute_set ;
struct attribute_set_obj  __attribute__((packed));
static struct attribute_set *create_attr_set(unsigned int max_members,
const char *name)
#define destroy_attr_set(_set) \
kfree(_set);
static int add_to_attr_set(struct attribute_set *s, struct attribute *attr)
static int add_many_to_attr_set(struct attribute_set *s,
struct attribute **attr,
unsigned int count)
static void delete_attr_set(struct attribute_set *s, struct kobject *kobj)
#define register_attr_set_with_sysfs(_attr_set, _kobj) \
sysfs_create_group(_kobj, &_attr_set->group)
static int parse_strtoul(const char *buf,
unsigned long max, unsigned long *value)
static void tpacpi_disable_brightness_delay(void)
static void printk_deprecated_attribute(const char * const what,
const char * const details)
enum tpacpi_rfkill_state ;
enum tpacpi_rfk_id ;
static const char *tpacpi_rfkill_names[] = ;
struct tpacpi_rfk ;
struct tpacpi_rfk_ops ;
static struct tpacpi_rfk *tpacpi_rfkill_switches[TPACPI_RFK_SW_MAX];
static int tpacpi_rfk_update_swstate(const struct tpacpi_rfk *tp_rfk)
static void tpacpi_rfk_update_swstate_all(void)
static void tpacpi_rfk_update_hwblock_state(bool blocked)
static int hotkey_get_wlsw(void);
static bool tpacpi_rfk_check_hwblock_state(void)
static int tpacpi_rfk_hook_set_block(void *data, bool blocked)
static const struct rfkill_ops tpacpi_rfk_rfkill_ops = ;
static int __init tpacpi_new_rfkill(const enum tpacpi_rfk_id id,
const struct tpacpi_rfk_ops *tp_rfkops,
const enum rfkill_type rfktype,
const char *name,
const bool set_default)
static void tpacpi_destroy_rfkill(const enum tpacpi_rfk_id id)
static void printk_deprecated_rfkill_attribute(const char * const what)
static ssize_t tpacpi_rfk_sysfs_enable_show(const enum tpacpi_rfk_id id,
struct device_attribute *attr,
char *buf)
static ssize_t tpacpi_rfk_sysfs_enable_store(const enum tpacpi_rfk_id id,
struct device_attribute *attr,
const char *buf, size_t count)
static int tpacpi_rfk_procfs_read(const enum tpacpi_rfk_id id, struct seq_file *m)
static int tpacpi_rfk_procfs_write(const enum tpacpi_rfk_id id, char *buf)
static ssize_t tpacpi_driver_interface_version_show(
struct device_driver *drv,
char *buf)
static DRIVER_ATTR(interface_version, S_IRUGO,
tpacpi_driver_interface_version_show, NULL);
static ssize_t tpacpi_driver_debug_show(struct device_driver *drv,
char *buf)
static ssize_t tpacpi_driver_debug_store(struct device_driver *drv,
const char *buf, size_t count)
static DRIVER_ATTR(debug_level, S_IWUSR | S_IRUGO,
tpacpi_driver_debug_show, tpacpi_driver_debug_store);
static ssize_t tpacpi_driver_version_show(struct device_driver *drv,
char *buf)
static DRIVER_ATTR(version, S_IRUGO,
tpacpi_driver_version_show, NULL);
static ssize_t tpacpi_driver_wlsw_emulstate_show(struct device_driver *drv,
char *buf)
static ssize_t tpacpi_driver_wlsw_emulstate_store(struct device_driver *drv,
const char *buf, size_t count)
static DRIVER_ATTR(wlsw_emulstate, S_IWUSR | S_IRUGO,
tpacpi_driver_wlsw_emulstate_show,
tpacpi_driver_wlsw_emulstate_store);
static ssize_t tpacpi_driver_bluetooth_emulstate_show(
struct device_driver *drv,
char *buf)
static ssize_t tpacpi_driver_bluetooth_emulstate_store(
struct device_driver *drv,
const char *buf, size_t count)
static DRIVER_ATTR(bluetooth_emulstate, S_IWUSR | S_IRUGO,
tpacpi_driver_bluetooth_emulstate_show,
tpacpi_driver_bluetooth_emulstate_store);
static ssize_t tpacpi_driver_wwan_emulstate_show(
struct device_driver *drv,
char *buf)
static ssize_t tpacpi_driver_wwan_emulstate_store(
struct device_driver *drv,
const char *buf, size_t count)
static DRIVER_ATTR(wwan_emulstate, S_IWUSR | S_IRUGO,
tpacpi_driver_wwan_emulstate_show,
tpacpi_driver_wwan_emulstate_store);
static ssize_t tpacpi_driver_uwb_emulstate_show(
struct device_driver *drv,
char *buf)
static ssize_t tpacpi_driver_uwb_emulstate_store(
struct device_driver *drv,
const char *buf, size_t count)
static DRIVER_ATTR(uwb_emulstate, S_IWUSR | S_IRUGO,
tpacpi_driver_uwb_emulstate_show,
tpacpi_driver_uwb_emulstate_store);
static struct driver_attribute *tpacpi_driver_attributes[] = ;
static int __init tpacpi_create_driver_attributes(struct device_driver *drv)
static void tpacpi_remove_driver_attributes(struct device_driver *drv)
#define TPV_Q(__v, __id1, __id2, __bv1, __bv2)		\
#define TPV_Q_X(__v, __bid1, __bid2, __bv1, __bv2,	\
__eid, __ev1, __ev2)			\
#define TPV_QI0(__id1, __id2, __bv1, __bv2) \
TPV_Q(PCI_VENDOR_ID_IBM, __id1, __id2, __bv1, __bv2)
#define TPV_QI1(__id1, __id2, __bv1, __bv2, __ev1, __ev2) \
TPV_Q_X(PCI_VENDOR_ID_IBM, __id1, __id2, 	\
__bv1, __bv2, TPID(__id1, __id2),	\
__ev1, __ev2),				\
TPV_Q_X(PCI_VENDOR_ID_IBM, __id1, __id2, 	\
__bv1, __bv2, TPACPI_MATCH_UNKNOWN,	\
__ev1, __ev2)
#define TPV_QI2(__bid1, __bid2, __bv1, __bv2,		\
__eid1, __eid2, __ev1, __ev2) 		\
TPV_Q_X(PCI_VENDOR_ID_IBM, __bid1, __bid2, 	\
__bv1, __bv2, TPID(__eid1, __eid2),	\
__ev1, __ev2),				\
TPV_Q_X(PCI_VENDOR_ID_IBM, __bid1, __bid2, 	\
__bv1, __bv2, TPACPI_MATCH_UNKNOWN,	\
__ev1, __ev2)
#define TPV_QL0(__id1, __id2, __bv1, __bv2) \
TPV_Q(PCI_VENDOR_ID_LENOVO, __id1, __id2, __bv1, __bv2)
#define TPV_QL1(__id1, __id2, __bv1, __bv2, __ev1, __ev2) \
TPV_Q_X(PCI_VENDOR_ID_LENOVO, __id1, __id2, 	\
__bv1, __bv2, TPID(__id1, __id2),	\
__ev1, __ev2)
#define TPV_QL2(__bid1, __bid2, __bv1, __bv2,		\
__eid1, __eid2, __ev1, __ev2) 		\
TPV_Q_X(PCI_VENDOR_ID_LENOVO, __bid1, __bid2, 	\
__bv1, __bv2, TPID(__eid1, __eid2),	\
__ev1, __ev2)
static const struct tpacpi_quirk tpacpi_bios_version_qtable[] __initconst = ;
#undef TPV_QL1
#undef TPV_QL0
#undef TPV_QI2
#undef TPV_QI1
#undef TPV_QI0
#undef TPV_Q_X
#undef TPV_Q
static void __init tpacpi_check_outdated_fw(void)
static bool __init tpacpi_is_fw_known(void)
static int thinkpad_acpi_driver_read(struct seq_file *m)
static struct ibm_struct thinkpad_acpi_driver_data = ;
enum ;
enum ;
enum ;
enum ;
struct tp_nvram_state ;
static struct task_struct *tpacpi_hotkey_task;
static struct mutex hotkey_thread_mutex;
static struct mutex hotkey_thread_data_mutex;
static unsigned int hotkey_config_change;
static u32 hotkey_source_mask;
static unsigned int hotkey_poll_freq = 10;
#define HOTKEY_CONFIG_CRITICAL_START \
do  while (0);
#define HOTKEY_CONFIG_CRITICAL_END \
mutex_unlock(&hotkey_thread_data_mutex);
#define hotkey_source_mask 0U
#define HOTKEY_CONFIG_CRITICAL_START
#define HOTKEY_CONFIG_CRITICAL_END
static struct mutex hotkey_mutex;
static enum  hotkey_wakeup_reason;
static int hotkey_autosleep_ack;
static u32 hotkey_orig_mask;
static u32 hotkey_all_mask;
static u32 hotkey_reserved_mask;
static u32 hotkey_driver_mask;
static u32 hotkey_user_mask;
static u32 hotkey_acpi_mask;
static unsigned int hotkey_report_mode;
static u16 *hotkey_keycode_map;
static struct attribute_set *hotkey_dev_attributes;
static void tpacpi_driver_event(const unsigned int hkey_event);
static void hotkey_driver_event(const unsigned int scancode);
static void hotkey_poll_setup(const bool may_warn);
#define TP_HOTKEY_TABLET_MASK (1 << 3)
static int hotkey_get_wlsw(void)
static int hotkey_get_tablet_mode(int *status)
static int hotkey_mask_get(void)
void static hotkey_mask_warn_incomplete_mask(void)
static int hotkey_mask_set(u32 mask)
static int hotkey_user_mask_set(const u32 mask)
static int tpacpi_hotkey_driver_mask_set(const u32 mask)
static int hotkey_status_get(int *status)
static int hotkey_status_set(bool enable)
static void tpacpi_input_send_tabletsw(void)
static void tpacpi_input_send_key(const unsigned int scancode)
static void tpacpi_input_send_key_masked(const unsigned int scancode)
static struct tp_acpi_drv_struct ibm_hotkey_acpidriver;
static void tpacpi_hotkey_send_key(unsigned int scancode)
static void hotkey_read_nvram(struct tp_nvram_state *n, const u32 m)
static void hotkey_compare_and_issue_event(struct tp_nvram_state *oldn,
struct tp_nvram_state *newn,
const u32 event_mask)
static int hotkey_kthread(void *data)
static void hotkey_poll_stop_sync(void)
static void hotkey_poll_setup(const bool may_warn)
static void hotkey_poll_setup_safe(const bool may_warn)
static void hotkey_poll_set_freq(unsigned int freq)
static void hotkey_poll_setup(const bool __unused)
static void hotkey_poll_setup_safe(const bool __unused)
static int hotkey_inputdev_open(struct input_dev *dev)
static void hotkey_inputdev_close(struct input_dev *dev)
static ssize_t hotkey_enable_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t hotkey_enable_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static struct device_attribute dev_attr_hotkey_enable =
__ATTR(hotkey_enable, S_IWUSR | S_IRUGO,
hotkey_enable_show, hotkey_enable_store);
static ssize_t hotkey_mask_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t hotkey_mask_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static struct device_attribute dev_attr_hotkey_mask =
__ATTR(hotkey_mask, S_IWUSR | S_IRUGO,
hotkey_mask_show, hotkey_mask_store);
static ssize_t hotkey_bios_enabled_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static struct device_attribute dev_attr_hotkey_bios_enabled =
__ATTR(hotkey_bios_enabled, S_IRUGO, hotkey_bios_enabled_show, NULL);
static ssize_t hotkey_bios_mask_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static struct device_attribute dev_attr_hotkey_bios_mask =
__ATTR(hotkey_bios_mask, S_IRUGO, hotkey_bios_mask_show, NULL);
static ssize_t hotkey_all_mask_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static struct device_attribute dev_attr_hotkey_all_mask =
__ATTR(hotkey_all_mask, S_IRUGO, hotkey_all_mask_show, NULL);
static ssize_t hotkey_recommended_mask_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static struct device_attribute dev_attr_hotkey_recommended_mask =
__ATTR(hotkey_recommended_mask, S_IRUGO,
hotkey_recommended_mask_show, NULL);
static ssize_t hotkey_source_mask_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t hotkey_source_mask_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static struct device_attribute dev_attr_hotkey_source_mask =
__ATTR(hotkey_source_mask, S_IWUSR | S_IRUGO,
hotkey_source_mask_show, hotkey_source_mask_store);
static ssize_t hotkey_poll_freq_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t hotkey_poll_freq_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static struct device_attribute dev_attr_hotkey_poll_freq =
__ATTR(hotkey_poll_freq, S_IWUSR | S_IRUGO,
hotkey_poll_freq_show, hotkey_poll_freq_store);
static ssize_t hotkey_radio_sw_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static struct device_attribute dev_attr_hotkey_radio_sw =
__ATTR(hotkey_radio_sw, S_IRUGO, hotkey_radio_sw_show, NULL);
static void hotkey_radio_sw_notify_change(void)
static ssize_t hotkey_tablet_mode_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static struct device_attribute dev_attr_hotkey_tablet_mode =
__ATTR(hotkey_tablet_mode, S_IRUGO, hotkey_tablet_mode_show, NULL);
static void hotkey_tablet_mode_notify_change(void)
static ssize_t hotkey_report_mode_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static struct device_attribute dev_attr_hotkey_report_mode =
__ATTR(hotkey_report_mode, S_IRUGO, hotkey_report_mode_show, NULL);
static ssize_t hotkey_wakeup_reason_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static struct device_attribute dev_attr_hotkey_wakeup_reason =
__ATTR(wakeup_reason, S_IRUGO, hotkey_wakeup_reason_show, NULL);
static void hotkey_wakeup_reason_notify_change(void)
static ssize_t hotkey_wakeup_hotunplug_complete_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static struct device_attribute dev_attr_hotkey_wakeup_hotunplug_complete =
__ATTR(wakeup_hotunplug_complete, S_IRUGO,
hotkey_wakeup_hotunplug_complete_show, NULL);
static void hotkey_wakeup_hotunplug_complete_notify_change(void)
static struct attribute *hotkey_attributes[] __initdata = ;
static void tpacpi_send_radiosw_update(void)
static void hotkey_exit(void)
static void __init hotkey_unmap(const unsigned int scancode)
#define	TPACPI_HK_Q_INIMASK	0x0001
static const struct tpacpi_quirk tpacpi_hotkey_qtable[] __initconst = ;
typedef u16 tpacpi_keymap_entry_t;
typedef tpacpi_keymap_entry_t tpacpi_keymap_t[TPACPI_HOTKEY_MAP_LEN];
static int __init hotkey_init(struct ibm_init_struct *iibm)
static bool hotkey_notify_hotkey(const u32 hkey,
bool *send_acpi_ev,
bool *ignore_acpi_ev)
static bool hotkey_notify_wakeup(const u32 hkey,
bool *send_acpi_ev,
bool *ignore_acpi_ev)
static bool hotkey_notify_dockevent(const u32 hkey,
bool *send_acpi_ev,
bool *ignore_acpi_ev)
static bool hotkey_notify_usrevent(const u32 hkey,
bool *send_acpi_ev,
bool *ignore_acpi_ev)
static void thermal_dump_all_sensors(void);
static bool hotkey_notify_6xxx(const u32 hkey,
bool *send_acpi_ev,
bool *ignore_acpi_ev)
static void hotkey_notify(struct ibm_struct *ibm, u32 event)
static void hotkey_suspend(pm_message_t state)
static void hotkey_resume(void)
static int hotkey_read(struct seq_file *m)
static void hotkey_enabledisable_warn(bool enable)
static int hotkey_write(char *buf)
static const struct acpi_device_id ibm_htk_device_ids[] = ;
static struct tp_acpi_drv_struct ibm_hotkey_acpidriver = ;
static struct ibm_struct hotkey_driver_data = ;
enum ;
enum ;
#define TPACPI_RFK_BLUETOOTH_SW_NAME	"tpacpi_bluetooth_sw"
static int bluetooth_get_status(void)
static int bluetooth_set_status(enum tpacpi_rfkill_state state)
static ssize_t bluetooth_enable_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t bluetooth_enable_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static struct device_attribute dev_attr_bluetooth_enable =
__ATTR(bluetooth_enable, S_IWUSR | S_IRUGO,
bluetooth_enable_show, bluetooth_enable_store);
static struct attribute *bluetooth_attributes[] = ;
static const struct attribute_group bluetooth_attr_group = ;
static const struct tpacpi_rfk_ops bluetooth_tprfk_ops = ;
static void bluetooth_shutdown(void)
static void bluetooth_exit(void)
static int __init bluetooth_init(struct ibm_init_struct *iibm)
static int bluetooth_read(struct seq_file *m)
static int bluetooth_write(char *buf)
static struct ibm_struct bluetooth_driver_data = ;
enum ;
#define TPACPI_RFK_WWAN_SW_NAME		"tpacpi_wwan_sw"
static int wan_get_status(void)
static int wan_set_status(enum tpacpi_rfkill_state state)
static ssize_t wan_enable_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t wan_enable_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static struct device_attribute dev_attr_wan_enable =
__ATTR(wwan_enable, S_IWUSR | S_IRUGO,
wan_enable_show, wan_enable_store);
static struct attribute *wan_attributes[] = ;
static const struct attribute_group wan_attr_group = ;
static const struct tpacpi_rfk_ops wan_tprfk_ops = ;
static void wan_shutdown(void)
static void wan_exit(void)
static int __init wan_init(struct ibm_init_struct *iibm)
static int wan_read(struct seq_file *m)
static int wan_write(char *buf)
static struct ibm_struct wan_driver_data = ;
enum ;
#define TPACPI_RFK_UWB_SW_NAME	"tpacpi_uwb_sw"
static int uwb_get_status(void)
static int uwb_set_status(enum tpacpi_rfkill_state state)
static const struct tpacpi_rfk_ops uwb_tprfk_ops = ;
static void uwb_exit(void)
static int __init uwb_init(struct ibm_init_struct *iibm)
static struct ibm_struct uwb_driver_data = ;
enum video_access_mode ;
enum ;
enum ;
static enum video_access_mode video_supported;
static int video_orig_autosw;
static int video_autosw_get(void);
static int video_autosw_set(int enable);
TPACPI_HANDLE(vid, root,
"\\_SB.PCI.AGP.VGA",
"\\_SB.PCI0.AGP0.VID0",
"\\_SB.PCI0.VID0",
"\\_SB.PCI0.VID",
"\\_SB.PCI0.AGP.VGA",
"\\_SB.PCI0.AGP.VID",
);
TPACPI_HANDLE(vid2, root, "\\_SB.PCI0.AGPB.VID");
static int __init video_init(struct ibm_init_struct *iibm)
static void video_exit(void)
static int video_outputsw_get(void)
static int video_outputsw_set(int status)
static int video_autosw_get(void)
static int video_autosw_set(int enable)
static int video_outputsw_cycle(void)
static int video_expand_toggle(void)
static int video_read(struct seq_file *m)
static int video_write(char *buf)
static struct ibm_struct video_driver_data = ;
TPACPI_HANDLE(lght, root, "\\LGHT");
TPACPI_HANDLE(ledb, ec, "LEDB");
static int light_get_status(void)
static int light_set_status(int status)
static void light_set_status_worker(struct work_struct *work)
static void light_sysfs_set(struct led_classdev *led_cdev,
enum led_brightness brightness)
static enum led_brightness light_sysfs_get(struct led_classdev *led_cdev)
static struct tpacpi_led_classdev tpacpi_led_thinklight = ;
static int __init light_init(struct ibm_init_struct *iibm)
static void light_exit(void)
static int light_read(struct seq_file *m)
static int light_write(char *buf)
static struct ibm_struct light_driver_data = ;
static ssize_t cmos_command_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static struct device_attribute dev_attr_cmos_command =
__ATTR(cmos_command, S_IWUSR, NULL, cmos_command_store);
static int __init cmos_init(struct ibm_init_struct *iibm)
static void cmos_exit(void)
static int cmos_read(struct seq_file *m)
static int cmos_write(char *buf)
static struct ibm_struct cmos_driver_data = ;
enum led_access_mode ;
enum ;
static enum led_access_mode led_supported;
static acpi_handle led_handle;
#define TPACPI_LED_NUMLEDS 16
static struct tpacpi_led_classdev *tpacpi_leds;
static enum led_status_t tpacpi_led_state_cache[TPACPI_LED_NUMLEDS];
static const char * const tpacpi_led_names[TPACPI_LED_NUMLEDS] = ;
#define TPACPI_SAFE_LEDS	0x1081U
static inline bool tpacpi_is_led_restricted(const unsigned int led)
static int led_get_status(const unsigned int led)
static int led_set_status(const unsigned int led,
const enum led_status_t ledstatus)
static void led_set_status_worker(struct work_struct *work)
static void led_sysfs_set(struct led_classdev *led_cdev,
enum led_brightness brightness)
static int led_sysfs_blink_set(struct led_classdev *led_cdev,
unsigned long *delay_on, unsigned long *delay_off)
static enum led_brightness led_sysfs_get(struct led_classdev *led_cdev)
static void led_exit(void)
static int __init tpacpi_init_led(unsigned int led)
static const struct tpacpi_quirk led_useful_qtable[] __initconst = ;
#undef TPACPI_LEDQ_IBM
#undef TPACPI_LEDQ_LNV
static enum led_access_mode __init led_init_detect_mode(void)
static int __init led_init(struct ibm_init_struct *iibm)
#define str_led_status(s) \
((s) == TPACPI_LED_OFF ? "off" : \
((s) == TPACPI_LED_ON ? "on" : "blinking"))
static int led_read(struct seq_file *m)
static int led_write(char *buf)
static struct ibm_struct led_driver_data = ;
TPACPI_HANDLE(beep, ec, "BEEP");
#define TPACPI_BEEP_Q1 0x0001
static const struct tpacpi_quirk beep_quirk_table[] __initconst = ;
static int __init beep_init(struct ibm_init_struct *iibm)
static int beep_read(struct seq_file *m)
static int beep_write(char *buf)
static struct ibm_struct beep_driver_data = ;
enum thermal_access_mode ;
enum ;
#define TPACPI_MAX_THERMAL_SENSORS 16
struct ibm_thermal_sensors_struct ;
static enum thermal_access_mode thermal_read_mode;
static int thermal_get_sensor(int idx, s32 *value)
static int thermal_get_sensors(struct ibm_thermal_sensors_struct *s)
static void thermal_dump_all_sensors(void)
static ssize_t thermal_temp_input_show(struct device *dev,
struct device_attribute *attr,
char *buf)
#define THERMAL_SENSOR_ATTR_TEMP(_idxA, _idxB) \
SENSOR_ATTR(temp##_idxA##_input, S_IRUGO, \
thermal_temp_input_show, NULL, _idxB)
static struct sensor_device_attribute sensor_dev_attr_thermal_temp_input[] = ;
#define THERMAL_ATTRS(X) \
&sensor_dev_attr_thermal_temp_input[X].dev_attr.attr
static struct attribute *thermal_temp_input_attr[] = ;
static const struct attribute_group thermal_temp_input16_group = ;
static const struct attribute_group thermal_temp_input8_group = ;
#undef THERMAL_SENSOR_ATTR_TEMP
#undef THERMAL_ATTRS
static int __init thermal_init(struct ibm_init_struct *iibm)
static void thermal_exit(void)
static int thermal_read(struct seq_file *m)
static struct ibm_struct thermal_driver_data = ;
#define TPACPI_BACKLIGHT_DEV_NAME "thinkpad_screen"
enum ;
enum tpacpi_brightness_access_mode ;
static struct backlight_device *ibm_backlight_device;
static enum tpacpi_brightness_access_mode brightness_mode =
TPACPI_BRGHT_MODE_MAX;
static unsigned int brightness_enable = 2;
static struct mutex brightness_mutex;
static unsigned int tpacpi_brightness_nvram_get(void)
static void tpacpi_brightness_checkpoint_nvram(void)
static int tpacpi_brightness_get_raw(int *status)
static int tpacpi_brightness_set_ec(unsigned int value)
static int tpacpi_brightness_set_ucmsstep(unsigned int value)
static int brightness_set(unsigned int value)
static int brightness_update_status(struct backlight_device *bd)
static int brightness_get(struct backlight_device *bd)
static void tpacpi_brightness_notify_change(void)
static const struct backlight_ops ibm_backlight_data = ;
static int __init tpacpi_query_bcl_levels(acpi_handle handle)
static unsigned int __init tpacpi_check_std_acpi_brightness_support(void)
#define TPACPI_BRGHT_Q_NOEC	0x0001
#define TPACPI_BRGHT_Q_EC	0x0002
#define TPACPI_BRGHT_Q_ASK	0x8000
static const struct tpacpi_quirk brightness_quirk_table[] __initconst = ;
static void __init tpacpi_detect_brightness_capabilities(void)
static int __init brightness_init(struct ibm_init_struct *iibm)
static void brightness_suspend(pm_message_t state)
static void brightness_shutdown(void)
static void brightness_exit(void)
static int brightness_read(struct seq_file *m)
static int brightness_write(char *buf)
static struct ibm_struct brightness_driver_data = ;
#define TPACPI_ALSA_DRVNAME  "ThinkPad EC"
#define TPACPI_ALSA_SHRTNAME "ThinkPad Console Audio Control"
#define TPACPI_ALSA_MIXERNAME TPACPI_ALSA_SHRTNAME
static int alsa_index = ~((1 << (SNDRV_CARDS - 3)) - 1);
static char *alsa_id = "ThinkPadEC";
static int alsa_enable = SNDRV_DEFAULT_ENABLE1;
struct tpacpi_alsa_data ;
static struct snd_card *alsa_card;
enum ;
enum tpacpi_volume_access_mode ;
enum tpacpi_volume_capabilities ;
static enum tpacpi_volume_access_mode volume_mode =
TPACPI_VOL_MODE_MAX;
static enum tpacpi_volume_capabilities volume_capabilities;
static int volume_control_allowed;
static struct mutex volume_mutex;
static void tpacpi_volume_checkpoint_nvram(void)
static int volume_get_status_ec(u8 *status)
static int volume_get_status(u8 *status)
static int volume_set_status_ec(const u8 status)
static int volume_set_status(const u8 status)
static int __volume_set_mute_ec(const bool mute)
static int volume_alsa_set_mute(const bool mute)
static int volume_set_mute(const bool mute)
static int __volume_set_volume_ec(const u8 vol)
static int volume_alsa_set_volume(const u8 vol)
static void volume_alsa_notify_change(void)
static int volume_alsa_vol_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int volume_alsa_vol_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int volume_alsa_vol_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define volume_alsa_mute_info snd_ctl_boolean_mono_info
static int volume_alsa_mute_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int volume_alsa_mute_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new volume_alsa_control_vol __devinitdata = ;
static struct snd_kcontrol_new volume_alsa_control_mute __devinitdata = ;
static void volume_suspend(pm_message_t state)
static void volume_resume(void)
static void volume_shutdown(void)
static void volume_exit(void)
static int __init volume_create_alsa_mixer(void)
#define TPACPI_VOL_Q_MUTEONLY	0x0001
#define TPACPI_VOL_Q_LEVEL	0x0002
static const struct tpacpi_quirk volume_quirk_table[] __initconst = ;
static int __init volume_init(struct ibm_init_struct *iibm)
static int volume_read(struct seq_file *m)
static int volume_write(char *buf)
static struct ibm_struct volume_driver_data = ;
#define alsa_card NULL
static void inline volume_alsa_notify_change(void)
static int __init volume_init(struct ibm_init_struct *iibm)
static struct ibm_struct volume_driver_data = ;
enum ;
enum fan_status_access_mode ;
enum fan_control_access_mode ;
enum fan_control_commands ;
static int fan_control_allowed;
static enum fan_status_access_mode fan_status_access_mode;
static enum fan_control_access_mode fan_control_access_mode;
static enum fan_control_commands fan_control_commands;
static u8 fan_control_initial_status;
static u8 fan_control_desired_level;
static u8 fan_control_resume_level;
static int fan_watchdog_maxinterval;
static struct mutex fan_mutex;
static void fan_watchdog_fire(struct work_struct *ignored);
static DECLARE_DELAYED_WORK(fan_watchdog_task, fan_watchdog_fire);
TPACPI_HANDLE(fans, ec, "FANS");
TPACPI_HANDLE(gfan, ec, "GFAN",
"\\FSPD",
);
TPACPI_HANDLE(sfan, ec, "SFAN",
"JFNS",
);
static void fan_quirk1_setup(void)
static void fan_quirk1_handle(u8 *fan_status)
static bool fan_select_fan1(void)
static bool fan_select_fan2(void)
static void fan_update_desired_level(u8 status)
static int fan_get_status(u8 *status)
static int fan_get_status_safe(u8 *status)
static int fan_get_speed(unsigned int *speed)
static int fan2_get_speed(unsigned int *speed)
static int fan_set_level(int level)
static int fan_set_level_safe(int level)
static int fan_set_enable(void)
static int fan_set_disable(void)
static int fan_set_speed(int speed)
static void fan_watchdog_reset(void)
static void fan_watchdog_fire(struct work_struct *ignored)
static ssize_t fan_pwm1_enable_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t fan_pwm1_enable_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static struct device_attribute dev_attr_fan_pwm1_enable =
__ATTR(pwm1_enable, S_IWUSR | S_IRUGO,
fan_pwm1_enable_show, fan_pwm1_enable_store);
static ssize_t fan_pwm1_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t fan_pwm1_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static struct device_attribute dev_attr_fan_pwm1 =
__ATTR(pwm1, S_IWUSR | S_IRUGO,
fan_pwm1_show, fan_pwm1_store);
static ssize_t fan_fan1_input_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static struct device_attribute dev_attr_fan_fan1_input =
__ATTR(fan1_input, S_IRUGO,
fan_fan1_input_show, NULL);
static ssize_t fan_fan2_input_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static struct device_attribute dev_attr_fan_fan2_input =
__ATTR(fan2_input, S_IRUGO,
fan_fan2_input_show, NULL);
static ssize_t fan_fan_watchdog_show(struct device_driver *drv,
char *buf)
static ssize_t fan_fan_watchdog_store(struct device_driver *drv,
const char *buf, size_t count)
static DRIVER_ATTR(fan_watchdog, S_IWUSR | S_IRUGO,
fan_fan_watchdog_show, fan_fan_watchdog_store);
static struct attribute *fan_attributes[] = ;
static const struct attribute_group fan_attr_group = ;
#define	TPACPI_FAN_Q1	0x0001
#define TPACPI_FAN_2FAN	0x0002
#define TPACPI_FAN_QI(__id1, __id2, __quirks)	\
#define TPACPI_FAN_QL(__id1, __id2, __quirks)	\
static const struct tpacpi_quirk fan_quirk_table[] __initconst = ;
#undef TPACPI_FAN_QL
#undef TPACPI_FAN_QI
static int __init fan_init(struct ibm_init_struct *iibm)
static void fan_exit(void)
static void fan_suspend(pm_message_t state)
static void fan_resume(void)
static int fan_read(struct seq_file *m)
static int fan_write_cmd_level(const char *cmd, int *rc)
static int fan_write_cmd_enable(const char *cmd, int *rc)
static int fan_write_cmd_disable(const char *cmd, int *rc)
static int fan_write_cmd_speed(const char *cmd, int *rc)
static int fan_write_cmd_watchdog(const char *cmd, int *rc)
static int fan_write(char *buf)
static struct ibm_struct fan_driver_data = ;
static void tpacpi_driver_event(const unsigned int hkey_event)
static void hotkey_driver_event(const unsigned int scancode)
static ssize_t thinkpad_acpi_pdev_name_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static struct device_attribute dev_attr_thinkpad_acpi_pdev_name =
__ATTR(name, S_IRUGO, thinkpad_acpi_pdev_name_show, NULL);
static struct proc_dir_entry *proc_dir;
static int force_load;
static const char * __init str_supported(int is_supported)
static void ibm_exit(struct ibm_struct *ibm)
static int __init ibm_init(struct ibm_init_struct *iibm)
static bool __pure __init tpacpi_is_fw_digit(const char c)
static bool __pure __init tpacpi_is_valid_fw_id(const char* const s,
const char t)
static int __must_check __init get_thinkpad_model_data(
struct thinkpad_id_data *tp)
static int __init probe_for_thinkpad(void)
static void __init thinkpad_acpi_init_banner(void)
static struct ibm_init_struct ibms_init[] __initdata = ;
static int __init set_ibm_param(const char *val, struct kernel_param *kp)
module_param(experimental, int, 0444);
MODULE_PARM_DESC(experimental,
"Enables experimental features when non-zero");
module_param_named(debug, dbg_level, uint, 0);
MODULE_PARM_DESC(debug, "Sets debug level bit-mask");
module_param(force_load, bool, 0444);
MODULE_PARM_DESC(force_load,
"Attempts to load the driver even on a "
"mis-identified ThinkPad when true");
module_param_named(fan_control, fan_control_allowed, bool, 0444);
MODULE_PARM_DESC(fan_control,
"Enables setting fan parameters features when true");
module_param_named(brightness_mode, brightness_mode, uint, 0444);
MODULE_PARM_DESC(brightness_mode,
"Selects brightness control strategy: "
"0=auto, 1=EC, 2=UCMS, 3=EC+NVRAM");
module_param(brightness_enable, uint, 0444);
MODULE_PARM_DESC(brightness_enable,
"Enables backlight control when 1, disables when 0");
module_param(hotkey_report_mode, uint, 0444);
MODULE_PARM_DESC(hotkey_report_mode,
"used for backwards compatibility with userspace, "
"see documentation");
module_param_named(volume_mode, volume_mode, uint, 0444);
MODULE_PARM_DESC(volume_mode,
"Selects volume control strategy: "
"0=auto, 1=EC, 2=N/A, 3=EC+NVRAM");
module_param_named(volume_capabilities, volume_capabilities, uint, 0444);
MODULE_PARM_DESC(volume_capabilities,
"Selects the mixer capabilites: "
"0=auto, 1=volume and mute, 2=mute only");
module_param_named(volume_control, volume_control_allowed, bool, 0444);
MODULE_PARM_DESC(volume_control,
"Enables software override for the console audio "
"control when true");
module_param_named(index, alsa_index, int, 0444);
MODULE_PARM_DESC(index, "ALSA index for the ACPI EC Mixer");
module_param_named(id, alsa_id, charp, 0444);
MODULE_PARM_DESC(id, "ALSA id for the ACPI EC Mixer");
module_param_named(enable, alsa_enable, bool, 0444);
MODULE_PARM_DESC(enable, "Enable the ALSA interface for the ACPI EC Mixer");
#define TPACPI_PARAM(feature) \
module_param_call(feature, set_ibm_param, NULL, NULL, 0); \
MODULE_PARM_DESC(feature, "Simulates thinkpad-acpi procfs command " \
"at module load, see documentation")
TPACPI_PARAM(hotkey);
TPACPI_PARAM(bluetooth);
TPACPI_PARAM(video);
TPACPI_PARAM(light);
TPACPI_PARAM(cmos);
TPACPI_PARAM(led);
TPACPI_PARAM(beep);
TPACPI_PARAM(brightness);
TPACPI_PARAM(volume);
TPACPI_PARAM(fan);
module_param(dbg_wlswemul, uint, 0444);
MODULE_PARM_DESC(dbg_wlswemul, "Enables WLSW emulation");
module_param_named(wlsw_state, tpacpi_wlsw_emulstate, bool, 0);
MODULE_PARM_DESC(wlsw_state,
"Initial state of the emulated WLSW switch");
module_param(dbg_bluetoothemul, uint, 0444);
MODULE_PARM_DESC(dbg_bluetoothemul, "Enables bluetooth switch emulation");
module_param_named(bluetooth_state, tpacpi_bluetooth_emulstate, bool, 0);
MODULE_PARM_DESC(bluetooth_state,
"Initial state of the emulated bluetooth switch");
module_param(dbg_wwanemul, uint, 0444);
MODULE_PARM_DESC(dbg_wwanemul, "Enables WWAN switch emulation");
module_param_named(wwan_state, tpacpi_wwan_emulstate, bool, 0);
MODULE_PARM_DESC(wwan_state,
"Initial state of the emulated WWAN switch");
module_param(dbg_uwbemul, uint, 0444);
MODULE_PARM_DESC(dbg_uwbemul, "Enables UWB switch emulation");
module_param_named(uwb_state, tpacpi_uwb_emulstate, bool, 0);
MODULE_PARM_DESC(uwb_state,
"Initial state of the emulated UWB switch");
static void thinkpad_acpi_module_exit(void)
static int __init thinkpad_acpi_module_init(void)
MODULE_ALIAS(TPACPI_DRVR_SHORTNAME);
MODULE_DEVICE_TABLE(acpi, ibm_htk_device_ids);
#define IBM_BIOS_MODULE_ALIAS(__type) \
MODULE_ALIAS("dmi:bvnIBM:bvr" __type "ET??WW*")
IBM_BIOS_MODULE_ALIAS("I[MU]");
MODULE_AUTHOR("Borislav Deianov <borislav@users.sf.net>");
MODULE_AUTHOR("Henrique de Moraes Holschuh <hmh@hmh.eng.br>");
MODULE_DESCRIPTION(TPACPI_DESC);
MODULE_VERSION(TPACPI_VERSION);
MODULE_LICENSE("GPL");
module_init(thinkpad_acpi_module_init);
module_exit(thinkpad_acpi_module_exit);
