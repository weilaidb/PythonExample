static struct sockaddr_in *new_addr(char *addr, unsigned short port)
static int umcast_user_init(void *data, void *dev)
static void umcast_remove(void *data)
static int umcast_open(void *data)
static void umcast_close(int fd, void *data)
int umcast_user_write(int fd, void *buf, int len, struct umcast_data *pri)
const struct net_user_info umcast_user_info = ;
