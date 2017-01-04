#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define dprintk(fmt, ...)			\
do  while (0)
#define SONY_LAPTOP_DRIVER_VERSION	"0.6"
#define SONY_NC_CLASS		"sony-nc"
#define SONY_NC_HID		"SNY5001"
#define SONY_NC_DRIVER_NAME	"Sony Notebook Control Driver"
#define SONY_PIC_CLASS		"sony-pic"
#define SONY_PIC_HID		"SNY6001"
#define SONY_PIC_DRIVER_NAME	"Sony Programmable IO Control Driver"
MODULE_AUTHOR("Stelian Pop, Mattia Dongili");
MODULE_DESCRIPTION("Sony laptop extras driver (SPIC and SNC ACPI device)");
MODULE_LICENSE("GPL");
MODULE_VERSION(SONY_LAPTOP_DRIVER_VERSION);
static int debug;
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, "set this to 1 (and RTFM) if you want to help "
"the development of this driver");
static int no_spic;
module_param(no_spic, int, 0444);
MODULE_PARM_DESC(no_spic,
"set this if you don't want to enable the SPIC device");
static int compat;
module_param(compat, int, 0444);
MODULE_PARM_DESC(compat,
"set this if you want to enable backward compatibility mode");
static unsigned long mask = 0xffffffff;
module_param(mask, ulong, 0644);
MODULE_PARM_DESC(mask,
"set this to the mask of event you want to enable (see doc)");
static int camera;
module_param(camera, int, 0444);
MODULE_PARM_DESC(camera,
"set this to 1 to enable Motion Eye camera controls "
"(only use it if you have a C1VE or C1VN model)");
static int minor = -1;
module_param(minor, int, 0);
MODULE_PARM_DESC(minor,
"minor number of the misc device for the SPIC compatibility code, "
"default is -1 (automatic)");
static int kbd_backlight;
module_param(kbd_backlight, int, 0444);
MODULE_PARM_DESC(kbd_backlight,
"set this to 0 to disable keyboard backlight, "
"1 to enable it (default: 0)");
static int kbd_backlight_timeout;
module_param(kbd_backlight_timeout, int, 0444);
MODULE_PARM_DESC(kbd_backlight_timeout,
"set this to 0 to set the default 10 seconds timeout, "
"1 for 30 seconds, 2 for 60 seconds and 3 to disable timeout "
"(default: 0)");
static void sony_nc_kbd_backlight_resume(void);
enum sony_nc_rfkill ;
static int sony_rfkill_handle;
static struct rfkill *sony_rfkill_devices[N_SONY_RFKILL];
static int sony_rfkill_address[N_SONY_RFKILL] = ;
static void sony_nc_rfkill_update(void);
#define SONY_LAPTOP_BUF_SIZE	128
struct sony_laptop_input_s ;
static struct sony_laptop_input_s sony_laptop_input = ;
struct sony_laptop_keypress ;
static int sony_laptop_input_index[] = ;
static int sony_laptop_input_keycode_map[] = ;
static void do_sony_laptop_release_key(unsigned long unused)
static void sony_laptop_report_input_event(u8 event)
static int sony_laptop_setup_input(struct acpi_device *acpi_device)
static void sony_laptop_remove_input(void)
static atomic_t sony_pf_users = ATOMIC_INIT(0);
static struct platform_driver sony_pf_driver = ;
static struct platform_device *sony_pf_device;
static int sony_pf_add(void)
static void sony_pf_remove(void)
#define SONY_MAX_BRIGHTNESS	8
#define SNC_VALIDATE_IN		0
#define SNC_VALIDATE_OUT	1
static ssize_t sony_nc_sysfs_show(struct device *, struct device_attribute *,
char *);
static ssize_t sony_nc_sysfs_store(struct device *, struct device_attribute *,
const char *, size_t);
static int boolean_validate(const int, const int);
static int brightness_default_validate(const int, const int);
struct sony_nc_value ;
#define SNC_HANDLE_NAMES(_name, _values...) \
static char *snc_##_name[] =
#define SNC_HANDLE(_name, _getters, _setters, _validate, _debug) \
#define SNC_HANDLE_NULL
SNC_HANDLE_NAMES(fnkey_get, "GHKE");
SNC_HANDLE_NAMES(brightness_def_get, "GPBR");
SNC_HANDLE_NAMES(brightness_def_set, "SPBR");
SNC_HANDLE_NAMES(cdpower_get, "GCDP");
SNC_HANDLE_NAMES(cdpower_set, "SCDP", "CDPW");
SNC_HANDLE_NAMES(audiopower_get, "GAZP");
SNC_HANDLE_NAMES(audiopower_set, "AZPW");
SNC_HANDLE_NAMES(lanpower_get, "GLNP");
SNC_HANDLE_NAMES(lanpower_set, "LNPW");
SNC_HANDLE_NAMES(lidstate_get, "GLID");
SNC_HANDLE_NAMES(indicatorlamp_get, "GILS");
SNC_HANDLE_NAMES(indicatorlamp_set, "SILS");
SNC_HANDLE_NAMES(gainbass_get, "GMGB");
SNC_HANDLE_NAMES(gainbass_set, "CMGB");
SNC_HANDLE_NAMES(PID_get, "GPID");
SNC_HANDLE_NAMES(CTR_get, "GCTR");
SNC_HANDLE_NAMES(CTR_set, "SCTR");
SNC_HANDLE_NAMES(PCR_get, "GPCR");
SNC_HANDLE_NAMES(PCR_set, "SPCR");
SNC_HANDLE_NAMES(CMI_get, "GCMI");
SNC_HANDLE_NAMES(CMI_set, "SCMI");
static struct sony_nc_value sony_nc_values[] = ;
static acpi_handle sony_nc_acpi_handle;
static struct acpi_device *sony_nc_acpi_device = NULL;
static int acpi_callgetfunc(acpi_handle handle, char *name, int *result)
static int acpi_callsetfunc(acpi_handle handle, char *name, int value,
int *result)
struct sony_nc_handles ;
static struct sony_nc_handles *handles;
static ssize_t sony_nc_handles_show(struct device *dev,
struct device_attribute *attr, char *buffer)
static int sony_nc_handles_setup(struct platform_device *pd)
static int sony_nc_handles_cleanup(struct platform_device *pd)
static int sony_find_snc_handle(int handle)
static int sony_call_snc_handle(int handle, int argument, int *result)
static int brightness_default_validate(const int direction, const int value)
static int boolean_validate(const int direction, const int value)
static ssize_t sony_nc_sysfs_show(struct device *dev, struct device_attribute *attr,
char *buffer)
static ssize_t sony_nc_sysfs_store(struct device *dev,
struct device_attribute *attr,
const char *buffer, size_t count)
struct sony_backlight_props ;
struct sony_backlight_props sony_bl_props;
static int sony_backlight_update_status(struct backlight_device *bd)
static int sony_backlight_get_brightness(struct backlight_device *bd)
static int sony_nc_get_brightness_ng(struct backlight_device *bd)
static int sony_nc_update_status_ng(struct backlight_device *bd)
static const struct backlight_ops sony_backlight_ops = ;
static const struct backlight_ops sony_backlight_ng_ops = ;
struct sony_nc_event ;
static struct sony_nc_event sony_100_events[] = ;
static struct sony_nc_event sony_127_events[] = ;
static void sony_nc_notify(struct acpi_device *device, u32 event)
static acpi_status sony_walk_callback(acpi_handle handle, u32 level,
void *context, void **return_value)
static int sony_nc_function_setup(struct acpi_device *device)
static int sony_nc_resume(struct acpi_device *device)
static void sony_nc_rfkill_cleanup(void)
static int sony_nc_rfkill_set(void *data, bool blocked)
static const struct rfkill_ops sony_rfkill_ops = ;
static int sony_nc_setup_rfkill(struct acpi_device *device,
enum sony_nc_rfkill nc_type)
static void sony_nc_rfkill_update(void)
static void sony_nc_rfkill_setup(struct acpi_device *device)
#define KBDBL_HANDLER	0x137
#define KBDBL_PRESENT	0xB00
#define	SET_MODE	0xC00
#define SET_STATE	0xD00
#define SET_TIMEOUT	0xE00
struct kbd_backlight ;
static struct kbd_backlight *kbdbl_handle;
static ssize_t __sony_nc_kbd_backlight_mode_set(u8 value)
static ssize_t sony_nc_kbd_backlight_mode_store(struct device *dev,
struct device_attribute *attr,
const char *buffer, size_t count)
static ssize_t sony_nc_kbd_backlight_mode_show(struct device *dev,
struct device_attribute *attr, char *buffer)
static int __sony_nc_kbd_backlight_timeout_set(u8 value)
static ssize_t sony_nc_kbd_backlight_timeout_store(struct device *dev,
struct device_attribute *attr,
const char *buffer, size_t count)
static ssize_t sony_nc_kbd_backlight_timeout_show(struct device *dev,
struct device_attribute *attr, char *buffer)
static int sony_nc_kbd_backlight_setup(struct platform_device *pd)
static int sony_nc_kbd_backlight_cleanup(struct platform_device *pd)
static void sony_nc_kbd_backlight_resume(void)
static void sony_nc_backlight_ng_read_limits(int handle,
struct sony_backlight_props *props)
static void sony_nc_backlight_setup(void)
static void sony_nc_backlight_cleanup(void)
static int sony_nc_add(struct acpi_device *device)
static int sony_nc_remove(struct acpi_device *device, int type)
static const struct acpi_device_id sony_device_ids[] = ;
MODULE_DEVICE_TABLE(acpi, sony_device_ids);
static const struct acpi_device_id sony_nc_device_ids[] = ;
static struct acpi_driver sony_nc_driver = ;
#define SONYPI_DEVICE_TYPE1	0x00000001
#define SONYPI_DEVICE_TYPE2	0x00000002
#define SONYPI_DEVICE_TYPE3	0x00000004
#define SONYPI_TYPE1_OFFSET	0x04
#define SONYPI_TYPE2_OFFSET	0x12
#define SONYPI_TYPE3_OFFSET	0x12
struct sony_pic_ioport ;
struct sony_pic_irq ;
struct sonypi_eventtypes ;
struct sony_pic_dev ;
static struct sony_pic_dev spic_dev = ;
static int spic_drv_registered;
#define SONYPI_JOGGER_MASK			0x00000001
#define SONYPI_CAPTURE_MASK			0x00000002
#define SONYPI_FNKEY_MASK			0x00000004
#define SONYPI_BLUETOOTH_MASK			0x00000008
#define SONYPI_PKEY_MASK			0x00000010
#define SONYPI_BACK_MASK			0x00000020
#define SONYPI_HELP_MASK			0x00000040
#define SONYPI_LID_MASK				0x00000080
#define SONYPI_ZOOM_MASK			0x00000100
#define SONYPI_THUMBPHRASE_MASK			0x00000200
#define SONYPI_MEYE_MASK			0x00000400
#define SONYPI_MEMORYSTICK_MASK			0x00000800
#define SONYPI_BATTERY_MASK			0x00001000
#define SONYPI_WIRELESS_MASK			0x00002000
struct sonypi_event ;
static struct sonypi_event sonypi_releaseev[] = ;
static struct sonypi_event sonypi_joggerev[] = ;
static struct sonypi_event sonypi_captureev[] = ;
static struct sonypi_event sonypi_fnkeyev[] = ;
static struct sonypi_event sonypi_pkeyev[] = ;
static struct sonypi_event sonypi_blueev[] = ;
static struct sonypi_event sonypi_wlessev[] = ;
static struct sonypi_event sonypi_backev[] = ;
static struct sonypi_event sonypi_helpev[] = ;
static struct sonypi_event sonypi_lidev[] = ;
static struct sonypi_event sonypi_zoomev[] = ;
static struct sonypi_event sonypi_thumbphraseev[] = ;
static struct sonypi_event sonypi_meyeev[] = ;
static struct sonypi_event sonypi_memorystickev[] = ;
static struct sonypi_event sonypi_batteryev[] = ;
static struct sonypi_event sonypi_volumeev[] = ;
static struct sonypi_event sonypi_brightnessev[] = ;
static struct sonypi_eventtypes type1_events[] = ;
static struct sonypi_eventtypes type2_events[] = ;
static struct sonypi_eventtypes type3_events[] = ;
#define ITERATIONS_LONG		10000
#define ITERATIONS_SHORT	10
#define wait_on_command(command, iterations)
static u8 sony_pic_call1(u8 dev)
static u8 sony_pic_call2(u8 dev, u8 fn)
static u8 sony_pic_call3(u8 dev, u8 fn, u8 v)
static int type3_handle_irq(const u8 data_mask, const u8 ev)
static void sony_pic_detect_device_type(struct sony_pic_dev *dev)
#define SONYPI_CAMERA_PICTURE		5
#define SONYPI_CAMERA_CONTROL		0x10
#define SONYPI_CAMERA_BRIGHTNESS		0
#define SONYPI_CAMERA_CONTRAST			1
#define SONYPI_CAMERA_HUE			2
#define SONYPI_CAMERA_COLOR			3
#define SONYPI_CAMERA_SHARPNESS			4
#define SONYPI_CAMERA_EXPOSURE_MASK		0xC
#define SONYPI_CAMERA_WHITE_BALANCE_MASK	0x3
#define SONYPI_CAMERA_PICTURE_MODE_MASK		0x30
#define SONYPI_CAMERA_MUTE_MASK			0x40
#define SONYPI_CAMERA_AGC			6
#define SONYPI_CAMERA_AGC_MASK			0x30
#define SONYPI_CAMERA_SHUTTER_MASK 		0x7
#define SONYPI_CAMERA_SHUTDOWN_REQUEST		7
#define SONYPI_CAMERA_CONTROL			0x10
#define SONYPI_CAMERA_STATUS 			7
#define SONYPI_CAMERA_STATUS_READY 		0x2
#define SONYPI_CAMERA_STATUS_POSITION		0x4
#define SONYPI_DIRECTION_BACKWARDS 		0x4
#define SONYPI_CAMERA_REVISION 			8
#define SONYPI_CAMERA_ROMVERSION 		9
static int __sony_pic_camera_ready(void)
static int __sony_pic_camera_off(void)
static int __sony_pic_camera_on(void)
int sony_pic_camera_command(int command, u8 value)
EXPORT_SYMBOL(sony_pic_camera_command);
static void __sony_pic_set_wwanpower(u8 state)
static ssize_t sony_pic_wwanpower_store(struct device *dev,
struct device_attribute *attr,
const char *buffer, size_t count)
static ssize_t sony_pic_wwanpower_show(struct device *dev,
struct device_attribute *attr, char *buffer)
static void __sony_pic_set_bluetoothpower(u8 state)
static ssize_t sony_pic_bluetoothpower_store(struct device *dev,
struct device_attribute *attr,
const char *buffer, size_t count)
static ssize_t sony_pic_bluetoothpower_show(struct device *dev,
struct device_attribute *attr, char *buffer)
#define SONY_PIC_FAN0_STATUS	0x93
static int sony_pic_set_fanspeed(unsigned long value)
static int sony_pic_get_fanspeed(u8 *value)
static ssize_t sony_pic_fanspeed_store(struct device *dev,
struct device_attribute *attr,
const char *buffer, size_t count)
static ssize_t sony_pic_fanspeed_show(struct device *dev,
struct device_attribute *attr, char *buffer)
#define SPIC_ATTR(_name, _mode)					\
struct device_attribute spic_attr_##_name = __ATTR(_name,	\
_mode, sony_pic_## _name ##_show,		\
sony_pic_## _name ##_store)
static SPIC_ATTR(bluetoothpower, 0644);
static SPIC_ATTR(wwanpower, 0644);
static SPIC_ATTR(fanspeed, 0644);
static struct attribute *spic_attributes[] = ;
static struct attribute_group spic_attribute_group = ;
#define SONYPI_BAT_FLAGS	0x81
#define SONYPI_LCD_LIGHT	0x96
#define SONYPI_BAT1_PCTRM	0xa0
#define SONYPI_BAT1_LEFT	0xa2
#define SONYPI_BAT1_MAXRT	0xa4
#define SONYPI_BAT2_PCTRM	0xa8
#define SONYPI_BAT2_LEFT	0xaa
#define SONYPI_BAT2_MAXRT	0xac
#define SONYPI_BAT1_MAXTK	0xb0
#define SONYPI_BAT1_FULL	0xb2
#define SONYPI_BAT2_MAXTK	0xb8
#define SONYPI_BAT2_FULL	0xba
#define SONYPI_TEMP_STATUS	0xC1
struct sonypi_compat_s ;
static struct sonypi_compat_s sonypi_compat = ;
static int sonypi_misc_fasync(int fd, struct file *filp, int on)
static int sonypi_misc_release(struct inode *inode, struct file *file)
static int sonypi_misc_open(struct inode *inode, struct file *file)
static ssize_t sonypi_misc_read(struct file *file, char __user *buf,
size_t count, loff_t *pos)
static unsigned int sonypi_misc_poll(struct file *file, poll_table *wait)
static int ec_read16(u8 addr, u16 *value)
static long sonypi_misc_ioctl(struct file *fp, unsigned int cmd,
unsigned long arg)
static const struct file_operations sonypi_misc_fops = ;
static struct miscdevice sonypi_misc_device = ;
static void sonypi_compat_report_event(u8 event)
static int sonypi_compat_init(void)
static void sonypi_compat_exit(void)
static int sonypi_compat_init(void)
static void sonypi_compat_exit(void)
static void sonypi_compat_report_event(u8 event)
static acpi_status
sony_pic_read_possible_resource(struct acpi_resource *resource, void *context)
static int sony_pic_possible_resources(struct acpi_device *device)
static int sony_pic_disable(struct acpi_device *device)
static int sony_pic_enable(struct acpi_device *device,
struct sony_pic_ioport *ioport, struct sony_pic_irq *irq)
static irqreturn_t sony_pic_irq(int irq, void *dev_id)
static int sony_pic_remove(struct acpi_device *device, int type)
static int sony_pic_add(struct acpi_device *device)
static int sony_pic_suspend(struct acpi_device *device, pm_message_t state)
static int sony_pic_resume(struct acpi_device *device)
static const struct acpi_device_id sony_pic_device_ids[] = ;
static struct acpi_driver sony_pic_driver = ;
static struct dmi_system_id __initdata sonypi_dmi_table[] = ;
static int __init sony_laptop_init(void)
static void __exit sony_laptop_exit(void)
module_init(sony_laptop_init);
module_exit(sony_laptop_exit);
