#define _ASM_X86_IA32_H
struct sigaction32 ;
struct old_sigaction32 ;
typedef struct sigaltstack_ia32  stack_ia32_t;
struct ucontext_ia32 ;
struct stat64  __attribute__((packed));
typedef struct compat_siginfo  compat_siginfo_t;
#define IA32_STACK_TOP IA32_PAGE_OFFSET
struct linux_binprm;
extern int ia32_setup_arg_pages(struct linux_binprm *bprm,
unsigned long stack_top, int exec_stack);
struct mm_struct;
extern void ia32_pick_mmap_layout(struct mm_struct *mm);
