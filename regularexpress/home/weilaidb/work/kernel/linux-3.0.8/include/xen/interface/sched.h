#define __XEN_PUBLIC_SCHED_H__
#define SCHEDOP_yield       0
#define SCHEDOP_block       1
#define SCHEDOP_shutdown    2
struct sched_shutdown ;
DEFINE_GUEST_HANDLE_STRUCT(sched_shutdown);
#define SCHEDOP_poll        3
struct sched_poll ;
DEFINE_GUEST_HANDLE_STRUCT(sched_poll);
#define SCHEDOP_remote_shutdown        4
struct sched_remote_shutdown ;
#define SCHEDOP_shutdown_code 5
#define SCHEDOP_watchdog    6
struct sched_watchdog ;
#define SHUTDOWN_poweroff   0
#define SHUTDOWN_reboot     1
#define SHUTDOWN_suspend    2
#define SHUTDOWN_crash      3
#define SHUTDOWN_watchdog   4
