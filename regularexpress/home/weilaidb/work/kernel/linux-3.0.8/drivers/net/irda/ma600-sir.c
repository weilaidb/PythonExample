static int ma600_open(struct sir_dev *);
static int ma600_close(struct sir_dev *);
static int ma600_change_speed(struct sir_dev *, unsigned);
static int ma600_reset(struct sir_dev *);
#define MA600_9600	0x00
#define MA600_19200	0x01
#define MA600_38400	0x02
#define MA600_57600	0x03
#define MA600_115200	0x04
#define MA600_DEV_ID1	0x05
#define MA600_DEV_ID2	0x06
#define MA600_2400	0x08
static struct dongle_driver ma600 = ;
static int __init ma600_sir_init(void)
static void __exit ma600_sir_cleanup(void)
static int ma600_open(struct sir_dev *dev)
static int ma600_close(struct sir_dev *dev)
static __u8 get_control_byte(__u32 speed)
static int ma600_change_speed(struct sir_dev *dev, unsigned speed)
static int ma600_reset(struct sir_dev *dev)
MODULE_AUTHOR("Leung <95Etwl@alumni.ee.ust.hk> http:
MODULE_DESCRIPTION("MA600 dongle driver version 0.1");
MODULE_LICENSE("GPL");
MODULE_ALIAS("irda-dongle-11");
module_init(ma600_sir_init);
module_exit(ma600_sir_cleanup);
