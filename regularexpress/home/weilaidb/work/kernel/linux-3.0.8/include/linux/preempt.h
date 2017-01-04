#define __LINUX_PREEMPT_H
#if defined(CONFIG_DEBUG_PREEMPT) || defined(CONFIG_PREEMPT_TRACER)
extern void add_preempt_count(int val);
extern void sub_preempt_count(int val);
# define add_preempt_count(val)	do  while (0)
# define sub_preempt_count(val)	do  while (0)
#define inc_preempt_count() add_preempt_count(1)
#define dec_preempt_count() sub_preempt_count(1)
#define preempt_count()	(current_thread_info()->preempt_count)
asmlinkage void preempt_schedule(void);
#define preempt_disable() \
do  while (0)
#define preempt_enable_no_resched() \
do  while (0)
#define preempt_check_resched() \
do  while (0)
#define preempt_enable() \
do  while (0)
#define add_preempt_count_notrace(val)			\
do  while (0)
#define sub_preempt_count_notrace(val)			\
do  while (0)
#define inc_preempt_count_notrace() add_preempt_count_notrace(1)
#define dec_preempt_count_notrace() sub_preempt_count_notrace(1)
#define preempt_disable_notrace() \
do  while (0)
#define preempt_enable_no_resched_notrace() \
do  while (0)
#define preempt_enable_notrace() \
do  while (0)
#define preempt_disable()		do  while (0)
#define preempt_enable_no_resched()	do  while (0)
#define preempt_enable()		do  while (0)
#define preempt_check_resched()		do  while (0)
#define preempt_disable_notrace()		do  while (0)
#define preempt_enable_no_resched_notrace()	do  while (0)
#define preempt_enable_notrace()		do  while (0)
struct preempt_notifier;
struct preempt_ops ;
struct preempt_notifier ;
void preempt_notifier_register(struct preempt_notifier *notifier);
void preempt_notifier_unregister(struct preempt_notifier *notifier);
static inline void preempt_notifier_init(struct preempt_notifier *notifier,
struct preempt_ops *ops)
