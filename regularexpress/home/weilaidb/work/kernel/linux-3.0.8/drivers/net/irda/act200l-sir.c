static int act200l_reset(struct sir_dev *dev);
static int act200l_open(struct sir_dev *dev);
static int act200l_close(struct sir_dev *dev);
static int act200l_change_speed(struct sir_dev *dev, unsigned speed);
#define ACT200L_REG0    0x00
#define ACT200L_TXEN    0x01
#define ACT200L_RXEN    0x02
#define ACT200L_REG1    0x10
#define ACT200L_LODB    0x01
#define ACT200L_WIDE    0x04
#define ACT200L_REG4    0x40
#define ACT200L_OP0     0x01
#define ACT200L_OP1     0x02
#define ACT200L_BLKR    0x04
#define ACT200L_REG5    0x50
#define ACT200L_RWIDL   0x01
#define ACT200L_REG6    0x60
#define ACT200L_RS0     0x01
#define ACT200L_RS1     0x02
#define ACT200L_REG7    0x70
#define ACT200L_ENPOS   0x04
#define ACT200L_REG8    0x80
#define ACT200L_REG9    0x90
#define ACT200L_2400    0x5f
#define ACT200L_9600    0x17
#define ACT200L_19200   0x0b
#define ACT200L_38400   0x05
#define ACT200L_57600   0x03
#define ACT200L_115200  0x01
#define ACT200L_REG13   0xd0
#define ACT200L_SHDW    0x01
#define ACT200L_REG15   0xf0
#define ACT200L_REG21   0x50
#define ACT200L_EXCK    0x02
#define ACT200L_OSCL    0x04
static struct dongle_driver act200l = ;
static int __init act200l_sir_init(void)
static void __exit act200l_sir_cleanup(void)
static int act200l_open(struct sir_dev *dev)
static int act200l_close(struct sir_dev *dev)
static int act200l_change_speed(struct sir_dev *dev, unsigned speed)
#define ACT200L_STATE_WAIT1_RESET	(SIRDEV_STATE_DONGLE_RESET+1)
#define ACT200L_STATE_WAIT2_RESET	(SIRDEV_STATE_DONGLE_RESET+2)
static int act200l_reset(struct sir_dev *dev)
MODULE_AUTHOR("SHIMIZU Takuya <tshimizu@ga2.so-net.ne.jp>");
MODULE_DESCRIPTION("ACTiSYS ACT-IR200L dongle driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("irda-dongle-10");
module_init(act200l_sir_init);
module_exit(act200l_sir_cleanup);
