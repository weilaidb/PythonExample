#define AVFORMAT_RM_H
extern const char * const ff_rm_metadata[4];
extern const AVCodecTag ff_rm_codec_tags[];
typedef struct RMStream RMStream;
RMStream *ff_rm_alloc_rmstream (void);
void      ff_rm_free_rmstream  (RMStream *rms);
extern AVInputFormat ff_rdt_demuxer;
int ff_rm_read_mdpr_codecdata (AVFormatContext *s, AVIOContext *pb,
AVStream *st, RMStream *rst,
unsigned int codec_data_size, const uint8_t *mime);
int ff_rm_parse_packet (AVFormatContext *s, AVIOContext *pb,
AVStream *st, RMStream *rst, int len,
AVPacket *pkt, int *seq, int flags, int64_t ts);
int ff_rm_retrieve_cache (AVFormatContext *s, AVIOContext *pb,
AVStream *st, RMStream *rst, AVPacket *pkt);
