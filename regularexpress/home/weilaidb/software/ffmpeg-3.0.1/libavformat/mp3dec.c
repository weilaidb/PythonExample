#define XING_FLAG_FRAMES 0x01
#define XING_FLAG_SIZE   0x02
#define XING_FLAG_TOC    0x04
#define XING_FLAC_QSCALE 0x08
#define XING_TOC_COUNT 100
#define SAME_HEADER_MASK \
(0xffe00000 | (3 << 17) | (3 << 10) | (3 << 19))
typedef struct  MP3DecContext;
static int check(AVIOContext *pb, int64_t pos, uint32_t *header);
static int mp3_read_probe(AVProbeData *p)
static void read_xing_toc(AVFormatContext *s, int64_t filesize, int64_t duration)
static void mp3_parse_info_tag(AVFormatContext *s, AVStream *st,
MPADecodeHeader *c, uint32_t spf)
static void mp3_parse_vbri_tag(AVFormatContext *s, AVStream *st, int64_t base)
static int mp3_parse_vbr_tags(AVFormatContext *s, AVStream *st, int64_t base)
static int mp3_read_header(AVFormatContext *s)
#define MP3_PACKET_SIZE 1024
static int mp3_read_packet(AVFormatContext *s, AVPacket *pkt)
#define SEEK_WINDOW 4096
static int check(AVIOContext *pb, int64_t pos, uint32_t *ret_header)
static int64_t mp3_sync(AVFormatContext *s, int64_t target_pos, int flags)
static int mp3_seek(AVFormatContext *s, int stream_index, int64_t timestamp,
int flags)
static const AVOption options[] = ;
static const AVClass demuxer_class = ;
AVInputFormat ff_mp3_demuxer = ;
