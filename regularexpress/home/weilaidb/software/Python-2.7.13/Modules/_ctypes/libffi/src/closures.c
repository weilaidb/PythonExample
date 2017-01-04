#if defined __linux__ && !defined _GNU_SOURCE
#define _GNU_SOURCE 1
#if !FFI_MMAP_EXEC_WRIT && !FFI_EXEC_TRAMPOLINE_TABLE
# if __gnu_linux__ && !defined(__ANDROID__)
#  define FFI_MMAP_EXEC_WRIT 1
#  define HAVE_MNTENT 1
# endif
# if defined(X86_WIN32) || defined(X86_WIN64) || defined(__OS2__)
#  define FFI_MMAP_EXEC_WRIT 1
# endif
#if FFI_MMAP_EXEC_WRIT && !defined FFI_MMAP_EXEC_SELINUX
# ifdef __linux__
#  define FFI_MMAP_EXEC_SELINUX 1
# endif
#if FFI_CLOSURES
# if FFI_EXEC_TRAMPOLINE_TABLE
# elif FFI_MMAP_EXEC_WRIT
#define USE_LOCKS 1
#define USE_DL_PREFIX 1
#define USE_BUILTIN_FFS 1
#define HAVE_MORECORE 0
#define HAVE_MREMAP 0
#define NO_MALLINFO 1
#define DEFAULT_MMAP_THRESHOLD MAX_SIZE_T
#define DEFAULT_GRANULARITY ((size_t)malloc_getpagesize)
#if FFI_CLOSURE_TEST
#define DEFAULT_TRIM_THRESHOLD ((size_t)malloc_getpagesize)
#if !defined(X86_WIN32) && !defined(X86_WIN64)
#define LACKS_SYS_MMAN_H 1
#if FFI_MMAP_EXEC_SELINUX
static int selinux_enabled = -1;
static int
selinux_enabled_check (void)
#define is_selinux_enabled() (selinux_enabled >= 0 ? selinux_enabled \
: (selinux_enabled = selinux_enabled_check ()))
#define is_selinux_enabled() 0
static int emutramp_enabled = -1;
static int
emutramp_enabled_check (void)
#define is_emutramp_enabled() (emutramp_enabled >= 0 ? emutramp_enabled \
: (emutramp_enabled = emutramp_enabled_check ()))
#elif defined (__CYGWIN__) || defined(__INTERIX)
#define is_selinux_enabled() 0
#define is_emutramp_enabled() 0
static void *dlmalloc(size_t);
static void dlfree(void*);
static void *dlcalloc(size_t, size_t) MAYBE_UNUSED;
static void *dlrealloc(void *, size_t) MAYBE_UNUSED;
static void *dlmemalign(size_t, size_t) MAYBE_UNUSED;
static void *dlvalloc(size_t) MAYBE_UNUSED;
static int dlmallopt(int, int) MAYBE_UNUSED;
static size_t dlmalloc_footprint(void) MAYBE_UNUSED;
static size_t dlmalloc_max_footprint(void) MAYBE_UNUSED;
static void** dlindependent_calloc(size_t, size_t, void**) MAYBE_UNUSED;
static void** dlindependent_comalloc(size_t, size_t*, void**) MAYBE_UNUSED;
static void *dlpvalloc(size_t) MAYBE_UNUSED;
static int dlmalloc_trim(size_t) MAYBE_UNUSED;
static size_t dlmalloc_usable_size(void*) MAYBE_UNUSED;
static void dlmalloc_stats(void) MAYBE_UNUSED;
#if !(defined(X86_WIN32) || defined(X86_WIN64) || defined(__OS2__)) || defined (__CYGWIN__) || defined(__INTERIX)
static void *dlmmap(void *, size_t, int, int, int, off_t);
static int dlmunmap(void *, size_t);
#define mmap dlmmap
#define munmap dlmunmap
#undef mmap
#undef munmap
#if !(defined(X86_WIN32) || defined(X86_WIN64) || defined(__OS2__)) || defined (__CYGWIN__) || defined(__INTERIX)
static pthread_mutex_t open_temp_exec_file_mutex = PTHREAD_MUTEX_INITIALIZER;
static int execfd = -1;
static size_t execsize = 0;
static int
open_temp_exec_file_name (char *name)
static int
open_temp_exec_file_dir (const char *dir)
static int
open_temp_exec_file_env (const char *envvar)
static int
open_temp_exec_file_mnt (const char *mounts)
static struct
open_temp_exec_file_opts[] = ;
static int open_temp_exec_file_opts_idx = 0;
static int
open_temp_exec_file_opts_next (void)
static int
open_temp_exec_file (void)
static void *
dlmmap_locked (void *start, size_t length, int prot, int flags, off_t offset)
static void *
dlmmap (void *start, size_t length, int prot,
int flags, int fd, off_t offset)
static int
dlmunmap (void *start, size_t length)
#if FFI_CLOSURE_FREE_CODE
static msegmentptr
segment_holding_code (mstate m, char* addr)
void *
ffi_closure_alloc (size_t size, void **code)
void
ffi_closure_free (void *ptr)
#if FFI_CLOSURE_TEST
int main ()
# else
void *
ffi_closure_alloc (size_t size, void **code)
void
ffi_closure_free (void *ptr)
# endif
