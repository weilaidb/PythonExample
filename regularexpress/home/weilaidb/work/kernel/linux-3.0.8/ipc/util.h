#define _IPC_UTIL_H
#define SEQ_MULTIPLIER	(IPCMNI)
void sem_init (void);
void msg_init (void);
void shm_init (void);
struct ipc_namespace;
extern void mq_clear_sbinfo(struct ipc_namespace *ns);
extern void mq_put_mnt(struct ipc_namespace *ns);
static inline void mq_clear_sbinfo(struct ipc_namespace *ns)
static inline void mq_put_mnt(struct ipc_namespace *ns)
void sem_init_ns(struct ipc_namespace *ns);
void msg_init_ns(struct ipc_namespace *ns);
void shm_init_ns(struct ipc_namespace *ns);
void sem_exit_ns(struct ipc_namespace *ns);
void msg_exit_ns(struct ipc_namespace *ns);
void shm_exit_ns(struct ipc_namespace *ns);
static inline void sem_init_ns(struct ipc_namespace *ns)
static inline void msg_init_ns(struct ipc_namespace *ns)
static inline void shm_init_ns(struct ipc_namespace *ns)
static inline void sem_exit_ns(struct ipc_namespace *ns)
static inline void msg_exit_ns(struct ipc_namespace *ns)
static inline void shm_exit_ns(struct ipc_namespace *ns)
struct ipc_params ;
struct ipc_ops ;
struct seq_file;
struct ipc_ids;
void ipc_init_ids(struct ipc_ids *);
void __init ipc_init_proc_interface(const char *path, const char *header,
int ids, int (*show)(struct seq_file *, void *));
#define ipc_init_proc_interface(path, header, ids, show) do  while (0)
#define IPC_SEM_IDS	0
#define IPC_MSG_IDS	1
#define IPC_SHM_IDS	2
#define ipcid_to_idx(id) ((id) % SEQ_MULTIPLIER)
int ipc_addid(struct ipc_ids *, struct kern_ipc_perm *, int);
int ipc_get_maxid(struct ipc_ids *);
void ipc_rmid(struct ipc_ids *, struct kern_ipc_perm *);
int ipcperms(struct ipc_namespace *ns, struct kern_ipc_perm *ipcp, short flg);
void* ipc_alloc(int size);
void ipc_free(void* ptr, int size);
void* ipc_rcu_alloc(int size);
void ipc_rcu_getref(void *ptr);
void ipc_rcu_putref(void *ptr);
struct kern_ipc_perm *ipc_lock(struct ipc_ids *, int);
void kernel_to_ipc64_perm(struct kern_ipc_perm *in, struct ipc64_perm *out);
void ipc64_perm_to_ipc_perm(struct ipc64_perm *in, struct ipc_perm *out);
void ipc_update_perm(struct ipc64_perm *in, struct kern_ipc_perm *out);
struct kern_ipc_perm *ipcctl_pre_down(struct ipc_namespace *ns,
struct ipc_ids *ids, int id, int cmd,
struct ipc64_perm *perm, int extra_perm);
# define ipc_parse_version(cmd)	IPC_64
int ipc_parse_version (int *cmd);
extern void free_msg(struct msg_msg *msg);
extern struct msg_msg *load_msg(const void __user *src, int len);
extern int store_msg(void __user *dest, struct msg_msg *msg, int len);
extern void recompute_msgmni(struct ipc_namespace *);
static inline int ipc_buildid(int id, int seq)
static inline int ipc_checkid(struct kern_ipc_perm *ipcp, int uid)
static inline void ipc_lock_by_ptr(struct kern_ipc_perm *perm)
static inline void ipc_unlock(struct kern_ipc_perm *perm)
struct kern_ipc_perm *ipc_lock_check(struct ipc_ids *ids, int id);
int ipcget(struct ipc_namespace *ns, struct ipc_ids *ids,
struct ipc_ops *ops, struct ipc_params *params);
void free_ipcs(struct ipc_namespace *ns, struct ipc_ids *ids,
void (*free)(struct ipc_namespace *, struct kern_ipc_perm *));
