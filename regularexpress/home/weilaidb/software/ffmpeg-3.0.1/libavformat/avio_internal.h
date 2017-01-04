#define AVFORMAT_AVIO_INTERNAL_H
extern const AVClass ff_avio_class;
int ffio_init_context(AVIOContext *s,
unsigned char *buffer,
int buffer_size,
int write_flag,
void *opaque,
int (*read_packet)(void *opaque, uint8_t *buf, int buf_size),
int (*write_packet)(void *opaque, uint8_t *buf, int buf_size),
int64_t (*seek)(void *opaque, int64_t offset, int whence));
int ffio_read_indirect(AVIOContext *s, unsigned char *buf, int size, const unsigned char **data);
int ffio_read_partial(AVIOContext *s, unsigned char *buf, int size);
void ffio_fill(AVIOContext *s, int b, int count);
static av_always_inline void ffio_wfourcc(AVIOContext *pb, const uint8_t *s)
int ffio_rewind_with_probe_data(AVIOContext *s, unsigned char **buf, int buf_size);
uint64_t ffio_read_varlen(AVIOContext *bc);
int ffio_read_size(AVIOContext *s, unsigned char *buf, int size);
int ffio_set_buf_size(AVIOContext *s, int buf_size);
int ffio_ensure_seekback(AVIOContext *s, int64_t buf_size);
int ffio_limit(AVIOContext *s, int size);
void ffio_init_checksum(AVIOContext *s,
unsigned long (*update_checksum)(unsigned long c, const uint8_t *p, unsigned int len),
unsigned long checksum);
unsigned long ffio_get_checksum(AVIOContext *s);
unsigned long ff_crc04C11DB7_update(unsigned long checksum, const uint8_t *buf,
unsigned int len);
unsigned long ff_crcA001_update(unsigned long checksum, const uint8_t *buf,
unsigned int len);
int ffio_open_dyn_packet_buf(AVIOContext **s, int max_packet_size);
int ffio_fdopen(AVIOContext **s, URLContext *h);
int ffio_open_null_buf(AVIOContext **s);
int ffio_open_whitelist(AVIOContext **s, const char *url, int flags,
const AVIOInterruptCB *int_cb, AVDictionary **options,
const char *whitelist);
int ffio_close_null_buf(AVIOContext *s);
void ffio_free_dyn_buf(AVIOContext **s);
