static const AVCodecTag flv_video_codec_ids[] = ;
static const AVCodecTag flv_audio_codec_ids[] = ;
typedef enum  FLVFlags;
typedef struct FLVContext  FLVContext;
typedef struct FLVStreamContext  FLVStreamContext;
static int get_audio_flags(AVFormatContext *s, AVCodecParameters *par)
static void put_amf_string(AVIOContext *pb, const char *str)
static void put_avc_eos_tag(AVIOContext *pb, unsigned ts)
static void put_amf_double(AVIOContext *pb, double d)
static void put_amf_bool(AVIOContext *pb, int b)
static void write_metadata(AVFormatContext *s, unsigned int ts)
static int unsupported_codec(AVFormatContext *s,
const char* type, int codec_id)
static void flv_write_codec_header(AVFormatContext* s, AVCodecParameters* par)
static int flv_write_header(AVFormatContext *s)
static int flv_write_trailer(AVFormatContext *s)
static int flv_write_packet(AVFormatContext *s, AVPacket *pkt)
static const AVOption options[] = ;
static const AVClass flv_muxer_class = ;
AVOutputFormat ff_flv_muxer = ;
