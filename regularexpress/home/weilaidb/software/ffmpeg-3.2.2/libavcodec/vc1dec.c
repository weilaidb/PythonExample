#if CONFIG_WMV3IMAGE_DECODER || CONFIG_VC1IMAGE_DECODER
typedef struct SpriteData  SpriteData;
static inline int get_fp_val(GetBitContext* gb)
static void vc1_sprite_parse_transform(GetBitContext* gb, int c[7])
static int vc1_parse_sprites(VC1Context *v, GetBitContext* gb, SpriteData* sd)
static void vc1_draw_sprites(VC1Context *v, SpriteData* sd)
static int vc1_decode_sprites(VC1Context *v, GetBitContext* gb)
static void vc1_sprite_flush(AVCodecContext *avctx)
av_cold int ff_vc1_decode_init_alloc_tables(VC1Context *v)
av_cold void ff_vc1_init_transposed_scantables(VC1Context *v)
static av_cold int vc1_decode_init(AVCodecContext *avctx)
av_cold int ff_vc1_decode_end(AVCodecContext *avctx)
static int vc1_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
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
