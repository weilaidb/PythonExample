int
__db_ditem_nolog(dbc, pagep, indx, nbytes)
DBC *dbc;
PAGE *pagep;
u_int32_t indx, nbytes;
int
__db_ditem(dbc, pagep, indx, nbytes)
DBC *dbc;
PAGE *pagep;
u_int32_t indx, nbytes;
int
__db_pitem_nolog(dbc, pagep, indx, nbytes, hdr, data)
DBC *dbc;
PAGE *pagep;
u_int32_t indx;
u_int32_t nbytes;
DBT *hdr, *data;
int
__db_pitem(dbc, pagep, indx, nbytes, hdr, data)
DBC *dbc;
PAGE *pagep;
u_int32_t indx;
u_int32_t nbytes;
DBT *hdr, *data;
