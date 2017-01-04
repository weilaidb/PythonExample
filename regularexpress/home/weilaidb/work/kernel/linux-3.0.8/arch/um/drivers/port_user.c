struct port_chan ;
static void *port_init(char *str, int device, const struct chan_opts *opts)
static void port_free(void *d)
static int port_open(int input, int output, int primary, void *d,
char **dev_out)
static void port_close(int fd, void *d)
const struct chan_ops port_ops = ;
int port_listen_fd(int port)
struct port_pre_exec_data ;
static void port_pre_exec(void *arg)
int port_connection(int fd, int *socket, int *pid_out)
