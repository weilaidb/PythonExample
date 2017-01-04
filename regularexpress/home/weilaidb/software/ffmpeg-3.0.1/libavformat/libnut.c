#define ID_STRING "nut/multimedia container"
#define ID_LENGTH (strlen(ID_STRING) + 1)
typedef struct  NUTContext;
static const AVCodecTag nut_tags[] = ;
#if CONFIG_LIBNUT_MUXER
static int av_write(void * h, size_t len, const uint8_t * buf)
static int nut_write_header(AVFormatContext * avf)
static int nut_write_packet(AVFormatContext * avf, AVPacket * pkt)
static int nut_write_trailer(AVFormatContext * avf)
AVOutputFormat ff_libnut_muxer = ;
static int nut_probe(AVProbeData *p)
static size_t av_read(void * h, size_t len, uint8_t * buf)
static off_t av_seek(void * h, int64_t pos, int whence)
static int nut_read_header(AVFormatContext * avf)
static int nut_read_packet(AVFormatContext * avf, AVPacket * pkt)
static int nut_read_seek(AVFormatContext * avf, int stream_index, int64_t target_ts, int flags)
static int nut_read_close(AVFormatContext *s)
AVInputFormat ff_libnut_demuxer = ;
