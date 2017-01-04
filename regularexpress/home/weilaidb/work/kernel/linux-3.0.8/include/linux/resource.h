#define _LINUX_RESOURCE_H
#define	RUSAGE_SELF	0
#define	RUSAGE_CHILDREN	(-1)
#define RUSAGE_BOTH	(-2)
#define	RUSAGE_THREAD	1
struct	rusage ;
struct rlimit ;
#define RLIM64_INFINITY		(~0ULL)
struct rlimit64 ;
#define	PRIO_MIN	(-20)
#define	PRIO_MAX	20
#define	PRIO_PROCESS	0
#define	PRIO_PGRP	1
#define	PRIO_USER	2
#define _STK_LIM	(8*1024*1024)
#define MLOCK_LIMIT	((PAGE_SIZE > 64*1024) ? PAGE_SIZE : 64*1024)
struct task_struct;
int getrusage(struct task_struct *p, int who, struct rusage __user *ru);
int do_prlimit(struct task_struct *tsk, unsigned int resource,
struct rlimit *new_rlim, struct rlimit *old_rlim);
