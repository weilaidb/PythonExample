#define LANDMARK "lib\\os.py"
static char prefix[MAXPATHLEN+1];
static char progpath[MAXPATHLEN+1];
static char dllpath[MAXPATHLEN+1];
static char *module_search_path = NULL;
static int
is_sep(char ch)
static void
reduce(char *dir)
static int
exists(char *filename)
static int
ismodule(char *filename)
static void
join(char *buffer, char *stuff)
static int
gotlandmark(char *landmark)
static int
search_for_prefix(char *argv0_path, char *landmark)
extern const char *PyWin_DLLVersionString;
static char *
getpythonregpath(HKEY keyBase, int skipcore)
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
