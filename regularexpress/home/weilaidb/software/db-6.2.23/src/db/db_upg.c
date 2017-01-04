int
__db_upgrade_pp(dbp, fname, flags)
DB *dbp;
const char *fname;
u_int32_t flags;
static int (* const func_31_list[P_PAGETYPE_MAX])
__P((DB *, char *, u_int32_t, DB_FH *, PAGE *, int *)) = ;
static int (* const func_46_list[P_PAGETYPE_MAX])
__P((DB *, char *, u_int32_t, DB_FH *, PAGE *, int *)) = ;
static int (* const func_60_list[P_PAGETYPE_MAX])
__P((DB *, char *, u_int32_t, DB_FH *, PAGE *, int *)) = ;
static int __db_page_pass __P((DB *, char *, u_int32_t, int (* const [])
(DB *, char *, u_int32_t, DB_FH *, PAGE *, int *), DB_FH *));
static int __db_set_lastpgno __P((DB *, char *, DB_FH *));
int
__db_upgrade(dbp, fname, flags)
DB *dbp;
const char *fname;
u_int32_t flags;
static int
__db_page_pass(dbp, real_name, flags, fl, fhp)
DB *dbp;
char *real_name;
u_int32_t flags;
int (* const fl[P_PAGETYPE_MAX])
__P((DB *, char *, u_int32_t, DB_FH *, PAGE *, int *));
DB_FH *fhp;
int
__db_lastpgno(dbp, real_name, fhp, pgno_lastp)
DB *dbp;
char *real_name;
DB_FH *fhp;
db_pgno_t *pgno_lastp;
static int
__db_set_lastpgno(dbp, real_name, fhp)
DB *dbp;
char *real_name;
DB_FH *fhp;
