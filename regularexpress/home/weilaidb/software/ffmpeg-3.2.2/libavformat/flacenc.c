typedef struct FlacMuxerContext  FlacMuxerContext;
static int flac_write_block_padding(AVIOContext *pb, unsigned int n_padding_bytes,
int last_block)
static int flac_write_block_comment(AVIOContext *pb, AVDictionary **m,
int last_block, int bitexact)
static int flac_write_header(struct AVFormatContext *s)
static int flac_write_trailer(struct AVFormatContext *s)
static int flac_write_packet(struct AVFormatContext *s, AVPacket *pkt)
static const AVOption flacenc_options[] = ;
static const AVClass flac_muxer_class = ;
AVOutputFormat ff_flac_muxer = ;
