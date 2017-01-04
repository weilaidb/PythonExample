static inline int
fetch_robust_entry(compat_uptr_t *uentry, struct robust_list __user **entry,
compat_uptr_t __user *head, unsigned int *pi)
static void __user *futex_uaddr(struct robust_list __user *entry,
compat_long_t futex_offset)
void compat_exit_robust_list(struct task_struct *curr)
asmlinkage long
compat_sys_set_robust_list(struct compat_robust_list_head __user *head,
compat_size_t len)
asmlinkage long
compat_sys_get_robust_list(int pid, compat_uptr_t __user *head_ptr,
compat_size_t __user *len_ptr)
asmlinkage long compat_sys_futex(u32 __user *uaddr, int op, u32 val,
struct compat_timespec __user *utime, u32 __user *uaddr2,
u32 val3)
