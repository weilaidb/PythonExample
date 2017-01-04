#if SQLITE_OS_WIN
#  include "os_win.h"
#define STRINGVALUE2(x) #x
#define STRINGVALUE(x) STRINGVALUE2(x)
static void set_options(Tcl_Interp *interp)
int Sqliteconfig_Init(Tcl_Interp *interp)
