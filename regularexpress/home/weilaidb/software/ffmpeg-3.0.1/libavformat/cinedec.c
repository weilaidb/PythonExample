typedef struct  CineDemuxContext;
enum ;
enum ;
#define CFA_TLGRAY  0x80000000U
#define CFA_TRGRAY  0x40000000U
#define CFA_BLGRAY  0x20000000U
#define CFA_BRGRAY  0x10000000U
static int cine_read_probe(AVProbeData *p)
static int set_metadata_int(AVDictionary **dict, const char *key, int value, int allow_zero)
static int set_metadata_float(AVDictionary **dict, const char *key, float value, int allow_zero)
static int cine_read_header(AVFormatContext *avctx)
static int cine_read_packet(AVFormatContext *avctx, AVPacket *pkt)
static int cine_read_seek(AVFormatContext *avctx, int stream_index, int64_t timestamp, int flags)
AVInputFormat ff_cine_demuxer = ;
