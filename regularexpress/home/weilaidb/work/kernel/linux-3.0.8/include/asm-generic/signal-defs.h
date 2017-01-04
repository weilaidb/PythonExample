#define __ASM_GENERIC_SIGNAL_DEFS_H
#define SIG_BLOCK          0
#define SIG_UNBLOCK        1
#define SIG_SETMASK        2
typedef void __signalfn_t(int);
typedef __signalfn_t __user *__sighandler_t;
typedef void __restorefn_t(void);
typedef __restorefn_t __user *__sigrestore_t;
#define SIG_DFL	((__force __sighandler_t)0)
#define SIG_IGN	((__force __sighandler_t)1)
#define SIG_ERR	((__force __sighandler_t)-1)
