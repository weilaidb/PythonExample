struct fd_chan ;
static void *fd_init(char *str, int device, const struct chan_opts *opts)
static int fd_open(int input, int output, int primary, void *d, char **dev_out)
static void fd_close(int fd, void *d)
const struct chan_ops fd_ops = ;
