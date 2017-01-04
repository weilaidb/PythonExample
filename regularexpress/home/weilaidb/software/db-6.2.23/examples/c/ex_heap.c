static const char copyright[] =
"Copyright (c) 2011, 2016 Oracle and/or its affiliates.  All rights reserved.\n";
#define	BUFFER_LEN		30
#define	NS_PER_MS		1000000
#define	NS_PER_US		1000
#define	DEF_INIT_RECS		10000
#define	DEF_RECS_PER_REP	10000
#define	DEF_REPEATS		1
#define	AVG_SPACE_PER_RECORD	36
extern int getopt(int, char * const *, const char *);
int gettimeofday(struct timeval *tv, struct timezone *tz)
int	compare_int(DB *, const DBT *, const DBT *, size_t *);
int	delete_recs __P((DB *, DB_ENV *, int));
int	file_size __P((DB *, DBTYPE, int *));
int	generate_data __P((char [], int, int));
int	insert_btree __P((DB *, DB_ENV *, int, int, int));
int	insert_heap __P((DB *, DB_ENV *, int, int, int));
int	open_db __P((
DB **, DB_ENV *, DBTYPE, char *, u_int32_t, u_int32_t, u_int32_t));
int	open_env __P((DB_ENV **, char *, u_int32_t));
int	run_workload __P((DB *, int, int, int));
void	usage __P((void));
const char *progname = "ex_heap";
int
main(argc, argv)
int argc;
char *argv[];
int
run_workload(dbp, repeats, recs_per_rep, test_var)
DB *dbp;
int repeats, recs_per_rep, test_var;
int
file_size(dbp, dbtype, fsize)
DB *dbp;
DBTYPE dbtype;
int *fsize;
int
insert_heap(dbp, dbenv, numrecs, start, test_var)
DB *dbp;
DB_ENV *dbenv;
int numrecs, start, test_var;
int
insert_btree(dbp, dbenv, numrecs, start, test_var)
DB *dbp;
DB_ENV *dbenv;
int numrecs, start, test_var;
int
generate_data(buf, rec_no, test_var)
char *buf;
int rec_no, test_var;
int
delete_recs(dbp, dbenv, numrecs)
DB *dbp;
DB_ENV *dbenv;
int numrecs;
void
usage()
int
open_env(dbenvp, home, cachesize)
DB_ENV **dbenvp;
char *home;
u_int32_t cachesize;
int
open_db(dbpp, dbenv, dbtype, home, ghpsize, hpsize, pgsize)
DB **dbpp;
DB_ENV *dbenv;
DBTYPE dbtype;
char *home;
u_int32_t ghpsize, hpsize, pgsize;
int
compare_int(dbp, a, b, locp)
DB *dbp;
const DBT *a, *b;
size_t *locp;
