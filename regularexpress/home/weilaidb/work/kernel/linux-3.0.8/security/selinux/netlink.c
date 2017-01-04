static struct sock *selnl;
static int selnl_msglen(int msgtype)
static void selnl_add_payload(struct nlmsghdr *nlh, int len, int msgtype, void *data)
static void selnl_notify(int msgtype, void *data)
void selnl_notify_setenforce(int val)
void selnl_notify_policyload(u32 seqno)
static int __init selnl_init(void)
__initcall(selnl_init);
