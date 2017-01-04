static int led_type __read_mostly = -1;
static unsigned char lastleds;
static unsigned int led_heartbeat __read_mostly = 1;
static unsigned int led_diskio    __read_mostly = 1;
static unsigned int led_lanrxtx   __read_mostly = 1;
static char lcd_text[32]          __read_mostly;
static char lcd_text_default[32]  __read_mostly;
static int  lcd_no_led_support    __read_mostly = 0;
static struct workqueue_struct *led_wq;
static void led_work_func(struct work_struct *);
static DECLARE_DELAYED_WORK(led_task, led_work_func);
struct lcd_block ;
struct pdc_chassis_lcd_info_ret_block ;
#define KITTYHAWK_LCD_CMD  F_EXTEND(0xf0190000UL)
#define KITTYHAWK_LCD_DATA (KITTYHAWK_LCD_CMD+1)
static struct pdc_chassis_lcd_info_ret_block
lcd_info __attribute__((aligned(8))) __read_mostly =
;
#define LCD_CMD_REG	lcd_info.lcd_cmd_reg_addr
#define LCD_DATA_REG	lcd_info.lcd_data_reg_addr
#define LED_DATA_REG	lcd_info.lcd_cmd_reg_addr
#define LED_HASLCD 1
#define LED_NOLCD  0
static int start_task(void)
device_initcall(start_task);
static void (*led_func_ptr) (unsigned char) __read_mostly;
static int led_proc_show(struct seq_file *m, void *v)
static int led_proc_open(struct inode *inode, struct file *file)
static ssize_t led_proc_write(struct file *file, const char *buf,
size_t count, loff_t *pos)
static const struct file_operations led_proc_fops = ;
static int __init led_create_procfs(void)
#define	LED_DATA	0x01
#define	LED_STROBE	0x02
static void led_ASP_driver(unsigned char leds)
static void led_LASI_driver(unsigned char leds)
static void led_LCD_driver(unsigned char leds)
static __inline__ int led_get_net_activity(void)
static __inline__ int led_get_diskio_activity(void)
#define HEARTBEAT_LEN (HZ*10/100)
#define HEARTBEAT_2ND_RANGE_START (HZ*28/100)
#define HEARTBEAT_2ND_RANGE_END   (HEARTBEAT_2ND_RANGE_START + HEARTBEAT_LEN)
#define LED_UPDATE_INTERVAL (1 + (HZ*19/1000))
static void led_work_func (struct work_struct *unused)
static int led_halt(struct notifier_block *, unsigned long, void *);
static struct notifier_block led_notifier = ;
static int notifier_disabled = 0;
static int led_halt(struct notifier_block *nb, unsigned long event, void *buf)
int __init register_led_driver(int model, unsigned long cmd_reg, unsigned long data_reg)
void __init register_led_regions(void)
int lcd_print( const char *str )
int __init led_init(void)
static void __exit led_exit(void)
module_init(led_create_procfs)
