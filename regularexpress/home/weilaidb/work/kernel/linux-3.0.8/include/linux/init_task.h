#define _LINUX__INIT_TASK_H
# define INIT_PUSHABLE_TASKS(tsk)					\
.pushable_tasks = PLIST_NODE_INIT(tsk.pushable_tasks, MAX_PRIO),
# define INIT_PUSHABLE_TASKS(tsk)
extern struct files_struct init_files;
extern struct fs_struct init_fs;
#define INIT_THREADGROUP_FORK_LOCK(sig)					\
.threadgroup_fork_lock =					\
__RWSEM_INITIALIZER(sig.threadgroup_fork_lock),
#define INIT_THREADGROUP_FORK_LOCK(sig)
#define INIT_SIGNALS(sig)
extern struct nsproxy init_nsproxy;
#define INIT_SIGHAND(sighand)
extern struct group_info init_groups;
#define INIT_STRUCT_PID
#define INIT_PID_LINK(type) 					\
#define INIT_IDS \
.loginuid = -1, \
.sessionid = -1,
#define INIT_IDS
#define INIT_TASK_RCU_BOOST()						\
.rcu_boost_mutex = NULL,
#define INIT_TASK_RCU_BOOST()
#define INIT_TASK_RCU_TREE_PREEMPT()					\
.rcu_blocked_node = NULL,
#define INIT_TASK_RCU_TREE_PREEMPT(tsk)
#define INIT_TASK_RCU_PREEMPT(tsk)					\
.rcu_read_lock_nesting = 0,					\
.rcu_read_unlock_special = 0,					\
.rcu_node_entry = LIST_HEAD_INIT(tsk.rcu_node_entry),		\
INIT_TASK_RCU_TREE_PREEMPT()					\
INIT_TASK_RCU_BOOST()
#define INIT_TASK_RCU_PREEMPT(tsk)
extern struct cred init_cred;
# define INIT_PERF_EVENTS(tsk)					\
.perf_event_mutex = 						\
__MUTEX_INITIALIZER(tsk.perf_event_mutex),		\
.perf_event_list = LIST_HEAD_INIT(tsk.perf_event_list),
# define INIT_PERF_EVENTS(tsk)
#define INIT_TASK(tsk)	\
#define INIT_CPU_TIMERS(cpu_timers)					\
#define __init_task_data __attribute__((__section__(".data..init_task")))
