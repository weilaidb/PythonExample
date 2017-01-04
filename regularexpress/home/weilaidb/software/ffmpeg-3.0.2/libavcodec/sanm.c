#define NGLYPHS 256
#define GLYPH_COORD_VECT_SIZE 16
#define PALETTE_SIZE 256
#define PALETTE_DELTA 768
static const int8_t glyph4_x[GLYPH_COORD_VECT_SIZE] = ;
static const int8_t glyph4_y[GLYPH_COORD_VECT_SIZE] = ;
static const int8_t glyph8_x[GLYPH_COORD_VECT_SIZE] = ;
static const int8_t glyph8_y[GLYPH_COORD_VECT_SIZE] = ;
static const int8_t motion_vectors[256][2] = ;
static const int8_t c37_mv[] = ;
typedef struct SANMVideoContext  SANMVideoContext;
typedef struct SANMFrameHeader  SANMFrameHeader;
enum GlyphEdge ;
enum GlyphDir ;
static enum GlyphEdge which_edge(int x, int y, int edge_size)
static enum GlyphDir which_direction(enum GlyphEdge edge0, enum GlyphEdge edge1)
static void interp_point(int8_t *points, int x0, int y0, int x1, int y1,
int pos, int npoints)
static void make_glyphs(int8_t *pglyphs, const int8_t *xvec, const int8_t *yvec,
const int side_length)
static void init_sizes(SANMVideoContext *ctx, int width, int height)
static void destroy_buffers(SANMVideoContext *ctx)
static av_cold int init_buffers(SANMVideoContext *ctx)
static void rotate_bufs(SANMVideoContext *ctx, int rotate_code)
static av_cold int decode_init(AVCodecContext *avctx)
static av_cold int decode_end(AVCodecContext *avctx)
static int rle_decode(SANMVideoContext *ctx, uint8_t *dst, const int out_size)
static int old_codec1(SANMVideoContext *ctx, int top,
int left, int width, int height)
static inline void codec37_mv(uint8_t *dst, const uint8_t *src,
int height, int stride, int x, int y)
static int old_codec37(SANMVideoContext *ctx, int top,
int left, int width, int height)
static int process_block(SANMVideoContext *ctx, uint8_t *dst, uint8_t *prev1,
uint8_t *prev2, int stride, int tbl, int size)
static int old_codec47(SANMVideoContext *ctx, int top,
int left, int width, int height)
static int process_frame_obj(SANMVideoContext *ctx)
static int decode_0(SANMVideoContext *ctx)
static int decode_nop(SANMVideoContext *ctx)
static void copy_block(uint16_t *pdest, uint16_t *psrc, int block_size, int pitch)
static void fill_block(uint16_t *pdest, uint16_t color, int block_size, int pitch)
static int draw_glyph(SANMVideoContext *ctx, uint16_t *dst, int index,
uint16_t fg_color, uint16_t bg_color, int block_size,
int pitch)
static int opcode_0xf7(SANMVideoContext *ctx, int cx, int cy, int block_size, int pitch)
static int opcode_0xf8(SANMVideoContext *ctx, int cx, int cy, int block_size, int pitch)
static int good_mvec(SANMVideoContext *ctx, int cx, int cy, int mx, int my,
int block_size)
static int codec2subblock(SANMVideoContext *ctx, int cx, int cy, int blk_size)
static int decode_2(SANMVideoContext *ctx)
static int decode_3(SANMVideoContext *ctx)
static int decode_4(SANMVideoContext *ctx)
static int decode_5(SANMVideoContext *ctx)
static int decode_6(SANMVideoContext *ctx)
static int decode_8(SANMVideoContext *ctx)
typedef int (*frm_decoder)(SANMVideoContext *ctx);
static const frm_decoder v1_decoders[] = ;
static int read_frame_header(SANMVideoContext *ctx, SANMFrameHeader *hdr)
static void fill_frame(uint16_t *pbuf, int buf_size, uint16_t color)
static int copy_output(SANMVideoContext *ctx, SANMFrameHeader *hdr)
static int decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *pkt)
AVCodec ff_sanm_decoder = ;
