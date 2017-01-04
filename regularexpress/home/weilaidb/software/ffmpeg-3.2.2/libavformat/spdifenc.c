typedef struct IEC61937Context  IEC61937Context;
static const AVOption options[] = ;
static const AVClass spdif_class = ;
static int spdif_header_ac3(AVFormatContext *s, AVPacket *pkt)
static int spdif_header_eac3(AVFormatContext *s, AVPacket *pkt)
static int spdif_dts4_subtype(int period)
static int spdif_header_dts4(AVFormatContext *s, AVPacket *pkt, int core_size,
int sample_rate, int blocks)
static int spdif_header_dts(AVFormatContext *s, AVPacket *pkt)
static const enum IEC61937DataType mpeg_data_type[2][3] = ;
static int spdif_header_mpeg(AVFormatContext *s, AVPacket *pkt)
static int spdif_header_aac(AVFormatContext *s, AVPacket *pkt)
#define MAT_FRAME_SIZE          61424
#define TRUEHD_FRAME_OFFSET     2560
#define MAT_MIDDLE_CODE_OFFSET  -4
static int spdif_header_truehd(AVFormatContext *s, AVPacket *pkt)
static int spdif_write_header(AVFormatContext *s)
static int spdif_write_trailer(AVFormatContext *s)
static av_always_inline void spdif_put_16(IEC61937Context *ctx,
AVIOContext *pb, unsigned int val)
static int spdif_write_packet(struct AVFormatContext *s, AVPacket *pkt)
AVOutputFormat ff_spdif_muxer = ;
