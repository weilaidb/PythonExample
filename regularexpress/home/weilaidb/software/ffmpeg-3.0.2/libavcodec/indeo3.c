enum ;
#define BS_8BIT_PEL     (1 << 1)
#define BS_KEYFRAME     (1 << 2)
#define BS_MV_Y_HALF    (1 << 4)
#define BS_MV_X_HALF    (1 << 5)
#define BS_NONREF       (1 << 8)
#define BS_BUFFER        9
typedef struct Plane  Plane;
#define CELL_STACK_MAX  20
typedef struct Cell  Cell;
typedef struct Indeo3DecodeContext  Indeo3DecodeContext;
static uint8_t requant_tab[8][128];
static av_cold void build_requant_tab(void)
static av_cold void free_frame_buffers(Indeo3DecodeContext *ctx)
static av_cold int allocate_frame_buffers(Indeo3DecodeContext *ctx,
AVCodecContext *avctx, int luma_width, int luma_height)
static int copy_cell(Indeo3DecodeContext *ctx, Plane *plane, Cell *cell)
#define AVG_32(dst, src, ref) \
AV_WN32A(dst, ((AV_RN32(src) + AV_RN32(ref)) >> 1) & 0x7F7F7F7FUL)
#define AVG_64(dst, src, ref) \
AV_WN64A(dst, ((AV_RN64(src) + AV_RN64(ref)) >> 1) & 0x7F7F7F7F7F7F7F7FULL)
static inline uint64_t replicate64(uint64_t a)
static inline uint32_t replicate32(uint32_t a)
static inline void fill_64(uint8_t *dst, const uint64_t pix, int32_t n,
int32_t row_offset)
enum ;
#define BUFFER_PRECHECK \
if (*data_ptr >= last_ptr) \
return IV3_OUT_OF_DATA; \
#define RLE_BLOCK_COPY \
if (cell->mv_ptr || !skip_flag) \
copy_block4(dst, ref, row_offset, row_offset, 4 << v_zoom)
#define RLE_BLOCK_COPY_8 \
pix64 = AV_RN64(ref);\
if (is_first_row)  else \
fill_64(dst, pix64, 8, row_offset)
#define RLE_LINES_COPY \
copy_block4(dst, ref, row_offset, row_offset, num_lines << v_zoom)
#define RLE_LINES_COPY_M10 \
pix64 = AV_RN64(ref);\
if (is_top_of_cell)  else \
fill_64(dst, pix64, num_lines << 1, row_offset)
#define APPLY_DELTA_4 \
AV_WN16A(dst + line_offset    ,\
(AV_RN16(ref    ) + delta_tab->deltas[dyad1]) & 0x7F7F);\
AV_WN16A(dst + line_offset + 2,\
(AV_RN16(ref + 2) + delta_tab->deltas[dyad2]) & 0x7F7F);\
if (mode >= 3)
#define APPLY_DELTA_8 \\
if (is_top_of_cell)  else  \\\\
if (is_top_of_cell && !cell->ypos)  else \
AVG_64(dst, ref, dst + row_offset);
#define APPLY_DELTA_1011_INTER \
if (mode == 10)  else
static int decode_cell_data(Indeo3DecodeContext *ctx, Cell *cell,
uint8_t *block, uint8_t *ref_block,
int pitch, int h_zoom, int v_zoom, int mode,
const vqEntry *delta[2], int swap_quads[2],
const uint8_t **data_ptr, const uint8_t *last_ptr)
static int decode_cell(Indeo3DecodeContext *ctx, AVCodecContext *avctx,
Plane *plane, Cell *cell, const uint8_t *data_ptr,
const uint8_t *last_ptr)
enum ;
#define SPLIT_CELL(size, new_size) (new_size) = ((size) > 2) ? ((((size) + 2) >> 2) << 1) : 1
#define UPDATE_BITPOS(n) \
ctx->skip_bits  += (n); \
ctx->need_resync = 1
#define RESYNC_BITSTREAM \
if (ctx->need_resync && !(get_bits_count(&ctx->gb) & 7))
#define CHECK_CELL \
if (curr_cell.xpos + curr_cell.width > (plane->width >> 2) ||               \
curr_cell.ypos + curr_cell.height > (plane->height >> 2))
static int parse_bintree(Indeo3DecodeContext *ctx, AVCodecContext *avctx,
Plane *plane, int code, Cell *ref_cell,
const int depth, const int strip_width)
static int decode_plane(Indeo3DecodeContext *ctx, AVCodecContext *avctx,
Plane *plane, const uint8_t *data, int32_t data_size,
int32_t strip_width)
#define OS_HDR_ID   MKBETAG('F', 'R', 'M', 'H')
static int decode_frame_headers(Indeo3DecodeContext *ctx, AVCodecContext *avctx,
const uint8_t *buf, int buf_size)
static void output_plane(const Plane *plane, int buf_sel, uint8_t *dst,
int dst_pitch, int dst_height)
static av_cold int decode_init(AVCodecContext *avctx)
static int decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int decode_close(AVCodecContext *avctx)
AVCodec ff_indeo3_decoder = ;
