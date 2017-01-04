cpumask_t mt_fpu_cpumask;
static int fpaff_threshold = -1;
unsigned long mt_fpemul_threshold;
static inline struct task_struct *find_process_by_pid(pid_t pid)
static bool check_same_owner(struct task_struct *p)
asmlinkage long mipsmt_sys_sched_setaffinity(pid_t pid, unsigned int len,
unsigned long __user *user_mask_ptr)
asmlinkage long mipsmt_sys_sched_getaffinity(pid_t pid, unsigned int len,
unsigned long __user *user_mask_ptr)
static int __init fpaff_thresh(char *str)
__setup("fpaff=", fpaff_thresh);
#define FPUSEFACTOR 2000
static __init int mt_fp_affinity_init(void)
arch_initcall(mt_fp_affinity_init);
