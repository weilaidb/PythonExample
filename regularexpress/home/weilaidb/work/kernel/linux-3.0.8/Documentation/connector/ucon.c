#define DEBUG
#define NETLINK_CONNECTOR 	11
#define CN_TEST_IDX		CN_NETLINK_USERS + 3
#define CN_TEST_VAL		0x456
#define ulog(f, a...) fprintf(stdout, f, ##a)
#define ulog(f, a...) do  while (0)
static int need_exit;
static __u32 seq;
static int netlink_send(int s, struct cn_msg *msg)
static void usage(void)
int main(int argc, char *argv[])
