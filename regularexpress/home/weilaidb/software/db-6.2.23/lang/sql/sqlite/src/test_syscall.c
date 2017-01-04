#if SQLITE_OS_UNIX
extern const char *sqlite3ErrName(int);
static struct TestSyscallGlobal  gSyscall = ;
static int ts_open(const char *, int, int);
static int ts_close(int fd);
static int ts_access(const char *zPath, int mode);
static char *ts_getcwd(char *zPath, size_t nPath);
static int ts_stat(const char *zPath, struct stat *p);
static int ts_fstat(int fd, struct stat *p);
static int ts_ftruncate(int fd, off_t n);
static int ts_fcntl(int fd, int cmd, ... );
static int ts_read(int fd, void *aBuf, size_t nBuf);
static int ts_pread(int fd, void *aBuf, size_t nBuf, off_t off);
static int ts_pread64(int fd, void *aBuf, size_t nBuf, off_t off);
static int ts_write(int fd, const void *aBuf, size_t nBuf);
static int ts_pwrite(int fd, const void *aBuf, size_t nBuf, off_t off);
static int ts_pwrite64(int fd, const void *aBuf, size_t nBuf, off_t off);
static int ts_fchmod(int fd, mode_t mode);
static int ts_fallocate(int fd, off_t off, off_t len);
static void *ts_mmap(void *, size_t, int, int, int, off_t);
static void *ts_mremap(void*, size_t, size_t, int, ...);
struct TestSyscallArray  aSyscall[] = ;
#define orig_open      ((int(*)(const char *, int, int))aSyscall[0].xOrig)
#define orig_close     ((int(*)(int))aSyscall[1].xOrig)
#define orig_access    ((int(*)(const char*,int))aSyscall[2].xOrig)
#define orig_getcwd    ((char*(*)(char*,size_t))aSyscall[3].xOrig)
#define orig_stat      ((int(*)(const char*,struct stat*))aSyscall[4].xOrig)
#define orig_fstat     ((int(*)(int,struct stat*))aSyscall[5].xOrig)
#define orig_ftruncate ((int(*)(int,off_t))aSyscall[6].xOrig)
#define orig_fcntl     ((int(*)(int,int,...))aSyscall[7].xOrig)
#define orig_read      ((ssize_t(*)(int,void*,size_t))aSyscall[8].xOrig)
#define orig_pread     ((ssize_t(*)(int,void*,size_t,off_t))aSyscall[9].xOrig)
#define orig_pread64   ((ssize_t(*)(int,void*,size_t,off_t))aSyscall[10].xOrig)
#define orig_write     ((ssize_t(*)(int,const void*,size_t))aSyscall[11].xOrig)
#define orig_pwrite    ((ssize_t(*)(int,const void*,size_t,off_t))\
aSyscall[12].xOrig)
#define orig_pwrite64  ((ssize_t(*)(int,const void*,size_t,off_t))\
aSyscall[13].xOrig)
#define orig_fchmod    ((int(*)(int,mode_t))aSyscall[14].xOrig)
#define orig_fallocate ((int(*)(int,off_t,off_t))aSyscall[15].xOrig)
#define orig_mmap      ((void*(*)(void*,size_t,int,int,int,off_t))aSyscall[16].xOrig)
#define orig_mremap    ((void*(*)(void*,size_t,size_t,int,...))aSyscall[17].xOrig)
static int tsIsFail(void)
static int tsErrno(const char *zFunc)
static int tsIsFailErrno(const char *zFunc)
static int ts_open(const char *zFile, int flags, int mode)
static int ts_close(int fd)
static int ts_access(const char *zPath, int mode)
static char *ts_getcwd(char *zPath, size_t nPath)
static int ts_stat(const char *zPath, struct stat *p)
static int ts_fstat(int fd, struct stat *p)
static int ts_ftruncate(int fd, off_t n)
static int ts_fcntl(int fd, int cmd, ... )
static int ts_read(int fd, void *aBuf, size_t nBuf)
static int ts_pread(int fd, void *aBuf, size_t nBuf, off_t off)
static int ts_pread64(int fd, void *aBuf, size_t nBuf, off_t off)
static int ts_write(int fd, const void *aBuf, size_t nBuf)
static int ts_pwrite(int fd, const void *aBuf, size_t nBuf, off_t off)
static int ts_pwrite64(int fd, const void *aBuf, size_t nBuf, off_t off)
static int ts_fchmod(int fd, mode_t mode)
static int ts_fallocate(int fd, off_t off, off_t len)
static void *ts_mmap(
void *pAddr,
size_t nByte,
int prot,
int flags,
int fd,
off_t iOff
)
static void *ts_mremap(void *a, size_t b, size_t c, int d, ...)
static int test_syscall_install(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_syscall_uninstall(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_syscall_reset(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_syscall_exists(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_syscall_fault(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_syscall_errno(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_syscall_list(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_syscall_defaultvfs(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int ts_getpagesize(void)
static int test_syscall_pagesize(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_syscall(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
int SqlitetestSyscall_Init(Tcl_Interp *interp)
int SqlitetestSyscall_Init(Tcl_Interp *interp)
