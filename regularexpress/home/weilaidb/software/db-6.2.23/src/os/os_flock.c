int
__os_fdlock(env, fhp, offset, acquire, nowait)
ENV *env;
DB_FH *fhp;
int acquire, nowait;
off_t offset;
