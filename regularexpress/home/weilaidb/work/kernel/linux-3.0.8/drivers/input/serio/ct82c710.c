MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION("82C710 C&T mouse port chip driver");
MODULE_LICENSE("GPL");
#define CT82C710_DEV_IDLE     0x01
#define CT82C710_RX_FULL      0x02
#define CT82C710_TX_IDLE      0x04
#define CT82C710_RESET        0x08
#define CT82C710_INTS_ON      0x10
#define CT82C710_ERROR_FLAG   0x20
#define CT82C710_CLEAR        0x40
#define CT82C710_ENABLE       0x80
#define CT82C710_IRQ          12
#define CT82C710_DATA         ct82c710_iores.start
#define CT82C710_STATUS       (ct82c710_iores.start + 1)
static struct serio *ct82c710_port;
static struct platform_device *ct82c710_device;
static struct resource ct82c710_iores;
static irqreturn_t ct82c710_interrupt(int cpl, void *dev_id)
static int ct82c170_wait(void)
static void ct82c710_close(struct serio *serio)
static int ct82c710_open(struct serio *serio)
static int ct82c710_write(struct serio *port, unsigned char c)
static int __init ct82c710_detect(void)
static int __devinit ct82c710_probe(struct platform_device *dev)
static int __devexit ct82c710_remove(struct platform_device *dev)
static struct platform_driver ct82c710_driver = ;
static int __init ct82c710_init(void)
static void __exit ct82c710_exit(void)
module_init(ct82c710_init);
module_exit(ct82c710_exit);
