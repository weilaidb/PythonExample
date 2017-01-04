static int spdif_get_offset_and_codec(AVFormatContext *s,
enum IEC61937DataType data_type,
const char *buf, int *offset,
enum AVCodecID *codec)
#define SPDIF_MAX_OFFSET 16384
static int spdif_probe(AVProbeData *p)
int ff_spdif_probe(const uint8_t *p_buf, int buf_size, enum AVCodecID *codec)
static int spdif_read_header(AVFormatContext *s)
int ff_spdif_read_packet(AVFormatContext *s, AVPacket *pkt)
AVInputFormat ff_spdif_demuxer = ;
