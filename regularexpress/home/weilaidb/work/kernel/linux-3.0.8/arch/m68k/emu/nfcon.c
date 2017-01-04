static int stderr_id;
static struct tty_driver *nfcon_tty_driver;
static void nfputs(const char *str, unsigned int count)
static void nfcon_write(struct console *con, const char *str,
unsigned int count)
static struct tty_driver *nfcon_device(struct console *con, int *index)
static struct console nf_console = ;
static int nfcon_tty_open(struct tty_struct *tty, struct file *filp)
static void nfcon_tty_close(struct tty_struct *tty, struct file *filp)
static int nfcon_tty_write(struct tty_struct *tty, const unsigned char *buf,
int count)
static int nfcon_tty_put_char(struct tty_struct *tty, unsigned char ch)
static int nfcon_tty_write_room(struct tty_struct *tty)
static const struct tty_operations nfcon_tty_ops = ;
static int __init nf_debug_setup(char *arg)
early_param("debug", nf_debug_setup);
static int __init nfcon_init(void)
static void __exit nfcon_exit(void)
module_init(nfcon_init);
module_exit(nfcon_exit);
MODULE_LICENSE("GPL");
