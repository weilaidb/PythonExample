#define _OS_WIN_H_
# include <sys/cygwin.h>
# include <errno.h>
#if SQLITE_OS_WIN && !defined(SQLITE_OS_WINNT)
# define SQLITE_OS_WINNT 1
#if defined(_WIN32_WCE)
# define SQLITE_OS_WINCE 1
# define SQLITE_OS_WINCE 0
#if !defined(SQLITE_OS_WINRT)
# define SQLITE_OS_WINRT 0
#if SQLITE_OS_WINCE
# define SQLITE_WIN32_VOLATILE
# define SQLITE_WIN32_VOLATILE volatile
#if SQLITE_OS_WIN && !SQLITE_OS_WINCE && !SQLITE_OS_WINRT && \
SQLITE_THREADSAFE>0 && !defined(__CYGWIN__)
# define SQLITE_OS_WIN_THREADS 1
# define SQLITE_OS_WIN_THREADS 0
