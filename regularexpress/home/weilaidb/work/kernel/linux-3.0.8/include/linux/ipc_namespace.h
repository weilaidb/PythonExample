#define __IPC_NAMESPACE_H__
#define IPCNS_MEMCHANGED   0x00000001
#define IPCNS_CREATED  0x00000002
#define IPCNS_REMOVED  0x00000003
#define IPCNS_CALLBACK_PRI 0
struct user_namespace;
struct ipc_ids ;
struct ipc_namespace ;
extern struct ipc_namespace init_ipc_ns;
extern atomic_t nr_ipc_ns;
extern spinlock_t mq_lock;
extern int register_ipcns_notifier(struct ipc_namespace *);
extern int cond_register_ipcns_notifier(struct ipc_namespace *);
extern void unregister_ipcns_notifier(struct ipc_namespace *);
extern int ipcns_notify(unsigned long);
static inline int register_ipcns_notifier(struct ipc_namespace *ns)
static inline int cond_register_ipcns_notifier(struct ipc_namespace *ns)
static inline void unregister_ipcns_notifier(struct ipc_namespace *ns)
static inline int ipcns_notify(unsigned long l)
extern int mq_init_ns(struct ipc_namespace *ns);
#define DFLT_QUEUESMAX 256
#define DFLT_MSGMAX    10
#define HARD_MSGMAX    (32768*sizeof(void *)/4)
#define DFLT_MSGSIZEMAX 8192
static inline int mq_init_ns(struct ipc_namespace *ns)
#if defined(CONFIG_IPC_NS)
extern struct ipc_namespace *copy_ipcs(unsigned long flags,
struct task_struct *tsk);
static inline struct ipc_namespace *get_ipc_ns(struct ipc_namespace *ns)
extern void put_ipc_ns(struct ipc_namespace *ns);
static inline struct ipc_namespace *copy_ipcs(unsigned long flags,
struct task_struct *tsk)
static inline struct ipc_namespace *get_ipc_ns(struct ipc_namespace *ns)
static inline void put_ipc_ns(struct ipc_namespace *ns)
struct ctl_table_header;
extern struct ctl_table_header *mq_register_sysctl_table(void);
static inline struct ctl_table_header *mq_register_sysctl_table(void)
