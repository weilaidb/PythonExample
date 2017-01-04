int core_uses_pid;
char core_pattern[CORENAME_MAX_SIZE] = "core";
unsigned int core_pipe_limit;
int suid_dumpable = 0;
struct core_name ;
static atomic_t call_count = ATOMIC_INIT(1);
static LIST_HEAD(formats);
static DEFINE_RWLOCK(binfmt_lock);
int __register_binfmt(struct linux_binfmt * fmt, int insert)
EXPORT_SYMBOL(__register_binfmt);
void unregister_binfmt(struct linux_binfmt * fmt)
EXPORT_SYMBOL(unregister_binfmt);
static inline void put_binfmt(struct linux_binfmt * fmt)
SYSCALL_DEFINE1(uselib, const char __user *, library)
static void acct_arg_size(struct linux_binprm *bprm, unsigned long pages)
static struct page *get_arg_page(struct linux_binprm *bprm, unsigned long pos,
int write)
static void put_arg_page(struct page *page)
static void free_arg_page(struct linux_binprm *bprm, int i)
static void free_arg_pages(struct linux_binprm *bprm)
static void flush_arg_page(struct linux_binprm *bprm, unsigned long pos,
struct page *page)
static int __bprm_mm_init(struct linux_binprm *bprm)
static bool valid_arg_len(struct linux_binprm *bprm, long len)
static inline void acct_arg_size(struct linux_binprm *bprm, unsigned long pages)
static struct page *get_arg_page(struct linux_binprm *bprm, unsigned long pos,
int write)
static void put_arg_page(struct page *page)
static void free_arg_page(struct linux_binprm *bprm, int i)
static void free_arg_pages(struct linux_binprm *bprm)
static void flush_arg_page(struct linux_binprm *bprm, unsigned long pos,
struct page *page)
static int __bprm_mm_init(struct linux_binprm *bprm)
static bool valid_arg_len(struct linux_binprm *bprm, long len)
int bprm_mm_init(struct linux_binprm *bprm)
struct user_arg_ptr ;
static const char __user *get_user_arg_ptr(struct user_arg_ptr argv, int nr)
static int count(struct user_arg_ptr argv, int max)
static int copy_strings(int argc, struct user_arg_ptr argv,
struct linux_binprm *bprm)
int copy_strings_kernel(int argc, const char *const *__argv,
struct linux_binprm *bprm)
EXPORT_SYMBOL(copy_strings_kernel);
static int shift_arg_pages(struct vm_area_struct *vma, unsigned long shift)
int setup_arg_pages(struct linux_binprm *bprm,
unsigned long stack_top,
int executable_stack)
EXPORT_SYMBOL(setup_arg_pages);
struct file *open_exec(const char *name)
EXPORT_SYMBOL(open_exec);
int kernel_read(struct file *file, loff_t offset,
char *addr, unsigned long count)
EXPORT_SYMBOL(kernel_read);
static int exec_mmap(struct mm_struct *mm)
static int de_thread(struct task_struct *tsk)
static void flush_old_files(struct files_struct * files)
char *get_task_comm(char *buf, struct task_struct *tsk)
EXPORT_SYMBOL_GPL(get_task_comm);
void set_task_comm(struct task_struct *tsk, char *buf)
int flush_old_exec(struct linux_binprm * bprm)
EXPORT_SYMBOL(flush_old_exec);
void setup_new_exec(struct linux_binprm * bprm)
EXPORT_SYMBOL(setup_new_exec);
int prepare_bprm_creds(struct linux_binprm *bprm)
void free_bprm(struct linux_binprm *bprm)
void install_exec_creds(struct linux_binprm *bprm)
EXPORT_SYMBOL(install_exec_creds);
int check_unsafe_exec(struct linux_binprm *bprm)
int prepare_binprm(struct linux_binprm *bprm)
EXPORT_SYMBOL(prepare_binprm);
int remove_arg_zero(struct linux_binprm *bprm)
EXPORT_SYMBOL(remove_arg_zero);
int search_binary_handler(struct linux_binprm *bprm,struct pt_regs *regs)
EXPORT_SYMBOL(search_binary_handler);
static int do_execve_common(const char *filename,
struct user_arg_ptr argv,
struct user_arg_ptr envp,
struct pt_regs *regs)
int do_execve(const char *filename,
const char __user *const __user *__argv,
const char __user *const __user *__envp,
struct pt_regs *regs)
int compat_do_execve(char *filename,
compat_uptr_t __user *__argv,
compat_uptr_t __user *__envp,
struct pt_regs *regs)
void set_binfmt(struct linux_binfmt *new)
EXPORT_SYMBOL(set_binfmt);
static int expand_corename(struct core_name *cn)
static int cn_printf(struct core_name *cn, const char *fmt, ...)
static int cn_print_exe_file(struct core_name *cn)
static int format_corename(struct core_name *cn, long signr)
static int zap_process(struct task_struct *start, int exit_code)
static inline int zap_threads(struct task_struct *tsk, struct mm_struct *mm,
struct core_state *core_state, int exit_code)
static int coredump_wait(int exit_code, struct core_state *core_state)
static void coredump_finish(struct mm_struct *mm)
void set_dumpable(struct mm_struct *mm, int value)
static int __get_dumpable(unsigned long mm_flags)
int get_dumpable(struct mm_struct *mm)
static void wait_for_dump_helpers(struct file *file)
static int umh_pipe_setup(struct subprocess_info *info, struct cred *new)
void do_coredump(long signr, int exit_code, struct pt_regs *regs)
int dump_write(struct file *file, const void *addr, int nr)
EXPORT_SYMBOL(dump_write);
int dump_seek(struct file *file, loff_t off)
EXPORT_SYMBOL(dump_seek);
