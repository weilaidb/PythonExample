#if HAVE_UNISTD_H
#if HAVE_IO_H
defined && !defined(__MINGW32CE__)
#undef open
#undef lseek
#undef stat
#undef fstat
win32_open
#define open win32_open
avpriv_open
typedef struct FileLogContext  FileLogContext;
static const AVClass file_log_ctx_class = ;
avpriv_tempfile
*av_fopen_utf8
