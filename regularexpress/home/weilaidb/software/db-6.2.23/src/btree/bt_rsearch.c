int
__bam_rsearch(dbc, recnop, flags, stop, exactp)
DBC *dbc;
db_recno_t *recnop;
u_int32_t flags;
int stop, *exactp;
int
__bam_adjust(dbc, adjust)
DBC *dbc;
int32_t adjust;
int
__bam_nrecs(dbc, rep)
DBC *dbc;
db_recno_t *rep;
db_recno_t
__bam_total(dbp, h)
DB *dbp;
PAGE *h;
