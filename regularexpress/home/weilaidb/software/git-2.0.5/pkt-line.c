char packet_buffer[LARGE_PACKET_MAX];
static const char *packet_trace_prefix = "git";
static const char trace_key[] = "GIT_TRACE_PACKET";
void packet_trace_identity(const char *prog)
static void packet_trace(const char *buf, unsigned int len, int write)
void packet_flush(int fd)
void packet_buf_flush(struct strbuf *buf)
#define hex(a) (hexchar[(a) & 15])
static char buffer[1000];
static unsigned format_packet(const char *fmt, va_list args)
void packet_write(int fd, const char *fmt, ...)
void packet_buf_write(struct strbuf *buf, const char *fmt, ...)
static int get_packet_data(int fd, char **src_buf, size_t *src_size,
void *dst, unsigned size, int options)
static int packet_length(const char *linelen)
int packet_read(int fd, char **src_buf, size_t *src_len,
char *buffer, unsigned size, int options)
static char *packet_read_line_generic(int fd,
char **src, size_t *src_len,
int *dst_len)
char *packet_read_line(int fd, int *len_p)
char *packet_read_line_buf(char **src, size_t *src_len, int *dst_len)
