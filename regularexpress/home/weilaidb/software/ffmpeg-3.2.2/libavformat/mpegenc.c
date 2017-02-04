#define MAX_PAYLOAD_SIZE 4096
typedef struct PacketDesc  PacketDesc;
typedef struct StreamInfo  StreamInfo;
typedef struct MpegMuxContext  MpegMuxContext;
extern AVOutputFormat ff_mpeg1vcd_muxer;
extern AVOutputFormat ff_mpeg2dvd_muxer;
extern AVOutputFormat ff_mpeg2svcd_muxer;
extern AVOutputFormat ff_mpeg2vob_muxer;
put_pack_header
put_system_header
get_system_header_size
mpeg_mux_init
put_timestamp
get_vcd_padding_size
put_padding_packet
get_nb_frames
flush_packet
put_vcd_padding_sector
remove_decoded_packets
output_packet
mpeg_mux_write_packet
mpeg_mux_end
OFFSET offsetof(MpegMuxContext, x)
#define E AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
MPEGENC_CLASS                   \
static const AVClass flavor ## _class = ;
MPEGENC_CLASS
AVOutputFormat ff_mpeg1system_muxer = ;
MPEGENC_CLASS
AVOutputFormat ff_mpeg1vcd_muxer = ;
MPEGENC_CLASS
AVOutputFormat ff_mpeg2vob_muxer = ;
MPEGENC_CLASS
AVOutputFormat ff_mpeg2svcd_muxer = ;
MPEGENC_CLASS
AVOutputFormat ff_mpeg2dvd_muxer = ;
