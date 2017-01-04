static int id3v1_set_string(AVFormatContext *s, const char *key,
uint8_t *buf, int buf_size)
static int id3v1_create_tag(AVFormatContext *s, uint8_t *buf)
#define XING_NUM_BAGS 400
#define XING_TOC_SIZE 100
#define XING_SIZE 156
typedef struct MP3Context  MP3Context;
static const uint8_t xing_offtbl[2][2] = ;
static int mp3_write_xing(AVFormatContext *s)
static void mp3_xing_add_frame(MP3Context *mp3, AVPacket *pkt)
static int mp3_write_audio_packet(AVFormatContext *s, AVPacket *pkt)
static int mp3_queue_flush(AVFormatContext *s)
static void mp3_update_xing(AVFormatContext *s)
static int mp3_write_trailer(struct AVFormatContext *s)
static int query_codec(enum AVCodecID id, int std_compliance)
#if CONFIG_MP2_MUXER
AVOutputFormat ff_mp2_muxer = ;
#if CONFIG_MP3_MUXER
static const AVOption options[] = ;
static const AVClass mp3_muxer_class = ;
static int mp3_write_packet(AVFormatContext *s, AVPacket *pkt)
static int mp3_write_header(struct AVFormatContext *s)
AVOutputFormat ff_mp3_muxer = ;
