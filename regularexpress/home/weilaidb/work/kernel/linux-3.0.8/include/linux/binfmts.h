#define _LINUX_BINFMTS_H
struct pt_regs;
#define MAX_ARG_STRLEN (PAGE_SIZE * 32)
#define MAX_ARG_STRINGS 0x7FFFFFFF
#define BINPRM_BUF_SIZE 128
#define CORENAME_MAX_SIZE 128
struct linux_binprm ;
#define BINPRM_FLAGS_ENFORCE_NONDUMP_BIT 0
#define BINPRM_FLAGS_ENFORCE_NONDUMP (1 << BINPRM_FLAGS_ENFORCE_NONDUMP_BIT)
#define BINPRM_FLAGS_EXECFD_BIT 1
#define BINPRM_FLAGS_EXECFD (1 << BINPRM_FLAGS_EXECFD_BIT)
#define BINPRM_MAX_RECURSION 4
struct coredump_params ;
struct linux_binfmt ;
extern int __register_binfmt(struct linux_binfmt *fmt, int insert);
static inline int register_binfmt(struct linux_binfmt *fmt)
static inline int insert_binfmt(struct linux_binfmt *fmt)
extern void unregister_binfmt(struct linux_binfmt *);
extern int prepare_binprm(struct linux_binprm *);
extern int __must_check remove_arg_zero(struct linux_binprm *);
extern int search_binary_handler(struct linux_binprm *, struct pt_regs *);
extern int flush_old_exec(struct linux_binprm * bprm);
extern void setup_new_exec(struct linux_binprm * bprm);
extern int suid_dumpable;
#define SUID_DUMP_DISABLE	0
#define SUID_DUMP_USER		1
#define SUID_DUMP_ROOT		2
#define EXSTACK_DEFAULT   0
#define EXSTACK_DISABLE_X 1
#define EXSTACK_ENABLE_X  2
extern int setup_arg_pages(struct linux_binprm * bprm,
unsigned long stack_top,
int executable_stack);
extern int bprm_mm_init(struct linux_binprm *bprm);
extern int copy_strings_kernel(int argc, const char *const *argv,
struct linux_binprm *bprm);
extern int prepare_bprm_creds(struct linux_binprm *bprm);
extern void install_exec_creds(struct linux_binprm *bprm);
extern void do_coredump(long signr, int exit_code, struct pt_regs *regs);
extern void set_binfmt(struct linux_binfmt *new);
extern void free_bprm(struct linux_binprm *);
