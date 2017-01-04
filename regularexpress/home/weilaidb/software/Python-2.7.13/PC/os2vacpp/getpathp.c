extern BOOL PyWin_IsWin32s(void);
#if HAVE_UNISTD_H
#define LANDMARK "lib\\os.py"
static char prefix[MAXPATHLEN+1];
static char exec_prefix[MAXPATHLEN+1];
static char progpath[MAXPATHLEN+1];
static char *module_search_path = NULL;
static int
is_sep(char ch)
static void
reduce(char *dir)
static int
exists(char *filename)
static void
join(char *buffer, char *stuff)
static int
search_for_prefix(char *argv0_path, char *landmark)
extern const char *PyWin_DLLVersionString;
static char *
getpythonregpath(HKEY keyBase, BOOL bWin32s)
static void
get_progpath(void)
static void
calculate_path(void)
char *
Py_GetPath(void)
char *
Py_GetPrefix(void)
char *
Py_GetExecPrefix(void)
char *
Py_GetProgramFullPath(void)
