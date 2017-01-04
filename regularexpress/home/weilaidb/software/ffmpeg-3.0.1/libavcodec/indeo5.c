#define BITSTREAM_READER_LE
enum ;
#define IVI5_PIC_SIZE_ESC       15
static int decode_gop_header(IVI45DecContext *ctx, AVCodecContext *avctx)
static inline int skip_hdr_extension(GetBitContext *gb)
static int decode_pic_hdr(IVI45DecContext *ctx, AVCodecContext *avctx)
static int decode_band_hdr(IVI45DecContext *ctx, IVIBandDesc *band,
AVCodecContext *avctx)
static int decode_mb_info(IVI45DecContext *ctx, IVIBandDesc *band,
IVITile *tile, AVCodecContext *avctx)
static void switch_buffers(IVI45DecContext *ctx)
static int is_nonnull_frame(IVI45DecContext *ctx)
static av_cold int decode_init(AVCodecContext *avctx)
AVCodec ff_indeo5_decoder = ;
