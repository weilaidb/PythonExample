#define _LINUX_UTSNAME_H
#define __OLD_UTS_LEN 8
struct oldold_utsname ;
#define __NEW_UTS_LEN 64
struct old_utsname ;
struct new_utsname ;
struct user_namespace;
extern struct user_namespace init_user_ns;
struct uts_namespace ;
extern struct uts_namespace init_uts_ns;
static inline void get_uts_ns(struct uts_namespace *ns)
extern struct uts_namespace *copy_utsname(unsigned long flags,
struct task_struct *tsk);
extern void free_uts_ns(struct kref *kref);
static inline void put_uts_ns(struct uts_namespace *ns)
static inline void get_uts_ns(struct uts_namespace *ns)
static inline void put_uts_ns(struct uts_namespace *ns)
static inline struct uts_namespace *copy_utsname(unsigned long flags,
struct task_struct *tsk)
static inline struct new_utsname *utsname(void)
static inline struct new_utsname *init_utsname(void)
extern struct rw_semaphore uts_sem;
