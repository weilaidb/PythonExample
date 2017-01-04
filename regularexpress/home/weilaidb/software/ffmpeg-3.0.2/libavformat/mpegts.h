#define AVFORMAT_MPEGTS_H
#define TS_FEC_PACKET_SIZE 204
#define TS_DVHS_PACKET_SIZE 192
#define TS_PACKET_SIZE 188
#define TS_MAX_PACKET_SIZE 204
#define NB_PID_MAX 8192
#define MAX_SECTION_SIZE 4096
#define PAT_PID                 0x0000
#define SDT_PID                 0x0011
#define PAT_TID   0x00
#define PMT_TID   0x02
#define M4OD_TID  0x05
#define SDT_TID   0x42
#define STREAM_TYPE_VIDEO_MPEG1     0x01
#define STREAM_TYPE_VIDEO_MPEG2     0x02
#define STREAM_TYPE_AUDIO_MPEG1     0x03
#define STREAM_TYPE_AUDIO_MPEG2     0x04
#define STREAM_TYPE_PRIVATE_SECTION 0x05
#define STREAM_TYPE_PRIVATE_DATA    0x06
#define STREAM_TYPE_AUDIO_AAC       0x0f
#define STREAM_TYPE_AUDIO_AAC_LATM  0x11
#define STREAM_TYPE_VIDEO_MPEG4     0x10
#define STREAM_TYPE_VIDEO_H264      0x1b
#define STREAM_TYPE_VIDEO_HEVC      0x24
#define STREAM_TYPE_VIDEO_CAVS      0x42
#define STREAM_TYPE_VIDEO_VC1       0xea
#define STREAM_TYPE_VIDEO_DIRAC     0xd1
#define STREAM_TYPE_AUDIO_AC3       0x81
#define STREAM_TYPE_AUDIO_DTS       0x82
#define STREAM_TYPE_AUDIO_TRUEHD    0x83
#define STREAM_TYPE_AUDIO_EAC3      0x87
typedef struct MpegTSContext MpegTSContext;
MpegTSContext *avpriv_mpegts_parse_open(AVFormatContext *s);
int avpriv_mpegts_parse_packet(MpegTSContext *ts, AVPacket *pkt,
const uint8_t *buf, int len);
void avpriv_mpegts_parse_close(MpegTSContext *ts);
typedef struct SLConfigDescr  SLConfigDescr;
typedef struct Mp4Descr  Mp4Descr;
int ff_parse_mpeg2_descriptor(AVFormatContext *fc, AVStream *st, int stream_type,
const uint8_t **pp, const uint8_t *desc_list_end,
Mp4Descr *mp4_descr, int mp4_descr_count, int pid,
MpegTSContext *ts);
int ff_check_h264_startcode(AVFormatContext *s, const AVStream *st, const AVPacket *pkt);
