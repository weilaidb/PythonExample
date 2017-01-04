typedef struct SMVJpegDecodeContext  SMVJpegDecodeContext;
static inline void smv_img_pnt_plane(uint8_t      **dst, uint8_t *src,
int src_linesize, int height, int nlines)
static inline void smv_img_pnt(uint8_t *dst_data[4], uint8_t *src_data[4],
const int src_linesizes[4],
enum AVPixelFormat pix_fmt, int width, int height,
int nlines)
static av_cold int smvjpeg_decode_end(AVCodecContext *avctx)
static av_cold int smvjpeg_decode_init(AVCodecContext *avctx)
static int smvjpeg_decode_frame(AVCodecContext *avctx, void *data, int *data_size,
AVPacket *avpkt)
static const AVClass smvjpegdec_class = ;
AVCodec ff_smvjpeg_decoder = ;
