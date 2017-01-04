struct tty_chan ;
static void *tty_chan_init(char *str, int device, const struct chan_opts *opts)
static int tty_open(int input, int output, int primary, void *d,
char **dev_out)
const struct chan_ops tty_ops = ;
