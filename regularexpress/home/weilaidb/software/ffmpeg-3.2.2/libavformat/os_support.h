#define AVFORMAT_OS_SUPPORT_H
#if HAVE_DIRECT_H
#if HAVE_IO_H
defined && !defined(__MINGW32CE__)
#  include <fcntl.h>
#  ifdef lseek
#   undef lseek
#  endif
lseek _lseeki64((f), (p), (w))
#  ifdef stat
#   undef stat
#  endif
#  define stat _stati64
#  ifdef fstat
#   undef fstat
#  endif
fstat _fstati64((f), (s))
#  if HAVE_UNISTD_H
#    include <unistd.h>
#  endif
#  ifdef lseek
#   undef lseek
#  endif
lseek lseek64((f), (p), (w))
is_dos_path
defined || defined(__Plan9__)
#define SHUT_RD 0
#define SHUT_WR 1
#define SHUT_RDWR 2
defined
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
ff_poll;
#define poll ff_poll
defined
mkdir _mkdir(a)
defined
WINAPI_FAMILY_PARTITION
#define USE_MOVEFILEEXA
#define USE_MOVEFILEEXA
DEF_FS_FUNCTION               \
static inline int win32_##name(const char *filename_utf8) \
DEF_FS_FUNCTION(unlink, _wunlink, _unlink)
DEF_FS_FUNCTION(mkdir,  _wmkdir,  _mkdir)
DEF_FS_FUNCTION(rmdir,  _wrmdir , _rmdir)
DEF_FS_FUNCTION2     \
static inline int win32_##name(const char *filename_utf8, partype par) \
DEF_FS_FUNCTION2(access, _waccess, _access, int)
DEF_FS_FUNCTION2(stat, _wstati64, _stati64, struct stat*)
win32_rename
mkdir win32_mkdir(a)
#define rename      win32_rename
#define rmdir       win32_rmdir
#define unlink      win32_unlink
#define access      win32_access
