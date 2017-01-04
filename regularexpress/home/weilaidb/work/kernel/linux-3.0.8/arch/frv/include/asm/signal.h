#define _ASM_SIGNAL_H
#define NSIG		32
typedef unsigned long sigset_t;
#define SA_RESTORER	0x04000000
struct old_sigaction ;
struct sigaction ;
#define sa_handler	_u._sa_handler
#define sa_sigaction	_u._sa_sigaction
