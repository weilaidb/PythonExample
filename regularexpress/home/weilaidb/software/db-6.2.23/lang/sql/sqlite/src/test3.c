static int t3_tcl_function_stub(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
extern const char *sqlite3ErrName(int);
static sqlite3 sDb;
static int nRefSqlite3 = 0;
static int btree_open(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static int btree_close(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static int btree_begin_transaction(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static int btree_pager_stats(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static int btree_cursor(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static int btree_close_cursor(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static int btree_next(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static int btree_first(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static int btree_payload_size(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static int btree_from_db(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
int Sqlitetest3_Init(Tcl_Interp *interp)
