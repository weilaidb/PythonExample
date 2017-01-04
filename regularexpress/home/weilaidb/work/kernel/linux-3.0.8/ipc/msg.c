struct msg_receiver ;
struct msg_sender ;
#define SEARCH_ANY		1
#define SEARCH_EQUAL		2
#define SEARCH_NOTEQUAL		3
#define SEARCH_LESSEQUAL	4
#define msg_ids(ns)	((ns)->ids[IPC_MSG_IDS])
#define msg_unlock(msq)		ipc_unlock(&(msq)->q_perm)
static void freeque(struct ipc_namespace *, struct kern_ipc_perm *);
static int newque(struct ipc_namespace *, struct ipc_params *);
static int sysvipc_msg_proc_show(struct seq_file *s, void *it);
void recompute_msgmni(struct ipc_namespace *ns)
void msg_init_ns(struct ipc_namespace *ns)
void msg_exit_ns(struct ipc_namespace *ns)
void __init msg_init(void)
static inline struct msg_queue *msg_lock(struct ipc_namespace *ns, int id)
static inline struct msg_queue *msg_lock_check(struct ipc_namespace *ns,
int id)
static inline void msg_rmid(struct ipc_namespace *ns, struct msg_queue *s)
static int newque(struct ipc_namespace *ns, struct ipc_params *params)
static inline void ss_add(struct msg_queue *msq, struct msg_sender *mss)
static inline void ss_del(struct msg_sender *mss)
static void ss_wakeup(struct list_head *h, int kill)
static void expunge_all(struct msg_queue *msq, int res)
static void freeque(struct ipc_namespace *ns, struct kern_ipc_perm *ipcp)
static inline int msg_security(struct kern_ipc_perm *ipcp, int msgflg)
SYSCALL_DEFINE2(msgget, key_t, key, int, msgflg)
static inline unsigned long
copy_msqid_to_user(void __user *buf, struct msqid64_ds *in, int version)
static inline unsigned long
copy_msqid_from_user(struct msqid64_ds *out, void __user *buf, int version)
static int msgctl_down(struct ipc_namespace *ns, int msqid, int cmd,
struct msqid_ds __user *buf, int version)
SYSCALL_DEFINE3(msgctl, int, msqid, int, cmd, struct msqid_ds __user *, buf)
static int testmsg(struct msg_msg *msg, long type, int mode)
static inline int pipelined_send(struct msg_queue *msq, struct msg_msg *msg)
long do_msgsnd(int msqid, long mtype, void __user *mtext,
size_t msgsz, int msgflg)
SYSCALL_DEFINE4(msgsnd, int, msqid, struct msgbuf __user *, msgp, size_t, msgsz,
int, msgflg)
static inline int convert_mode(long *msgtyp, int msgflg)
long do_msgrcv(int msqid, long *pmtype, void __user *mtext,
size_t msgsz, long msgtyp, int msgflg)
SYSCALL_DEFINE5(msgrcv, int, msqid, struct msgbuf __user *, msgp, size_t, msgsz,
long, msgtyp, int, msgflg)
static int sysvipc_msg_proc_show(struct seq_file *s, void *it)
