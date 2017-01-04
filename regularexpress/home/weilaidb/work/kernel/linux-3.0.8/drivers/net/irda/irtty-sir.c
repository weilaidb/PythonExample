static int qos_mtt_bits = 0x03;
module_param(qos_mtt_bits, int, 0);
MODULE_PARM_DESC(qos_mtt_bits, "Minimum Turn Time");
static int irtty_chars_in_buffer(struct sir_dev *dev)
#define USBSERIAL_TX_DONE_DELAY	60
static void irtty_wait_until_sent(struct sir_dev *dev)
static int irtty_change_speed(struct sir_dev *dev, unsigned speed)
static int irtty_set_dtr_rts(struct sir_dev *dev, int dtr, int rts)
static int irtty_do_write(struct sir_dev *dev, const unsigned char *ptr, size_t len)
static void irtty_receive_buf(struct tty_struct *tty, const unsigned char *cp,
char *fp, int count)
static void irtty_write_wakeup(struct tty_struct *tty)
static inline void irtty_stop_receiver(struct tty_struct *tty, int stop)
static DEFINE_MUTEX(irtty_mutex);
static int irtty_start_dev(struct sir_dev *dev)
static int irtty_stop_dev(struct sir_dev *dev)
static struct sir_driver sir_tty_drv = ;
static int irtty_ioctl(struct tty_struct *tty, struct file *file, unsigned int cmd, unsigned long arg)
static int irtty_open(struct tty_struct *tty)
static void irtty_close(struct tty_struct *tty)
static struct tty_ldisc_ops irda_ldisc = ;
static int __init irtty_sir_init(void)
static void __exit irtty_sir_cleanup(void)
module_init(irtty_sir_init);
module_exit(irtty_sir_cleanup);
MODULE_AUTHOR("Dag Brattli <dagb@cs.uit.no>");
MODULE_DESCRIPTION("IrDA TTY device driver");
MODULE_ALIAS_LDISC(N_IRDA);
MODULE_LICENSE("GPL");
