static int tekram_delay = 150;
module_param(tekram_delay, int, 0);
MODULE_PARM_DESC(tekram_delay, "tekram dongle write complete delay");
static int tekram_open(struct sir_dev *);
static int tekram_close(struct sir_dev *);
static int tekram_change_speed(struct sir_dev *, unsigned);
static int tekram_reset(struct sir_dev *);
#define TEKRAM_115200 0x00
#define TEKRAM_57600  0x01
#define TEKRAM_38400  0x02
#define TEKRAM_19200  0x03
#define TEKRAM_9600   0x04
#define TEKRAM_PW     0x10
static struct dongle_driver tekram = ;
static int __init tekram_sir_init(void)
static void __exit tekram_sir_cleanup(void)
static int tekram_open(struct sir_dev *dev)
static int tekram_close(struct sir_dev *dev)
#define TEKRAM_STATE_WAIT_SPEED	(SIRDEV_STATE_DONGLE_SPEED + 1)
static int tekram_change_speed(struct sir_dev *dev, unsigned speed)
static int tekram_reset(struct sir_dev *dev)
MODULE_AUTHOR("Dag Brattli <dagb@cs.uit.no>");
MODULE_DESCRIPTION("Tekram IrMate IR-210B dongle driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("irda-dongle-0");
module_init(tekram_sir_init);
module_exit(tekram_sir_cleanup);
