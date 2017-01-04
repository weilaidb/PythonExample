#define LIBVORBIS_FRAME_SIZE 64
#define BUFFER_SIZE (1024 * 64)
typedef struct LibvorbisEncContext  LibvorbisEncContext;
static const AVOption options[] = ;
static const AVCodecDefault defaults[] = ;
static const AVClass vorbis_class = ;
static int vorbis_error_to_averror(int ov_err)
static av_cold int libvorbis_setup(vorbis_info *vi, AVCodecContext *avctx)
static int xiph_len(int l)
static av_cold int libvorbis_encode_close(AVCodecContext *avctx)
static av_cold int libvorbis_encode_init(AVCodecContext *avctx)
static int libvorbis_encode_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr)
AVCodec ff_libvorbis_encoder = ;
