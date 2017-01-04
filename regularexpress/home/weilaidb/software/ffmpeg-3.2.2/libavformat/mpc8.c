#define MKMPCTAG(a, b) ((a) | ((b) << 8))
#define TAG_MPCK MKTAG('M','P','C','K')
enum MPCPacketTags;
static const int mpc8_rate[8] = ;
typedef struct MPCContext  MPCContext;
static inline int64_t bs_get_v(const uint8_t **bs)
static int mpc8_probe(AVProbeData *p)
static inline int64_t gb_get_v(GetBitContext *gb)
static void mpc8_get_chunk_header(AVIOContext *pb, int *tag, int64_t *size)
static void mpc8_parse_seektable(AVFormatContext *s, int64_t off)
static void mpc8_handle_chunk(AVFormatContext *s, int tag, int64_t chunk_pos, int64_t size)
static int mpc8_read_header(AVFormatContext *s)
static int mpc8_read_packet(AVFormatContext *s, AVPacket *pkt)
static int mpc8_read_seek(AVFormatContext *s, int stream_index, int64_t timestamp, int flags)
AVInputFormat ff_mpc8_demuxer = ;
