typedef struct WAVDemuxContext  WAVDemuxContext;
static void set_spdif(AVFormatContext *s, WAVDemuxContext *wav)
#if CONFIG_WAV_DEMUXER
static int64_t next_tag(AVIOContext *pb, uint32_t *tag, int big_endian)
static int64_t wav_seek_tag(WAVDemuxContext * wav, AVIOContext *s, int64_t offset, int whence)
static int64_t find_tag(WAVDemuxContext * wav, AVIOContext *pb, uint32_t tag1)
static int wav_probe(AVProbeData *p)
static void handle_stream_probing(AVStream *st)
static int wav_parse_fmt_tag(AVFormatContext *s, int64_t size, AVStream **st)
static int wav_parse_xma2_tag(AVFormatContext *s, int64_t size, AVStream **st)
static inline int wav_parse_bext_string(AVFormatContext *s, const char *key,
int length)
static int wav_parse_bext_tag(AVFormatContext *s, int64_t size)
static const AVMetadataConv wav_metadata_conv[] = ;
static int wav_read_header(AVFormatContext *s)
static int64_t find_guid(AVIOContext *pb, const uint8_t guid1[16])
#define MAX_SIZE 4096
static int wav_read_packet(AVFormatContext *s, AVPacket *pkt)
static int wav_read_seek(AVFormatContext *s,
int stream_index, int64_t timestamp, int flags)
#define OFFSET(x) offsetof(WAVDemuxContext, x)
#define DEC AV_OPT_FLAG_DECODING_PARAM
static const AVOption demux_options[] = ;
static const AVClass wav_demuxer_class = ;
AVInputFormat ff_wav_demuxer = ;
#if CONFIG_W64_DEMUXER
static int w64_probe(AVProbeData *p)
static int w64_read_header(AVFormatContext *s)
AVInputFormat ff_w64_demuxer = ;
