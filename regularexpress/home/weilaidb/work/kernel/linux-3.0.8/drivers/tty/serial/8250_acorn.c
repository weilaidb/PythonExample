#define MAX_PORTS	3
struct serial_card_type ;
struct serial_card_info ;
static int __devinit
serial_card_probe(struct expansion_card *ec, const struct ecard_id *id)
static void __devexit serial_card_remove(struct expansion_card *ec)
static struct serial_card_type atomwide_type = ;
static struct serial_card_type serport_type = ;
static const struct ecard_id serial_cids[] = ;
static struct ecard_driver serial_card_driver = ;
static int __init serial_card_init(void)
static void __exit serial_card_exit(void)
MODULE_AUTHOR("Russell King");
MODULE_DESCRIPTION("Acorn 8250-compatible serial port expansion card driver");
MODULE_LICENSE("GPL");
module_init(serial_card_init);
module_exit(serial_card_exit);
