#define MAX_SMD_TTYS 32
struct smd_tty_info ;
struct smd_tty_channel_desc ;
static struct smd_tty_info smd_tty[MAX_SMD_TTYS];
static const struct smd_tty_channel_desc smd_default_tty_channels[] = ;
static const struct smd_tty_channel_desc *smd_tty_channels =
smd_default_tty_channels;
static int smd_tty_channels_len = ARRAY_SIZE(smd_default_tty_channels);
static void smd_tty_notify(void *priv, unsigned event)
static int smd_tty_port_activate(struct tty_port *tport, struct tty_struct *tty)
static void smd_tty_port_shutdown(struct tty_port *tport)
static int smd_tty_open(struct tty_struct *tty, struct file *f)
static void smd_tty_close(struct tty_struct *tty, struct file *f)
static int smd_tty_write(struct tty_struct *tty,
const unsigned char *buf, int len)
static int smd_tty_write_room(struct tty_struct *tty)
static int smd_tty_chars_in_buffer(struct tty_struct *tty)
static void smd_tty_unthrottle(struct tty_struct *tty)
static const struct tty_port_operations smd_tty_port_ops = ;
static const struct tty_operations smd_tty_ops = ;
static struct tty_driver *smd_tty_driver;
static int __init smd_tty_init(void)
module_init(smd_tty_init);
