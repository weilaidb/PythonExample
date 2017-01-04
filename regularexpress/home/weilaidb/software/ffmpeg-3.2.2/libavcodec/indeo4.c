#define BITSTREAM_READER_LE
#define IVI4_PIC_SIZE_ESC   7
static const struct  transforms[18] = ;
static int decode_plane_subdivision(GetBitContext *gb)
static inline int scale_tile_size(int def_size, int size_factor)
static int decode_pic_hdr(IVI45DecContext *ctx, AVCodecContext *avctx)
static int decode_band_hdr(IVI45DecContext *ctx, IVIBandDesc *band,
AVCodecContext *avctx)
static int decode_mb_info(IVI45DecContext *ctx, IVIBandDesc *band,
IVITile *tile, AVCodecContext *avctx)
static void switch_buffers(IVI45DecContext *ctx)
static int is_nonnull_frame(IVI45DecContext *ctx)
static av_cold int decode_init(AVCodecContext *avctx)
AVCodec ff_indeo4_decoder = ;
