#define KS0108_NAME "ks0108"
static unsigned int ks0108_port = CONFIG_KS0108_PORT;
module_param(ks0108_port, uint, S_IRUGO);
MODULE_PARM_DESC(ks0108_port, "Parallel port where the LCD is connected");
static unsigned int ks0108_delay = CONFIG_KS0108_DELAY;
module_param(ks0108_delay, uint, S_IRUGO);
MODULE_PARM_DESC(ks0108_delay, "Delay between each control writing (microseconds)");
static struct parport *ks0108_parport;
static struct pardevice *ks0108_pardevice;
#define bit(n) (((unsigned char)1)<<(n))
void ks0108_writedata(unsigned char byte)
void ks0108_writecontrol(unsigned char byte)
void ks0108_displaystate(unsigned char state)
void ks0108_startline(unsigned char startline)
void ks0108_address(unsigned char address)
void ks0108_page(unsigned char page)
EXPORT_SYMBOL_GPL(ks0108_writedata);
EXPORT_SYMBOL_GPL(ks0108_writecontrol);
EXPORT_SYMBOL_GPL(ks0108_displaystate);
EXPORT_SYMBOL_GPL(ks0108_startline);
EXPORT_SYMBOL_GPL(ks0108_address);
EXPORT_SYMBOL_GPL(ks0108_page);
static unsigned char ks0108_inited;
unsigned char ks0108_isinited(void)
EXPORT_SYMBOL_GPL(ks0108_isinited);
static int __init ks0108_init(void)
static void __exit ks0108_exit(void)
module_init(ks0108_init);
module_exit(ks0108_exit);
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Miguel Ojeda Sandonis <miguel.ojeda.sandonis@gmail.com>");
MODULE_DESCRIPTION("ks0108 LCD Controller driver");
