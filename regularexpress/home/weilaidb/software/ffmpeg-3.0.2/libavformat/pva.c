#define PVA_MAX_PAYLOAD_LENGTH  0x17f8
#define PVA_VIDEO_PAYLOAD       0x01
#define PVA_AUDIO_PAYLOAD       0x02
#define PVA_MAGIC               (('A' << 8) + 'V')
typedef struct PVAContext  PVAContext;
static int pva_check(const uint8_t *p)
static int pva_probe(AVProbeData * pd)
static int pva_read_header(AVFormatContext *s)
#define pva_log if (read_packet) av_log
static int read_part_of_packet(AVFormatContext *s, int64_t *pts,
int *len, int *strid, int read_packet)
static int pva_read_packet(AVFormatContext *s, AVPacket *pkt)
static int64_t pva_read_timestamp(struct AVFormatContext *s, int stream_index,
int64_t *pos, int64_t pos_limit)
AVInputFormat ff_pva_demuxer = ;
