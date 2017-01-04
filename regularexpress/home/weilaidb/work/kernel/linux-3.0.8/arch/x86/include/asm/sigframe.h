#define _ASM_X86_SIGFRAME_H
#define sigframe_ia32		sigframe
#define rt_sigframe_ia32	rt_sigframe
#define sigcontext_ia32		sigcontext
#define _fpstate_ia32		_fpstate
#define ucontext_ia32		ucontext
#if defined(CONFIG_X86_32) || defined(CONFIG_IA32_EMULATION)
struct sigframe_ia32 ;
struct rt_sigframe_ia32 ;
struct rt_sigframe ;
