#undef TRACE_SYSTEM
#define TRACE_SYSTEM signal
#if !defined(_TRACE_SIGNAL_H) || defined(TRACE_HEADER_MULTI_READ)
#define _TRACE_SIGNAL_H
#define TP_STORE_SIGINFO(__entry, info)				\
do  while (0)
TRACE_EVENT(signal_generate,
TP_PROTO(int sig, struct siginfo *info, struct task_struct *task),
TP_ARGS(sig, info, task),
TP_STRUCT__entry(
__field(	int,	sig			)
__field(	int,	errno			)
__field(	int,	code			)
__array(	char,	comm,	TASK_COMM_LEN	)
__field(	pid_t,	pid			)
),
TP_fast_assign(
__entry->sig	= sig;
TP_STORE_SIGINFO(__entry, info);
memcpy(__entry->comm, task->comm, TASK_COMM_LEN);
__entry->pid	= task->pid;
),
TP_printk("sig=%d errno=%d code=%d comm=%s pid=%d",
__entry->sig, __entry->errno, __entry->code,
__entry->comm, __entry->pid)
);
TRACE_EVENT(signal_deliver,
TP_PROTO(int sig, struct siginfo *info, struct k_sigaction *ka),
TP_ARGS(sig, info, ka),
TP_STRUCT__entry(
__field(	int,		sig		)
__field(	int,		errno		)
__field(	int,		code		)
__field(	unsigned long,	sa_handler	)
__field(	unsigned long,	sa_flags	)
),
TP_fast_assign(
__entry->sig	= sig;
TP_STORE_SIGINFO(__entry, info);
__entry->sa_handler	= (unsigned long)ka->sa.sa_handler;
__entry->sa_flags	= ka->sa.sa_flags;
),
TP_printk("sig=%d errno=%d code=%d sa_handler=%lx sa_flags=%lx",
__entry->sig, __entry->errno, __entry->code,
__entry->sa_handler, __entry->sa_flags)
);
DECLARE_EVENT_CLASS(signal_queue_overflow,
TP_PROTO(int sig, int group, struct siginfo *info),
TP_ARGS(sig, group, info),
TP_STRUCT__entry(
__field(	int,	sig	)
__field(	int,	group	)
__field(	int,	errno	)
__field(	int,	code	)
),
TP_fast_assign(
__entry->sig	= sig;
__entry->group	= group;
TP_STORE_SIGINFO(__entry, info);
),
TP_printk("sig=%d group=%d errno=%d code=%d",
__entry->sig, __entry->group, __entry->errno, __entry->code)
);
DEFINE_EVENT(signal_queue_overflow, signal_overflow_fail,
TP_PROTO(int sig, int group, struct siginfo *info),
TP_ARGS(sig, group, info)
);
DEFINE_EVENT(signal_queue_overflow, signal_lose_info,
TP_PROTO(int sig, int group, struct siginfo *info),
TP_ARGS(sig, group, info)
);
