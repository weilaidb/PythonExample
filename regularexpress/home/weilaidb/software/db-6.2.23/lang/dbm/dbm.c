static DBM *__cur_db;
static void __db_no_open __P((void));
int
__db_dbm_init(file)
char *file;
int
__db_dbm_close()
datum
__db_dbm_fetch(key)
datum key;
datum
__db_dbm_firstkey()
datum
__db_dbm_nextkey(key)
datum key;
int
__db_dbm_delete(key)
datum key;
int
__db_dbm_store(key, dat)
datum key, dat;
static void
__db_no_open()
DBM *
__db_ndbm_open(file, oflags, mode)
const char *file;
int oflags, mode;
void
__db_ndbm_close(dbm)
DBM *dbm;
datum
__db_ndbm_fetch(dbm, key)
DBM *dbm;
datum key;
datum
__db_ndbm_firstkey(dbm)
DBM *dbm;
datum
__db_ndbm_nextkey(dbm)
DBM *dbm;
int
__db_ndbm_delete(dbm, key)
DBM *dbm;
datum key;
int
__db_ndbm_store(dbm, key, data, flags)
DBM *dbm;
datum key, data;
int flags;
int
__db_ndbm_error(dbm)
DBM *dbm;
int
__db_ndbm_clearerr(dbm)
DBM *dbm;
int
__db_ndbm_rdonly(dbm)
DBM *dbm;
int
__db_ndbm_dirfno(dbm)
DBM *dbm;
int
__db_ndbm_pagfno(dbm)
DBM *dbm;
