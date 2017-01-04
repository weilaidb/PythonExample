#define AVFORMAT_AVIO_H
#define AVIO_SEEKABLE_NORMAL 0x0001
typedef struct AVIOInterruptCB  AVIOInterruptCB;
enum AVIODirEntryType ;
typedef struct AVIODirEntry  AVIODirEntry;
typedef struct AVIODirContext  AVIODirContext;
typedef struct AVIOContext  AVIOContext;
const char *avio_find_protocol_name(const char *url);
int avio_check(const char *url, int flags);
int avpriv_io_move(const char *url_src, const char *url_dst);
int avpriv_io_delete(const char *url);
int avio_open_dir(AVIODirContext **s, const char *url, AVDictionary **options);
int avio_read_dir(AVIODirContext *s, AVIODirEntry **next);
int avio_close_dir(AVIODirContext **s);
void avio_free_directory_entry(AVIODirEntry **entry);
AVIOContext *avio_alloc_context(
unsigned char *buffer,
int buffer_size,
int write_flag,
void *opaque,
int (*read_packet)(void *opaque, uint8_t *buf, int buf_size),
int (*write_packet)(void *opaque, uint8_t *buf, int buf_size),
int64_t (*seek)(void *opaque, int64_t offset, int whence));
void avio_w8(AVIOContext *s, int b);
void avio_write(AVIOContext *s, const unsigned char *buf, int size);
void avio_wl64(AVIOContext *s, uint64_t val);
void avio_wb64(AVIOContext *s, uint64_t val);
void avio_wl32(AVIOContext *s, unsigned int val);
void avio_wb32(AVIOContext *s, unsigned int val);
void avio_wl24(AVIOContext *s, unsigned int val);
void avio_wb24(AVIOContext *s, unsigned int val);
void avio_wl16(AVIOContext *s, unsigned int val);
void avio_wb16(AVIOContext *s, unsigned int val);
int avio_put_str(AVIOContext *s, const char *str);
int avio_put_str16le(AVIOContext *s, const char *str);
int avio_put_str16be(AVIOContext *s, const char *str);
#define AVSEEK_SIZE 0x10000
#define AVSEEK_FORCE 0x20000
int64_t avio_seek(AVIOContext *s, int64_t offset, int whence);
int64_t avio_skip(AVIOContext *s, int64_t offset);
static av_always_inline int64_t avio_tell(AVIOContext *s)
int64_t avio_size(AVIOContext *s);
int avio_feof(AVIOContext *s);
#if FF_API_URL_FEOF
attribute_deprecated
int url_feof(AVIOContext *s);
int avio_printf(AVIOContext *s, const char *fmt, ...) av_printf_format(2, 3);
void avio_flush(AVIOContext *s);
int avio_read(AVIOContext *s, unsigned char *buf, int size);
int          avio_r8  (AVIOContext *s);
unsigned int avio_rl16(AVIOContext *s);
unsigned int avio_rl24(AVIOContext *s);
unsigned int avio_rl32(AVIOContext *s);
uint64_t     avio_rl64(AVIOContext *s);
unsigned int avio_rb16(AVIOContext *s);
unsigned int avio_rb24(AVIOContext *s);
unsigned int avio_rb32(AVIOContext *s);
uint64_t     avio_rb64(AVIOContext *s);
int avio_get_str(AVIOContext *pb, int maxlen, char *buf, int buflen);
int avio_get_str16le(AVIOContext *pb, int maxlen, char *buf, int buflen);
int avio_get_str16be(AVIOContext *pb, int maxlen, char *buf, int buflen);
#define AVIO_FLAG_READ  1
#define AVIO_FLAG_WRITE 2
#define AVIO_FLAG_READ_WRITE (AVIO_FLAG_READ|AVIO_FLAG_WRITE)
#define AVIO_FLAG_NONBLOCK 8
#define AVIO_FLAG_DIRECT 0x8000
int avio_open(AVIOContext **s, const char *url, int flags);
int avio_open2(AVIOContext **s, const char *url, int flags,
const AVIOInterruptCB *int_cb, AVDictionary **options);
int avio_close(AVIOContext *s);
int avio_closep(AVIOContext **s);
int avio_open_dyn_buf(AVIOContext **s);
int avio_close_dyn_buf(AVIOContext *s, uint8_t **pbuffer);
const char *avio_enum_protocols(void **opaque, int output);
int     avio_pause(AVIOContext *h, int pause);
int64_t avio_seek_time(AVIOContext *h, int stream_index,
int64_t timestamp, int flags);
struct AVBPrint;
int avio_read_to_bprint(AVIOContext *h, struct AVBPrint *pb, size_t max_size);
int avio_accept(AVIOContext *s, AVIOContext **c);
int avio_handshake(AVIOContext *c);
