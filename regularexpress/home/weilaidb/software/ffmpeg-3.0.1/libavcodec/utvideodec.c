static int build_huff(const uint8_t *src, VLC *vlc, int *fsym)
static int decode_plane(UtvideoContext *c, int plane_no,
uint8_t *dst, int step, int stride,
int width, int height,
const uint8_t *src, int use_pred)
static void restore_rgb_planes(uint8_t *src, int step, int stride, int width,
int height)
static void restore_median(uint8_t *src, int step, int stride,
int width, int height, int slices, int rmode)
static void restore_median_il(uint8_t *src, int step, int stride,
int width, int height, int slices, int rmode)
static int decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int decode_init(AVCodecContext *avctx)
static av_cold int decode_end(AVCodecContext *avctx)
AVCodec ff_utvideo_decoder = ;
