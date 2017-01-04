typedef struct  AMRContext;
static const char AMR_header[]   = "#!AMR\n";
static const char AMRWB_header[] = "#!AMR-WB\n";
#if CONFIG_AMR_MUXER
static int amr_write_header(AVFormatContext *s)
static int amr_write_packet(AVFormatContext *s, AVPacket *pkt)
static int amr_probe(AVProbeData *p)
static int amr_read_header(AVFormatContext *s)
static int amr_read_packet(AVFormatContext *s, AVPacket *pkt)
#if CONFIG_AMR_DEMUXER
AVInputFormat ff_amr_demuxer = ;
#if CONFIG_AMR_MUXER
AVOutputFormat ff_amr_muxer = ;
