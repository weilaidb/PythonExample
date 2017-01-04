static int get_free_idx(void)
static void set_tls_desc(struct task_struct *p, int idx,
const struct user_desc *info, int n)
int do_set_thread_area(struct task_struct *p, int idx,
struct user_desc __user *u_info,
int can_allocate)
asmlinkage int sys_set_thread_area(struct user_desc __user *u_info)
static void fill_user_desc(struct user_desc *info, int idx,
const struct desc_struct *desc)
int do_get_thread_area(struct task_struct *p, int idx,
struct user_desc __user *u_info)
asmlinkage int sys_get_thread_area(struct user_desc __user *u_info)
int regset_tls_active(struct task_struct *target,
const struct user_regset *regset)
int regset_tls_get(struct task_struct *target, const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
int regset_tls_set(struct task_struct *target, const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
