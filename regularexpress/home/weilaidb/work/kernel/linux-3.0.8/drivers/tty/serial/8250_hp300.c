#if !defined(CONFIG_HPDCA) && !defined(CONFIG_HPAPCI)
#warning CONFIG_8250 defined but neither CONFIG_HPDCA nor CONFIG_HPAPCI defined, are you sure?
struct hp300_port
;
static struct hp300_port *hp300_ports;
static int __devinit hpdca_init_one(struct dio_dev *d,
const struct dio_device_id *ent);
static void __devexit hpdca_remove_one(struct dio_dev *d);
static struct dio_device_id hpdca_dio_tbl[] = ;
static struct dio_driver hpdca_driver = ;
static unsigned int num_ports;
extern int hp300_uart_scode;
#define UART_OFFSET	17
#define DCA_ID		0x01
#define DCA_IC		0x03
#define DCA_IC_IE	0x80
#define HPDCA_BAUD_BASE 153600
#define FRODO_BASE	(0x41c000)
#define FRODO_APCIBASE		0x0
#define FRODO_APCISPACE		0x20
#define FRODO_APCI_OFFSET(x)	(FRODO_APCIBASE + ((x) * FRODO_APCISPACE))
#define HPAPCI_BAUD_BASE 500400
int __init hp300_setup_serial_console(void)
static int __devinit hpdca_init_one(struct dio_dev *d,
const struct dio_device_id *ent)
static int __init hp300_8250_init(void)
static void __devexit hpdca_remove_one(struct dio_dev *d)
static void __exit hp300_8250_exit(void)
module_init(hp300_8250_init);
module_exit(hp300_8250_exit);
MODULE_DESCRIPTION("HP DCA/APCI serial driver");
MODULE_AUTHOR("Kars de Jong <jongk@linux-m68k.org>");
MODULE_LICENSE("GPL");
