#if defined(__NetBSD__)
#if (NetBSD < 199712)
#define dlerror() "error in dynamic linking"
#if defined(PYOS_OS2) && defined(PYCC_GCC)
#if (defined(__OpenBSD__) || defined(__NetBSD__)) && !defined(__ELF__)
#define LEAD_UNDERSCORE "_"
#define LEAD_UNDERSCORE ""
const struct filedescr _PyImport_DynLoadFiletab[] = ;
static struct  handles[128];
static int nhandles = 0;
dl_funcptr _PyImport_GetDynLoadFunc(const char *fqname, const char *shortname,
const char *pathname, FILE *fp)
