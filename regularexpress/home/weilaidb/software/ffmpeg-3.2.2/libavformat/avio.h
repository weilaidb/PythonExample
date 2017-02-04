#define AVFORMAT_AVIO_H
#define AVIO_SEEKABLE_NORMAL 0x0001
typedef struct AVIOInterruptCB  AVIOInterruptCB;
enum AVIODirEntryType ;
typedef struct AVIODirEntry  AVIODirEntry;
typedef struct AVIODirContext  AVIODirContext;
enum AVIODataMarkerType ;
typedef struct AVIOContext  AVIOContext;
*avio_find_protocol_name;
avio_check;
avpriv_io_move;
avpriv_io_delete;
avio_open_dir;
avio_read_dir;
avio_close_dir;
avio_free_directory_entry;
*avio_alloc_context(void *opaque, uint8_t *buf, int buf_size),
int (*write_packet)(void *opaque, uint8_t *buf, int buf_size),
int64_t (*seek)(void *opaque, int64_t offset, int whence));
avio_w8;
avio_write;
avio_wl64;
avio_wb64;
avio_wl32;
avio_wb32;
avio_wl24;
avio_wb24;
avio_wl16;
avio_wb16;
avio_put_str;
avio_put_str16le;
avio_put_str16be;
avio_write_marker;
#define AVSEEK_SIZE 0x10000
#define AVSEEK_FORCE 0x20000
avio_seek;
avio_skip;
avio_tell
avio_size;
avio_feof;
#if FF_API_URL_FEOF
attribute_deprecated
url_feof;
avio_printf av_printf_format(2, 3);
avio_flush;
avio_read;
int          avio_r8  (AVIOContext *s);
avio_rl16;
avio_rl24;
avio_rl32;
avio_rl64;
avio_rb16;
avio_rb24;
avio_rb32;
avio_rb64;
avio_get_str;
avio_get_str16le;
avio_get_str16be;
#define AVIO_FLAG_READ  1
#define AVIO_FLAG_WRITE 2
#define AVIO_FLAG_READ_WRITE (AVIO_FLAG_READ|AVIO_FLAG_WRITE)
#define AVIO_FLAG_NONBLOCK 8
#define AVIO_FLAG_DIRECT 0x8000
avio_open;
avio_open2;
avio_close;
avio_closep;
avio_open_dyn_buf;
avio_close_dyn_buf;
*avio_enum_protocols;
avio_pause;
avio_seek_time;
struct AVBPrint;
avio_read_to_bprint;
avio_accept;
avio_handshake;
