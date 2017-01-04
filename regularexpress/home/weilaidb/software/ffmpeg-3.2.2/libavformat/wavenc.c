#define RF64_AUTO   (-1)
#define RF64_NEVER  0
#define RF64_ALWAYS 1
#define PEAK_BUFFER_SIZE   1024
typedef enum  PeakType;
typedef enum  PeakFormat;
typedef struct WAVMuxContext  WAVMuxContext;
#if CONFIG_WAV_MUXER
static inline void bwf_write_bext_string(AVFormatContext *s, const char *key, int maxlen)
static void bwf_write_bext_chunk(AVFormatContext *s)
static av_cold void peak_free_buffers(AVFormatContext *s)
static av_cold int peak_init_writer(AVFormatContext *s)
static void peak_write_frame(AVFormatContext *s)
static int peak_write_chunk(AVFormatContext *s)
static int wav_write_header(AVFormatContext *s)
static int wav_write_packet(AVFormatContext *s, AVPacket *pkt)
static int wav_write_trailer(AVFormatContext *s)
#define OFFSET(x) offsetof(WAVMuxContext, x)
#define ENC AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass wav_muxer_class = ;
AVOutputFormat ff_wav_muxer = ;
#if CONFIG_W64_MUXER
static void start_guid(AVIOContext *pb, const uint8_t *guid, int64_t *pos)
static void end_guid(AVIOContext *pb, int64_t start)
static int w64_write_header(AVFormatContext *s)
static int w64_write_trailer(AVFormatContext *s)
AVOutputFormat ff_w64_muxer = ;
