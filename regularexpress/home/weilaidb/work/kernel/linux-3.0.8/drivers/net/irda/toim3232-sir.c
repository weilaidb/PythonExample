static int toim3232delay = 150;
module_param(toim3232delay, int, 0);
MODULE_PARM_DESC(toim3232delay, "toim3232 dongle write complete delay");
static int toim3232_open(struct sir_dev *);
static int toim3232_close(struct sir_dev *);
static int toim3232_change_speed(struct sir_dev *, unsigned);
static int toim3232_reset(struct sir_dev *);
#define TOIM3232_115200 0x00
#define TOIM3232_57600  0x01
#define TOIM3232_38400  0x02
#define TOIM3232_19200  0x03
#define TOIM3232_9600   0x06
#define TOIM3232_2400   0x0A
#define TOIM3232_PW     0x10
static struct dongle_driver toim3232 = ;
static int __init toim3232_sir_init(void)
static void __exit toim3232_sir_cleanup(void)
static int toim3232_open(struct sir_dev *dev)
static int toim3232_close(struct sir_dev *dev)
#define TOIM3232_STATE_WAIT_SPEED	(SIRDEV_STATE_DONGLE_SPEED + 1)
static int toim3232_change_speed(struct sir_dev *dev, unsigned speed)
static int toim3232_reset(struct sir_dev *dev)
MODULE_AUTHOR("David Basden <davidb-linux@rcpt.to>");
MODULE_DESCRIPTION("Vishay/Temic TOIM3232 based dongle driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("irda-dongle-12");
module_init(toim3232_sir_init);
module_exit(toim3232_sir_cleanup);
