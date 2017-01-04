static int __bam_opd_cursor __P((DB *, DBC *, db_pgno_t, u_int32_t, u_int32_t));
static int __bam_ca_delete_func
__P((DBC *, DBC *, u_int32_t *, db_pgno_t, u_int32_t, void *));
static int __ram_ca_delete_func
__P((DBC *, DBC *, u_int32_t *, db_pgno_t, u_int32_t, void *));
static int __bam_ca_di_func
__P((DBC *, DBC *, u_int32_t *, db_pgno_t, u_int32_t, void *));
static int __bam_ca_dup_func
__P((DBC *, DBC *, u_int32_t *, db_pgno_t, u_int32_t, void *));
static int __bam_ca_undodup_func
__P((DBC *, DBC *, u_int32_t *, db_pgno_t, u_int32_t, void *));
static int __bam_ca_rsplit_func
__P((DBC *, DBC *, u_int32_t *, db_pgno_t, u_int32_t, void *));
static int __bam_ca_split_func
__P((DBC *, DBC *, u_int32_t *, db_pgno_t, u_int32_t, void *));
static int __bam_ca_undosplit_func
__P((DBC *, DBC *, u_int32_t *, db_pgno_t, u_int32_t, void *));
static int
__bam_ca_delete_func(dbc, my_dbc, countp, pgno, indx, args)
DBC *dbc, *my_dbc;
u_int32_t *countp;
db_pgno_t pgno;
u_int32_t indx;
void *args;
int
__bam_ca_delete(dbp, pgno, indx, del, countp)
DB *dbp;
db_pgno_t pgno;
u_int32_t indx;
int del;
u_int32_t *countp;
static int
__ram_ca_delete_func(dbc, my_dbc, countp, root_pgno, indx, args)
DBC *dbc, *my_dbc;
u_int32_t *countp;
db_pgno_t root_pgno;
u_int32_t indx;
void *args;
int
__ram_ca_delete(dbp, root_pgno, foundp)
DB *dbp;
db_pgno_t root_pgno;
u_int32_t *foundp;
struct __bam_ca_di_args ;
static int
__bam_ca_di_func(dbc, my_dbc, foundp, pgno, indx, vargs)
DBC *dbc, *my_dbc;
u_int32_t *foundp;
db_pgno_t pgno;
u_int32_t indx;
void *vargs;
int
__bam_ca_di(my_dbc, pgno, indx, adjust)
DBC *my_dbc;
db_pgno_t pgno;
u_int32_t indx;
int adjust;
static int
__bam_opd_cursor(dbp, dbc, first, tpgno, ti)
DB *dbp;
DBC *dbc;
db_pgno_t tpgno;
u_int32_t first, ti;
struct __bam_ca_dup_args ;
static int
__bam_ca_dup_func(dbc, my_dbc, foundp, fpgno, fi, vargs)
DBC *dbc;
DBC *my_dbc;
u_int32_t *foundp;
db_pgno_t fpgno;
u_int32_t fi;
void *vargs;
int
__bam_ca_dup(my_dbc, first, fpgno, fi, tpgno, ti)
DBC *my_dbc;
db_pgno_t fpgno, tpgno;
u_int32_t first, fi, ti;
static int
__bam_ca_undodup_func(dbc, my_dbc, countp, fpgno, fi, vargs)
DBC *dbc;
DBC *my_dbc;
u_int32_t *countp;
db_pgno_t fpgno;
u_int32_t fi;
void *vargs;
int
__bam_ca_undodup(dbp, first, fpgno, fi, ti)
DB *dbp;
db_pgno_t fpgno;
u_int32_t first, fi, ti;
static int
__bam_ca_rsplit_func(dbc, my_dbc, foundp, fpgno, indx, args)
DBC *dbc;
DBC *my_dbc;
u_int32_t *foundp;
db_pgno_t fpgno;
u_int32_t indx;
void *args;
int
__bam_ca_rsplit(my_dbc, fpgno, tpgno)
DBC* my_dbc;
db_pgno_t fpgno, tpgno;
struct __bam_ca_split_args ;
static int
__bam_ca_split_func(dbc, my_dbc, foundp, ppgno, split_indx, vargs)
DBC *dbc;
DBC *my_dbc;
u_int32_t *foundp;
db_pgno_t ppgno;
u_int32_t split_indx;
void *vargs;
int
__bam_ca_split(my_dbc, ppgno, lpgno, rpgno, split_indx, cleft)
DBC *my_dbc;
db_pgno_t ppgno, lpgno, rpgno;
u_int32_t split_indx;
int cleft;
static int
__bam_ca_undosplit_func(dbc, my_dbc, foundp, frompgno, split_indx, vargs)
DBC *dbc;
DBC *my_dbc;
u_int32_t *foundp;
db_pgno_t frompgno;
u_int32_t split_indx;
void *vargs;
int
__bam_ca_undosplit(dbp, frompgno, topgno, lpgno, split_indx)
DB *dbp;
db_pgno_t frompgno, topgno, lpgno;
u_int32_t split_indx;
