#if (__GNUC__ == 4 && 3 <= __GNUC_MINOR__) || 4 < __GNUC__
# pragma GCC diagnostic ignored "-Wtype-limits"
#if defined(WIN32)
# include <malloc.h>
#if (defined _WIN32 || defined __WIN32__) && ! defined __CYGWIN__
# define WIN32_NATIVE
# if defined (_MSC_VER) && !defined(_WIN32_WINNT)
#  define _WIN32_WINNT 0x0502
# endif
# include <winsock2.h>
# include <windows.h>
# include <io.h>
# include <stdio.h>
# include <conio.h>
# include <sys/time.h>
# include <sys/socket.h>
# ifndef NO_SYS_SELECT_H
#  include <sys/select.h>
# endif
# include <unistd.h>
# include <sys/ioctl.h>
# include <sys/filio.h>
# define INFTIM (-1)
# define MSG_PEEK 0
#define IsConsoleHandle(h) (((long) (h) & 3) == 3)
static BOOL
IsSocketHandle (HANDLE h)
typedef struct _FILE_PIPE_LOCAL_INFORMATION  FILE_PIPE_LOCAL_INFORMATION, *PFILE_PIPE_LOCAL_INFORMATION;
typedef struct _IO_STATUS_BLOCK
IO_STATUS_BLOCK, *PIO_STATUS_BLOCK;
typedef enum _FILE_INFORMATION_CLASS  FILE_INFORMATION_CLASS, *PFILE_INFORMATION_CLASS;
typedef DWORD (WINAPI *PNtQueryInformationFile)
(HANDLE, IO_STATUS_BLOCK *, VOID *, ULONG, FILE_INFORMATION_CLASS);
# ifndef PIPE_BUF
#  define PIPE_BUF      512
# endif
static int
win32_compute_revents (HANDLE h, int *p_sought)
static int
win32_compute_revents_socket (SOCKET h, int sought, long lNetworkEvents)
static int
compute_revents (int fd, int sought, fd_set *rfds, fd_set *wfds, fd_set *efds)
int
poll (struct pollfd *pfd, nfds_t nfd, int timeout)
