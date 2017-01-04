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
typedef struct FileLogContext  FileLogContext;
static const AVClass file_log_ctx_class = ;
int avpriv_tempfile(const char *prefix, char **filename, int log_offset, void *log_ctx)
FILE *av_fopen_utf8(const char *path, const char *mode)
