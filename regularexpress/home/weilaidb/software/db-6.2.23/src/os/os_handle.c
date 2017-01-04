int
__os_openhandle(env, name, flags, mode, fhpp)
ENV *env;
const char *name;
int flags, mode;
DB_FH **fhpp;
int
__os_closehandle(env, fhp)
ENV *env;
DB_FH *fhp;
