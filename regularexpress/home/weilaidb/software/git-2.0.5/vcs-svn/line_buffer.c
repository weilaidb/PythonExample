#define COPY_BUFFER_LEN 4096
int buffer_init(struct line_buffer *buf, const char *filename)
int buffer_fdinit(struct line_buffer *buf, int fd)
int buffer_tmpfile_init(struct line_buffer *buf)
int buffer_deinit(struct line_buffer *buf)
FILE *buffer_tmpfile_rewind(struct line_buffer *buf)
long buffer_tmpfile_prepare_to_read(struct line_buffer *buf)
int buffer_ferror(struct line_buffer *buf)
int buffer_read_char(struct line_buffer *buf)
char *buffer_read_line(struct line_buffer *buf)
size_t buffer_read_binary(struct line_buffer *buf,
struct strbuf *sb, size_t size)
off_t buffer_copy_bytes(struct line_buffer *buf, off_t nbytes)
off_t buffer_skip_bytes(struct line_buffer *buf, off_t nbytes)
