#define ERR_STR_LEN 256
#define MAC_OS_X_VERSION_10_3 1030
#if MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_3
#define DARWIN_HAS_DLOPEN
extern void * dlopen(const char *path, int mode) __attribute__((weak_import));
extern void * dlsym(void * handle, const char *symbol) __attribute__((weak_import));
extern const char * dlerror(void) __attribute__((weak_import));
extern int dlclose(void * handle) __attribute__((weak_import));
extern int dladdr(const void *, Dl_info *) __attribute__((weak_import));
#define dlopen darwin_dlopen
#define dlsym darwin_dlsym
#define dlerror darwin_dlerror
#define dlclose darwin_dlclose
#define dladdr darwin_dladdr
void * (*ctypes_dlopen)(const char *path, int mode);
void * (*ctypes_dlsym)(void * handle, const char *symbol);
const char * (*ctypes_dlerror)(void);
int (*ctypes_dlclose)(void * handle);
int (*ctypes_dladdr)(const void *, Dl_info *);
#if MAC_OS_X_VERSION_MIN_REQUIRED < MAC_OS_X_VERSION_10_3
static void *dlsymIntern(void *handle, const char *symbol);
static const char *error(int setget, const char *str, ...);
static const char *error(int setget, const char *str, ...)
static void *darwin_dlopen(const char *path, int mode)
static void *dlsymIntern(void *handle, const char *symbol)
static const char *darwin_dlerror(void)
static int darwin_dlclose(void *handle)
static void *darwin_dlsym(void *handle, const char *symbol)
static int darwin_dladdr(const void *handle, Dl_info *info)
#if __GNUC__ < 4
static void __attribute__ ((constructor)) ctypes_dlfcn_init(void);
static
void ctypes_dlfcn_init(void)
