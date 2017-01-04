#define PKTLINE_H
void packet_flush(int fd);
void packet_write(int fd, const char *fmt, ...) __attribute__((format (printf, 2, 3)));
void packet_buf_flush(struct strbuf *buf);
void packet_buf_write(struct strbuf *buf, const char *fmt, ...) __attribute__((format (printf, 2, 3)));
#define PACKET_READ_GENTLE_ON_EOF (1u<<0)
#define PACKET_READ_CHOMP_NEWLINE (1u<<1)
int packet_read(int fd, char **src_buffer, size_t *src_len, char
*buffer, unsigned size, int options);
char *packet_read_line(int fd, int *size);
char *packet_read_line_buf(char **src_buf, size_t *src_len, int *size);
#define DEFAULT_PACKET_MAX 1000
#define LARGE_PACKET_MAX 65520
extern char packet_buffer[LARGE_PACKET_MAX];
