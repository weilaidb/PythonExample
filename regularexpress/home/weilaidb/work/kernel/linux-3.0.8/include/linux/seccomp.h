#define _LINUX_SECCOMP_H
typedef struct  seccomp_t;
extern void __secure_computing(int);
static inline void secure_computing(int this_syscall)
extern long prctl_get_seccomp(void);
extern long prctl_set_seccomp(unsigned long);
typedef struct  seccomp_t;
#define secure_computing(x) do  while (0)
static inline long prctl_get_seccomp(void)
static inline long prctl_set_seccomp(unsigned long arg2)
