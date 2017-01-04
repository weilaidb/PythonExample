void
__clock_set_expires(env, timespecp, timeout)
ENV *env;
db_timespec *timespecp;
db_timeout_t timeout;
int
__clock_expired(env, now, timespecp)
ENV *env;
db_timespec *now, *timespecp;
