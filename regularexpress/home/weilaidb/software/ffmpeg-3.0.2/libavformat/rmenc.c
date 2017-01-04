typedef struct StreamInfo  StreamInfo;
typedef struct RMMuxContext  RMMuxContext;
#define BUFFER_DURATION 0
#define MAX_HEADER_SIZE (7 + 4 + 12)
#define MAX_PACKET_SIZE (UINT16_MAX - MAX_HEADER_SIZE)
static void put_str(AVIOContext *s, const char *tag)
static void put_str8(AVIOContext *s, const char *tag)
static int rv10_write_header(AVFormatContext *ctx,
int data_size, int index_pos)
static void write_packet_header(AVFormatContext *ctx, StreamInfo *stream,
int length, int key_frame)
static int rm_write_header(AVFormatContext *s)
static int rm_write_audio(AVFormatContext *s, const uint8_t *buf, int size, int flags)
static int rm_write_video(AVFormatContext *s, const uint8_t *buf, int size, int flags)
static int rm_write_packet(AVFormatContext *s, AVPacket *pkt)
static int rm_write_trailer(AVFormatContext *s)
AVOutputFormat ff_rm_muxer = ;
