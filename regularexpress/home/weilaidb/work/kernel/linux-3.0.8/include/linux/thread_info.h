#define _LINUX_THREAD_INFO_H
struct timespec;
struct compat_timespec;
struct restart_block ;
extern long do_no_restart_syscall(struct restart_block *parm);
static inline void set_ti_thread_flag(struct thread_info *ti, int flag)
static inline void clear_ti_thread_flag(struct thread_info *ti, int flag)
static inline int test_and_set_ti_thread_flag(struct thread_info *ti, int flag)
static inline int test_and_clear_ti_thread_flag(struct thread_info *ti, int flag)
static inline int test_ti_thread_flag(struct thread_info *ti, int flag)
#define set_thread_flag(flag) \
set_ti_thread_flag(current_thread_info(), flag)
#define clear_thread_flag(flag) \
clear_ti_thread_flag(current_thread_info(), flag)
#define test_and_set_thread_flag(flag) \
test_and_set_ti_thread_flag(current_thread_info(), flag)
#define test_and_clear_thread_flag(flag) \
test_and_clear_ti_thread_flag(current_thread_info(), flag)
#define test_thread_flag(flag) \
test_ti_thread_flag(current_thread_info(), flag)
#define set_need_resched()	set_thread_flag(TIF_NEED_RESCHED)
#define clear_need_resched()	clear_thread_flag(TIF_NEED_RESCHED)
#if defined TIF_RESTORE_SIGMASK && !defined HAVE_SET_RESTORE_SIGMASK
#define HAVE_SET_RESTORE_SIGMASK	1
static inline void set_restore_sigmask(void)
