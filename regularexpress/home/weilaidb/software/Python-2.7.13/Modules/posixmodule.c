#  pragma weak lchown
#  pragma weak statvfs
#  pragma weak fstatvfs
#define PY_SSIZE_T_CLEAN
#if defined(__VMS)
#    include <unixio.h>
PyDoc_STRVAR(posix__doc__,
"This module provides access to operating system functionality that is\n\
standardized by the C Standard and the POSIX standard (a thinly\n\
disguised Unix interface).  Refer to the library manual and\n\
corresponding Unix manual entries for more information on calls.");
#define Py_UNICODE void
#if defined(PYOS_OS2)
#define  INCL_DOS
#define  INCL_DOSERRORS
#define  INCL_DOSPROCESS
#define  INCL_NOPMAPI
#if defined(PYCC_GCC)
#if defined(PYCC_VACPP) && defined(PYOS_OS2)
#if defined(__WATCOMC__) && !defined(__QNX__)
#define HAVE_GETCWD     1
#define HAVE_OPENDIR    1
#define HAVE_SYSTEM     1
#if defined(__OS2__)
#define HAVE_EXECV      1
#define HAVE_WAIT       1
#define HAVE_EXECV      1
#define HAVE_GETCWD     1
#define HAVE_OPENDIR    1
#define HAVE_PIPE       1
#define HAVE_POPEN      1
#define HAVE_SYSTEM     1
#define HAVE_WAIT       1
#define HAVE_GETCWD     1
#define HAVE_SPAWNV     1
#define HAVE_EXECV      1
#define HAVE_PIPE       1
#define HAVE_POPEN      1
#define HAVE_SYSTEM     1
#define HAVE_CWAIT      1
#define HAVE_FSYNC      1
#define fsync _commit
#if defined(PYOS_OS2) && defined(PYCC_GCC) || defined(__VMS)
#define HAVE_EXECV      1
#define HAVE_FORK       1
#if defined(__USLC__) && defined(__SCO_VERSION__)
#define HAVE_FORK1      1
#define HAVE_GETCWD     1
#define HAVE_GETEGID    1
#define HAVE_GETEUID    1
#define HAVE_GETGID     1
#define HAVE_GETPPID    1
#define HAVE_GETUID     1
#define HAVE_KILL       1
#define HAVE_OPENDIR    1
#define HAVE_PIPE       1
#define HAVE_POPEN      1
#define HAVE_SYSTEM     1
#define HAVE_WAIT       1
#define HAVE_TTYNAME    1
#if defined(__sgi)&&_COMPILER_VERSION>=700
extern char        *ctermid_r(char *);
#if defined(PYCC_VACPP)
extern int mkdir(char *);
#if ( defined(__WATCOMC__) || defined(_MSC_VER) ) && !defined(__QNX__)
extern int mkdir(const char *);
extern int mkdir(const char *, mode_t);
#if defined(__IBMC__) || defined(__IBMCPP__)
extern int chdir(char *);
extern int rmdir(char *);
extern int chdir(const char *);
extern int rmdir(const char *);
extern int chmod(const char *, int);
extern int chmod(const char *, mode_t);
extern int chown(const char *, uid_t, gid_t);
extern char *getcwd(char *, int);
extern char *strerror(int);
extern int link(const char *, const char *);
extern int rename(const char *, const char *);
extern int stat(const char *, struct stat *);
extern int unlink(const char *);
extern int pclose(FILE *);
extern int symlink(const char *, const char *);
extern int lstat(const char *, struct stat *);
#define HAVE_UTIME_H
#define NAMLEN(dirent) strlen((dirent)->d_name)
#if defined(__WATCOMC__) && !defined(__QNX__)
#define NAMLEN(dirent) strlen((dirent)->d_name)
#define dirent direct
#define NAMLEN(dirent) (dirent)->d_namlen
#define popen   _popen
#define pclose  _pclose
#if defined(PYCC_VACPP) && defined(PYOS_OS2)
#if defined(PATH_MAX) && PATH_MAX > 1024
#define MAXPATHLEN PATH_MAX
#define MAXPATHLEN 1024
#define WIFEXITED(u_wait) (!(u_wait).w_termsig && !(u_wait).w_coredump)
#define WEXITSTATUS(u_wait) (WIFEXITED(u_wait)?((u_wait).w_retcode):-1)
#define WTERMSIG(u_wait) ((u_wait).w_termsig)
#define WAIT_TYPE union wait
#define WAIT_STATUS_INT(s) (s.w_status)
#define WAIT_TYPE int
#define WAIT_STATUS_INT(s) (s)
#if !defined(SIZEOF_PID_T) || SIZEOF_PID_T == SIZEOF_INT
#define PARSE_PID "i"
#define PyLong_FromPid PyInt_FromLong
#define PyLong_AsPid PyInt_AsLong
#elif SIZEOF_PID_T == SIZEOF_LONG
#define PARSE_PID "l"
#define PyLong_FromPid PyInt_FromLong
#define PyLong_AsPid PyInt_AsLong
#elif defined(SIZEOF_LONG_LONG) && SIZEOF_PID_T == SIZEOF_LONG_LONG
#define PARSE_PID "L"
#define PyLong_FromPid PyLong_FromLongLong
#define PyLong_AsPid PyInt_AsLongLong
#error "sizeof(pid_t) is neither sizeof(int), sizeof(long) or sizeof(long long)"
#if defined(HAVE_CTERMID_R) && defined(WITH_THREAD)
#define USE_CTERMID_R
#if defined(HAVE_TMPNAM_R) && defined(WITH_THREAD)
#define USE_TMPNAM_R
#if defined(MAJOR_IN_MKDEV)
#if defined(MAJOR_IN_SYSMACROS)
#if defined(HAVE_MKNOD) && defined(HAVE_SYS_MKDEV_H)
PyObject *
_PyInt_FromUid(uid_t uid)
PyObject *
_PyInt_FromGid(gid_t gid)
int
_Py_Uid_Converter(PyObject *obj, void *p)
int
_Py_Gid_Converter(PyObject *obj, void *p)
#if defined(HAVE_MKNOD) && defined(HAVE_MAKEDEV)
static int
_Py_Dev_Converter(PyObject *obj, void *p)
static PyObject *
_PyInt_FromDev(PY_LONG_LONG v)
#  define _PyInt_FromDev PyInt_FromLong
#if defined _MSC_VER && _MSC_VER >= 1400
typedef struct  my_ioinfo;
extern __declspec(dllimport) char * __pioinfo[];
#define IOINFO_L2E 5
#define IOINFO_ARRAY_ELTS   (1 << IOINFO_L2E)
#define IOINFO_ARRAYS 64
#define _NHANDLE_           (IOINFO_ARRAYS * IOINFO_ARRAY_ELTS)
#define FOPEN 0x01
#define _NO_CONSOLE_FILENO (intptr_t)-2
int
_PyVerify_fd(int fd)
static int
_PyVerify_fd_dup2(int fd1, int fd2)
#define _PyVerify_fd_dup2(A, B) (1)
#if defined(WITH_NEXT_FRAMEWORK) || (defined(__APPLE__) && defined(Py_ENABLE_SHARED))
static char **environ;
#elif !defined(_MSC_VER) && ( !defined(__WATCOMC__) || defined(__QNX__) )
extern char **environ;
static PyObject *
convertenviron(void)
static PyObject *
posix_error(void)
static PyObject *
posix_error_with_filename(char* name)
static PyObject *
posix_error_with_unicode_filename(Py_UNICODE* name)
static PyObject *
posix_error_with_allocated_filename(char* name)
static PyObject *
win32_error(char* function, char* filename)
static PyObject *
win32_error_unicode(char* function, Py_UNICODE* filename)
static int
convert_to_unicode(PyObject **param)
#if defined(PYOS_OS2)
static void
os2_formatmsg(char *msgbuf, int msglen, char *reason)
static char *
os2_strerror(char *msgbuf, int msgbuflen, int errorcode, char *reason)
static PyObject *
os2_error(int code)
static PyObject *
posix_fildes(PyObject *fdobj, int (*func)(int))
static PyObject *
posix_1str(PyObject *args, char *format, int (*func)(const char*))
static PyObject *
posix_2str(PyObject *args,
char *format,
int (*func)(const char *, const char *))
static PyObject*
win32_1str(PyObject* args, char* func,
char* format, BOOL (__stdcall *funcA)(LPCSTR),
char* wformat, BOOL (__stdcall *funcW)(LPWSTR))
static BOOL __stdcall
win32_chdir(LPCSTR path)
static BOOL __stdcall
win32_wchdir(LPCWSTR path)
#undef STAT
#undef FSTAT
#undef STRUCT_STAT
#if defined(MS_WIN64) || defined(MS_WINDOWS)
#       define STAT win32_stat
#       define FSTAT win32_fstat
#       define STRUCT_STAT struct win32_stat
#       define STAT stat
#       define FSTAT fstat
#       define STRUCT_STAT struct stat
#define HAVE_STAT_NSEC 1
struct win32_stat;
static __int64 secs_between_epochs = 11644473600;
static void
FILE_TIME_to_time_t_nsec(FILETIME *in_ptr, time_t *time_out, int* nsec_out)
static void
time_t_to_FILE_TIME(time_t time_in, int nsec_in, FILETIME *out_ptr)
#if _S_IREAD != 0400
#error Unsupported C library
static int
attributes_to_mode(DWORD attr)
static int
attribute_data_to_stat(WIN32_FILE_ATTRIBUTE_DATA *info, struct win32_stat *result)
static BOOL
attributes_from_dir(LPCSTR pszFile, LPWIN32_FILE_ATTRIBUTE_DATA pfad)
static BOOL
attributes_from_dir_w(LPCWSTR pszFile, LPWIN32_FILE_ATTRIBUTE_DATA pfad)
static int
win32_stat(const char* path, struct win32_stat *result)
static int
win32_wstat(const wchar_t* path, struct win32_stat *result)
static int
win32_fstat(int file_number, struct win32_stat *result)
PyDoc_STRVAR(stat_result__doc__,
"stat_result: Result from stat or lstat.\n\n\
This object may be accessed either as a tuple of\n\
(mode, ino, dev, nlink, uid, gid, size, atime, mtime, ctime)\n\
or via the attributes st_mode, st_ino, st_dev, st_nlink, st_uid, and so on.\n\
\n\
Posix/windows: If your platform supports st_blksize, st_blocks, st_rdev,\n\
or st_flags, they are available as attributes only.\n\
\n\
See os.stat for more information.");
static PyStructSequence_Field stat_result_fields[] = ;
#define ST_BLKSIZE_IDX 13
#define ST_BLKSIZE_IDX 12
#define ST_BLOCKS_IDX (ST_BLKSIZE_IDX+1)
#define ST_BLOCKS_IDX ST_BLKSIZE_IDX
#define ST_RDEV_IDX (ST_BLOCKS_IDX+1)
#define ST_RDEV_IDX ST_BLOCKS_IDX
#define ST_FLAGS_IDX (ST_RDEV_IDX+1)
#define ST_FLAGS_IDX ST_RDEV_IDX
#define ST_GEN_IDX (ST_FLAGS_IDX+1)
#define ST_GEN_IDX ST_FLAGS_IDX
#define ST_BIRTHTIME_IDX (ST_GEN_IDX+1)
#define ST_BIRTHTIME_IDX ST_GEN_IDX
static PyStructSequence_Desc stat_result_desc = ;
PyDoc_STRVAR(statvfs_result__doc__,
"statvfs_result: Result from statvfs or fstatvfs.\n\n\
This object may be accessed either as a tuple of\n\
(bsize, frsize, blocks, bfree, bavail, files, ffree, favail, flag, namemax),\n\
or via the attributes f_bsize, f_frsize, f_blocks, f_bfree, and so on.\n\
\n\
See os.statvfs for more information.");
static PyStructSequence_Field statvfs_result_fields[] = ;
static PyStructSequence_Desc statvfs_result_desc = ;
static int initialized;
static PyTypeObject StatResultType;
static PyTypeObject StatVFSResultType;
static newfunc structseq_new;
static PyObject *
statresult_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static int _stat_float_times = 1;
PyDoc_STRVAR(stat_float_times__doc__,
"stat_float_times([newval]) -> oldval\n\n\
Determine whether os.[lf]stat represents time stamps as float objects.\n\
If newval is True, future calls to stat() return floats, if it is False,\n\
future calls return ints. \n\
If newval is omitted, return the current setting.\n");
static PyObject*
stat_float_times(PyObject* self, PyObject *args)
static void
fill_time(PyObject *v, int index, time_t sec, unsigned long nsec)
static PyObject*
_pystat_fromstructstat(STRUCT_STAT *st)
#define ISSLASHA(c) ((c) == '\\' || (c) == '/')
#define ISSLASHW(c) ((c) == L'\\' || (c) == L'/')
#define ARRAYSIZE(a) (sizeof(a) / sizeof(a[0]))
static BOOL
IsUNCRootA(char *path, int pathlen)
static BOOL
IsUNCRootW(Py_UNICODE *path, int pathlen)
static PyObject *
posix_do_stat(PyObject *self, PyObject *args,
char *format,
int (*statfunc)(const char *, STRUCT_STAT *, ...),
int (*statfunc)(const char *, STRUCT_STAT *),
char *wformat,
int (*wstatfunc)(const Py_UNICODE *, STRUCT_STAT *))
PyDoc_STRVAR(posix_access__doc__,
"access(path, mode) -> True if granted, False otherwise\n\n\
Use the real uid/gid to test for access to a path.  Note that most\n\
operations will use the effective uid/gid, therefore this routine can\n\
be used in a suid/sgid environment to test if the invoking user has the\n\
specified access to the path.  The mode argument can be F_OK to test\n\
existence, or the inclusive-OR of R_OK, W_OK, and X_OK.");
static PyObject *
posix_access(PyObject *self, PyObject *args)
#define F_OK 0
#define R_OK 4
#define W_OK 2
#define X_OK 1
PyDoc_STRVAR(posix_ttyname__doc__,
"ttyname(fd) -> string\n\n\
Return the name of the terminal device connected to 'fd'.");
static PyObject *
posix_ttyname(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_ctermid__doc__,
"ctermid() -> string\n\n\
Return the name of the controlling terminal for this process.");
static PyObject *
posix_ctermid(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(posix_chdir__doc__,
"chdir(path)\n\n\
Change the current working directory to the specified path.");
static PyObject *
posix_chdir(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_fchdir__doc__,
"fchdir(fildes)\n\n\
Change to the directory of the given file descriptor.  fildes must be\n\
opened on a directory, not a file.");
static PyObject *
posix_fchdir(PyObject *self, PyObject *fdobj)
PyDoc_STRVAR(posix_chmod__doc__,
"chmod(path, mode)\n\n\
Change the access permissions of a file.");
static PyObject *
posix_chmod(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_fchmod__doc__,
"fchmod(fd, mode)\n\n\
Change the access permissions of the file given by file\n\
descriptor fd.");
static PyObject *
posix_fchmod(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_lchmod__doc__,
"lchmod(path, mode)\n\n\
Change the access permissions of a file. If path is a symlink, this\n\
affects the link itself rather than the target.");
static PyObject *
posix_lchmod(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_chflags__doc__,
"chflags(path, flags)\n\n\
Set file flags.");
static PyObject *
posix_chflags(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_lchflags__doc__,
"lchflags(path, flags)\n\n\
Set file flags.\n\
This function will not follow symbolic links.");
static PyObject *
posix_lchflags(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_chroot__doc__,
"chroot(path)\n\n\
Change root directory to path.");
static PyObject *
posix_chroot(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_fsync__doc__,
"fsync(fildes)\n\n\
force write of file with filedescriptor to disk.");
static PyObject *
posix_fsync(PyObject *self, PyObject *fdobj)
extern int fdatasync(int);
PyDoc_STRVAR(posix_fdatasync__doc__,
"fdatasync(fildes)\n\n\
force write of file with filedescriptor to disk.\n\
does not force update of metadata.");
static PyObject *
posix_fdatasync(PyObject *self, PyObject *fdobj)
PyDoc_STRVAR(posix_chown__doc__,
"chown(path, uid, gid)\n\n\
Change the owner and group id of path to the numeric uid and gid.");
static PyObject *
posix_chown(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_fchown__doc__,
"fchown(fd, uid, gid)\n\n\
Change the owner and group id of the file given by file descriptor\n\
fd to the numeric uid and gid.");
static PyObject *
posix_fchown(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_lchown__doc__,
"lchown(path, uid, gid)\n\n\
Change the owner and group id of path to the numeric uid and gid.\n\
This function will not follow symbolic links.");
static PyObject *
posix_lchown(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_getcwd__doc__,
"getcwd() -> path\n\n\
Return a string representing the current working directory.");
#if (defined(__sun) && defined(__SVR4)) || \
defined(__OpenBSD__)               || \
defined(__NetBSD__)
static PyObject *
posix_getcwd(PyObject *self, PyObject *noargs)
static PyObject *
posix_getcwd(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(posix_getcwdu__doc__,
"getcwdu() -> path\n\n\
Return a unicode string representing the current working directory.");
static PyObject *
posix_getcwdu(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(posix_link__doc__,
"link(src, dst)\n\n\
Create a hard link to a file.");
static PyObject *
posix_link(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_listdir__doc__,
"listdir(path) -> list_of_strings\n\n\
Return a list containing the names of the entries in the directory.\n\
\n\
path: path of directory to list\n\
\n\
The list is in arbitrary order.  It does not include the special\n\
entries '.' and '..' even if they are present in the directory.");
static PyObject *
posix_listdir(PyObject *self, PyObject *args)
static PyObject *
posix__getfullpathname(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_mkdir__doc__,
"mkdir(path [, mode=0777])\n\n\
Create a directory.");
static PyObject *
posix_mkdir(PyObject *self, PyObject *args)
#if defined(HAVE_SYS_RESOURCE_H)
PyDoc_STRVAR(posix_nice__doc__,
"nice(inc) -> new_priority\n\n\
Decrease the priority of process by inc and return the new priority.");
static PyObject *
posix_nice(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_rename__doc__,
"rename(old, new)\n\n\
Rename a file or directory.");
static PyObject *
posix_rename(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_rmdir__doc__,
"rmdir(path)\n\n\
Remove a directory.");
static PyObject *
posix_rmdir(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_stat__doc__,
"stat(path) -> stat result\n\n\
Perform a stat system call on the given path.");
static PyObject *
posix_stat(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_system__doc__,
"system(command) -> exit_status\n\n\
Execute the command (a string) in a subshell.");
static PyObject *
posix_system(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_umask__doc__,
"umask(new_mask) -> old_mask\n\n\
Set the current numeric umask and return the previous umask.");
static PyObject *
posix_umask(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_unlink__doc__,
"unlink(path)\n\n\
Remove a file (same as remove(path)).");
PyDoc_STRVAR(posix_remove__doc__,
"remove(path)\n\n\
Remove a file (same as unlink(path)).");
static PyObject *
posix_unlink(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_uname__doc__,
"uname() -> (sysname, nodename, release, version, machine)\n\n\
Return a tuple identifying the current operating system.");
static PyObject *
posix_uname(PyObject *self, PyObject *noargs)
static int
extract_time(PyObject *t, time_t* sec, long* usec)
PyDoc_STRVAR(posix_utime__doc__,
"utime(path, (atime, mtime))\n\
utime(path, None)\n\n\
Set the access and modified time of the file to the given values.  If the\n\
second form is used, set the access and modified times to the current time.");
static PyObject *
posix_utime(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix__exit__doc__,
"_exit(status)\n\n\
Exit to the system with specified status, without normal exit processing.");
static PyObject *
posix__exit(PyObject *self, PyObject *args)
#if defined(HAVE_EXECV) || defined(HAVE_SPAWNV)
static void
free_string_array(char **array, Py_ssize_t count)
PyDoc_STRVAR(posix_execv__doc__,
"execv(path, args)\n\n\
Execute an executable path with arguments, replacing current process.\n\
\n\
path: path of executable file\n\
args: tuple or list of strings");
static PyObject *
posix_execv(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_execve__doc__,
"execve(path, args, env)\n\n\
Execute a path with arguments and environment, replacing current process.\n\
\n\
path: path of executable file\n\
args: tuple or list of arguments\n\
env: dictionary of strings mapping to strings");
static PyObject *
posix_execve(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_spawnv__doc__,
"spawnv(mode, path, args)\n\n\
Execute the program 'path' in a new process.\n\
\n\
mode: mode of process creation\n\
path: path of executable file\n\
args: tuple or list of strings");
static PyObject *
posix_spawnv(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_spawnve__doc__,
"spawnve(mode, path, args, env)\n\n\
Execute the program 'path' in a new process.\n\
\n\
mode: mode of process creation\n\
path: path of executable file\n\
args: tuple or list of arguments\n\
env: dictionary of strings mapping to strings");
static PyObject *
posix_spawnve(PyObject *self, PyObject *args)
#if defined(PYOS_OS2)
PyDoc_STRVAR(posix_spawnvp__doc__,
"spawnvp(mode, file, args)\n\n\
Execute the program 'file' in a new process, using the environment\n\
search path to find the file.\n\
\n\
mode: mode of process creation\n\
file: executable file name\n\
args: tuple or list of strings");
static PyObject *
posix_spawnvp(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_spawnvpe__doc__,
"spawnvpe(mode, file, args, env)\n\n\
Execute the program 'file' in a new process, using the environment\n\
search path to find the file.\n\
\n\
mode: mode of process creation\n\
file: executable file name\n\
args: tuple or list of arguments\n\
env: dictionary of strings mapping to strings");
static PyObject *
posix_spawnvpe(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_fork1__doc__,
"fork1() -> pid\n\n\
Fork a child process with a single multiplexed (i.e., not bound) thread.\n\
\n\
Return 0 to child process and PID of child to parent process.");
static PyObject *
posix_fork1(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(posix_fork__doc__,
"fork() -> pid\n\n\
Fork a child process.\n\
Return 0 to child process and PID of child to parent process.");
static PyObject *
posix_fork(PyObject *self, PyObject *noargs)
#if defined(HAVE_DEV_PTC) && !defined(HAVE_DEV_PTMX)
#define DEV_PTY_FILE "/dev/ptc"
#define HAVE_DEV_PTMX
#define DEV_PTY_FILE "/dev/ptmx"
#if defined(HAVE_OPENPTY) || defined(HAVE_FORKPTY) || defined(HAVE_DEV_PTMX)
#if defined(HAVE_OPENPTY) || defined(HAVE__GETPTY) || defined(HAVE_DEV_PTMX)
PyDoc_STRVAR(posix_openpty__doc__,
"openpty() -> (master_fd, slave_fd)\n\n\
Open a pseudo-terminal, returning open fd's for both master and slave end.\n");
static PyObject *
posix_openpty(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(posix_forkpty__doc__,
"forkpty() -> (pid, master_fd)\n\n\
Fork a new process with a new pseudo-terminal as controlling tty.\n\n\
Like fork(), return 0 as pid to child process, and PID of child to parent.\n\
To both, return fd of newly opened pseudo-terminal.\n");
static PyObject *
posix_forkpty(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(posix_getegid__doc__,
"getegid() -> egid\n\n\
Return the current process's effective group id.");
static PyObject *
posix_getegid(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(posix_geteuid__doc__,
"geteuid() -> euid\n\n\
Return the current process's effective user id.");
static PyObject *
posix_geteuid(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(posix_getgid__doc__,
"getgid() -> gid\n\n\
Return the current process's group id.");
static PyObject *
posix_getgid(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(posix_getpid__doc__,
"getpid() -> pid\n\n\
Return the current process id");
static PyObject *
posix_getpid(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(posix_getgroups__doc__,
"getgroups() -> list of group IDs\n\n\
Return list of supplemental group IDs for the process.");
static PyObject *
posix_getgroups(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(posix_initgroups__doc__,
"initgroups(username, gid) -> None\n\n\
Call the system initgroups() to initialize the group access list with all of\n\
the groups of which the specified username is a member, plus the specified\n\
group id.");
static PyObject *
posix_initgroups(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_getpgid__doc__,
"getpgid(pid) -> pgid\n\n\
Call the system call getpgid().");
static PyObject *
posix_getpgid(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_getpgrp__doc__,
"getpgrp() -> pgrp\n\n\
Return the current process group id.");
static PyObject *
posix_getpgrp(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(posix_setpgrp__doc__,
"setpgrp()\n\n\
Make this process the process group leader.");
static PyObject *
posix_setpgrp(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(posix_getppid__doc__,
"getppid() -> ppid\n\n\
Return the parent's process id.");
static PyObject *
posix_getppid(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(posix_getlogin__doc__,
"getlogin() -> string\n\n\
Return the actual login name.");
static PyObject *
posix_getlogin(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(posix_getuid__doc__,
"getuid() -> uid\n\n\
Return the current process's user id.");
static PyObject *
posix_getuid(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(posix_kill__doc__,
"kill(pid, sig)\n\n\
Kill a process with a signal.");
static PyObject *
posix_kill(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_killpg__doc__,
"killpg(pgid, sig)\n\n\
Kill a process group with a signal.");
static PyObject *
posix_killpg(PyObject *self, PyObject *args)
PyDoc_STRVAR(win32_kill__doc__,
"kill(pid, sig)\n\n\
Kill a process with a signal.");
static PyObject *
win32_kill(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix__isdir__doc__,
"Return true if the pathname refers to an existing directory.");
static PyObject *
posix__isdir(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_plock__doc__,
"plock(op)\n\n\
Lock program segments into memory.");
static PyObject *
posix_plock(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_popen__doc__,
"popen(command [, mode='r' [, bufsize]]) -> pipe\n\n\
Open a pipe to/from a command returning a file object.");
#if defined(PYOS_OS2)
#if defined(PYCC_VACPP)
static int
async_system(const char *command)
static FILE *
popen(const char *command, const char *mode, int pipesize, int *err)
static PyObject *
posix_popen(PyObject *self, PyObject *args)
#elif defined(PYCC_GCC)
static PyObject *
posix_popen(PyObject *self, PyObject *args)
#define POPEN_1 1
#define POPEN_2 2
#define POPEN_3 3
#define POPEN_4 4
static PyObject *_PyPopen(char *, int, int, int);
static int _PyPclose(FILE *file);
static PyObject *_PyPopenProcs = NULL;
static PyObject *
os2emx_popen2(PyObject *self, PyObject  *args)
static PyObject *
os2emx_popen3(PyObject *self, PyObject *args)
static PyObject *
os2emx_popen4(PyObject *self, PyObject  *args)
struct file_ref
;
struct pipe_ref
;
static PyObject *
_PyPopen(char *cmdstring, int mode, int n, int bufsize)
static int _PyPclose(FILE *file)
#elif defined(MS_WINDOWS)
#define POPEN_1 1
#define POPEN_2 2
#define POPEN_3 3
#define POPEN_4 4
static PyObject *_PyPopen(char *, int, int);
static int _PyPclose(FILE *file);
static PyObject *_PyPopenProcs = NULL;
static PyObject *
posix_popen(PyObject *self, PyObject *args)
static PyObject *
win32_popen2(PyObject *self, PyObject  *args)
static PyObject *
win32_popen3(PyObject *self, PyObject *args)
static PyObject *
win32_popen4(PyObject *self, PyObject  *args)
static BOOL
_PyPopenCreateProcess(char *cmdstring,
HANDLE hStdin,
HANDLE hStdout,
HANDLE hStderr,
HANDLE *hProcess)
static PyObject *
_PyPopen(char *cmdstring, int mode, int n)
static int _PyPclose(FILE *file)
static PyObject *
posix_popen(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_setuid__doc__,
"setuid(uid)\n\n\
Set the current process's user id.");
static PyObject *
posix_setuid(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_seteuid__doc__,
"seteuid(uid)\n\n\
Set the current process's effective user id.");
static PyObject *
posix_seteuid (PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_setegid__doc__,
"setegid(gid)\n\n\
Set the current process's effective group id.");
static PyObject *
posix_setegid (PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_setreuid__doc__,
"setreuid(ruid, euid)\n\n\
Set the current process's real and effective user ids.");
static PyObject *
posix_setreuid (PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_setregid__doc__,
"setregid(rgid, egid)\n\n\
Set the current process's real and effective group ids.");
static PyObject *
posix_setregid (PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_setgid__doc__,
"setgid(gid)\n\n\
Set the current process's group id.");
static PyObject *
posix_setgid(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_setgroups__doc__,
"setgroups(list)\n\n\
Set the groups of the current process to list.");
static PyObject *
posix_setgroups(PyObject *self, PyObject *groups)
#if defined(HAVE_WAIT3) || defined(HAVE_WAIT4)
static PyObject *
wait_helper(pid_t pid, int status, struct rusage *ru)
PyDoc_STRVAR(posix_wait3__doc__,
"wait3(options) -> (pid, status, rusage)\n\n\
Wait for completion of a child process.");
static PyObject *
posix_wait3(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_wait4__doc__,
"wait4(pid, options) -> (pid, status, rusage)\n\n\
Wait for completion of a given child process.");
static PyObject *
posix_wait4(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_waitpid__doc__,
"waitpid(pid, options) -> (pid, status)\n\n\
Wait for completion of a given child process.");
static PyObject *
posix_waitpid(PyObject *self, PyObject *args)
#elif defined(HAVE_CWAIT)
PyDoc_STRVAR(posix_waitpid__doc__,
"waitpid(pid, options) -> (pid, status << 8)\n\n"
"Wait for completion of a given process.  options is ignored on Windows.");
static PyObject *
posix_waitpid(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_wait__doc__,
"wait() -> (pid, status)\n\n\
Wait for completion of a child process.");
static PyObject *
posix_wait(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(posix_lstat__doc__,
"lstat(path) -> stat result\n\n\
Like stat(path), but do not follow symbolic links.");
static PyObject *
posix_lstat(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_readlink__doc__,
"readlink(path) -> path\n\n\
Return a string representing the path to which the symbolic link points.");
static PyObject *
posix_readlink(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_symlink__doc__,
"symlink(src, dst)\n\n\
Create a symbolic link pointing to src named dst.");
static PyObject *
posix_symlink(PyObject *self, PyObject *args)
#if defined(PYCC_VACPP) && defined(PYOS_OS2)
static long
system_uptime(void)
static PyObject *
posix_times(PyObject *self, PyObject *noargs)
#define NEED_TICKS_PER_SECOND
static long ticks_per_second = -1;
static PyObject *
posix_times(PyObject *self, PyObject *noargs)
#define HAVE_TIMES
static PyObject *
posix_times(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(posix_times__doc__,
"times() -> (utime, stime, cutime, cstime, elapsed_time)\n\n\
Return a tuple of floating point numbers indicating process times.");
PyDoc_STRVAR(posix_getsid__doc__,
"getsid(pid) -> sid\n\n\
Call the system call getsid().");
static PyObject *
posix_getsid(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_setsid__doc__,
"setsid()\n\n\
Call the system call setsid().");
static PyObject *
posix_setsid(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(posix_setpgid__doc__,
"setpgid(pid, pgrp)\n\n\
Call the system call setpgid().");
static PyObject *
posix_setpgid(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_tcgetpgrp__doc__,
"tcgetpgrp(fd) -> pgid\n\n\
Return the process group associated with the terminal given by a fd.");
static PyObject *
posix_tcgetpgrp(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_tcsetpgrp__doc__,
"tcsetpgrp(fd, pgid)\n\n\
Set the process group associated with the terminal given by a fd.");
static PyObject *
posix_tcsetpgrp(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_open__doc__,
"open(filename, flag [, mode=0777]) -> fd\n\n\
Open a file (for low level IO).");
static PyObject *
posix_open(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_close__doc__,
"close(fd)\n\n\
Close a file descriptor (for low level IO).");
static PyObject *
posix_close_(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_closerange__doc__,
"closerange(fd_low, fd_high)\n\n\
Closes all file descriptors in [fd_low, fd_high), ignoring errors.");
static PyObject *
posix_closerange(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_dup__doc__,
"dup(fd) -> fd2\n\n\
Return a duplicate of a file descriptor.");
static PyObject *
posix_dup(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_dup2__doc__,
"dup2(old_fd, new_fd)\n\n\
Duplicate file descriptor.");
static PyObject *
posix_dup2(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_lseek__doc__,
"lseek(fd, pos, how) -> newpos\n\n\
Set the current position of a file descriptor.\n\
Return the new cursor position in bytes, starting from the beginning.");
static PyObject *
posix_lseek(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_read__doc__,
"read(fd, buffersize) -> string\n\n\
Read a file descriptor.");
static PyObject *
posix_read(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_write__doc__,
"write(fd, string) -> byteswritten\n\n\
Write a string to a file descriptor.");
static PyObject *
posix_write(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_fstat__doc__,
"fstat(fd) -> stat result\n\n\
Like stat(), but for an open file descriptor.");
static PyObject *
posix_fstat(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_fdopen__doc__,
"fdopen(fd [, mode='r' [, bufsize]]) -> file_object\n\n\
Return an open file object connected to a file descriptor.");
static PyObject *
posix_fdopen(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_isatty__doc__,
"isatty(fd) -> bool\n\n\
Return True if the file descriptor 'fd' is an open file descriptor\n\
connected to the slave end of a terminal.");
static PyObject *
posix_isatty(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_pipe__doc__,
"pipe() -> (read_end, write_end)\n\n\
Create a pipe.");
static PyObject *
posix_pipe(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(posix_mkfifo__doc__,
"mkfifo(filename [, mode=0666])\n\n\
Create a FIFO (a POSIX named pipe).");
static PyObject *
posix_mkfifo(PyObject *self, PyObject *args)
#if defined(HAVE_MKNOD) && defined(HAVE_MAKEDEV)
PyDoc_STRVAR(posix_mknod__doc__,
"mknod(filename [, mode=0600, device])\n\n\
Create a filesystem node (file, device special file or named pipe)\n\
named filename. mode specifies both the permissions to use and the\n\
type of node to be created, being combined (bitwise OR) with one of\n\
S_IFREG, S_IFCHR, S_IFBLK, and S_IFIFO. For S_IFCHR and S_IFBLK,\n\
device defines the newly created device special file (probably using\n\
os.makedev()), otherwise it is ignored.");
static PyObject *
posix_mknod(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_major__doc__,
"major(device) -> major number\n\
Extracts a device major number from a raw device number.");
static PyObject *
posix_major(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_minor__doc__,
"minor(device) -> minor number\n\
Extracts a device minor number from a raw device number.");
static PyObject *
posix_minor(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_makedev__doc__,
"makedev(major, minor) -> device number\n\
Composes a raw device number from the major and minor device numbers.");
static PyObject *
posix_makedev(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_ftruncate__doc__,
"ftruncate(fd, length)\n\n\
Truncate a file to a specified length.");
static PyObject *
posix_ftruncate(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_putenv__doc__,
"putenv(key, value)\n\n\
Change or add an environment variable.");
static PyObject *posix_putenv_garbage;
static PyObject *
posix_putenv(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_unsetenv__doc__,
"unsetenv(key)\n\n\
Delete an environment variable.");
static PyObject *
posix_unsetenv(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_strerror__doc__,
"strerror(code) -> string\n\n\
Translate an error code to a message string.");
static PyObject *
posix_strerror(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_WCOREDUMP__doc__,
"WCOREDUMP(status) -> bool\n\n\
Return True if the process returning 'status' was dumped to a core file.");
static PyObject *
posix_WCOREDUMP(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_WIFCONTINUED__doc__,
"WIFCONTINUED(status) -> bool\n\n\
Return True if the process returning 'status' was continued from a\n\
job control stop.");
static PyObject *
posix_WIFCONTINUED(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_WIFSTOPPED__doc__,
"WIFSTOPPED(status) -> bool\n\n\
Return True if the process returning 'status' was stopped.");
static PyObject *
posix_WIFSTOPPED(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_WIFSIGNALED__doc__,
"WIFSIGNALED(status) -> bool\n\n\
Return True if the process returning 'status' was terminated by a signal.");
static PyObject *
posix_WIFSIGNALED(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_WIFEXITED__doc__,
"WIFEXITED(status) -> bool\n\n\
Return true if the process returning 'status' exited using the exit()\n\
system call.");
static PyObject *
posix_WIFEXITED(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_WEXITSTATUS__doc__,
"WEXITSTATUS(status) -> integer\n\n\
Return the process return code from 'status'.");
static PyObject *
posix_WEXITSTATUS(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_WTERMSIG__doc__,
"WTERMSIG(status) -> integer\n\n\
Return the signal that terminated the process that provided the 'status'\n\
value.");
static PyObject *
posix_WTERMSIG(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_WSTOPSIG__doc__,
"WSTOPSIG(status) -> integer\n\n\
Return the signal that stopped the process that provided\n\
the 'status' value.");
static PyObject *
posix_WSTOPSIG(PyObject *self, PyObject *args)
#if defined(HAVE_FSTATVFS) && defined(HAVE_SYS_STATVFS_H)
#define _SVID3
static PyObject*
_pystatvfs_fromstructstatvfs(struct statvfs st)
PyDoc_STRVAR(posix_fstatvfs__doc__,
"fstatvfs(fd) -> statvfs result\n\n\
Perform an fstatvfs system call on the given fd.");
static PyObject *
posix_fstatvfs(PyObject *self, PyObject *args)
#if defined(HAVE_STATVFS) && defined(HAVE_SYS_STATVFS_H)
PyDoc_STRVAR(posix_statvfs__doc__,
"statvfs(path) -> statvfs result\n\n\
Perform a statvfs system call on the given path.");
static PyObject *
posix_statvfs(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_tempnam__doc__,
"tempnam([dir[, prefix]]) -> string\n\n\
Return a unique name for a temporary file.\n\
The directory and a prefix may be specified as strings; they may be omitted\n\
or None if not needed.");
static PyObject *
posix_tempnam(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_tmpfile__doc__,
"tmpfile() -> file object\n\n\
Create a temporary file with no directory entries.");
static PyObject *
posix_tmpfile(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(posix_tmpnam__doc__,
"tmpnam() -> string\n\n\
Return a unique name for a temporary file.");
static PyObject *
posix_tmpnam(PyObject *self, PyObject *noargs)
struct constdef ;
static int
conv_confname(PyObject *arg, int *valuep, struct constdef *table,
size_t tablesize)
#if defined(HAVE_FPATHCONF) || defined(HAVE_PATHCONF)
static struct constdef  posix_constants_pathconf[] = ;
static int
conv_path_confname(PyObject *arg, int *valuep)
PyDoc_STRVAR(posix_fpathconf__doc__,
"fpathconf(fd, name) -> integer\n\n\
Return the configuration limit name for the file descriptor fd.\n\
If there is no limit, return -1.");
static PyObject *
posix_fpathconf(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_pathconf__doc__,
"pathconf(path, name) -> integer\n\n\
Return the configuration limit name for the file or directory path.\n\
If there is no limit, return -1.");
static PyObject *
posix_pathconf(PyObject *self, PyObject *args)
static struct constdef posix_constants_confstr[] = ;
static int
conv_confstr_confname(PyObject *arg, int *valuep)
PyDoc_STRVAR(posix_confstr__doc__,
"confstr(name) -> string\n\n\
Return a string-valued system configuration variable.");
static PyObject *
posix_confstr(PyObject *self, PyObject *args)
static struct constdef posix_constants_sysconf[] = ;
static int
conv_sysconf_confname(PyObject *arg, int *valuep)
PyDoc_STRVAR(posix_sysconf__doc__,
"sysconf(name) -> integer\n\n\
Return an integer-valued system configuration variable.");
static PyObject *
posix_sysconf(PyObject *self, PyObject *args)
static int
cmp_constdefs(const void *v1,  const void *v2)
static int
setup_confname_table(struct constdef *table, size_t tablesize,
char *tablename, PyObject *module)
static int
setup_confname_tables(PyObject *module)
PyDoc_STRVAR(posix_abort__doc__,
"abort() -> does not return!\n\n\
Abort the interpreter immediately.  This 'dumps core' or otherwise fails\n\
in the hardest way possible on the hosting operating system.");
static PyObject *
posix_abort(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(win32_startfile__doc__,
"startfile(filepath [, operation]) - Start a file with its associated\n\
application.\n\
\n\
When \"operation\" is not specified or \"open\", this acts like\n\
double-clicking the file in Explorer, or giving the file name as an\n\
argument to the DOS \"start\" command: the file is opened with whatever\n\
application (if any) its extension is associated.\n\
When another \"operation\" is given, it specifies what should be done with\n\
the file.  A typical operation is \"print\".\n\
\n\
startfile returns as soon as the associated application is launched.\n\
There is no option to wait for the application to close, and no way\n\
to retrieve the application's exit status.\n\
\n\
The filepath is relative to the current directory.  If you want to use\n\
an absolute path, make sure the first character is not a slash (\"/\");\n\
the underlying Win32 ShellExecute function doesn't work if it is.");
static PyObject *
win32_startfile(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_getloadavg__doc__,
"getloadavg() -> (float, float, float)\n\n\
Return the number of processes in the system run queue averaged over\n\
the last 1, 5, and 15 minutes or raises OSError if the load average\n\
was unobtainable");
static PyObject *
posix_getloadavg(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(posix_urandom__doc__,
"urandom(n) -> str\n\n\
Return n random bytes suitable for cryptographic use.");
static PyObject *
posix_urandom(PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_setresuid__doc__,
"setresuid(ruid, euid, suid)\n\n\
Set the current process's real, effective, and saved user ids.");
static PyObject*
posix_setresuid (PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_setresgid__doc__,
"setresgid(rgid, egid, sgid)\n\n\
Set the current process's real, effective, and saved group ids.");
static PyObject*
posix_setresgid (PyObject *self, PyObject *args)
PyDoc_STRVAR(posix_getresuid__doc__,
"getresuid() -> (ruid, euid, suid)\n\n\
Get tuple of the current process's real, effective, and saved user ids.");
static PyObject*
posix_getresuid (PyObject *self, PyObject *noargs)
PyDoc_STRVAR(posix_getresgid__doc__,
"getresgid() -> (rgid, egid, sgid)\n\n\
Get tuple of the current process's real, effective, and saved group ids.");
static PyObject*
posix_getresgid (PyObject *self, PyObject *noargs)
static PyMethodDef posix_methods[] = ;
static int
ins(PyObject *module, char *symbol, long value)
#if defined(PYOS_OS2)
static int insertvalues(PyObject *module)
static int
all_ins(PyObject *d)
#if (defined(_MSC_VER) || defined(__WATCOMC__) || defined(__BORLANDC__)) && !defined(__QNX__)
#define INITFUNC initnt
#define MODNAME "nt"
#elif defined(PYOS_OS2)
#define INITFUNC initos2
#define MODNAME "os2"
#define INITFUNC initposix
#define MODNAME "posix"
PyMODINIT_FUNC
INITFUNC(void)
