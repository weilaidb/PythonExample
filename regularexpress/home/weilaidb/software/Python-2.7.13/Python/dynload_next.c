const struct filedescr _PyImport_DynLoadFiletab[] = ;
#define LINKOPTIONS NSLINKMODULE_OPTION_BINDNOW|NSLINKMODULE_OPTION_RETURN_ON_ERROR
#define LINKOPTIONS NSLINKMODULE_OPTION_BINDNOW| \
NSLINKMODULE_OPTION_RETURN_ON_ERROR|NSLINKMODULE_OPTION_PRIVATE
dl_funcptr _PyImport_GetDynLoadFunc(const char *fqname, const char *shortname,
const char *pathname, FILE *fp)
