#define CN_PROC_MSG_SIZE (sizeof(struct cn_msg) + sizeof(struct proc_event))
static atomic_t proc_event_num_listeners = ATOMIC_INIT(0);
static struct cb_id cn_proc_event_id = ;
static DEFINE_PER_CPU(__u32, proc_event_counts) = ;
static inline void get_seq(__u32 *ts, int *cpu)
void proc_fork_connector(struct task_struct *task)
void proc_exec_connector(struct task_struct *task)
void proc_id_connector(struct task_struct *task, int which_id)
void proc_sid_connector(struct task_struct *task)
void proc_exit_connector(struct task_struct *task)
static void cn_proc_ack(int err, int rcvd_seq, int rcvd_ack)
static void cn_proc_mcast_ctl(struct cn_msg *msg,
struct netlink_skb_parms *nsp)
static int __init cn_proc_init(void)
module_init(cn_proc_init);
