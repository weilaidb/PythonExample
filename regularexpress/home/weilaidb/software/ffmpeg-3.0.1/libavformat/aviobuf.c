#define IO_BUFFER_SIZE 32768
#define SHORT_SEEK_THRESHOLD 4096
static void *ff_avio_child_next(void *obj, void *prev)
static const AVClass *ff_avio_child_class_next(const AVClass *prev)
#define OFFSET(x) offsetof(AVIOContext,x)
#define E AV_OPT_FLAG_ENCODING_PARAM
#define D AV_OPT_FLAG_DECODING_PARAM
static const AVOption ff_avio_options[] = ;
const AVClass ff_avio_class = ;
static void fill_buffer(AVIOContext *s);
static int url_resetbuf(AVIOContext *s, int flags);
int ffio_init_context(AVIOContext *s,
unsigned char *buffer,
int buffer_size,
int write_flag,
void *opaque,
int (*read_packet)(void *opaque, uint8_t *buf, int buf_size),
int (*write_packet)(void *opaque, uint8_t *buf, int buf_size),
int64_t (*seek)(void *opaque, int64_t offset, int whence))
AVIOContext *avio_alloc_context(
unsigned char *buffer,
int buffer_size,
int write_flag,
void *opaque,
int (*read_packet)(void *opaque, uint8_t *buf, int buf_size),
int (*write_packet)(void *opaque, uint8_t *buf, int buf_size),
int64_t (*seek)(void *opaque, int64_t offset, int whence))
static void writeout(AVIOContext *s, const uint8_t *data, int len)
static void flush_buffer(AVIOContext *s)
void avio_w8(AVIOContext *s, int b)
void ffio_fill(AVIOContext *s, int b, int count)
void avio_write(AVIOContext *s, const unsigned char *buf, int size)
void avio_flush(AVIOContext *s)
int64_t avio_seek(AVIOContext *s, int64_t offset, int whence)
int64_t avio_skip(AVIOContext *s, int64_t offset)
int64_t avio_size(AVIOContext *s)
int avio_feof(AVIOContext *s)
#if FF_API_URL_FEOF
int url_feof(AVIOContext *s)
void avio_wl32(AVIOContext *s, unsigned int val)
void avio_wb32(AVIOContext *s, unsigned int val)
int avio_put_str(AVIOContext *s, const char *str)
static inline int put_str16(AVIOContext *s, const char *str, const int be)
#define PUT_STR16(type, big_endian)                          \
int avio_put_str16 ## type(AVIOContext *s, const char *str)  \
PUT_STR16(le, 0)
PUT_STR16(be, 1)
#undef PUT_STR16
int ff_get_v_length(uint64_t val)
void ff_put_v(AVIOContext *bc, uint64_t val)
void avio_wl64(AVIOContext *s, uint64_t val)
void avio_wb64(AVIOContext *s, uint64_t val)
void avio_wl16(AVIOContext *s, unsigned int val)
void avio_wb16(AVIOContext *s, unsigned int val)
void avio_wl24(AVIOContext *s, unsigned int val)
void avio_wb24(AVIOContext *s, unsigned int val)
static void fill_buffer(AVIOContext *s)
unsigned long ff_crc04C11DB7_update(unsigned long checksum, const uint8_t *buf,
unsigned int len)
unsigned long ff_crcA001_update(unsigned long checksum, const uint8_t *buf,
unsigned int len)
unsigned long ffio_get_checksum(AVIOContext *s)
void ffio_init_checksum(AVIOContext *s,
unsigned long (*update_checksum)(unsigned long c, const uint8_t *p, unsigned int len),
unsigned long checksum)
int avio_r8(AVIOContext *s)
int avio_read(AVIOContext *s, unsigned char *buf, int size)
int ffio_read_size(AVIOContext *s, unsigned char *buf, int size)
int ffio_read_indirect(AVIOContext *s, unsigned char *buf, int size, const unsigned char **data)
int ffio_read_partial(AVIOContext *s, unsigned char *buf, int size)
unsigned int avio_rl16(AVIOContext *s)
unsigned int avio_rl24(AVIOContext *s)
unsigned int avio_rl32(AVIOContext *s)
uint64_t avio_rl64(AVIOContext *s)
unsigned int avio_rb16(AVIOContext *s)
unsigned int avio_rb24(AVIOContext *s)
unsigned int avio_rb32(AVIOContext *s)
int ff_get_line(AVIOContext *s, char *buf, int maxlen)
int avio_get_str(AVIOContext *s, int maxlen, char *buf, int buflen)
#define GET_STR16(type, read) \
int avio_get_str16 ##type(AVIOContext *pb, int maxlen, char *buf, int buflen)\
\
GET_STR16(le, avio_rl16)
GET_STR16(be, avio_rb16)
#undef GET_STR16
uint64_t avio_rb64(AVIOContext *s)
uint64_t ffio_read_varlen(AVIOContext *bc)
int ffio_fdopen(AVIOContext **s, URLContext *h)
int ffio_ensure_seekback(AVIOContext *s, int64_t buf_size)
int ffio_set_buf_size(AVIOContext *s, int buf_size)
static int url_resetbuf(AVIOContext *s, int flags)
int ffio_rewind_with_probe_data(AVIOContext *s, unsigned char **bufp, int buf_size)
int avio_open(AVIOContext **s, const char *filename, int flags)
int ffio_open_whitelist(AVIOContext **s, const char *filename, int flags,
const AVIOInterruptCB *int_cb, AVDictionary **options,
const char *whitelist
)
int avio_open2(AVIOContext **s, const char *filename, int flags,
const AVIOInterruptCB *int_cb, AVDictionary **options)
int ffio_open2_wrapper(struct AVFormatContext *s, AVIOContext **pb, const char *url, int flags,
const AVIOInterruptCB *int_cb, AVDictionary **options)
int avio_close(AVIOContext *s)
int avio_closep(AVIOContext **s)
int avio_printf(AVIOContext *s, const char *fmt, ...)
int avio_pause(AVIOContext *s, int pause)
int64_t avio_seek_time(AVIOContext *s, int stream_index,
int64_t timestamp, int flags)
int avio_read_to_bprint(AVIOContext *h, AVBPrint *pb, size_t max_size)
int avio_accept(AVIOContext *s, AVIOContext **c)
int avio_handshake(AVIOContext *c)
typedef struct DynBuffer  DynBuffer;
static int dyn_buf_write(void *opaque, uint8_t *buf, int buf_size)
static int dyn_packet_buf_write(void *opaque, uint8_t *buf, int buf_size)
static int64_t dyn_buf_seek(void *opaque, int64_t offset, int whence)
static int url_open_dyn_buf_internal(AVIOContext **s, int max_packet_size)
int avio_open_dyn_buf(AVIOContext **s)
int ffio_open_dyn_packet_buf(AVIOContext **s, int max_packet_size)
int avio_close_dyn_buf(AVIOContext *s, uint8_t **pbuffer)
void ffio_free_dyn_buf(AVIOContext **s)
static int null_buf_write(void *opaque, uint8_t *buf, int buf_size)
int ffio_open_null_buf(AVIOContext **s)
int ffio_close_null_buf(AVIOContext *s)
