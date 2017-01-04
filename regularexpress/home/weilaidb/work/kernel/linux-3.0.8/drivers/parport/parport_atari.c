static struct parport *this_port = NULL;
static unsigned char
parport_atari_read_data(struct parport *p)
static void
parport_atari_write_data(struct parport *p, unsigned char data)
static unsigned char
parport_atari_read_control(struct parport *p)
static void
parport_atari_write_control(struct parport *p, unsigned char control)
static unsigned char
parport_atari_frob_control(struct parport *p, unsigned char mask,
unsigned char val)
static unsigned char
parport_atari_read_status(struct parport *p)
static void
parport_atari_init_state(struct pardevice *d, struct parport_state *s)
static void
parport_atari_save_state(struct parport *p, struct parport_state *s)
static void
parport_atari_restore_state(struct parport *p, struct parport_state *s)
static void
parport_atari_enable_irq(struct parport *p)
static void
parport_atari_disable_irq(struct parport *p)
static void
parport_atari_data_forward(struct parport *p)
static void
parport_atari_data_reverse(struct parport *p)
static struct parport_operations parport_atari_ops = ;
static int __init parport_atari_init(void)
static void __exit parport_atari_exit(void)
MODULE_AUTHOR("Andreas Schwab");
MODULE_DESCRIPTION("Parport Driver for Atari builtin Port");
MODULE_SUPPORTED_DEVICE("Atari builtin Parallel Port");
MODULE_LICENSE("GPL");
module_init(parport_atari_init)
module_exit(parport_atari_exit)
