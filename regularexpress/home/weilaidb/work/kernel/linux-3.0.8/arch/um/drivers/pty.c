struct pty_chan ;
static void *pty_chan_init(char *str, int device, const struct chan_opts *opts)
static int pts_open(int input, int output, int primary, void *d,
char **dev_out)
static int getmaster(char *line)
static int pty_open(int input, int output, int primary, void *d,
char **dev_out)
const struct chan_ops pty_ops = ;
const struct chan_ops pts_ops = ;
