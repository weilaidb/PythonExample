#define version(a) Version_ ## a
#define version_string(a) version(a)
extern int version_string(LINUX_VERSION_CODE);
int version_string(LINUX_VERSION_CODE);
struct uts_namespace init_uts_ns = ;
EXPORT_SYMBOL_GPL(init_uts_ns);
const char linux_banner[] =
"Linux version " UTS_RELEASE " (" LINUX_COMPILE_BY "@"
LINUX_COMPILE_HOST ") (" LINUX_COMPILER ") " UTS_VERSION "\n";
const char linux_proc_banner[] =
"%s version %s"
" (" LINUX_COMPILE_BY "@" LINUX_COMPILE_HOST ")"
" (" LINUX_COMPILER ") %s\n";
