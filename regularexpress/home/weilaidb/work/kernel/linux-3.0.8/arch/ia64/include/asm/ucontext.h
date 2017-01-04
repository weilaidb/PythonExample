#define _ASM_IA64_UCONTEXT_H
struct ucontext ;
#define uc_link		uc_mcontext.sc_gr[0]
#define uc_sigmask	uc_mcontext.sc_sigmask
#define uc_stack	uc_mcontext.sc_stack
