static int __bam_build
__P((DBC *, u_int32_t, DBT *, PAGE *, u_int32_t, u_int32_t));
static int __bam_dup_check __P((DBC *, u_int32_t,
PAGE *, u_int32_t, u_int32_t, db_indx_t *));
static int __bam_dup_convert __P((DBC *, PAGE *, u_int32_t, u_int32_t));
static int __bam_ovput
__P((DBC *, u_int32_t, db_pgno_t, PAGE *, u_int32_t, DBT *));
static int __bam_partsize
__P((DB *, u_int32_t, DBT *, PAGE *, u_int32_t, u_int32_t *));
int
__bam_iitem(dbc, key, data, op, flags)
DBC *dbc;
DBT *key, *data;
u_int32_t op, flags;
static int
__bam_partsize(dbp, op, data, h, indx, data_size)
DB *dbp;
u_int32_t op, indx;
DBT *data;
PAGE *h;
u_int32_t *data_size;
static int
__bam_build(dbc, op, dbt, h, indx, nbytes)
DBC *dbc;
u_int32_t op, indx, nbytes;
DBT *dbt;
PAGE *h;
int
__bam_ritem(dbc, h, indx, data, typeflag)
DBC *dbc;
PAGE *h;
u_int32_t indx;
DBT *data;
u_int32_t typeflag;
int
__bam_ritem_nolog(dbc, h, indx, hdr, data, type)
DBC *dbc;
PAGE *h;
u_int32_t indx;
DBT *hdr, *data;
u_int32_t type;
int
__bam_irep(dbc, h, indx, hdr, data)
DBC *dbc;
PAGE *h;
u_int32_t indx;
DBT *hdr;
DBT *data;
static int
__bam_dup_check(dbc, op, h, indx, sz, cntp)
DBC *dbc;
u_int32_t op;
PAGE *h;
u_int32_t indx, sz;
db_indx_t *cntp;
static int
__bam_dup_convert(dbc, h, indx, cnt)
DBC *dbc;
PAGE *h;
u_int32_t indx, cnt;
static int
__bam_ovput(dbc, type, pgno, h, indx, item)
DBC *dbc;
u_int32_t type, indx;
db_pgno_t pgno;
PAGE *h;
DBT *item;
