#define EPIC_PIX_STACK_SIZE 1024
#define EPIC_PIX_STACK_MAX  (EPIC_PIX_STACK_SIZE - 1)
enum ChunkType ;
enum Compression ;
static const uint8_t luma_quant[64] = ;
static const uint8_t chroma_quant[64] = ;
typedef struct ePICPixListElem  ePICPixListElem;
typedef struct ePICPixHashElem  ePICPixHashElem;
#define EPIC_HASH_SIZE 256
typedef struct ePICPixHash  ePICPixHash;
typedef struct ePICContext  ePICContext;
typedef struct JPGContext  JPGContext;
typedef struct G2MContext  G2MContext;
static av_cold int build_vlc(VLC *vlc, const uint8_t *bits_table,
const uint8_t *val_table, int nb_codes,
int is_ac)
static av_cold int jpg_init(AVCodecContext *avctx, JPGContext *c)
static av_cold void jpg_free_context(JPGContext *ctx)
static void jpg_unescape(const uint8_t *src, int src_size,
uint8_t *dst, int *dst_size)
static int jpg_decode_block(JPGContext *c, GetBitContext *gb,
int plane, int16_t *block)
static inline void yuv2rgb(uint8_t *out, int ridx, int Y, int U, int V)
static int jpg_decode_data(JPGContext *c, int width, int height,
const uint8_t *src, int src_size,
uint8_t *dst, int dst_stride,
const uint8_t *mask, int mask_stride, int num_mbs,
int swapuv)
#define LOAD_NEIGHBOURS(x)      \
W   = curr_row[(x)   - 1];  \
N   = above_row[(x)];       \
WW  = curr_row[(x)   - 2];  \
NW  = above_row[(x)  - 1];  \
NE  = above_row[(x)  + 1];  \
NN  = above2_row[(x)];      \
NNW = above2_row[(x) - 1];  \
NWW = above_row[(x)  - 2];  \
NNE = above2_row[(x) + 1]
#define UPDATE_NEIGHBOURS(x)    \
NNW = NN;                   \
NN  = NNE;                  \
NWW = NW;                   \
NW  = N;                    \
N   = NE;                   \
NE  = above_row[(x)  + 1];  \
NNE = above2_row[(x) + 1]
#define R_shift 16
#define G_shift  8
#define B_shift  0
*pPix = (ff_els_decode_unsigned(&dc->els_ctx, &dc->unsigned_rung) << R_shift) |
(ff_els_decode_unsigned(&dc->els_ctx, &dc->unsigned_rung) << G_shift) |
(ff_els_decode_unsigned(&dc->els_ctx, &dc->unsigned_rung) << B_shift);
return 1;
}
if (x)
if (y)
return 0;
}
static int epic_decode_run_length(ePICContext *dc, int x, int y, int tile_width,
const uint32_t *curr_row,
const uint32_t *above_row,
const uint32_t *above2_row,
uint32_t *pPix, int *pRun)
static int epic_predict_pixel2(ePICContext *dc, uint8_t *rung,
uint32_t *pPix, uint32_t pix)
static int epic_predict_from_NW_NE(ePICContext *dc, int x, int y, int run,
int tile_width, const uint32_t *curr_row,
const uint32_t *above_row, uint32_t *pPix)
static int epic_decode_from_cache(ePICContext *dc, uint32_t W, uint32_t *pPix)
static int epic_decode_tile(ePICContext *dc, uint8_t *out, int tile_height,
int tile_width, int stride)
static int epic_jb_decode_tile(G2MContext *c, int tile_x, int tile_y,
const uint8_t *src, size_t src_size,
AVCodecContext *avctx)
static int kempf_restore_buf(const uint8_t *src, int len,
uint8_t *dst, int stride,
const uint8_t *jpeg_tile, int tile_stride,
int width, int height,
const uint8_t *pal, int npal, int tidx)
static int kempf_decode_tile(G2MContext *c, int tile_x, int tile_y,
const uint8_t *src, int src_size)
static int g2m_init_buffers(G2MContext *c)
static int g2m_load_cursor(AVCodecContext *avctx, G2MContext *c,
GetByteContext *gb)
#define APPLY_ALPHA(src, new, alpha) \
src = (src * (256 - alpha) + new * alpha) >> 8
static void g2m_paint_cursor(G2MContext *c, uint8_t *dst, int stride)
static int g2m_decode_frame(AVCodecContext *avctx, void *data,
int *got_picture_ptr, AVPacket *avpkt)
static av_cold int g2m_decode_init(AVCodecContext *avctx)
static av_cold int g2m_decode_end(AVCodecContext *avctx)
AVCodec ff_g2m_decoder = ;
