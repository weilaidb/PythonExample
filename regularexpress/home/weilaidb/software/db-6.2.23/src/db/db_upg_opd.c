static int __db_build_bi __P((DB *, DB_FH *, PAGE *, PAGE *, u_int32_t, int *));
static int __db_build_ri __P((DB *, DB_FH *, PAGE *, PAGE *, u_int32_t, int *));
static int __db_up_ovref __P((DB *, DB_FH *, db_pgno_t));
#define	GET_PAGE(dbp, fhp, pgno, page)
#define	PUT_PAGE(dbp, fhp, pgno, page)
int
__db_31_offdup(dbp, real_name, fhp, sorted, pgnop)
DB *dbp;
char *real_name;
DB_FH *fhp;
int sorted;
db_pgno_t *pgnop;
static int
__db_build_bi(dbp, fhp, ipage, page, indx, nomemp)
DB *dbp;
DB_FH *fhp;
PAGE *ipage, *page;
u_int32_t indx;
int *nomemp;
static int
__db_build_ri(dbp, fhp, ipage, page, indx, nomemp)
DB *dbp;
DB_FH *fhp;
PAGE *ipage, *page;
u_int32_t indx;
int *nomemp;
static int
__db_up_ovref(dbp, fhp, pgno)
DB *dbp;
DB_FH *fhp;
db_pgno_t pgno;
