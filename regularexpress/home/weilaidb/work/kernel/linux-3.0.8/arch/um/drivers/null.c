static int null_chan;
static void *null_init(char *str, int device, const struct chan_opts *opts)
static int null_open(int input, int output, int primary, void *d,
char **dev_out)
static int null_read(int fd, char *c_out, void *unused)
static void null_free(void *data)
const struct chan_ops null_ops = ;
