#define CFAG12864B_NAME "cfag12864b"
static unsigned int cfag12864b_rate = CONFIG_CFAG12864B_RATE;
module_param(cfag12864b_rate, uint, S_IRUGO);
MODULE_PARM_DESC(cfag12864b_rate,
"Refresh rate (hertz)");
unsigned int cfag12864b_getrate(void)
#define bit(n) (((unsigned char)1)<<(n))
#define CFAG12864B_BIT_E	(0)
#define CFAG12864B_BIT_CS1	(2)
#define CFAG12864B_BIT_CS2	(1)
#define CFAG12864B_BIT_DI	(3)
static unsigned char cfag12864b_state;
static void cfag12864b_set(void)
static void cfag12864b_setbit(unsigned char state, unsigned char n)
static void cfag12864b_e(unsigned char state)
static void cfag12864b_cs1(unsigned char state)
static void cfag12864b_cs2(unsigned char state)
static void cfag12864b_di(unsigned char state)
static void cfag12864b_setcontrollers(unsigned char first,
unsigned char second)
static void cfag12864b_controller(unsigned char which)
static void cfag12864b_displaystate(unsigned char state)
static void cfag12864b_address(unsigned char address)
static void cfag12864b_page(unsigned char page)
static void cfag12864b_startline(unsigned char startline)
static void cfag12864b_writebyte(unsigned char byte)
static void cfag12864b_nop(void)
static void cfag12864b_on(void)
static void cfag12864b_off(void)
static void cfag12864b_clear(void)
unsigned char *cfag12864b_buffer;
static unsigned char *cfag12864b_cache;
static DEFINE_MUTEX(cfag12864b_mutex);
static unsigned char cfag12864b_updating;
static void cfag12864b_update(struct work_struct *delayed_work);
static struct workqueue_struct *cfag12864b_workqueue;
static DECLARE_DELAYED_WORK(cfag12864b_work, cfag12864b_update);
static void cfag12864b_queue(void)
unsigned char cfag12864b_enable(void)
void cfag12864b_disable(void)
unsigned char cfag12864b_isenabled(void)
static void cfag12864b_update(struct work_struct *work)
EXPORT_SYMBOL_GPL(cfag12864b_buffer);
EXPORT_SYMBOL_GPL(cfag12864b_getrate);
EXPORT_SYMBOL_GPL(cfag12864b_enable);
EXPORT_SYMBOL_GPL(cfag12864b_disable);
EXPORT_SYMBOL_GPL(cfag12864b_isenabled);
static unsigned char cfag12864b_inited;
unsigned char cfag12864b_isinited(void)
EXPORT_SYMBOL_GPL(cfag12864b_isinited);
static int __init cfag12864b_init(void)
static void __exit cfag12864b_exit(void)
module_init(cfag12864b_init);
module_exit(cfag12864b_exit);
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Miguel Ojeda Sandonis <miguel.ojeda.sandonis@gmail.com>");
MODULE_DESCRIPTION("cfag12864b LCD driver");
