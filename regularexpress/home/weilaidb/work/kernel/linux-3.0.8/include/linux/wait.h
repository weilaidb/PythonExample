#define _LINUX_WAIT_H
#define WNOHANG		0x00000001
#define WUNTRACED	0x00000002
#define WSTOPPED	WUNTRACED
#define WEXITED		0x00000004
#define WCONTINUED	0x00000008
#define WNOWAIT		0x01000000
#define __WNOTHREAD	0x20000000
#define __WALL		0x40000000
#define __WCLONE	0x80000000
#define P_ALL		0
#define P_PID		1
#define P_PGID		2
typedef struct __wait_queue wait_queue_t;
typedef int (*wait_queue_func_t)(wait_queue_t *wait, unsigned mode, int flags, void *key);
int default_wake_function(wait_queue_t *wait, unsigned mode, int flags, void *key);
struct __wait_queue ;
struct wait_bit_key ;
struct wait_bit_queue ;
struct __wait_queue_head ;
typedef struct __wait_queue_head wait_queue_head_t;
struct task_struct;
#define __WAITQUEUE_INITIALIZER(name, tsk)
#define DECLARE_WAITQUEUE(name, tsk)					\
wait_queue_t name = __WAITQUEUE_INITIALIZER(name, tsk)
#define __WAIT_QUEUE_HEAD_INITIALIZER(name)
#define DECLARE_WAIT_QUEUE_HEAD(name) \
wait_queue_head_t name = __WAIT_QUEUE_HEAD_INITIALIZER(name)
#define __WAIT_BIT_KEY_INITIALIZER(word, bit)				\
extern void __init_waitqueue_head(wait_queue_head_t *q, struct lock_class_key *);
#define init_waitqueue_head(q)				\
do  while (0)
# define __WAIT_QUEUE_HEAD_INIT_ONSTACK(name) \
()
# define DECLARE_WAIT_QUEUE_HEAD_ONSTACK(name) \
wait_queue_head_t name = __WAIT_QUEUE_HEAD_INIT_ONSTACK(name)
# define DECLARE_WAIT_QUEUE_HEAD_ONSTACK(name) DECLARE_WAIT_QUEUE_HEAD(name)
static inline void init_waitqueue_entry(wait_queue_t *q, struct task_struct *p)
static inline void init_waitqueue_func_entry(wait_queue_t *q,
wait_queue_func_t func)
static inline int waitqueue_active(wait_queue_head_t *q)
extern void add_wait_queue(wait_queue_head_t *q, wait_queue_t *wait);
extern void add_wait_queue_exclusive(wait_queue_head_t *q, wait_queue_t *wait);
extern void remove_wait_queue(wait_queue_head_t *q, wait_queue_t *wait);
static inline void __add_wait_queue(wait_queue_head_t *head, wait_queue_t *new)
static inline void __add_wait_queue_exclusive(wait_queue_head_t *q,
wait_queue_t *wait)
static inline void __add_wait_queue_tail(wait_queue_head_t *head,
wait_queue_t *new)
static inline void __add_wait_queue_tail_exclusive(wait_queue_head_t *q,
wait_queue_t *wait)
static inline void __remove_wait_queue(wait_queue_head_t *head,
wait_queue_t *old)
void __wake_up(wait_queue_head_t *q, unsigned int mode, int nr, void *key);
void __wake_up_locked_key(wait_queue_head_t *q, unsigned int mode, void *key);
void __wake_up_sync_key(wait_queue_head_t *q, unsigned int mode, int nr,
void *key);
void __wake_up_locked(wait_queue_head_t *q, unsigned int mode);
void __wake_up_sync(wait_queue_head_t *q, unsigned int mode, int nr);
void __wake_up_bit(wait_queue_head_t *, void *, int);
int __wait_on_bit(wait_queue_head_t *, struct wait_bit_queue *, int (*)(void *), unsigned);
int __wait_on_bit_lock(wait_queue_head_t *, struct wait_bit_queue *, int (*)(void *), unsigned);
void wake_up_bit(void *, int);
int out_of_line_wait_on_bit(void *, int, int (*)(void *), unsigned);
int out_of_line_wait_on_bit_lock(void *, int, int (*)(void *), unsigned);
wait_queue_head_t *bit_waitqueue(void *, int);
#define wake_up(x)			__wake_up(x, TASK_NORMAL, 1, NULL)
#define wake_up_nr(x, nr)		__wake_up(x, TASK_NORMAL, nr, NULL)
#define wake_up_all(x)			__wake_up(x, TASK_NORMAL, 0, NULL)
#define wake_up_locked(x)		__wake_up_locked((x), TASK_NORMAL)
#define wake_up_interruptible(x)	__wake_up(x, TASK_INTERRUPTIBLE, 1, NULL)
#define wake_up_interruptible_nr(x, nr)	__wake_up(x, TASK_INTERRUPTIBLE, nr, NULL)
#define wake_up_interruptible_all(x)	__wake_up(x, TASK_INTERRUPTIBLE, 0, NULL)
#define wake_up_interruptible_sync(x)	__wake_up_sync((x), TASK_INTERRUPTIBLE, 1)
#define wake_up_poll(x, m)				\
__wake_up(x, TASK_NORMAL, 1, (void *) (m))
#define wake_up_locked_poll(x, m)				\
__wake_up_locked_key((x), TASK_NORMAL, (void *) (m))
#define wake_up_interruptible_poll(x, m)			\
__wake_up(x, TASK_INTERRUPTIBLE, 1, (void *) (m))
#define wake_up_interruptible_sync_poll(x, m)				\
__wake_up_sync_key((x), TASK_INTERRUPTIBLE, 1, (void *) (m))
#define __wait_event(wq, condition) 					\
do  while (0)
#define wait_event(wq, condition) 					\
do  while (0)
#define __wait_event_timeout(wq, condition, ret)			\
do  while (0)
#define wait_event_timeout(wq, condition, timeout)			\
()
#define __wait_event_interruptible(wq, condition, ret)			\
do  while (0)
#define wait_event_interruptible(wq, condition)				\
()
#define __wait_event_interruptible_timeout(wq, condition, ret)		\
do  while (0)
#define wait_event_interruptible_timeout(wq, condition, timeout)	\
()
#define __wait_event_interruptible_exclusive(wq, condition, ret)	\
do  while (0)
#define wait_event_interruptible_exclusive(wq, condition)		\
()
#define __wait_event_interruptible_locked(wq, condition, exclusive, irq) \
()
#define wait_event_interruptible_locked(wq, condition)			\
((condition)							\
? 0 : __wait_event_interruptible_locked(wq, condition, 0, 0))
#define wait_event_interruptible_locked_irq(wq, condition)		\
((condition)							\
? 0 : __wait_event_interruptible_locked(wq, condition, 0, 1))
#define wait_event_interruptible_exclusive_locked(wq, condition)	\
((condition)							\
? 0 : __wait_event_interruptible_locked(wq, condition, 1, 0))
#define wait_event_interruptible_exclusive_locked_irq(wq, condition)	\
((condition)							\
? 0 : __wait_event_interruptible_locked(wq, condition, 1, 1))
#define __wait_event_killable(wq, condition, ret)			\
do  while (0)
#define wait_event_killable(wq, condition)				\
()
extern void sleep_on(wait_queue_head_t *q);
extern long sleep_on_timeout(wait_queue_head_t *q,
signed long timeout);
extern void interruptible_sleep_on(wait_queue_head_t *q);
extern long interruptible_sleep_on_timeout(wait_queue_head_t *q,
signed long timeout);
void prepare_to_wait(wait_queue_head_t *q, wait_queue_t *wait, int state);
void prepare_to_wait_exclusive(wait_queue_head_t *q, wait_queue_t *wait, int state);
void finish_wait(wait_queue_head_t *q, wait_queue_t *wait);
void abort_exclusive_wait(wait_queue_head_t *q, wait_queue_t *wait,
unsigned int mode, void *key);
int autoremove_wake_function(wait_queue_t *wait, unsigned mode, int sync, void *key);
int wake_bit_function(wait_queue_t *wait, unsigned mode, int sync, void *key);
#define DEFINE_WAIT_FUNC(name, function)				\
wait_queue_t name =
#define DEFINE_WAIT(name) DEFINE_WAIT_FUNC(name, autoremove_wake_function)
#define DEFINE_WAIT_BIT(name, word, bit)				\
struct wait_bit_queue name =
#define init_wait(wait)							\
do  while (0)
static inline int wait_on_bit(void *word, int bit,
int (*action)(void *), unsigned mode)
static inline int wait_on_bit_lock(void *word, int bit,
int (*action)(void *), unsigned mode)
