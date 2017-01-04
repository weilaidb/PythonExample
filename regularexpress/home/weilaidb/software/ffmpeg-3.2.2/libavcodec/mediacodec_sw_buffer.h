#define AVCODEC_MEDIACODEC_SW_BUFFER_H
void ff_mediacodec_sw_buffer_copy_yuv420_planar(AVCodecContext *avctx,
MediaCodecDecContext *s,
uint8_t *data,
size_t size,
FFAMediaCodecBufferInfo *info,
AVFrame *frame);
void ff_mediacodec_sw_buffer_copy_yuv420_semi_planar(AVCodecContext *avctx,
MediaCodecDecContext *s,
uint8_t *data,
size_t size,
FFAMediaCodecBufferInfo *info,
AVFrame *frame);
void ff_mediacodec_sw_buffer_copy_yuv420_packed_semi_planar(AVCodecContext *avctx,
MediaCodecDecContext *s,
uint8_t *data,
size_t size,
FFAMediaCodecBufferInfo *info,
AVFrame *frame);
void ff_mediacodec_sw_buffer_copy_yuv420_packed_semi_planar_64x32Tile2m8ka(AVCodecContext *avctx,
MediaCodecDecContext *s,
uint8_t *data,
size_t size,
FFAMediaCodecBufferInfo *info,
AVFrame *frame);
