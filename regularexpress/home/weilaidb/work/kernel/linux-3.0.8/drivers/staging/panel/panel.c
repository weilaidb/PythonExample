#define LCD_MINOR		156
#define KEYPAD_MINOR		185
#define PANEL_VERSION		"0.9.5"
#define LCD_MAXBYTES		256
#define KEYPAD_BUFFER		64
#define INPUT_POLL_TIME		(HZ/50)
#define KEYPAD_REP_START	(10)
#define KEYPAD_REP_DELAY	(2)
#define FLASH_LIGHT_TEMPO	(200)
#define PNL_PINPUT(a)		((((unsigned char)(a)) ^ 0x7F) >> 3)
#define PNL_PBUSY		0x80
#define PNL_PACK		0x40
#define PNL_POUTPA		0x20
#define PNL_PSELECD		0x10
#define PNL_PERRORP		0x08
#define PNL_PBIDIR		0x20
#define PNL_PINTEN		0x10
#define PNL_PSELECP		0x08
#define PNL_PINITP		0x04
#define PNL_PAUTOLF		0x02
#define PNL_PSTROBE		0x01
#define PNL_PD0			0x01
#define PNL_PD1			0x02
#define PNL_PD2			0x04
#define PNL_PD3			0x08
#define PNL_PD4			0x10
#define PNL_PD5			0x20
#define PNL_PD6			0x40
#define PNL_PD7			0x80
#define PIN_NONE		0
#define PIN_STROBE		1
#define PIN_D0			2
#define PIN_D1			3
#define PIN_D2			4
#define PIN_D3			5
#define PIN_D4			6
#define PIN_D5			7
#define PIN_D6			8
#define PIN_D7			9
#define PIN_AUTOLF		14
#define PIN_INITP		16
#define PIN_SELECP		17
#define PIN_NOT_SET		127
#define LCD_FLAG_S		0x0001
#define LCD_FLAG_ID		0x0002
#define LCD_FLAG_B		0x0004
#define LCD_FLAG_C		0x0008
#define LCD_FLAG_D		0x0010
#define LCD_FLAG_F		0x0020
#define LCD_FLAG_N		0x0040
#define LCD_FLAG_L		0x0080
#define LCD_ESCAPE_LEN		24
#define LCD_ESCAPE_CHAR	27
#define r_ctr(x)        (parport_read_control((x)->port))
#define r_dtr(x)        (parport_read_data((x)->port))
#define r_str(x)        (parport_read_status((x)->port))
#define w_ctr(x, y)     do  while (0)
#define w_dtr(x, y)     do  while (0)
static __u8 scan_mask_o;
static __u8 scan_mask_i;
typedef __u64 pmask_t;
enum input_type ;
enum input_state ;
struct logical_input ;
LIST_HEAD(logical_inputs);
static pmask_t phys_read;
static pmask_t phys_read_prev;
static pmask_t phys_curr;
static pmask_t phys_prev;
static char inputs_stable;
static char keypad_buffer[KEYPAD_BUFFER];
static int keypad_buflen;
static int keypad_start;
static char keypressed;
static wait_queue_head_t keypad_read_wait;
static unsigned long int lcd_flags;
static unsigned long int lcd_addr_x;
static unsigned long int lcd_addr_y;
static char lcd_escape[LCD_ESCAPE_LEN + 1];
static int lcd_escape_len = -1;
#define BIT_CLR		0
#define BIT_SET		1
#define BIT_MSK		2
#define BIT_STATES	3
#define LCD_BIT_E	0
#define LCD_BIT_RS	1
#define LCD_BIT_RW	2
#define LCD_BIT_BL	3
#define LCD_BIT_CL	4
#define LCD_BIT_DA	5
#define LCD_BITS	6
#define LCD_PORT_C	0
#define LCD_PORT_D	1
#define LCD_PORTS	2
static unsigned char lcd_bits[LCD_PORTS][LCD_BITS][BIT_STATES];
#define LCD_PROTO_PARALLEL      0
#define LCD_PROTO_SERIAL        1
#define LCD_PROTO_TI_DA8XX_LCD	2
#define LCD_CHARSET_NORMAL      0
#define LCD_CHARSET_KS0074      1
#define LCD_TYPE_NONE		0
#define LCD_TYPE_OLD		1
#define LCD_TYPE_KS0074		2
#define LCD_TYPE_HANTRONIX	3
#define LCD_TYPE_NEXCOM		4
#define LCD_TYPE_CUSTOM		5
#define KEYPAD_TYPE_NONE	0
#define KEYPAD_TYPE_OLD		1
#define KEYPAD_TYPE_NEW		2
#define KEYPAD_TYPE_NEXCOM	3
#define PANEL_PROFILE_CUSTOM	0
#define PANEL_PROFILE_OLD	1
#define PANEL_PROFILE_NEW	2
#define PANEL_PROFILE_HANTRONIX	3
#define PANEL_PROFILE_NEXCOM	4
#define PANEL_PROFILE_LARGE	5
#define DEFAULT_PROFILE         PANEL_PROFILE_LARGE
#define DEFAULT_PARPORT         0
#define DEFAULT_LCD             LCD_TYPE_OLD
#define DEFAULT_KEYPAD          KEYPAD_TYPE_OLD
#define DEFAULT_LCD_WIDTH       40
#define DEFAULT_LCD_BWIDTH      40
#define DEFAULT_LCD_HWIDTH      64
#define DEFAULT_LCD_HEIGHT      2
#define DEFAULT_LCD_PROTO       LCD_PROTO_PARALLEL
#define DEFAULT_LCD_PIN_E       PIN_AUTOLF
#define DEFAULT_LCD_PIN_RS      PIN_SELECP
#define DEFAULT_LCD_PIN_RW      PIN_INITP
#define DEFAULT_LCD_PIN_SCL     PIN_STROBE
#define DEFAULT_LCD_PIN_SDA     PIN_D0
#define DEFAULT_LCD_PIN_BL      PIN_NOT_SET
#define DEFAULT_LCD_CHARSET     LCD_CHARSET_NORMAL
#undef DEFAULT_PROFILE
#define DEFAULT_PROFILE CONFIG_PANEL_PROFILE
#undef DEFAULT_PARPORT
#define DEFAULT_PARPORT CONFIG_PANEL_PARPORT
#if DEFAULT_PROFILE == 0
#undef DEFAULT_KEYPAD
#define DEFAULT_KEYPAD CONFIG_PANEL_KEYPAD
#undef DEFAULT_LCD
#define DEFAULT_LCD CONFIG_PANEL_LCD
#undef DEFAULT_LCD_WIDTH
#define DEFAULT_LCD_WIDTH CONFIG_PANEL_LCD_WIDTH
#undef DEFAULT_LCD_BWIDTH
#define DEFAULT_LCD_BWIDTH CONFIG_PANEL_LCD_BWIDTH
#undef DEFAULT_LCD_HWIDTH
#define DEFAULT_LCD_HWIDTH CONFIG_PANEL_LCD_HWIDTH
#undef DEFAULT_LCD_HEIGHT
#define DEFAULT_LCD_HEIGHT CONFIG_PANEL_LCD_HEIGHT
#undef DEFAULT_LCD_PROTO
#define DEFAULT_LCD_PROTO CONFIG_PANEL_LCD_PROTO
#undef DEFAULT_LCD_PIN_E
#define DEFAULT_LCD_PIN_E CONFIG_PANEL_LCD_PIN_E
#undef DEFAULT_LCD_PIN_RS
#define DEFAULT_LCD_PIN_RS CONFIG_PANEL_LCD_PIN_RS
#undef DEFAULT_LCD_PIN_RW
#define DEFAULT_LCD_PIN_RW CONFIG_PANEL_LCD_PIN_RW
#undef DEFAULT_LCD_PIN_SCL
#define DEFAULT_LCD_PIN_SCL CONFIG_PANEL_LCD_PIN_SCL
#undef DEFAULT_LCD_PIN_SDA
#define DEFAULT_LCD_PIN_SDA CONFIG_PANEL_LCD_PIN_SDA
#undef DEFAULT_LCD_PIN_BL
#define DEFAULT_LCD_PIN_BL CONFIG_PANEL_LCD_PIN_BL
#undef DEFAULT_LCD_CHARSET
#define DEFAULT_LCD_CHARSET CONFIG_PANEL_LCD_CHARSET
static int keypad_open_cnt;
static int lcd_open_cnt;
static struct pardevice *pprt;
static int lcd_initialized;
static int keypad_initialized;
static int light_tempo;
static char lcd_must_clear;
static char lcd_left_shift;
static char init_in_progress;
static void (*lcd_write_cmd) (int);
static void (*lcd_write_data) (int);
static void (*lcd_clear_fast) (void);
static DEFINE_SPINLOCK(pprt_lock);
static struct timer_list scan_timer;
MODULE_DESCRIPTION("Generic parallel port LCD/Keypad driver");
static int parport = -1;
module_param(parport, int, 0000);
MODULE_PARM_DESC(parport, "Parallel port index (0=lpt1, 1=lpt2, ...)");
static int lcd_height = -1;
module_param(lcd_height, int, 0000);
MODULE_PARM_DESC(lcd_height, "Number of lines on the LCD");
static int lcd_width = -1;
module_param(lcd_width, int, 0000);
MODULE_PARM_DESC(lcd_width, "Number of columns on the LCD");
static int lcd_bwidth = -1;
module_param(lcd_bwidth, int, 0000);
MODULE_PARM_DESC(lcd_bwidth, "Internal LCD line width (40)");
static int lcd_hwidth = -1;
module_param(lcd_hwidth, int, 0000);
MODULE_PARM_DESC(lcd_hwidth, "LCD line hardware address (64)");
static int lcd_enabled = -1;
module_param(lcd_enabled, int, 0000);
MODULE_PARM_DESC(lcd_enabled, "Deprecated option, use lcd_type instead");
static int keypad_enabled = -1;
module_param(keypad_enabled, int, 0000);
MODULE_PARM_DESC(keypad_enabled, "Deprecated option, use keypad_type instead");
static int lcd_type = -1;
module_param(lcd_type, int, 0000);
MODULE_PARM_DESC(lcd_type,
"LCD type: 0=none, 1=old
"3=hantronix
static int lcd_proto = -1;
module_param(lcd_proto, int, 0000);
MODULE_PARM_DESC(lcd_proto,
"LCD communication: 0=parallel (
"2=TI LCD Interface");
static int lcd_charset = -1;
module_param(lcd_charset, int, 0000);
MODULE_PARM_DESC(lcd_charset, "LCD character set: 0=standard, 1=KS0074");
static int keypad_type = -1;
module_param(keypad_type, int, 0000);
MODULE_PARM_DESC(keypad_type,
"Keypad type: 0=none, 1=old 6 keys, 2=new 6+1 keys, "
"3=nexcom 4 keys");
static int profile = DEFAULT_PROFILE;
module_param(profile, int, 0000);
MODULE_PARM_DESC(profile,
"1=16x2 old kp; 2=serial 16x2, new kp; 3=16x2 hantronix; "
"4=16x2 nexcom; default=40x2, old kp");
static int lcd_e_pin  = PIN_NOT_SET;
module_param(lcd_e_pin, int, 0000);
MODULE_PARM_DESC(lcd_e_pin,
"# of the
"with polarity (-17..17)");
static int lcd_rs_pin = PIN_NOT_SET;
module_param(lcd_rs_pin, int, 0000);
MODULE_PARM_DESC(lcd_rs_pin,
"# of the
"with polarity (-17..17)");
static int lcd_rw_pin = PIN_NOT_SET;
module_param(lcd_rw_pin, int, 0000);
MODULE_PARM_DESC(lcd_rw_pin,
"# of the
"with polarity (-17..17)");
static int lcd_bl_pin = PIN_NOT_SET;
module_param(lcd_bl_pin, int, 0000);
MODULE_PARM_DESC(lcd_bl_pin,
"# of the
"with polarity (-17..17)");
static int lcd_da_pin = PIN_NOT_SET;
module_param(lcd_da_pin, int, 0000);
MODULE_PARM_DESC(lcd_da_pin,
"# of the
"signal, with polarity (-17..17)");
static int lcd_cl_pin = PIN_NOT_SET;
module_param(lcd_cl_pin, int, 0000);
MODULE_PARM_DESC(lcd_cl_pin,
"# of the
"signal, with polarity (-17..17)");
static unsigned char *lcd_char_conv;
static unsigned char lcd_char_conv_ks0074[256] = ;
char old_keypad_profile[][4][9] = ;
char new_keypad_profile[][4][9] = ;
char nexcom_keypad_profile[][4][9] = ;
static char (*keypad_profile)[4][9] = old_keypad_profile;
static struct  bits;
static void init_scan_timer(void);
static int set_data_bits(void)
static int set_ctrl_bits(void)
static void panel_set_bits(void)
void pin_to_bits(int pin, unsigned char *d_val, unsigned char *c_val)
static void long_sleep(int ms)
static void lcd_send_serial(int byte)
static void lcd_backlight(int on)
static void lcd_write_cmd_s(int cmd)
static void lcd_write_data_s(int data)
static void lcd_write_cmd_p8(int cmd)
static void lcd_write_data_p8(int data)
static void lcd_write_cmd_tilcd(int cmd)
static void lcd_write_data_tilcd(int data)
static void lcd_gotoxy(void)
static void lcd_print(char c)
static void lcd_clear_fast_s(void)
static void lcd_clear_fast_p8(void)
static void lcd_clear_fast_tilcd(void)
static void lcd_clear_display(void)
static void lcd_init_display(void)
static inline int handle_lcd_special_code(void)
static ssize_t lcd_write(struct file *file,
const char *buf, size_t count, loff_t *ppos)
static int lcd_open(struct inode *inode, struct file *file)
static int lcd_release(struct inode *inode, struct file *file)
static const struct file_operations lcd_fops = ;
static struct miscdevice lcd_dev = ;
void panel_lcd_print(char *s)
void lcd_init(void)
static ssize_t keypad_read(struct file *file,
char *buf, size_t count, loff_t *ppos)
static int keypad_open(struct inode *inode, struct file *file)
static int keypad_release(struct inode *inode, struct file *file)
static const struct file_operations keypad_fops = ;
static struct miscdevice keypad_dev = ;
static void keypad_send_key(char *string, int max_len)
static void phys_scan_contacts(void)
static inline int input_state_high(struct logical_input *input)
static inline void input_state_falling(struct logical_input *input)
static void panel_process_inputs(void)
static void panel_scan_timer(void)
static void init_scan_timer(void)
static int input_name2mask(char *name, pmask_t *mask, pmask_t *value,
char *imask, char *omask)
static struct logical_input *panel_bind_key(char *name, char *press,
char *repeat, char *release)
static void keypad_init(void)
static int panel_notify_sys(struct notifier_block *this, unsigned long code,
void *unused)
static struct notifier_block panel_notifier = ;
static void panel_attach(struct parport *port)
static void panel_detach(struct parport *port)
static struct parport_driver panel_driver = ;
int panel_init(void)
static int __init panel_init_module(void)
static void __exit panel_cleanup_module(void)
module_init(panel_init_module);
module_exit(panel_cleanup_module);
MODULE_AUTHOR("Willy Tarreau");
MODULE_LICENSE("GPL");
