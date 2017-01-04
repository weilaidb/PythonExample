#define APE_MIN_VERSION 3800
#define APE_MAX_VERSION 3990
#define MAC_FORMAT_FLAG_8_BIT                 1
#define MAC_FORMAT_FLAG_CRC                   2
#define MAC_FORMAT_FLAG_HAS_PEAK_LEVEL        4
#define MAC_FORMAT_FLAG_24_BIT                8
#define MAC_FORMAT_FLAG_HAS_SEEK_ELEMENTS    16
#define MAC_FORMAT_FLAG_CREATE_WAV_HEADER    32
#define APE_EXTRADATA_SIZE 6
typedef struct APEFrame  APEFrame;
typedef struct APEContext  APEContext;
static int ape_probe(AVProbeData * p)
static void ape_dumpinfo(AVFormatContext * s, APEContext * ape_ctx)
static int ape_read_header(AVFormatContext * s)
static int ape_read_packet(AVFormatContext * s, AVPacket * pkt)
static int ape_read_close(AVFormatContext * s)
static int ape_read_seek(AVFormatContext *s, int stream_index, int64_t timestamp, int flags)
AVInputFormat ff_ape_demuxer = ;
