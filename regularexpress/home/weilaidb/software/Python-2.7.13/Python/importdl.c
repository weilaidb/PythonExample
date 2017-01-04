extern dl_funcptr _PyImport_GetDynLoadFunc(const char *name,
const char *shortname,
const char *pathname, FILE *fp);
PyObject *
_PyImport_LoadDynamicModule(char *name, char *pathname, FILE *fp)
