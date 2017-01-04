static const char copyright[] =
"Copyright (c) 1996, 2016 Oracle and/or its affiliates.  All rights reserved.\n";
typedef struct  LDG;
int	badend __P((DB_ENV *));
void	badnum __P((DB_ENV *));
int	configure __P((DB_ENV *, DB *, char **, char **, int *));
int	convprintable __P((DB_ENV *, char *, char **));
int	db_init __P((DB_ENV *, char *, u_int32_t, int *));
int	dbt_rdump __P((DB_ENV *, DBT *, u_int32_t, int *));
int	dbt_rprint __P((DB_ENV *, DBT *));
int	dbt_rrecno __P((DB_ENV *, DBT *, int));
int	dbt_to_recno __P((DB_ENV *, DBT *, db_recno_t *));
int	env_create __P((DB_ENV **, LDG *));
void	free_keys __P((DBT *part_keys));
int	load __P((DB_ENV *, char *, DBTYPE, char **, u_int, LDG *, int *));
int	main __P((int, char *[]));
int	putdata __P((DB *, DBC *, DB_TXN *, DBT *, DBT *, u_int32_t, int));
int	rheader __P((DB_ENV *, DB *, DBTYPE *, char **, int *, int *, DBT **));
int	usage __P((void));
int	version_check __P((void));
const char *progname;
#define	G(f)	((LDG *)dbenv->app_private)->f
#define	LDF_NOHEADER	0x01
#define	LDF_NOOVERWRITE	0x02
#define	LDF_PASSWORD	0x04
#define	BLOB_LOADING_SIZE 1048576
int
main(argc, argv)
int argc;
char *argv[];
int
load(dbenv, name, argtype, clist, flags, ldg, existedp)
DB_ENV *dbenv;
char *name, **clist;
DBTYPE argtype;
u_int flags;
LDG *ldg;
int *existedp;
int
putdata(dbp, dbc, txn, writep, data, put_flags, streaming)
DB *dbp;
DBC *dbc;
DB_TXN *txn;
DBT *writep;
DBT *data;
u_int32_t put_flags;
int streaming;
int
env_create(dbenvp, ldg)
DB_ENV **dbenvp;
LDG *ldg;
int
db_init(dbenv, home, cache, is_private)
DB_ENV *dbenv;
char *home;
u_int32_t cache;
int *is_private;
#define	FLAG(name, value, keyword, flag)				\
if (strcmp(name, keyword) == 0)
#define	NUMBER(name, value, keyword, func, t)				\
if (strcmp(name, keyword) == 0)
#define	STRING(name, value, keyword, func)				\
if (strcmp(name, keyword) == 0)
#define	CONFIGURATION_LIST_COMPARE					\
NUMBER(name, value, "bt_minkey", set_bt_minkey, u_int32_t);	\
FLAG(name, value, "chksum", DB_CHKSUM);			\
NUMBER(name, value, "db_lorder", set_lorder, int);		\
NUMBER(name, value, "db_pagesize", set_pagesize, u_int32_t);	\
FLAG(name, value, "duplicates", DB_DUP);			\
FLAG(name, value, "dupsort", DB_DUPSORT);			\
NUMBER(name, value, "extentsize", set_q_extentsize, u_int32_t);	\
NUMBER(name, value, "h_ffactor", set_h_ffactor, u_int32_t);	\
NUMBER(name, value, "h_nelem", set_h_nelem, u_int32_t);		\
NUMBER(name, value, "heap_regionsize", set_heap_regionsize, u_int32_t);\
NUMBER(name, value, "re_len", set_re_len, u_int32_t);		\
STRING(name, value, "re_pad", set_re_pad);			\
FLAG(name, value, "recnum", DB_RECNUM);			\
FLAG(name, value, "renumber", DB_RENUMBER);			\
if (strcmp(name, "compressed") == 0)
int
configure(dbenv, dbp, clp, subdbp, keysp)
DB_ENV *dbenv;
DB *dbp;
char **clp, **subdbp;
int *keysp;
int
rheader(dbenv, dbp, dbtypep, subdbp, checkprintp, keysp, part_keyp)
DB_ENV *dbenv;
DB *dbp;
DBTYPE *dbtypep;
char **subdbp;
int *checkprintp, *keysp;
DBT **part_keyp;
void free_keys(part_keys)
DBT *part_keys;
#define	DIGITIZE(store, v1, v2)
int
convprintable(dbenv, instr, outstrp)
DB_ENV *dbenv;
char *instr, **outstrp;
int
dbt_rprint(dbenv, dbtp)
DB_ENV *dbenv;
DBT *dbtp;
int
dbt_rdump(dbenv, dbtp, blob_threshold, streaming)
DB_ENV *dbenv;
DBT *dbtp;
u_int32_t blob_threshold;
int *streaming;
int
dbt_rrecno(dbenv, dbtp, ishex)
DB_ENV *dbenv;
DBT *dbtp;
int ishex;
int
dbt_to_recno(dbenv, dbt, recnop)
DB_ENV *dbenv;
DBT *dbt;
db_recno_t *recnop;
void
badnum(dbenv)
DB_ENV *dbenv;
int
badend(dbenv)
DB_ENV *dbenv;
int
usage()
int
version_check()
