#define PCR_TIME_BASE 27000000
#define DVB_PRIVATE_NETWORK_START 0xff01
typedef struct MpegTSSection  MpegTSSection;
typedef struct MpegTSService  MpegTSService;
enum ;
typedef struct MpegTSWrite  MpegTSWrite;
#define DEFAULT_PES_HEADER_FREQ  16
#define DEFAULT_PES_PAYLOAD_SIZE ((DEFAULT_PES_HEADER_FREQ - 1) * 184 + 170)
#define SECTION_LENGTH 1020
mpegts_write_section
put16
mpegts_write_section1
#define DEFAULT_PROVIDER_NAME
#define DEFAULT_SERVICE_NAME
#define SDT_RETRANS_TIME 500
#define PAT_RETRANS_TIME 100
#define PCR_RETRANS_TIME 20
typedef struct MpegTSWriteStream  MpegTSWriteStream;
mpegts_write_pat
mpegts_write_pmt
putstr8
mpegts_write_sdt
*mpegts_add_service
get_pcr
mpegts_prefix_m2ts_header
section_write_packet
mpegts_init
retransmit_si_info
write_pcr_bits
mpegts_insert_null_packet
mpegts_insert_pcr_only
write_pts
set_af_flag
extend_af
*get_ts_payload_start
mpegts_write_pes
ff_check_h264_startcode
check_hevc_startcode
opus_get_packet_samples
mpegts_write_packet_internal
mpegts_write_flush
mpegts_write_packet
mpegts_write_end
mpegts_deinit
mpegts_check_bitstream
static const AVOption options[] = ;
static const AVClass mpegts_muxer_class = ;
AVOutputFormat ff_mpegts_muxer = ;
