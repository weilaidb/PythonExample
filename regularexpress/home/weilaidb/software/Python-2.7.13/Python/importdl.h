#define Py_IMPORTDL_H
enum filetype ;
struct filedescr ;
extern struct filedescr * _PyImport_Filetab;
extern const struct filedescr _PyImport_DynLoadFiletab[];
extern PyObject *_PyImport_LoadDynamicModule(char *name, char *pathname,
FILE *);
#define MAXSUFFIXSIZE 12
typedef FARPROC dl_funcptr;
#if defined(PYOS_OS2) && !defined(PYCC_GCC)
typedef int (* APIENTRY dl_funcptr)();
typedef void (*dl_funcptr)(void);
