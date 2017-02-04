#define IO_BUFFER_SIZE 32768
#define SHORT_SEEK_THRESHOLD 4096
typedef struct AVIOInternal  AVIOInternal;
*ff_avio_child_next
*ff_avio_child_class_next
OFFSET offsetof(AVIOContext,x)
#define E AV_OPT_FLAG_ENCODING_PARAM
#define D AV_OPT_FLAG_DECODING_PARAM
static const AVOption ff_avio_options[] = ;
const AVClass ff_avio_class = ;
fill_buffer;
url_resetbuf;
ffio_init_context(void *opaque, uint8_t *buf, int buf_size),
int (*write_packet)(void *opaque, uint8_t *buf, int buf_size),
int64_t (*seek)(void *opaque, int64_t offset, int whence))
*avio_alloc_context(void *opaque, uint8_t *buf, int buf_size),
int (*write_packet)(void *opaque, uint8_t *buf, int buf_size),
int64_t (*seek)(void *opaque, int64_t offset, int whence))
writeout
flush_buffer
avio_w8
ffio_fill
avio_write
avio_flush
avio_seek
avio_skip
avio_size
avio_feof
#if FF_API_URL_FEOF
url_feof
avio_wl32
avio_wb32
avio_put_str
put_str16
PUT_STR16                          \
int avio_put_str16 ## type(AVIOContext *s, const char *str)  \
PUT_STR16(le, 0)
PUT_STR16(be, 1)
#undef PUT_STR16
ff_get_v_length
ff_put_v
avio_wl64
avio_wb64
avio_wl16
avio_wb16
avio_wl24
avio_wb24
avio_write_marker
fill_buffer
ff_crc04C11DB7_update
ff_crcEDB88320_update
ff_crcA001_update
ffio_get_checksum
ffio_init_checksum(unsigned long c, const uint8_t *p, unsigned int len),
unsigned long checksum)
avio_r8
avio_read
ffio_read_size
ffio_read_indirect
ffio_read_partial
avio_rl16
avio_rl24
avio_rl32
avio_rl64
avio_rb16
avio_rb24
avio_rb32
ff_get_line
avio_get_str
GET_STR16 \
int avio_get_str16 ##type(AVIOContext *pb, int maxlen, char *buf, int buflen)\
\
GET_STR16(le, avio_rl16)
GET_STR16(be, avio_rb16)
#undef GET_STR16
avio_rb64
ffio_read_varlen
io_read_packet
io_write_packet
io_seek
io_read_pause
io_read_seek
ffio_fdopen
ffio_ensure_seekback
ffio_set_buf_size
url_resetbuf
ffio_rewind_with_probe_data
avio_open
ffio_open_whitelist
avio_open2
ffio_open2_wrapper
avio_close
avio_closep
avio_printf
avio_pause
avio_seek_time
avio_read_to_bprint
avio_accept
avio_handshake
typedef struct DynBuffer  DynBuffer;
dyn_buf_write
dyn_packet_buf_write
dyn_buf_seek
url_open_dyn_buf_internal
avio_open_dyn_buf
ffio_open_dyn_packet_buf
avio_close_dyn_buf
ffio_free_dyn_buf
null_buf_write
ffio_open_null_buf
ffio_close_null_buf
