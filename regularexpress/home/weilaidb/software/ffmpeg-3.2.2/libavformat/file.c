#if HAVE_DIRENT_H
#if HAVE_IO_H
#if HAVE_UNISTD_H
#  ifdef S_IFIFO
S_ISFIFO (((m) & S_IFMT) == S_IFIFO)
#  else
S_ISFIFO 0
#  endif
#  ifdef S_IFLNK
S_ISLNK (((m) & S_IFLNK) == S_IFLNK)
#  else
S_ISLNK 0
#  endif
#  ifdef S_IFSOCK
S_ISSOCK (((m) & S_IFMT) == S_IFSOCK)
#  else
S_ISSOCK 0
#  endif
typedef struct FileContext  FileContext;
static const AVOption file_options[] = ;
static const AVOption pipe_options[] = ;
static const AVClass file_class = ;
static const AVClass pipe_class = ;
file_read
file_write
file_get_handle
file_check
file_delete
file_move
#if CONFIG_FILE_PROTOCOL
file_open
file_seek
file_close
file_open_dir
file_read_dir
file_close_dir
const URLProtocol ff_file_protocol = ;
#if CONFIG_PIPE_PROTOCOL
pipe_open
const URLProtocol ff_pipe_protocol = ;
