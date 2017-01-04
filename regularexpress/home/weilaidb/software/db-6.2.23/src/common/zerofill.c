int
__db_zero_fill(env, fhp)
ENV *env;
DB_FH *fhp;
int
__db_zero_extend(env, fhp, pgno, last_pgno, pgsize)
ENV *env;
DB_FH *fhp;
db_pgno_t pgno, last_pgno;
u_int32_t pgsize;
