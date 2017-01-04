static int girbil_reset(struct sir_dev *dev);
static int girbil_open(struct sir_dev *dev);
static int girbil_close(struct sir_dev *dev);
static int girbil_change_speed(struct sir_dev *dev, unsigned speed);
#define GIRBIL_TXEN    0x01
#define GIRBIL_RXEN    0x02
#define GIRBIL_ECAN    0x04
#define GIRBIL_ECHO    0x08
#define GIRBIL_HIGH    0x20
#define GIRBIL_MEDIUM  0x21
#define GIRBIL_LOW     0x22
#define GIRBIL_2400    0x30
#define GIRBIL_4800    0x31
#define GIRBIL_9600    0x32
#define GIRBIL_19200   0x33
#define GIRBIL_38400   0x34
#define GIRBIL_57600   0x35
#define GIRBIL_115200  0x36
#define GIRBIL_IRDA    0x40
#define GIRBIL_ASK     0x41
#define GIRBIL_LOAD    0x51
static struct dongle_driver girbil = ;
static int __init girbil_sir_init(void)
static void __exit girbil_sir_cleanup(void)
static int girbil_open(struct sir_dev *dev)
static int girbil_close(struct sir_dev *dev)
#define GIRBIL_STATE_WAIT_SPEED	(SIRDEV_STATE_DONGLE_SPEED + 1)
static int girbil_change_speed(struct sir_dev *dev, unsigned speed)
#define GIRBIL_STATE_WAIT1_RESET	(SIRDEV_STATE_DONGLE_RESET + 1)
#define GIRBIL_STATE_WAIT2_RESET	(SIRDEV_STATE_DONGLE_RESET + 2)
#define GIRBIL_STATE_WAIT3_RESET	(SIRDEV_STATE_DONGLE_RESET + 3)
static int girbil_reset(struct sir_dev *dev)
MODULE_AUTHOR("Dag Brattli <dagb@cs.uit.no>");
MODULE_DESCRIPTION("Greenwich GIrBIL dongle driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("irda-dongle-4");
module_init(girbil_sir_init);
module_exit(girbil_sir_cleanup);
