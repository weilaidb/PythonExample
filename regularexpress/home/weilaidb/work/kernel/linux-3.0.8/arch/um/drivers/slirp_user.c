static int slirp_user_init(void *data, void *dev)
struct slirp_pre_exec_data ;
static void slirp_pre_exec(void *arg)
static int slirp_tramp(char **argv, int fd)
static int slirp_open(void *data)
static void slirp_close(int fd, void *data)
int slirp_user_read(int fd, void *buf, int len, struct slirp_data *pri)
int slirp_user_write(int fd, void *buf, int len, struct slirp_data *pri)
const struct net_user_info slirp_user_info = ;
