DEFINE_SPINLOCK(mq_lock);
struct ipc_namespace init_ipc_ns = ;
atomic_t nr_ipc_ns = ATOMIC_INIT(1);
struct msg_msgseg ;
#define DATALEN_MSG	(PAGE_SIZE-sizeof(struct msg_msg))
#define DATALEN_SEG	(PAGE_SIZE-sizeof(struct msg_msgseg))
struct msg_msg *load_msg(const void __user *src, int len)
int store_msg(void __user *dest, struct msg_msg *msg, int len)
void free_msg(struct msg_msg *msg)
