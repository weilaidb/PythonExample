#error This file only compilable on OS/2
#define INCL_DOS
#if HAVE_UNISTD_H
#if defined(PYCC_GCC)
#define LANDMARK "lib/os.py"
#define LANDMARK "lib\\os.py"
static char prefix[MAXPATHLEN+1];
static char progpath[MAXPATHLEN+1];
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
