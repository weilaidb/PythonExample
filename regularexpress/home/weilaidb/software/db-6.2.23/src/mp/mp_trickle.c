static int __memp_trickle __P((ENV *, int, int *));
int
__memp_trickle_pp(dbenv, pct, nwrotep)
DB_ENV *dbenv;
int pct, *nwrotep;
static int
__memp_trickle(env, pct, nwrotep)
ENV *env;
int pct, *nwrotep;
