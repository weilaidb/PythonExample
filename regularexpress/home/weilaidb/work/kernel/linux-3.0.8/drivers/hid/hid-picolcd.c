#define PICOLCD_NAME "PicoLCD (graphic)"
#define REPORT_ERROR_CODE      0x10
#define   ERR_SUCCESS            0x00
#define   ERR_PARAMETER_MISSING  0x01
#define   ERR_DATA_MISSING       0x02
#define   ERR_BLOCK_READ_ONLY    0x03
#define   ERR_BLOCK_NOT_ERASABLE 0x04
#define   ERR_BLOCK_TOO_BIG      0x05
#define   ERR_SECTION_OVERFLOW   0x06
#define   ERR_INVALID_CMD_LEN    0x07
#define   ERR_INVALID_DATA_LEN   0x08
#define REPORT_KEY_STATE       0x11
#define REPORT_IR_DATA         0x21
#define REPORT_EE_DATA         0x32
#define REPORT_MEMORY          0x41
#define REPORT_LED_STATE       0x81
#define REPORT_BRIGHTNESS      0x91
#define REPORT_CONTRAST        0x92
#define REPORT_RESET           0x93
#define REPORT_LCD_CMD         0x94
#define REPORT_LCD_DATA        0x95
#define REPORT_LCD_CMD_DATA    0x96
#define	REPORT_EE_READ         0xa3
#define REPORT_EE_WRITE        0xa4
#define REPORT_ERASE_MEMORY    0xb2
#define REPORT_READ_MEMORY     0xb3
#define REPORT_WRITE_MEMORY    0xb4
#define REPORT_SPLASH_RESTART  0xc1
#define REPORT_EXIT_KEYBOARD   0xef
#define REPORT_VERSION         0xf1
#define REPORT_BL_ERASE_MEMORY 0xf2
#define REPORT_BL_READ_MEMORY  0xf3
#define REPORT_BL_WRITE_MEMORY 0xf4
#define REPORT_DEVID           0xf5
#define REPORT_SPLASH_SIZE     0xf6
#define REPORT_HOOK_VERSION    0xf7
#define REPORT_EXIT_FLASHER    0xff
#define PICOLCDFB_NAME "picolcdfb"
#define PICOLCDFB_WIDTH (256)
#define PICOLCDFB_HEIGHT (64)
#define PICOLCDFB_SIZE (PICOLCDFB_WIDTH * PICOLCDFB_HEIGHT / 8)
#define PICOLCDFB_UPDATE_RATE_LIMIT   10
#define PICOLCDFB_UPDATE_RATE_DEFAULT  2
static const struct fb_fix_screeninfo picolcdfb_fix = ;
static const struct fb_var_screeninfo picolcdfb_var = ;
static const unsigned short def_keymap[] = ;
#define PICOLCD_KEYS ARRAY_SIZE(def_keymap)
struct picolcd_pending ;
struct picolcd_data ;
#define picolcd_in_report(id, dev) picolcd_report(id, dev, HID_INPUT_REPORT)
#define picolcd_out_report(id, dev) picolcd_report(id, dev, HID_OUTPUT_REPORT)
static struct hid_report *picolcd_report(int id, struct hid_device *hdev, int dir)
static void picolcd_debug_out_report(struct picolcd_data *data,
struct hid_device *hdev, struct hid_report *report);
#define usbhid_submit_report(a, b, c) \
do  while (0)
static struct picolcd_pending *picolcd_send_and_wait(struct hid_device *hdev,
int report_id, const u8 *raw_data, int size)
static int picolcd_fb_send_tile(struct hid_device *hdev, int chip, int tile)
static int picolcd_fb_update_tile(u8 *vbitmap, const u8 *bitmap, int bpp,
int chip, int tile)
static int picolcd_fb_reset(struct picolcd_data *data, int clear)
static void picolcd_fb_update(struct picolcd_data *data)
static void picolcd_fb_fillrect(struct fb_info *info,
const struct fb_fillrect *rect)
static void picolcd_fb_copyarea(struct fb_info *info,
const struct fb_copyarea *area)
static void picolcd_fb_imageblit(struct fb_info *info, const struct fb_image *image)
static ssize_t picolcd_fb_write(struct fb_info *info, const char __user *buf,
size_t count, loff_t *ppos)
static int picolcd_fb_blank(int blank, struct fb_info *info)
static void picolcd_fb_destroy(struct fb_info *info)
static int picolcd_fb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int picolcd_set_par(struct fb_info *info)
struct picolcd_fb_cleanup_item ;
static struct picolcd_fb_cleanup_item *fb_pending;
DEFINE_SPINLOCK(fb_pending_lock);
static void picolcd_fb_do_cleanup(struct work_struct *data)
DECLARE_WORK(picolcd_fb_cleanup, picolcd_fb_do_cleanup);
static int picolcd_fb_open(struct fb_info *info, int u)
static int picolcd_fb_release(struct fb_info *info, int u)
static struct fb_ops picolcdfb_ops = ;
static void picolcd_fb_deferred_io(struct fb_info *info, struct list_head *pagelist)
static const struct fb_deferred_io picolcd_fb_defio = ;
static ssize_t picolcd_fb_update_rate_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t picolcd_fb_update_rate_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(fb_update_rate, 0666, picolcd_fb_update_rate_show,
picolcd_fb_update_rate_store);
static int picolcd_init_framebuffer(struct picolcd_data *data)
static void picolcd_exit_framebuffer(struct picolcd_data *data)
#define picolcd_fbinfo(d) ((d)->fb_info)
static inline int picolcd_fb_reset(struct picolcd_data *data, int clear)
static inline int picolcd_init_framebuffer(struct picolcd_data *data)
static inline void picolcd_exit_framebuffer(struct picolcd_data *data)
#define picolcd_fbinfo(d) NULL
static int picolcd_get_brightness(struct backlight_device *bdev)
static int picolcd_set_brightness(struct backlight_device *bdev)
static int picolcd_check_bl_fb(struct backlight_device *bdev, struct fb_info *fb)
static const struct backlight_ops picolcd_blops = ;
static int picolcd_init_backlight(struct picolcd_data *data, struct hid_report *report)
static void picolcd_exit_backlight(struct picolcd_data *data)
static inline int picolcd_resume_backlight(struct picolcd_data *data)
static void picolcd_suspend_backlight(struct picolcd_data *data)
static inline int picolcd_init_backlight(struct picolcd_data *data,
struct hid_report *report)
static inline void picolcd_exit_backlight(struct picolcd_data *data)
static inline int picolcd_resume_backlight(struct picolcd_data *data)
static inline void picolcd_suspend_backlight(struct picolcd_data *data)
static int picolcd_get_contrast(struct lcd_device *ldev)
static int picolcd_set_contrast(struct lcd_device *ldev, int contrast)
static int picolcd_check_lcd_fb(struct lcd_device *ldev, struct fb_info *fb)
static struct lcd_ops picolcd_lcdops = ;
static int picolcd_init_lcd(struct picolcd_data *data, struct hid_report *report)
static void picolcd_exit_lcd(struct picolcd_data *data)
static inline int picolcd_resume_lcd(struct picolcd_data *data)
static inline int picolcd_init_lcd(struct picolcd_data *data,
struct hid_report *report)
static inline void picolcd_exit_lcd(struct picolcd_data *data)
static inline int picolcd_resume_lcd(struct picolcd_data *data)
static void picolcd_leds_set(struct picolcd_data *data)
static void picolcd_led_set_brightness(struct led_classdev *led_cdev,
enum led_brightness value)
static enum led_brightness picolcd_led_get_brightness(struct led_classdev *led_cdev)
static int picolcd_init_leds(struct picolcd_data *data, struct hid_report *report)
static void picolcd_exit_leds(struct picolcd_data *data)
static inline int picolcd_init_leds(struct picolcd_data *data,
struct hid_report *report)
static inline void picolcd_exit_leds(struct picolcd_data *data)
static inline int picolcd_leds_set(struct picolcd_data *data)
static int picolcd_raw_keypad(struct picolcd_data *data,
struct hid_report *report, u8 *raw_data, int size)
static int picolcd_raw_cir(struct picolcd_data *data,
struct hid_report *report, u8 *raw_data, int size)
static int picolcd_check_version(struct hid_device *hdev)
static int picolcd_reset(struct hid_device *hdev)
static ssize_t picolcd_operation_mode_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t picolcd_operation_mode_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(operation_mode, 0644, picolcd_operation_mode_show,
picolcd_operation_mode_store);
static ssize_t picolcd_operation_mode_delay_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t picolcd_operation_mode_delay_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(operation_mode_delay, 0644, picolcd_operation_mode_delay_show,
picolcd_operation_mode_delay_store);
static int picolcd_debug_reset_show(struct seq_file *f, void *p)
static int picolcd_debug_reset_open(struct inode *inode, struct file *f)
static ssize_t picolcd_debug_reset_write(struct file *f, const char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations picolcd_debug_reset_fops = ;
static int picolcd_debug_eeprom_open(struct inode *i, struct file *f)
static ssize_t picolcd_debug_eeprom_read(struct file *f, char __user *u,
size_t s, loff_t *off)
static ssize_t picolcd_debug_eeprom_write(struct file *f, const char __user *u,
size_t s, loff_t *off)
static const struct file_operations picolcd_debug_eeprom_fops = ;
static int picolcd_debug_flash_open(struct inode *i, struct file *f)
static int _picolcd_flash_setaddr(struct picolcd_data *data, u8 *buf, long off)
static ssize_t _picolcd_flash_read(struct picolcd_data *data, int report_id,
char __user *u, size_t s, loff_t *off)
static ssize_t picolcd_debug_flash_read(struct file *f, char __user *u,
size_t s, loff_t *off)
static ssize_t _picolcd_flash_erase64(struct picolcd_data *data, int report_id,
loff_t *off)
static ssize_t _picolcd_flash_write(struct picolcd_data *data, int report_id,
const char __user *u, size_t s, loff_t *off)
static ssize_t picolcd_debug_flash_write(struct file *f, const char __user *u,
size_t s, loff_t *off)
static const struct file_operations picolcd_debug_flash_fops = ;
static const char *error_codes[] = ;
static void dump_buff_as_hex(char *dst, size_t dst_sz, const u8 *data,
const size_t data_len)
static void picolcd_debug_out_report(struct picolcd_data *data,
struct hid_device *hdev, struct hid_report *report)
static void picolcd_debug_raw_event(struct picolcd_data *data,
struct hid_device *hdev, struct hid_report *report,
u8 *raw_data, int size)
static void picolcd_init_devfs(struct picolcd_data *data,
struct hid_report *eeprom_r, struct hid_report *eeprom_w,
struct hid_report *flash_r, struct hid_report *flash_w,
struct hid_report *reset)
static void picolcd_exit_devfs(struct picolcd_data *data)
static inline void picolcd_debug_raw_event(struct picolcd_data *data,
struct hid_device *hdev, struct hid_report *report,
u8 *raw_data, int size)
static inline void picolcd_init_devfs(struct picolcd_data *data,
struct hid_report *eeprom_r, struct hid_report *eeprom_w,
struct hid_report *flash_r, struct hid_report *flash_w,
struct hid_report *reset)
static inline void picolcd_exit_devfs(struct picolcd_data *data)
static int picolcd_raw_event(struct hid_device *hdev,
struct hid_report *report, u8 *raw_data, int size)
static int picolcd_suspend(struct hid_device *hdev, pm_message_t message)
static int picolcd_resume(struct hid_device *hdev)
static int picolcd_reset_resume(struct hid_device *hdev)
static int picolcd_init_keys(struct picolcd_data *data,
struct hid_report *report)
static void picolcd_exit_keys(struct picolcd_data *data)
static inline int picolcd_init_cir(struct picolcd_data *data, struct hid_report *report)
static inline void picolcd_exit_cir(struct picolcd_data *data)
static int picolcd_probe_lcd(struct hid_device *hdev, struct picolcd_data *data)
static int picolcd_probe_bootloader(struct hid_device *hdev, struct picolcd_data *data)
static int picolcd_probe(struct hid_device *hdev,
const struct hid_device_id *id)
static void picolcd_remove(struct hid_device *hdev)
static const struct hid_device_id picolcd_devices[] = ;
MODULE_DEVICE_TABLE(hid, picolcd_devices);
static struct hid_driver picolcd_driver = ;
static int __init picolcd_init(void)
static void __exit picolcd_exit(void)
module_init(picolcd_init);
module_exit(picolcd_exit);
MODULE_DESCRIPTION("Minibox graphics PicoLCD Driver");
MODULE_LICENSE("GPL v2");
