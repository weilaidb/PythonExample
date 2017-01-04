#define CHUNK_HEADER_LENGTH 4
#define EXT_HEADER_LENGTH   8
#define USERAGENT  "User-Agent: NSPlayer/4.1.0.3856\r\n"
#define CLIENTGUID "Pragma: xClientGUID=\r\n"
typedef enum  ChunkType;
typedef struct MMSHContext  MMSHContext;
static int mmsh_close(URLContext *h)
static ChunkType get_chunk_header(MMSHContext *mmsh, int *len)
static int read_data_packet(MMSHContext *mmsh, const int len)
static int get_http_header_data(MMSHContext *mmsh)
static int mmsh_open_internal(URLContext *h, const char *uri, int flags, int timestamp, int64_t pos)
static int mmsh_open(URLContext *h, const char *uri, int flags)
static int handle_chunk_type(MMSHContext *mmsh)
static int mmsh_read(URLContext *h, uint8_t *buf, int size)
static int64_t mmsh_read_seek(URLContext *h, int stream_index,
int64_t timestamp, int flags)
static int64_t mmsh_seek(URLContext *h, int64_t pos, int whence)
const URLProtocol ff_mmsh_protocol = ;
