static const char copyright[] =
"Copyright (c) 2011, 2016 Oracle and/or its affiliates.  All rights reserved.\n";
#define DIST_DIVISION			11
#define EXIT_DIST_OUTRANGE		(-31000)
#define EXIT_INSERT_ZERO_NEED		(-31001)
#define EXIT_INSERT_ZERO_ONPGDUP	(-31002)
#define INSERT_NORMAL			0x0001
#define INSERT_NOTHING			0x0002
#define INSERT_SLOT			0x0003
#define INSERT_BDUPLICATE		0x0004
#define NUM_PGSIZES			8
typedef struct __tuner_ff_stat TUNER_FF_STAT;
static int __tuner_analyze_btree __P((DB_ENV *, DB *, u_int32_t));
static int __tuner_ff_stat_callback __P((DBC *, PAGE *, void *, int *));
static int __tuner_generate_fillfactor_stats __P((DB_ENV *, DB *,
TUNER_FF_STAT *));
static int __tuner_insert_dupdata __P((DB *, u_int32_t, int, TUNER_FF_STAT *));
static int __tuner_insert_kvpair __P((DB *, u_int32_t, u_int32_t, int, int,
int, TUNER_FF_STAT *));
static int __tuner_leaf_page __P((DBC *, PAGE *, TUNER_FF_STAT *));
static int __tuner_leaf_dupdata __P((DBC*, PAGE *, int, int, u_int32_t,
TUNER_FF_STAT *));
static int __tuner_leaf_dupdata_entries __P((DBC *, PAGE *, int, int, int, int,
TUNER_FF_STAT *));
static int __tuner_opd_data_entries __P((DBC *, PAGE *, int, int,
TUNER_FF_STAT *));
static int __tuner_opd_data __P((DBC *, PAGE *, int, int, TUNER_FF_STAT *));
static int __tuner_opd_page __P((DBC *, PAGE *, TUNER_FF_STAT *));
static int __tuner_print_btree_fillfactor __P((u_int32_t, TUNER_FF_STAT *));
static int __tuner_record_dup_pg __P((int, TUNER_FF_STAT *));
static int __tuner_record_last_opd __P((int, TUNER_FF_STAT *));
static int __tuner_record_leaf_pg __P((int, TUNER_FF_STAT *));
static int __tuner_record_ovfl_pg __P((u_int32_t, int, TUNER_FF_STAT *));
static int get_opd_size __P((DBC*, PAGE*, u_int32_t*));
static int item_size __P((DB *, PAGE *, int));
static int item_space __P((DB *, PAGE *, int));
int main __P((int, char *[]));
static int open_db __P((DB **, DB_ENV *, char *, char *));
static int sum_opd_page_data_entries __P((DB *, PAGE *));
static int usage __P((void));
static int version_check __P((void));
const char *progname = "db_tuner";
int
main(argc, argv)
int argc;
char *argv[];
static int
__tuner_analyze_btree(dbenv, dbp, verbose)
DB_ENV *dbenv;
DB *dbp;
u_int32_t verbose;
static int
__tuner_generate_fillfactor_stats(dbenv, dbp, stats)
DB_ENV *dbenv;
DB *dbp;
TUNER_FF_STAT *stats;
static int
__tuner_ff_stat_callback(dbc, h, cookie, putp)
DBC *dbc;
PAGE *h;
void *cookie;
int *putp;
static int
__tuner_leaf_page(dbc, h, cookie)
DBC *dbc;
PAGE *h;
TUNER_FF_STAT *cookie;
static int
__tuner_leaf_dupdata(dbc, h, findx, lindx, dup_sz, cookie)
DBC *dbc;
PAGE *h;
int findx, lindx;
u_int32_t dup_sz;
TUNER_FF_STAT *cookie;
static int
__tuner_leaf_dupdata_entries(dbc, h, findx, lindx, indx_pgsz, is_opd, cookie)
DBC *dbc;
PAGE *h;
int findx, lindx, indx_pgsz, is_opd;
TUNER_FF_STAT *cookie;
static int
__tuner_opd_page(dbc, h, cookie)
DBC *dbc;
PAGE *h;
TUNER_FF_STAT *cookie;
static int
__tuner_opd_data(dbc, h, indx_pgsz, is_opd, cookie)
DBC *dbc;
PAGE *h;
int indx_pgsz, is_opd;
TUNER_FF_STAT *cookie;
static int
__tuner_opd_data_entries(dbc, h, indx_pgsz, is_opd, cookie)
DBC *dbc;
PAGE *h;
int indx_pgsz, is_opd;
TUNER_FF_STAT *cookie;
static int
__tuner_insert_kvpair(dbp, key_sz, data_sz, indx_pgsz, in_key, in_data, stats)
DB *dbp;
u_int32_t key_sz, data_sz;
int indx_pgsz, in_key, in_data;
TUNER_FF_STAT *stats;
static int
__tuner_insert_dupdata(dbp, data_sz, indx_pgsz, stats)
DB *dbp;
u_int32_t data_sz;
int indx_pgsz;
TUNER_FF_STAT *stats;
static int
__tuner_record_ovfl_pg(size, indx_pgsz, stats)
u_int32_t size;
int indx_pgsz;
TUNER_FF_STAT *stats;
static int
__tuner_record_leaf_pg(indx_pgsz, stats)
int indx_pgsz;
TUNER_FF_STAT *stats;
static int
__tuner_record_dup_pg(indx_pgsz, stats)
int indx_pgsz;
TUNER_FF_STAT *stats;
static int
__tuner_record_last_opd(indx_pgsz, stats)
int indx_pgsz;
TUNER_FF_STAT *stats;
static int
get_opd_size(dbc, h, opd_sz)
DBC *dbc;
PAGE *h;
u_int32_t *opd_sz;
static int
sum_opd_page_data_entries(dbp, h)
DB *dbp;
PAGE *h;
static int
item_space(dbp, h, indx)
DB *dbp;
PAGE *h;
int indx;
static int
item_size(dbp, h, indx)
DB *dbp;
PAGE *h;
int indx;
static int
__tuner_print_btree_fillfactor(verbose, stats)
u_int32_t verbose;
TUNER_FF_STAT *stats;
static int
open_db(dbpp, dbenv, dbname, subdb)
DB **dbpp;
DB_ENV *dbenv;
char *dbname;
char *subdb;
static int
usage()
static int
version_check()
