#define _ASM_S390_SIGCONTEXT_H
#define __NUM_GPRS 16
#define __NUM_FPRS 16
#define __NUM_ACRS 16
#define _SIGCONTEXT_NSIG	64
#define _SIGCONTEXT_NSIG_BPW	32
#define __SIGNAL_FRAMESIZE	96
#define _SIGCONTEXT_NSIG	64
#define _SIGCONTEXT_NSIG_BPW	64
#define __SIGNAL_FRAMESIZE	160
#define _SIGCONTEXT_NSIG_WORDS	(_SIGCONTEXT_NSIG / _SIGCONTEXT_NSIG_BPW)
#define _SIGMASK_COPY_SIZE	(sizeof(unsigned long)*_SIGCONTEXT_NSIG_WORDS)
typedef struct
__attribute__ ((aligned(8))) _psw_t;
typedef struct
_s390_regs_common;
typedef struct
_s390_fp_regs;
typedef struct
_sigregs;
struct sigcontext
;
