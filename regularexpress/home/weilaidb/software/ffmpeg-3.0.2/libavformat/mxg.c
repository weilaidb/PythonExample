#define DEFAULT_PACKET_SIZE 1024
#define OVERREAD_SIZE 3
typedef struct MXGContext  MXGContext;
static int mxg_read_header(AVFormatContext *s)
static uint8_t* mxg_find_startmarker(uint8_t *p, uint8_t *end)
static int mxg_update_cache(AVFormatContext *s, unsigned int cache_size)
static int mxg_read_packet(AVFormatContext *s, AVPacket *pkt)
static int mxg_close(struct AVFormatContext *s)
AVInputFormat ff_mxg_demuxer = ;
