#define MAX_PACKET ETH_MAX_PACKET
static int etap_user_init(void *data, void *dev)
struct addr_change ;
static void etap_change(int op, unsigned char *addr, unsigned char *netmask,
int fd)
static void etap_open_addr(unsigned char *addr, unsigned char *netmask,
void *arg)
static void etap_close_addr(unsigned char *addr, unsigned char *netmask,
void *arg)
struct etap_pre_exec_data ;
static void etap_pre_exec(void *arg)
static int etap_tramp(char *dev, char *gate, int control_me,
int control_remote, int data_me, int data_remote)
static int etap_open(void *data)
static void etap_close(int fd, void *data)
static void etap_add_addr(unsigned char *addr, unsigned char *netmask,
void *data)
static void etap_del_addr(unsigned char *addr, unsigned char *netmask,
void *data)
const struct net_user_info ethertap_user_info = ;
