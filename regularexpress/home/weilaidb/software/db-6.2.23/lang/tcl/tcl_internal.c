#define	GLOB_CHAR(c)	((c) == '*' || (c) == '?')
DBTCL_INFO *
_NewInfo(interp, anyp, name, type)
Tcl_Interp *interp;
void *anyp;
char *name;
enum INFOTYPE type;
void	*
_NameToPtr(name)
CONST char *name;
DBTCL_INFO *
_PtrToInfo(ptr)
CONST void *ptr;
DBTCL_INFO *
_NameToInfo(name)
CONST char *name;
void
_SetInfoData(p, data)
DBTCL_INFO *p;
void *data;
void
_DeleteInfo(p)
DBTCL_INFO *p;
int
_SetListElem(interp, list, elem1, e1cnt, elem2, e2cnt)
Tcl_Interp *interp;
Tcl_Obj *list;
void *elem1, *elem2;
u_int32_t e1cnt, e2cnt;
int
_SetListElemInt(interp, list, elem1, elem2)
Tcl_Interp *interp;
Tcl_Obj *list;
void *elem1;
long elem2;
int
_SetListElemWideInt(interp, list, elem1, elem2)
Tcl_Interp *interp;
Tcl_Obj *list;
void *elem1;
int64_t elem2;
int
_SetListRecnoElem(interp, list, elem1, elem2, e2size)
Tcl_Interp *interp;
Tcl_Obj *list;
db_recno_t elem1;
u_char *elem2;
u_int32_t e2size;
int
_SetListHeapElem(interp, list, elem1, elem2, e2size)
Tcl_Interp *interp;
Tcl_Obj *list;
DB_HEAP_RID elem1;
u_char *elem2;
u_int32_t e2size;
int
_Set3DBTList(interp, list, elem1, is1recno, elem2, is2recno, elem3)
Tcl_Interp *interp;
Tcl_Obj *list;
DBT *elem1, *elem2, *elem3;
int is1recno, is2recno;
int
_SetMultiList(interp, list, key, data, type, flag, dbc)
Tcl_Interp *interp;
Tcl_Obj *list;
DBT *key, *data;
DBTYPE type;
u_int32_t flag;
DBC *dbc;
int
_GetGlobPrefix(pattern, prefix)
char *pattern;
char **prefix;
int
_ReturnSetup(interp, ret, ok, errmsg)
Tcl_Interp *interp;
int ret, ok;
char *errmsg;
int
_ErrorSetup(interp, ret, errmsg)
Tcl_Interp *interp;
int ret;
char *errmsg;
void
_ErrorFunc(dbenv, pfx, msg)
const DB_ENV *dbenv;
CONST char *pfx;
const char *msg;
void
_EventFunc(dbenv, event, info)
DB_ENV *dbenv;
u_int32_t event;
void *info;
#define	INVALID_LSNMSG "Invalid LSN with %d parts. Should have 2.\n"
int
_GetLsn(interp, obj, lsn)
Tcl_Interp *interp;
Tcl_Obj *obj;
DB_LSN *lsn;
#define	INVALID_RIDMSG "Invalid RID with %d parts. Should have 2.\n"
int
_GetRid(interp, obj, rid)
Tcl_Interp *interp;
Tcl_Obj *obj;
DB_HEAP_RID *rid;
int
_GetUInt32(interp, obj, resp)
Tcl_Interp *interp;
Tcl_Obj *obj;
u_int32_t *resp;
Tcl_Obj *
_GetFlagsList(interp, flags, fnp)
Tcl_Interp *interp;
u_int32_t flags;
const FN *fnp;
int __debug_stop, __debug_on, __debug_print, __debug_test;
void
_debug_check()
int
_CopyObjBytes(interp, obj, newp, sizep, freep)
Tcl_Interp *interp;
Tcl_Obj *obj;
void *newp;
u_int32_t *sizep;
int *freep;
