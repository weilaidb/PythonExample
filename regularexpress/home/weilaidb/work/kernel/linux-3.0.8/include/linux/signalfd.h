#define _LINUX_SIGNALFD_H
#define SFD_CLOEXEC O_CLOEXEC
#define SFD_NONBLOCK O_NONBLOCK
struct signalfd_siginfo ;
static inline void signalfd_notify(struct task_struct *tsk, int sig)
static inline void signalfd_notify(struct task_struct *tsk, int sig)
