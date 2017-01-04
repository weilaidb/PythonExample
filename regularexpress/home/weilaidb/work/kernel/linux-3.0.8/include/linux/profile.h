#define _LINUX_PROFILE_H
#define CPU_PROFILING	1
#define SCHED_PROFILING	2
#define SLEEP_PROFILING	3
#define KVM_PROFILING	4
struct proc_dir_entry;
struct pt_regs;
struct notifier_block;
#if defined(CONFIG_PROFILING) && defined(CONFIG_PROC_FS)
void create_prof_cpu_mask(struct proc_dir_entry *de);
int create_proc_profile(void);
static inline void create_prof_cpu_mask(struct proc_dir_entry *de)
static inline int create_proc_profile(void)
enum profile_type ;
extern int prof_on __read_mostly;
int profile_init(void);
int profile_setup(char *str);
void profile_tick(int type);
void profile_hits(int type, void *ip, unsigned int nr_hits);
static inline void profile_hit(int type, void *ip)
struct task_struct;
struct mm_struct;
void profile_task_exit(struct task_struct * task);
int profile_handoff_task(struct task_struct * task);
void profile_munmap(unsigned long addr);
int task_handoff_register(struct notifier_block * n);
int task_handoff_unregister(struct notifier_block * n);
int profile_event_register(enum profile_type, struct notifier_block * n);
int profile_event_unregister(enum profile_type, struct notifier_block * n);
int register_timer_hook(int (*hook)(struct pt_regs *));
void unregister_timer_hook(int (*hook)(struct pt_regs *));
struct pt_regs;
#define prof_on 0
static inline int profile_init(void)
static inline void profile_tick(int type)
static inline void profile_hits(int type, void *ip, unsigned int nr_hits)
static inline void profile_hit(int type, void *ip)
static inline int task_handoff_register(struct notifier_block * n)
static inline int task_handoff_unregister(struct notifier_block * n)
static inline int profile_event_register(enum profile_type t, struct notifier_block * n)
static inline int profile_event_unregister(enum profile_type t, struct notifier_block * n)
#define profile_task_exit(a) do  while (0)
#define profile_handoff_task(a) (0)
#define profile_munmap(a) do  while (0)
static inline int register_timer_hook(int (*hook)(struct pt_regs *))
static inline void unregister_timer_hook(int (*hook)(struct pt_regs *))
