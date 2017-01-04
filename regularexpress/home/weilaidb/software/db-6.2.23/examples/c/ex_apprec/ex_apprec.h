#define	_EX_APPREC_H_
int ex_apprec_mkdir_print
__P((DB_ENV *, DBT *, DB_LSN *, db_recops));
int ex_apprec_mkdir_recover
__P((DB_ENV *, DBT *, DB_LSN *, db_recops));
int ex_apprec_init_print __P((DB_ENV *, DB_DISTAB *));
