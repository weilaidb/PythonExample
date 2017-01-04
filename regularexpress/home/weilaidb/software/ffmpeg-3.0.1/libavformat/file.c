#if HAVE_DIRENT_H
#if HAVE_IO_H
#if HAVE_UNISTD_H
#  ifdef S_IFIFO
#    define S_ISFIFO(m) (((m) & S_IFMT) == S_IFIFO)
#  else
#    define S_ISFIFO(m) 0
#  endif
#  ifdef S_IFLNK
#    define S_ISLNK(m) (((m) & S_IFLNK) == S_IFLNK)
#  else
#    define S_ISLNK(m) 0
#  endif
#  ifdef S_IFSOCK
#    define S_ISSOCK(m) (((m) & S_IFMT) == S_IFSOCK)
#  else
#    define S_ISSOCK(m) 0
#  endif
typedef struct FileContext  FileContext;
static const AVOption file_options[] = ;
static const AVOption pipe_options[] = ;
static const AVClass file_class = ;
static const AVClass pipe_class = ;
static int file_read(URLContext *h, unsigned char *buf, int size)
static int file_write(URLContext *h, const unsigned char *buf, int size)
static int file_get_handle(URLContext *h)
static int file_check(URLContext *h, int mask)
static int file_delete(URLContext *h)
static int file_move(URLContext *h_src, URLContext *h_dst)
#if CONFIG_FILE_PROTOCOL
static int file_open(URLContext *h, const char *filename, int flags)
static int64_t file_seek(URLContext *h, int64_t pos, int whence)
static int file_close(URLContext *h)
static int file_open_dir(URLContext *h)
static int file_read_dir(URLContext *h, AVIODirEntry **next)
static int file_close_dir(URLContext *h)
URLProtocol ff_file_protocol = ;
#if CONFIG_PIPE_PROTOCOL
static int pipe_open(URLContext *h, const char *filename, int flags)
URLProtocol ff_pipe_protocol = ;
