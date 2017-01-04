typedef struct VqfContext  VqfContext;
static int vqf_probe(AVProbeData *probe_packet)
static void add_metadata(AVFormatContext *s, uint32_t tag,
unsigned int tag_len, unsigned int remaining)
static const AVMetadataConv vqf_metadata_conv[] = ;
static int vqf_read_header(AVFormatContext *s)
static int vqf_read_packet(AVFormatContext *s, AVPacket *pkt)
static int vqf_read_seek(AVFormatContext *s,
int stream_index, int64_t timestamp, int flags)
AVInputFormat ff_vqf_demuxer = ;
