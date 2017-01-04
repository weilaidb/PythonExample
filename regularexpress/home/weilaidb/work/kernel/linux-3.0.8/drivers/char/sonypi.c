#define SONYPI_DRIVER_VERSION	 "1.26"
MODULE_AUTHOR("Stelian Pop <stelian@popies.net>");
MODULE_DESCRIPTION("Sony Programmable I/O Control Device driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(SONYPI_DRIVER_VERSION);
static int minor = -1;
module_param(minor, int, 0);
MODULE_PARM_DESC(minor,
"minor number of the misc device, default is -1 (automatic)");
static int verbose;
module_param(verbose, int, 0644);
MODULE_PARM_DESC(verbose, "be verbose, default is 0 (no)");
static int fnkeyinit;
module_param(fnkeyinit, int, 0444);
MODULE_PARM_DESC(fnkeyinit,
"set this if your Fn keys do not generate any event");
static int camera;
module_param(camera, int, 0444);
MODULE_PARM_DESC(camera,
"set this if you have a MotionEye camera (PictureBook series)");
static int compat;
module_param(compat, int, 0444);
MODULE_PARM_DESC(compat,
"set this if you want to enable backward compatibility mode");
static unsigned long mask = 0xffffffff;
module_param(mask, ulong, 0644);
MODULE_PARM_DESC(mask,
"set this to the mask of event you want to enable (see doc)");
static int useinput = 1;
module_param(useinput, int, 0444);
MODULE_PARM_DESC(useinput,
"set this if you would like sonypi to feed events to the input subsystem");
static int check_ioport = 1;
module_param(check_ioport, int, 0444);
MODULE_PARM_DESC(check_ioport,
"set this to 0 if you think the automatic ioport check for sony-laptop is wrong");
#define SONYPI_DEVICE_MODEL_TYPE1	1
#define SONYPI_DEVICE_MODEL_TYPE2	2
#define SONYPI_DEVICE_MODEL_TYPE3	3
#define SONYPI_IRQ_PORT			0x8034
#define SONYPI_IRQ_SHIFT		22
#define SONYPI_TYPE1_BASE		0x50
#define SONYPI_G10A			(SONYPI_TYPE1_BASE+0x14)
#define SONYPI_TYPE1_REGION_SIZE	0x08
#define SONYPI_TYPE1_EVTYPE_OFFSET	0x04
#define SONYPI_SIRQ			0x9b
#define SONYPI_SLOB			0x9c
#define SONYPI_SHIB			0x9d
#define SONYPI_TYPE2_REGION_SIZE	0x20
#define SONYPI_TYPE2_EVTYPE_OFFSET	0x12
#define SONYPI_TYPE3_BASE		0x40
#define SONYPI_TYPE3_GID2		(SONYPI_TYPE3_BASE+0x48)
#define SONYPI_TYPE3_MISC		(SONYPI_TYPE3_BASE+0x6d)
#define SONYPI_TYPE3_REGION_SIZE	0x20
#define SONYPI_TYPE3_EVTYPE_OFFSET	0x12
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
#define SONYPI_FAN0_STATUS	0x93
#define SONYPI_TEMP_STATUS	0xC1
#define SONYPI_DATA_IOPORT	0x62
#define SONYPI_CST_IOPORT	0x66
struct sonypi_ioport_list ;
static struct sonypi_ioport_list sonypi_type1_ioport_list[] = ;
static struct sonypi_ioport_list sonypi_type2_ioport_list[] = ;
static struct sonypi_ioport_list *sonypi_type3_ioport_list =
sonypi_type2_ioport_list;
struct sonypi_irq_list ;
static struct sonypi_irq_list sonypi_type1_irq_list[] = ;
static struct sonypi_irq_list sonypi_type2_irq_list[] = ;
static struct sonypi_irq_list *sonypi_type3_irq_list = sonypi_type2_irq_list;
#define SONYPI_CAMERA_BRIGHTNESS		0
#define SONYPI_CAMERA_CONTRAST			1
#define SONYPI_CAMERA_HUE			2
#define SONYPI_CAMERA_COLOR			3
#define SONYPI_CAMERA_SHARPNESS			4
#define SONYPI_CAMERA_PICTURE			5
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
static struct sonypi_eventtypes  sonypi_eventtypes[] = ;
#define SONYPI_BUF_SIZE	128
static struct  sonypi_inputkeys[] = ;
struct sonypi_keypress ;
static struct sonypi_device  sonypi_device;
#define ITERATIONS_LONG		10000
#define ITERATIONS_SHORT	10
#define wait_on_command(quiet, command, iterations)
#define SONYPI_ACPI_ACTIVE (!acpi_disabled)
#define SONYPI_ACPI_ACTIVE 0
static struct acpi_device *sonypi_acpi_device;
static int acpi_driver_registered;
static int sonypi_ec_write(u8 addr, u8 value)
static int sonypi_ec_read(u8 addr, u8 *value)
static int ec_read16(u8 addr, u16 *value)
static void sonypi_type1_srs(void)
static void sonypi_type2_srs(void)
static void sonypi_type3_srs(void)
static void sonypi_type1_dis(void)
static void sonypi_type2_dis(void)
static void sonypi_type3_dis(void)
static u8 sonypi_call1(u8 dev)
static u8 sonypi_call2(u8 dev, u8 fn)
static u8 sonypi_call3(u8 dev, u8 fn, u8 v)
static void sonypi_set(u8 fn, u8 v)
static int sonypi_camera_ready(void)
static void sonypi_camera_off(void)
static void sonypi_camera_on(void)
static void sonypi_setbluetoothpower(u8 state)
static void input_keyrelease(struct work_struct *work)
static void sonypi_report_input_event(u8 event)
static irqreturn_t sonypi_irq(int irq, void *dev_id)
static int sonypi_misc_fasync(int fd, struct file *filp, int on)
static int sonypi_misc_release(struct inode *inode, struct file *file)
static int sonypi_misc_open(struct inode *inode, struct file *file)
static ssize_t sonypi_misc_read(struct file *file, char __user *buf,
size_t count, loff_t *pos)
static unsigned int sonypi_misc_poll(struct file *file, poll_table *wait)
static long sonypi_misc_ioctl(struct file *fp,
unsigned int cmd, unsigned long arg)
static const struct file_operations sonypi_misc_fops = ;
static struct miscdevice sonypi_misc_device = ;
static void sonypi_enable(unsigned int camera_on)
static int sonypi_disable(void)
static int sonypi_acpi_add(struct acpi_device *device)
static int sonypi_acpi_remove(struct acpi_device *device, int type)
static const struct acpi_device_id sonypi_device_ids[] = ;
static struct acpi_driver sonypi_acpi_driver = ;
static int __devinit sonypi_create_input_devices(struct platform_device *pdev)
static int __devinit sonypi_setup_ioports(struct sonypi_device *dev,
const struct sonypi_ioport_list *ioport_list)
static int __devinit sonypi_setup_irq(struct sonypi_device *dev,
const struct sonypi_irq_list *irq_list)
static void __devinit sonypi_display_info(void)
static int __devinit sonypi_probe(struct platform_device *dev)
static int __devexit sonypi_remove(struct platform_device *dev)
static int old_camera_power;
static int sonypi_suspend(struct platform_device *dev, pm_message_t state)
static int sonypi_resume(struct platform_device *dev)
#define sonypi_suspend	NULL
#define sonypi_resume	NULL
static void sonypi_shutdown(struct platform_device *dev)
static struct platform_driver sonypi_driver = ;
static struct platform_device *sonypi_platform_device;
static struct dmi_system_id __initdata sonypi_dmi_table[] = ;
static int __init sonypi_init(void)
static void __exit sonypi_exit(void)
module_init(sonypi_init);
module_exit(sonypi_exit);
