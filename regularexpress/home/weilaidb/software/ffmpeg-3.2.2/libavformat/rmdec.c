MKTAG
MKTAG
MKTAG
MKTAG
MKTAG
MKTAG
struct RMStream ;
typedef struct RMDemuxContext  RMDemuxContext;
rm_read_close;
get_strl
get_str8
rm_read_extradata
rm_read_metadata
RMStream *ff_rm_alloc_rmstream (void)
void ff_rm_free_rmstream (RMStream *rms)
rm_read_audio_stream_info
ff_rm_read_mdpr_codecdata
rm_read_index
rm_read_header_old
rm_read_multi
rm_read_header
get_num
#define RAW_PACKET_SIZE 1000
rm_sync
rm_assemble_video_frame
static inline void
rm_ac3_swap_bytes (AVStream *st, AVPacket *pkt)
readfull
int
ff_rm_parse_packet (AVFormatContext *s, AVIOContext *pb,
AVStream *st, RMStream *ast, int len, AVPacket *pkt,
int *seq, int flags, int64_t timestamp)
int
ff_rm_retrieve_cache (AVFormatContext *s, AVIOContext *pb,
AVStream *st, RMStream *ast, AVPacket *pkt)
rm_read_packet
rm_read_close
rm_probe
rm_read_dts
rm_read_seek
AVInputFormat ff_rm_demuxer = ;
AVInputFormat ff_rdt_demuxer = ;
ivr_probe
ivr_read_header
ivr_read_packet
AVInputFormat ff_ivr_demuxer = ;
