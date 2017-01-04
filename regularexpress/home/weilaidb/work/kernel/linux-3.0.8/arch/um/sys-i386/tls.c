static int host_supports_tls = -1;
int host_gdt_entry_tls_min;
int do_set_thread_area(struct user_desc *info)
int do_get_thread_area(struct user_desc *info)
static int get_free_idx(struct task_struct* task)
static inline void clear_user_desc(struct user_desc* info)
#define O_FORCE 1
static int load_TLS(int flags, struct task_struct *to)
static inline int needs_TLS_update(struct task_struct *task)
void clear_flushed_tls(struct task_struct *task)
int arch_switch_tls(struct task_struct *to)
static int set_tls_entry(struct task_struct* task, struct user_desc *info,
int idx, int flushed)
int arch_copy_tls(struct task_struct *new)
static int get_tls_entry(struct task_struct *task, struct user_desc *info,
int idx)
int sys_set_thread_area(struct user_desc __user *user_desc)
int ptrace_set_thread_area(struct task_struct *child, int idx,
struct user_desc __user *user_desc)
int sys_get_thread_area(struct user_desc __user *user_desc)
int ptrace_get_thread_area(struct task_struct *child, int idx,
struct user_desc __user *user_desc)
static int __init __setup_host_supports_tls(void)
__initcall(__setup_host_supports_tls);
