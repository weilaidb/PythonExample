#define __ASM_COMPAT_SIGNAL_H
#define SI_PAD_SIZE32   ((SI_MAX_SIZE/sizeof(int)) - 3)
typedef struct compat_siginfo  compat_siginfo_t;
static inline int __copy_conv_sigset_to_user(compat_sigset_t __user *d,
const sigset_t *s)
static inline int __copy_conv_sigset_from_user(sigset_t *d,
const compat_sigset_t __user *s)
