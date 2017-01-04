#define _LINUX_NSPROXY_H
struct mnt_namespace;
struct uts_namespace;
struct ipc_namespace;
struct pid_namespace;
struct fs_struct;
struct nsproxy ;
extern struct nsproxy init_nsproxy;
static inline struct nsproxy *task_nsproxy(struct task_struct *tsk)
int copy_namespaces(unsigned long flags, struct task_struct *tsk);
void exit_task_namespaces(struct task_struct *tsk);
void switch_task_namespaces(struct task_struct *tsk, struct nsproxy *new);
void free_nsproxy(struct nsproxy *ns);
int unshare_nsproxy_namespaces(unsigned long, struct nsproxy **,
struct fs_struct *);
static inline void put_nsproxy(struct nsproxy *ns)
static inline void get_nsproxy(struct nsproxy *ns)
