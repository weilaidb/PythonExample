int
bdb_RandCommand(interp, objc, objv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
int
tcl_LockMutex(dbenv, mutex)
DB_ENV *dbenv;
db_mutex_t mutex;
int
tcl_UnlockMutex(dbenv, mutex)
DB_ENV *dbenv;
db_mutex_t mutex;
