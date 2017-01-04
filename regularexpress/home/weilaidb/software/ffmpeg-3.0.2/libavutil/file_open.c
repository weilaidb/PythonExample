#if HAVE_UNISTD_H
#if HAVE_IO_H
#if defined(_WIN32) && !defined(__MINGW32CE__)
#undef open
#undef lseek
#undef stat
#undef fstat
static int win32_open(const char *filename_utf8, int oflag, int pmode)
#define open win32_open
int avpriv_open(const char *filename, int flags, ...)
FILE *av_fopen_utf8(const char *path, const char *mode)
