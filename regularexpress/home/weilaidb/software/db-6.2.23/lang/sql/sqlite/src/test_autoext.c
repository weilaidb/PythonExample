SQLITE_EXTENSION_INIT1
static void sqrFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static int sqr_init(
sqlite3 *db,
char **pzErrMsg,
const sqlite3_api_routines *pApi
)
static void cubeFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static int cube_init(
sqlite3 *db,
char **pzErrMsg,
const sqlite3_api_routines *pApi
)
static int broken_init(
sqlite3 *db,
char **pzErrMsg,
const sqlite3_api_routines *pApi
)
static int autoExtSqrObjCmd(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int cancelAutoExtSqrObjCmd(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int autoExtCubeObjCmd(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int cancelAutoExtCubeObjCmd(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int autoExtBrokenObjCmd(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int cancelAutoExtBrokenObjCmd(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int resetAutoExtObjCmd(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
int Sqlitetest_autoext_Init(Tcl_Interp *interp)
