#if !defined(PREFIX) || !defined(EXEC_PREFIX) || !defined(VERSION) || !defined(VPATH)
#error
#define LANDMARK
static char prefix[MAXPATHLEN+1];
static char exec_prefix[MAXPATHLEN+1];
static char progpath[MAXPATHLEN+1];
static char *module_search_path = NULL;
static char lib_python[] =  VERSION;
static void
reduce(char *dir)
static int
isfile(char *filename)
static int
ismodule(char *filename)
static int
isxfile(char *filename)
static int
isdir(char *filename)
static void
joinpath(char *buffer, char *stuff)
static void
copy_absolute(char *path, char *p)
static void
absolutize(char *path)
static int
search_for_prefix(char *argv0_path, char *home)
static int
search_for_exec_prefix(char *argv0_path, char *home)
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
