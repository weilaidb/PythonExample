#if CONFIG_VOBSUB_DEMUXER
# include
# include
# include
#define MAX_SYNC_SIZE 100000
check_pes
check_pack_header
mpegps_probe
typedef struct MpegDemuxContext  MpegDemuxContext;
mpegps_read_header
get_pts
find_next_start_code
mpegps_psm_parse
mpegps_read_pes_header
mpegps_read_packet
mpegps_read_dts
AVInputFormat ff_mpegps_demuxer = ;
#if CONFIG_VOBSUB_DEMUXER
#define REF_STRING
#define MAX_LINE_SIZE 2048
vobsub_probe
vobsub_read_header
vobsub_read_packet
vobsub_read_seek
vobsub_read_close
static const AVOption options[] = ;
static const AVClass vobsub_demuxer_class = ;
AVInputFormat ff_vobsub_demuxer = ;
