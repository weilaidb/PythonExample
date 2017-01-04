#define Py_OSDEFS_H
#if !defined(__QNX__)
#if defined(MS_WINDOWS) || defined(__BORLANDC__) || defined(__WATCOMC__) || defined(__DJGPP__) || defined(PYOS_OS2)
#if defined(PYOS_OS2) && defined(PYCC_GCC)
#define MAXPATHLEN 260
#define SEP '/'
#define ALTSEP '\\'
#define SEP '\\'
#define ALTSEP '/'
#define MAXPATHLEN 256
#define DELIM ';'
#define SEP '.'
#define MAXPATHLEN 256
#define DELIM ','
#define SEP '/'
#define PATH_MAX MAXPATHLEN
#if defined(PATH_MAX) && PATH_MAX > 1024
#define MAXPATHLEN PATH_MAX
#define MAXPATHLEN 1024
#define DELIM ':'
