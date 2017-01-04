#if HAVE_UNISTD_H
#if HAVE_IO_H
#if HAVE_MMAP
#elif HAVE_MAPVIEWOFFILE
typedef struct FileLogContext  FileLogContext;
static const AVClass file_log_ctx_class = ;
int av_file_map(const char *filename, uint8_t **bufptr, size_t *size,
int log_offset, void *log_ctx)
void av_file_unmap(uint8_t *bufptr, size_t size)
int av_tempfile(const char *prefix, char **filename, int log_offset, void *log_ctx)
