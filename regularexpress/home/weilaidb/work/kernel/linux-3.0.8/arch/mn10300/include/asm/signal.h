#define _ASM_SIGNAL_H
struct siginfo;
#define _NSIG		64
#define _NSIG_BPW	32
#define _NSIG_WORDS	(_NSIG / _NSIG_BPW)
typedef unsigned long old_sigset_t;
typedef struct  sigset_t;
#define NSIG		32
typedef unsigned long sigset_t;
#define SIGHUP		 1
#define SIGINT		 2
#define SIGQUIT		 3
#define SIGILL		 4
#define SIGTRAP		 5
#define SIGABRT		 6
#define SIGIOT		 6
#define SIGBUS		 7
#define SIGFPE		 8
#define SIGKILL		 9
#define SIGUSR1		10
#define SIGSEGV		11
#define SIGUSR2		12
#define SIGPIPE		13
#define SIGALRM		14
#define SIGTERM		15
#define SIGSTKFLT	16
#define SIGCHLD		17
#define SIGCONT		18
#define SIGSTOP		19
#define SIGTSTP		20
#define SIGTTIN		21
#define SIGTTOU		22
#define SIGURG		23
#define SIGXCPU		24
#define SIGXFSZ		25
#define SIGVTALRM	26
#define SIGPROF		27
#define SIGWINCH	28
#define SIGIO		29
#define SIGPOLL		SIGIO
#define SIGPWR		30
#define SIGSYS		31
#define	SIGUNUSED	31
#define SIGRTMIN	32
#define SIGRTMAX	_NSIG
#define SA_NOCLDSTOP	0x00000001U
#define SA_NOCLDWAIT	0x00000002U
#define SA_SIGINFO	0x00000004U
#define SA_ONSTACK	0x08000000U
#define SA_RESTART	0x10000000U
#define SA_NODEFER	0x40000000U
#define SA_RESETHAND	0x80000000U
#define SA_NOMASK	SA_NODEFER
#define SA_ONESHOT	SA_RESETHAND
#define SA_RESTORER	0x04000000
#define SS_ONSTACK	1
#define SS_DISABLE	2
#define MINSIGSTKSZ	2048
#define SIGSTKSZ	8192
struct old_sigaction ;
struct sigaction ;
struct k_sigaction ;
struct sigaction ;
#define sa_handler	_u._sa_handler
#define sa_sigaction	_u._sa_sigaction
typedef struct sigaltstack  stack_t;
struct pt_regs;
#define ptrace_signal_deliver(regs, cookie) do  while (0)
