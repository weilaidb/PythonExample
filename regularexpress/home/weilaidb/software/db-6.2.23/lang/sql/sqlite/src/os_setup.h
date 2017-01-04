#define _OS_SETUP_H_
#if defined(SQLITE_OS_OTHER)
#  if SQLITE_OS_OTHER==1
#    undef SQLITE_OS_UNIX
#    define SQLITE_OS_UNIX 0
#    undef SQLITE_OS_WIN
#    define SQLITE_OS_WIN 0
#  else
#    undef SQLITE_OS_OTHER
#  endif
#if !defined(SQLITE_OS_UNIX) && !defined(SQLITE_OS_OTHER)
#  define SQLITE_OS_OTHER 0
#  ifndef SQLITE_OS_WIN
#    if defined(_WIN32) || defined(WIN32) || defined(__CYGWIN__) || \
defined(__MINGW32__) || defined(__BORLANDC__)
#      define SQLITE_OS_WIN 1
#      define SQLITE_OS_UNIX 0
#    else
#      define SQLITE_OS_WIN 0
#      define SQLITE_OS_UNIX 1
#    endif
#  else
#    define SQLITE_OS_UNIX 0
#  endif
#  ifndef SQLITE_OS_WIN
#    define SQLITE_OS_WIN 0
#  endif
