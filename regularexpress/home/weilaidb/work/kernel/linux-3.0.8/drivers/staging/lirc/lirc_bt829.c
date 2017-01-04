static int poll_main(void);
static int atir_init_start(void);
static void write_index(unsigned char index, unsigned int value);
static unsigned int read_index(unsigned char index);
static void do_i2c_start(void);
static void do_i2c_stop(void);
static void seems_wr_byte(unsigned char al);
static unsigned char seems_rd_byte(void);
static unsigned int read_index(unsigned char al);
static void write_index(unsigned char ah, unsigned int edx);
static void cycle_delay(int cycle);
static void do_set_bits(unsigned char bl);
static unsigned char do_get_bits(void);
#define DATA_PCI_OFF 0x7FFC00
#define WAIT_CYCLE   20
#define DRIVER_NAME "lirc_bt829"
static int debug;
#define dprintk(fmt, args...)						 \
do  while (0)
static int atir_minor;
static unsigned long pci_addr_phys;
static unsigned char *pci_addr_lin;
static struct lirc_driver atir_driver;
static struct pci_dev *do_pci_probe(void)
static int atir_add_to_buf(void *data, struct lirc_buffer *buf)
static int atir_set_use_inc(void *data)
static void atir_set_use_dec(void *data)
int init_module(void)
void cleanup_module(void)
static int atir_init_start(void)
static void cycle_delay(int cycle)
static int poll_main()
static void do_i2c_start(void)
static void do_i2c_stop(void)
static void seems_wr_byte(unsigned char value)
static unsigned char seems_rd_byte(void)
static void do_set_bits(unsigned char new_bits)
static unsigned char do_get_bits(void)
static unsigned int read_index(unsigned char index)
static void write_index(unsigned char index, unsigned int reg_val)
MODULE_AUTHOR("Froenchenko Leonid");
MODULE_DESCRIPTION("IR remote driver for bt829 based TV cards");
MODULE_LICENSE("GPL");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
