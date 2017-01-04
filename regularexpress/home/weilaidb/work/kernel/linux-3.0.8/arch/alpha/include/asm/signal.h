#define _ASMAXP_SIGNAL_H
struct siginfo;
#define _NSIG		64
#define _NSIG_BPW	64
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
#define SIGEMT		 7
#define SIGFPE		 8
#define SIGKILL		 9
#define SIGBUS		10
#define SIGSEGV		11
#define SIGSYS		12
#define SIGPIPE		13
#define SIGALRM		14
#define SIGTERM		15
#define SIGURG		16
#define SIGSTOP		17
#define SIGTSTP		18
#define SIGCONT		19
#define SIGCHLD		20
#define SIGTTIN		21
#define SIGTTOU		22
#define SIGIO		23
#define SIGXCPU		24
#define SIGXFSZ		25
#define SIGVTALRM	26
#define SIGPROF		27
#define SIGWINCH	28
#define SIGINFO		29
#define SIGUSR1		30
#define SIGUSR2		31
#define SIGPOLL	SIGIO
#define SIGPWR	SIGINFO
#define SIGIOT	SIGABRT
#define SIGRTMIN	32
#define SIGRTMAX	_NSIG
#define SA_ONSTACK	0x00000001
#define SA_RESTART	0x00000002
#define SA_NOCLDSTOP	0x00000004
#define SA_NODEFER	0x00000008
#define SA_RESETHAND	0x00000010
#define SA_NOCLDWAIT	0x00000020
#define SA_SIGINFO	0x00000040
#define SA_ONESHOT	SA_RESETHAND
#define SA_NOMASK	SA_NODEFER
#define SS_ONSTACK	1
#define SS_DISABLE	2
#define MINSIGSTKSZ	4096
#define SIGSTKSZ	16384
#define SIG_BLOCK          1
#define SIG_UNBLOCK        2
#define SIG_SETMASK        3
struct osf_sigaction ;
struct sigaction ;
struct k_sigaction ;
struct sigaction ;
#define sa_handler	_u._sa_handler
#define sa_sigaction	_u._sa_sigaction
typedef struct sigaltstack  stack_t;
struct sigstack ;
#define ptrace_signal_deliver(regs, cookie) do  while (0)
