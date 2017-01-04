#define sem_ids(ns)	((ns)->ids[IPC_SEM_IDS])
#define sem_unlock(sma)		ipc_unlock(&(sma)->sem_perm)
#define sem_checkid(sma, semid)	ipc_checkid(&sma->sem_perm, semid)
static int newary(struct ipc_namespace *, struct ipc_params *);
static void freeary(struct ipc_namespace *, struct kern_ipc_perm *);
static int sysvipc_sem_proc_show(struct seq_file *s, void *it);
#define SEMMSL_FAST	256
#define SEMOPM_FAST	64
#define sc_semmsl	sem_ctls[0]
#define sc_semmns	sem_ctls[1]
#define sc_semopm	sem_ctls[2]
#define sc_semmni	sem_ctls[3]
void sem_init_ns(struct ipc_namespace *ns)
void sem_exit_ns(struct ipc_namespace *ns)
void __init sem_init (void)
static inline struct sem_array *sem_lock(struct ipc_namespace *ns, int id)
static inline struct sem_array *sem_lock_check(struct ipc_namespace *ns,
int id)
static inline void sem_lock_and_putref(struct sem_array *sma)
static inline void sem_getref_and_unlock(struct sem_array *sma)
static inline void sem_putref(struct sem_array *sma)
static inline void sem_rmid(struct ipc_namespace *ns, struct sem_array *s)
#define IN_WAKEUP	1
static int newary(struct ipc_namespace *ns, struct ipc_params *params)
static inline int sem_security(struct kern_ipc_perm *ipcp, int semflg)
static inline int sem_more_checks(struct kern_ipc_perm *ipcp,
struct ipc_params *params)
SYSCALL_DEFINE3(semget, key_t, key, int, nsems, int, semflg)
static int try_atomic_semop (struct sem_array * sma, struct sembuf * sops,
int nsops, struct sem_undo *un, int pid)
static void wake_up_sem_queue_prepare(struct list_head *pt,
struct sem_queue *q, int error)
static void wake_up_sem_queue_do(struct list_head *pt)
static void unlink_queue(struct sem_array *sma, struct sem_queue *q)
static int check_restart(struct sem_array *sma, struct sem_queue *q)
static int update_queue(struct sem_array *sma, int semnum, struct list_head *pt)
static void do_smart_update(struct sem_array *sma, struct sembuf *sops, int nsops,
int otime, struct list_head *pt)
static int count_semncnt (struct sem_array * sma, ushort semnum)
static int count_semzcnt (struct sem_array * sma, ushort semnum)
static void free_un(struct rcu_head *head)
static void freeary(struct ipc_namespace *ns, struct kern_ipc_perm *ipcp)
static unsigned long copy_semid_to_user(void __user *buf, struct semid64_ds *in, int version)
static int semctl_nolock(struct ipc_namespace *ns, int semid,
int cmd, int version, union semun arg)
static int semctl_main(struct ipc_namespace *ns, int semid, int semnum,
int cmd, int version, union semun arg)
static inline unsigned long
copy_semid_from_user(struct semid64_ds *out, void __user *buf, int version)
static int semctl_down(struct ipc_namespace *ns, int semid,
int cmd, int version, union semun arg)
SYSCALL_DEFINE(semctl)(int semid, int semnum, int cmd, union semun arg)
asmlinkage long SyS_semctl(int semid, int semnum, int cmd, union semun arg)
SYSCALL_ALIAS(sys_semctl, SyS_semctl);
static inline int get_undo_list(struct sem_undo_list **undo_listp)
static struct sem_undo *__lookup_undo(struct sem_undo_list *ulp, int semid)
static struct sem_undo *lookup_undo(struct sem_undo_list *ulp, int semid)
static struct sem_undo *find_alloc_undo(struct ipc_namespace *ns, int semid)
static int get_queue_result(struct sem_queue *q)
SYSCALL_DEFINE4(semtimedop, int, semid, struct sembuf __user *, tsops,
unsigned, nsops, const struct timespec __user *, timeout)
SYSCALL_DEFINE3(semop, int, semid, struct sembuf __user *, tsops,
unsigned, nsops)
int copy_semundo(unsigned long clone_flags, struct task_struct *tsk)
void exit_sem(struct task_struct *tsk)
static int sysvipc_sem_proc_show(struct seq_file *s, void *it)
