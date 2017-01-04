int
__memp_register_pp(dbenv, ftype, pgin, pgout)
DB_ENV *dbenv;
int ftype;
int (*pgin) __P((DB_ENV *, db_pgno_t, void *, DBT *));
int (*pgout) __P((DB_ENV *, db_pgno_t, void *, DBT *));
int
__memp_register(env, ftype, pgin, pgout)
ENV *env;
int ftype;
int (*pgin) __P((DB_ENV *, db_pgno_t, void *, DBT *));
int (*pgout) __P((DB_ENV *, db_pgno_t, void *, DBT *));
