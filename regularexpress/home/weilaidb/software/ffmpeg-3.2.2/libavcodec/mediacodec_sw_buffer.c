#define QCOM_TILE_WIDTH 64
#define QCOM_TILE_HEIGHT 32
#define QCOM_TILE_SIZE (QCOM_TILE_WIDTH * QCOM_TILE_HEIGHT)
#define QCOM_TILE_GROUP_SIZE (4 * QCOM_TILE_SIZE)
void ff_mediacodec_sw_buffer_copy_yuv420_planar(AVCodecContext *avctx,
MediaCodecDecContext *s,
uint8_t *data,
size_t size,
FFAMediaCodecBufferInfo *info,
AVFrame *frame)
void ff_mediacodec_sw_buffer_copy_yuv420_semi_planar(AVCodecContext *avctx,
MediaCodecDecContext *s,
uint8_t *data,
size_t size,
FFAMediaCodecBufferInfo *info,
AVFrame *frame)
void ff_mediacodec_sw_buffer_copy_yuv420_packed_semi_planar(AVCodecContext *avctx,
MediaCodecDecContext *s,
uint8_t *data,
size_t size,
FFAMediaCodecBufferInfo *info,
AVFrame *frame)
static size_t qcom_tile_pos(size_t x, size_t y, size_t w, size_t h)
void ff_mediacodec_sw_buffer_copy_yuv420_packed_semi_planar_64x32Tile2m8ka(AVCodecContext *avctx,
MediaCodecDecContext *s,
uint8_t *data,
size_t size,
FFAMediaCodecBufferInfo *info,
AVFrame *frame)
