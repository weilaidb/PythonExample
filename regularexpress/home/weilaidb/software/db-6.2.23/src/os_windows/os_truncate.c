int
__os_truncate(env, fhp, pgno, pgsize, relative)
ENV *env;
DB_FH *fhp;
db_pgno_t pgno;
u_int32_t pgsize;
off_t relative;
