extern const char *PyWin_DLLVersionString;
FILE *PyWin_FindRegisteredModule(const char *moduleName,
struct filedescr **ppFileDesc,
char *pathBuf,
Py_ssize_t pathLen)
