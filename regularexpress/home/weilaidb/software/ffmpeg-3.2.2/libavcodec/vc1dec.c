#if CONFIG_WMV3IMAGE_DECODER || CONFIG_VC1IMAGE_DECODER
typedef struct SpriteData  SpriteData;
get_fp_val
vc1_sprite_parse_transform
vc1_parse_sprites
vc1_draw_sprites
vc1_decode_sprites
vc1_sprite_flush
ff_vc1_decode_init_alloc_tables
ff_vc1_init_transposed_scantables
vc1_decode_init
ff_vc1_decode_end
vc1_decode_frame
static const enum AVPixelFormat vc1_hwaccel_pixfmt_list_420[] = ;
AVCodec ff_vc1_decoder = ;
#if CONFIG_WMV3_DECODER
AVCodec ff_wmv3_decoder = ;
#if CONFIG_WMV3_VDPAU_DECODER && FF_API_VDPAU
AVCodec ff_wmv3_vdpau_decoder = ;
#if CONFIG_VC1_VDPAU_DECODER && FF_API_VDPAU
AVCodec ff_vc1_vdpau_decoder = ;
#if CONFIG_WMV3IMAGE_DECODER
AVCodec ff_wmv3image_decoder = ;
#if CONFIG_VC1IMAGE_DECODER
AVCodec ff_vc1image_decoder = ;
