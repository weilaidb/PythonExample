static const AVOption options[] = ;
static const AVClass rtp_muxer_class = ;
#define RTCP_SR_SIZE 28
static int is_supported(enum AVCodecID id)
static int rtp_write_header(AVFormatContext *s1)
static void rtcp_send_sr(AVFormatContext *s1, int64_t ntp_time, int bye)
void ff_rtp_send_data(AVFormatContext *s1, const uint8_t *buf1, int len, int m)
static int rtp_send_samples(AVFormatContext *s1,
const uint8_t *buf1, int size, int sample_size_bits)
static void rtp_send_mpegaudio(AVFormatContext *s1,
const uint8_t *buf1, int size)
static void rtp_send_raw(AVFormatContext *s1,
const uint8_t *buf1, int size)
static void rtp_send_mpegts_raw(AVFormatContext *s1,
const uint8_t *buf1, int size)
static int rtp_send_ilbc(AVFormatContext *s1, const uint8_t *buf, int size)
static int rtp_write_packet(AVFormatContext *s1, AVPacket *pkt)
static int rtp_write_trailer(AVFormatContext *s1)
AVOutputFormat ff_rtp_muxer = ;
