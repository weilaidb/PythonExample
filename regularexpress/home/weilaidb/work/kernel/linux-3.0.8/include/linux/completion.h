#define __LINUX_COMPLETION_H
struct completion ;
#define COMPLETION_INITIALIZER(work) \
#define COMPLETION_INITIALIZER_ONSTACK(work) \
()
#define DECLARE_COMPLETION(work) \
struct completion work = COMPLETION_INITIALIZER(work)
# define DECLARE_COMPLETION_ONSTACK(work) \
struct completion work = COMPLETION_INITIALIZER_ONSTACK(work)
# define DECLARE_COMPLETION_ONSTACK(work) DECLARE_COMPLETION(work)
static inline void init_completion(struct completion *x)
extern void wait_for_completion(struct completion *);
extern int wait_for_completion_interruptible(struct completion *x);
extern int wait_for_completion_killable(struct completion *x);
extern unsigned long wait_for_completion_timeout(struct completion *x,
unsigned long timeout);
extern long wait_for_completion_interruptible_timeout(
struct completion *x, unsigned long timeout);
extern long wait_for_completion_killable_timeout(
struct completion *x, unsigned long timeout);
extern bool try_wait_for_completion(struct completion *x);
extern bool completion_done(struct completion *x);
extern void complete(struct completion *);
extern void complete_all(struct completion *);
#define INIT_COMPLETION(x)	((x).done = 0)
