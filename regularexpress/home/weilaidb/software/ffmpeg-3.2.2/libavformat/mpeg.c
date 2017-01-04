#if CONFIG_VOBSUB_DEMUXER
# include "subtitles.h"
# include "libavutil/bprint.h"
# include "libavutil/opt.h"
#define MAX_SYNC_SIZE 100000
static int check_pes(const uint8_t *p, const uint8_t *end)
static int check_pack_header(const uint8_t *buf)
static int mpegps_probe(AVProbeData *p)
typedef struct MpegDemuxContext  MpegDemuxContext;
static int mpegps_read_header(AVFormatContext *s)
static int64_t get_pts(AVIOContext *pb, int c)
static int find_next_start_code(AVIOContext *pb, int *size_ptr,
int32_t *header_state)
static long mpegps_psm_parse(MpegDemuxContext *m, AVIOContext *pb)
static int mpegps_read_pes_header(AVFormatContext *s,
int64_t *ppos, int *pstart_code,
int64_t *ppts, int64_t *pdts)
static int mpegps_read_packet(AVFormatContext *s,
AVPacket *pkt)
static int64_t mpegps_read_dts(AVFormatContext *s, int stream_index,
int64_t *ppos, int64_t pos_limit)
AVInputFormat ff_mpegps_demuxer = ;
#if CONFIG_VOBSUB_DEMUXER
#define REF_STRING "# VobSub index file,"
#define MAX_LINE_SIZE 2048
static int vobsub_probe(AVProbeData *p)
static int vobsub_read_header(AVFormatContext *s)
static int vobsub_read_packet(AVFormatContext *s, AVPacket *pkt)
static int vobsub_read_seek(AVFormatContext *s, int stream_index,
int64_t min_ts, int64_t ts, int64_t max_ts, int flags)
static int vobsub_read_close(AVFormatContext *s)
static const AVOption options[] = ;
static const AVClass vobsub_demuxer_class = ;
AVInputFormat ff_vobsub_demuxer = ;
