enum request_type ;
#define SWITCH_MAGIC 0xfeedface
struct request_v3 ;
static struct sockaddr_un *new_addr(void *name, int len)
static int connect_to_switch(struct daemon_data *pri)
static int daemon_user_init(void *data, void *dev)
static int daemon_open(void *data)
static void daemon_remove(void *data)
int daemon_user_write(int fd, void *buf, int len, struct daemon_data *pri)
const struct net_user_info daemon_user_info = ;
