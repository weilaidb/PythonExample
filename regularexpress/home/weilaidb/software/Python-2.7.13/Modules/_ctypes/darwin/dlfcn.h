#define _DLFCN_H_
typedef struct dl_info  Dl_info;
#if MAC_OS_X_VERSION_MIN_REQUIRED <= MAC_OS_X_VERSION_10_2
#warning CTYPES_DARWIN_DLFCN
#define CTYPES_DARWIN_DLFCN
extern void * (*ctypes_dlopen)(const char *path, int mode);
extern void * (*ctypes_dlsym)(void * handle, const char *symbol);
extern const char * (*ctypes_dlerror)(void);
extern int (*ctypes_dlclose)(void * handle);
extern int (*ctypes_dladdr)(const void *, Dl_info *);
extern void * dlopen(const char *path, int mode);
extern void * dlsym(void * handle, const char *symbol);
extern const char * dlerror(void);
extern int dlclose(void * handle);
extern int dladdr(const void *, Dl_info *);
#define RTLD_LAZY	0x1
#define RTLD_NOW	0x2
#define RTLD_LOCAL	0x4
#define RTLD_GLOBAL	0x8
#define RTLD_NOLOAD	0x10
#define RTLD_NODELETE	0x80
#define RTLD_NEXT       ((void *) -1)
#define RTLD_DEFAULT    ((void *) -2)
