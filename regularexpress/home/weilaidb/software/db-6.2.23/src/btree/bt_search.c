int
__bam_get_root(dbc, root_pgno, slevel, flags, stack)
DBC *dbc;
db_pgno_t root_pgno;
int slevel;
u_int32_t flags;
int *stack;
int
__bam_search(dbc, root_pgno, key, flags, slevel, recnop, exactp)
DBC *dbc;
db_pgno_t root_pgno;
const DBT *key;
u_int32_t flags;
int slevel, *exactp;
db_recno_t *recnop;
int
__bam_stkrel(dbc, flags)
DBC *dbc;
u_int32_t flags;
int
__bam_stkgrow(env, cp)
ENV *env;
BTREE_CURSOR *cp;
