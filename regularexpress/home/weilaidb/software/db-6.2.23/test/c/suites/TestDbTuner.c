#define random(x) (rand() % x)
int open_db(DB_ENV **, DB **, char *, char *, u_int32_t, int);
int run_test(CuTest *, u_int32_t, int, int, int, int, int);
int store_db(DB *, int, int, int, int);
const char *progname_dbtuner = "TestDbTuner";
int total_cases, success_cases;
int TestDbTuner(CuTest *ct)
int
run_test(ct, pgsize, mdatas, mkeys, mdups, nrecs, duptype)
CuTest *ct;
u_int32_t pgsize;
int mdatas, mkeys, mdups, nrecs, duptype;
int
store_db(dbp, nrecs, mkeys, mdatas, mdups)
DB *dbp;
int nrecs, mkeys, mdatas, mdups;
int
open_db(dbenvp, dbpp, dbname, home, pgsize, duptype)
DB_ENV **dbenvp;
DB **dbpp;
char *dbname, *home;
u_int32_t pgsize;
int duptype;
