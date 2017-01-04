#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define PPS_TTY_MAGIC		0x0001
static void pps_tty_dcd_change(struct tty_struct *tty, unsigned int status,
struct pps_event_time *ts)
static int (*alias_n_tty_open)(struct tty_struct *tty);
static int pps_tty_open(struct tty_struct *tty)
static void (*alias_n_tty_close)(struct tty_struct *tty);
static void pps_tty_close(struct tty_struct *tty)
static struct tty_ldisc_ops pps_ldisc_ops;
static int __init pps_tty_init(void)
static void __exit pps_tty_cleanup(void)
module_init(pps_tty_init);
module_exit(pps_tty_cleanup);
MODULE_ALIAS_LDISC(N_PPS);
MODULE_AUTHOR("Rodolfo Giometti <giometti@linux.it>");
MODULE_DESCRIPTION("PPS TTY device driver");
MODULE_LICENSE("GPL");
