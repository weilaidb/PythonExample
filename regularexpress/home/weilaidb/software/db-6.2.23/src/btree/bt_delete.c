int
__bam_ditem(dbc, h, indx)
DBC *dbc;
PAGE *h;
u_int32_t indx;
int
__bam_adjindx(dbc, h, indx, indx_copy, is_insert)
DBC *dbc;
PAGE *h;
u_int32_t indx, indx_copy;
int is_insert;
int
__bam_dpages(dbc, use_top, flags)
DBC *dbc;
int use_top;
int flags;
int
__bam_pupdate(dbc, lpg)
DBC *dbc;
PAGE *lpg;
