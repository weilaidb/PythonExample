#define _LINUX_PID_H
enum pid_type
;
struct upid ;
struct pid
;
extern struct pid init_struct_pid;
struct pid_link
;
static inline struct pid *get_pid(struct pid *pid)
extern void put_pid(struct pid *pid);
extern struct task_struct *pid_task(struct pid *pid, enum pid_type);
extern struct task_struct *get_pid_task(struct pid *pid, enum pid_type);
extern struct pid *get_task_pid(struct task_struct *task, enum pid_type type);
extern void attach_pid(struct task_struct *task, enum pid_type type,
struct pid *pid);
extern void detach_pid(struct task_struct *task, enum pid_type);
extern void change_pid(struct task_struct *task, enum pid_type,
struct pid *pid);
extern void transfer_pid(struct task_struct *old, struct task_struct *new,
enum pid_type);
struct pid_namespace;
extern struct pid_namespace init_pid_ns;
extern struct pid *find_pid_ns(int nr, struct pid_namespace *ns);
extern struct pid *find_vpid(int nr);
extern struct pid *find_get_pid(int nr);
extern struct pid *find_ge_pid(int nr, struct pid_namespace *);
int next_pidmap(struct pid_namespace *pid_ns, unsigned int last);
extern struct pid *alloc_pid(struct pid_namespace *ns);
extern void free_pid(struct pid *pid);
static inline struct pid_namespace *ns_of_pid(struct pid *pid)
static inline bool is_child_reaper(struct pid *pid)
static inline pid_t pid_nr(struct pid *pid)
pid_t pid_nr_ns(struct pid *pid, struct pid_namespace *ns);
pid_t pid_vnr(struct pid *pid);
#define do_each_pid_task(pid, type, task)				\
do  while (0)
#define do_each_pid_thread(pid, type, task)				\
do_each_pid_task(pid, type, task)  while_each_pid_task(pid, type, task)
