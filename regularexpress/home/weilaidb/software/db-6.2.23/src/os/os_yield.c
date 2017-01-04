#if defined(HAVE_SYSTEM_INCLUDE_FILES) && defined(HAVE_SCHED_YIELD)
static void __os_sleep __P((ENV *, u_long, u_long));
void
__os_yield(env, secs, usecs)
ENV *env;
u_long secs, usecs;
static void
__os_sleep(env, secs, usecs)
ENV *env;
u_long secs, usecs;
