#define DSS_HEAD_OFFSET_AUTHOR        0xc
#define DSS_AUTHOR_SIZE               16
#define DSS_HEAD_OFFSET_START_TIME    0x26
#define DSS_HEAD_OFFSET_END_TIME      0x32
#define DSS_TIME_SIZE                 12
#define DSS_HEAD_OFFSET_ACODEC        0x2a4
#define DSS_ACODEC_DSS_SP             0x0
#define DSS_ACODEC_G723_1             0x2
#define DSS_HEAD_OFFSET_COMMENT       0x31e
#define DSS_COMMENT_SIZE              64
#define DSS_BLOCK_SIZE                512
#define DSS_HEADER_SIZE              (DSS_BLOCK_SIZE * 2)
#define DSS_AUDIO_BLOCK_HEADER_SIZE   6
#define DSS_FRAME_SIZE                42
static const uint8_t frame_size[4] = ;
typedef struct DSSDemuxContext  DSSDemuxContext;
dss_probe
dss_read_metadata_date
dss_read_metadata_string
dss_read_header
dss_skip_audio_header
dss_sp_byte_swap
dss_sp_read_packet
dss_723_1_read_packet
dss_read_packet
dss_read_close
dss_read_seek
AVInputFormat ff_dss_demuxer = ;
