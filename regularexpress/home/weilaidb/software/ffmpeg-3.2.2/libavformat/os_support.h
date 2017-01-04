#define AVFORMAT_OS_SUPPORT_H
#if HAVE_DIRECT_H
#if HAVE_IO_H
#if defined(_WIN32) && !defined(__MINGW32CE__)
#  include <fcntl.h>
#  ifdef lseek
#   undef lseek
#  endif
#  define lseek(f,p,w) _lseeki64((f), (p), (w))
#  ifdef stat
#   undef stat
#  endif
#  define stat _stati64
#  ifdef fstat
#   undef fstat
#  endif
#  define fstat(f,s) _fstati64((f), (s))
#  if HAVE_UNISTD_H
#    include <unistd.h>
#  endif
#  ifdef lseek
#   undef lseek
#  endif
#  define lseek(f,p,w) lseek64((f), (p), (w))
static inline int is_dos_path(const char *path)
#if defined(__OS2__) || defined(__Plan9__)
#define SHUT_RD 0
#define SHUT_WR 1
#define SHUT_RDWR 2
#if defined(_WIN32)
#define SHUT_RD SD_RECEIVE
#define SHUT_WR SD_SEND
#define SHUT_RDWR SD_BOTH
#define S_IRUSR S_IREAD
#define S_IWUSR S_IWRITE
#if CONFIG_NETWORK
#if !HAVE_SOCKLEN_T
typedef int socklen_t;
#if !HAVE_CLOSESOCKET
#define closesocket close
#if !HAVE_POLL_H
typedef unsigned long nfds_t;
#if HAVE_WINSOCK2_H
#if !HAVE_STRUCT_POLLFD
struct pollfd ;
#define POLLIN     0x0001
#define POLLOUT    0x0002
#define POLLRDNORM POLLIN
#define POLLWRNORM POLLOUT
#define POLLRDBAND 0x0008
#define POLLWRBAND 0x0010
#define POLLPRI    0x0020
#define POLLERR    0x0004
#define POLLHUP    0x0080
#define POLLNVAL   0x1000
int ff_poll(struct pollfd *fds, nfds_t numfds, int timeout);
#define poll ff_poll
#if defined(__MINGW32CE__)
#define mkdir(a, b) _mkdir(a)
#elif defined(_WIN32)
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#define USE_MOVEFILEEXA
#define USE_MOVEFILEEXA
#define DEF_FS_FUNCTION(name, wfunc, afunc)               \
static inline int win32_##name(const char *filename_utf8) \
DEF_FS_FUNCTION(unlink, _wunlink, _unlink)
DEF_FS_FUNCTION(mkdir,  _wmkdir,  _mkdir)
DEF_FS_FUNCTION(rmdir,  _wrmdir , _rmdir)
#define DEF_FS_FUNCTION2(name, wfunc, afunc, partype)     \
static inline int win32_##name(const char *filename_utf8, partype par) \
DEF_FS_FUNCTION2(access, _waccess, _access, int)
DEF_FS_FUNCTION2(stat, _wstati64, _stati64, struct stat*)
static inline int win32_rename(const char *src_utf8, const char *dest_utf8)
#define mkdir(a, b) win32_mkdir(a)
#define rename      win32_rename
#define rmdir       win32_rmdir
#define unlink      win32_unlink
#define access      win32_access
