extern const char *sqlite3ErrName(int);
static int test_pagesize = 1024;
static int fake_big_file(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static Tcl_Interp *faultSimInterp = 0;
static int faultSimScriptSize = 0;
static char *faultSimScript;
static int faultSimCallback(int x)
static int faultInstallCmd(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static int testBitvecBuiltinTest(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static int t2_tcl_function_stub(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
int Sqlitetest2_Init(Tcl_Interp *interp)
