#define VPX_CODEC_DISABLE_COMPAT 1
typedef struct VPxDecoderContext  VPxContext;
vpx_init
set_pix_fmt
decode_frame
vpx_decode
vpx_free
#if CONFIG_LIBVPX_VP8_DECODER
vp8_init
AVCodec ff_libvpx_vp8_decoder = ;
#if CONFIG_LIBVPX_VP9_DECODER
vp9_init
AVCodec ff_libvpx_vp9_decoder = ;
