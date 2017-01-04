#define _LINUX_RATELIMIT_H
#define DEFAULT_RATELIMIT_INTERVAL	(5 * HZ)
#define DEFAULT_RATELIMIT_BURST		10
struct ratelimit_state ;
#define DEFINE_RATELIMIT_STATE(name, interval_init, burst_init)		\
\
struct ratelimit_state name =
static inline void ratelimit_state_init(struct ratelimit_state *rs,
int interval, int burst)
extern struct ratelimit_state printk_ratelimit_state;
extern int ___ratelimit(struct ratelimit_state *rs, const char *func);
#define __ratelimit(state) ___ratelimit(state, __func__)
#define WARN_ON_RATELIMIT(condition, state)			\
WARN_ON((condition) && __ratelimit(state))
#define __WARN_RATELIMIT(condition, state, format...)		\
()
#define WARN_RATELIMIT(condition, format...)			\
()
#define WARN_ON_RATELIMIT(condition, state)			\
WARN_ON(condition)
#define __WARN_RATELIMIT(condition, state, format...)		\
()
#define WARN_RATELIMIT(condition, format...)			\
()
