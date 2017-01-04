static int tuntap_user_init(void *data, void *dev)
static void tuntap_add_addr(unsigned char *addr, unsigned char *netmask,
void *data)
static void tuntap_del_addr(unsigned char *addr, unsigned char *netmask,
void *data)
struct tuntap_pre_exec_data ;
static void tuntap_pre_exec(void *arg)
static int tuntap_open_tramp(char *gate, int *fd_out, int me, int remote,
char *buffer, int buffer_len, int *used_out)
static int tuntap_open(void *data)
static void tuntap_close(int fd, void *data)
const struct net_user_info tuntap_user_info = ;
