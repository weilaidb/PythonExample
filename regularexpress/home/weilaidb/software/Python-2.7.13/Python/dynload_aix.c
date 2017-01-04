#define aix_load loadAndInit
#define aix_load load
extern char *Py_GetProgramName(void);
typedef struct Module  Module, *ModulePtr;
const struct filedescr _PyImport_DynLoadFiletab[] = ;
static int
aix_getoldmodules(void **modlistptr)
static void
aix_loaderror(const char *pathname)
dl_funcptr _PyImport_GetDynLoadFunc(const char *fqname, const char *shortname,
const char *pathname, FILE *fp)
