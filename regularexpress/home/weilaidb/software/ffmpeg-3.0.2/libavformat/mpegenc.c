#define MAX_PAYLOAD_SIZE 4096
typedef struct PacketDesc  PacketDesc;
typedef struct StreamInfo  StreamInfo;
typedef struct MpegMuxContext  MpegMuxContext;
extern AVOutputFormat ff_mpeg1vcd_muxer;
extern AVOutputFormat ff_mpeg2dvd_muxer;
extern AVOutputFormat ff_mpeg2svcd_muxer;
extern AVOutputFormat ff_mpeg2vob_muxer;
static int put_pack_header(AVFormatContext *ctx, uint8_t *buf,
int64_t timestamp)
static int put_system_header(AVFormatContext *ctx, uint8_t *buf,
int only_for_stream_id)
static int get_system_header_size(AVFormatContext *ctx)
static av_cold int mpeg_mux_init(AVFormatContext *ctx)
static inline void put_timestamp(AVIOContext *pb, int id, int64_t timestamp)
static int get_vcd_padding_size(AVFormatContext *ctx, int64_t pts)
static void put_padding_packet(AVFormatContext *ctx, AVIOContext *pb,
int packet_bytes)
static int get_nb_frames(AVFormatContext *ctx, StreamInfo *stream, int len)
static int flush_packet(AVFormatContext *ctx, int stream_index,
int64_t pts, int64_t dts, int64_t scr, int trailer_size)
static void put_vcd_padding_sector(AVFormatContext *ctx)
static int remove_decoded_packets(AVFormatContext *ctx, int64_t scr)
static int output_packet(AVFormatContext *ctx, int flush)
static int mpeg_mux_write_packet(AVFormatContext *ctx, AVPacket *pkt)
static int mpeg_mux_end(AVFormatContext *ctx)
#define OFFSET(x) offsetof(MpegMuxContext, x)
#define E AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
#define MPEGENC_CLASS(flavor)                   \
static const AVClass flavor ## _class = ;
#if CONFIG_MPEG1SYSTEM_MUXER
MPEGENC_CLASS(mpeg)
AVOutputFormat ff_mpeg1system_muxer = ;
#if CONFIG_MPEG1VCD_MUXER
MPEGENC_CLASS(vcd)
AVOutputFormat ff_mpeg1vcd_muxer = ;
#if CONFIG_MPEG2VOB_MUXER
MPEGENC_CLASS(vob)
AVOutputFormat ff_mpeg2vob_muxer = ;
#if CONFIG_MPEG2SVCD_MUXER
MPEGENC_CLASS(svcd)
AVOutputFormat ff_mpeg2svcd_muxer = ;
#if CONFIG_MPEG2DVD_MUXER
MPEGENC_CLASS(dvd)
AVOutputFormat ff_mpeg2dvd_muxer = ;
