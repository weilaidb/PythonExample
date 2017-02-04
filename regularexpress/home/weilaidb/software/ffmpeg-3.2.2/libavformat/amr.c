typedef struct  AMRContext;
static const char AMR_header[]   = ;
static const char AMRWB_header[] = ;
#if CONFIG_AMR_MUXER
amr_write_header
amr_write_packet
amr_probe
amr_read_header
amr_read_packet
#if CONFIG_AMR_DEMUXER
AVInputFormat ff_amr_demuxer = ;
#if CONFIG_AMR_MUXER
AVOutputFormat ff_amr_muxer = ;
