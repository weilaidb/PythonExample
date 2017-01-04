extern const char *sqlite3ErrName(int);
extern int getDbPointer(Tcl_Interp *interp, const char *zA, sqlite3 **ppDb);
extern void *sqlite3TestTextToPtr(const char *z);
static char *ptrToText(void *p)
static int blobHandleFromObj(
Tcl_Interp *interp,
Tcl_Obj *pObj,
sqlite3_blob **ppBlob
)
static char *blobStringFromObj(Tcl_Obj *pObj)
static int test_blob_open(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_blob_close(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_blob_bytes(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_blob_read(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_blob_write(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
int Sqlitetest_blob_Init(Tcl_Interp *interp)
