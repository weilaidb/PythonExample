static int slip_user_init(void *data, void *dev)
static int set_up_tty(int fd)
struct slip_pre_exec_data ;
static void slip_pre_exec(void *arg)
static int slip_tramp(char **argv, int fd)
static int slip_open(void *data)
static void slip_close(int fd, void *data)
int slip_user_read(int fd, void *buf, int len, struct slip_data *pri)
int slip_user_write(int fd, void *buf, int len, struct slip_data *pri)
static void slip_add_addr(unsigned char *addr, unsigned char *netmask,
void *data)
static void slip_del_addr(unsigned char *addr, unsigned char *netmask,
void *data)
const struct net_user_info slip_user_info = ;
