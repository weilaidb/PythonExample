#define FRAGMENT_PIXELS 8
typedef struct Vp3Fragment  Vp3Fragment;
#define SB_NOT_CODED        0
#define SB_PARTIALLY_CODED  1
#define SB_FULLY_CODED      2
#define MAXIMUM_LONG_BIT_RUN 4129
#define MODE_INTER_NO_MV      0
#define MODE_INTRA            1
#define MODE_INTER_PLUS_MV    2
#define MODE_INTER_LAST_MV    3
#define MODE_INTER_PRIOR_LAST 4
#define MODE_USING_GOLDEN     5
#define MODE_GOLDEN_MV        6
#define MODE_INTER_FOURMV     7
#define CODING_MODE_COUNT     8
#define MODE_COPY             8
static int theora_decode_header(AVCodecContext *avctx, GetBitContext *gb);
static int theora_decode_tables(AVCodecContext *avctx, GetBitContext *gb);
static const int ModeAlphabet[6][CODING_MODE_COUNT] = ;
static const uint8_t hilbert_offset[16][2] = ;
#define MIN_DEQUANT_VAL 2
typedef struct Vp3DecodeContext  Vp3DecodeContext;
static av_cold void free_tables(AVCodecContext *avctx)
static void vp3_decode_flush(AVCodecContext *avctx)
static av_cold int vp3_decode_end(AVCodecContext *avctx)
static int init_block_mapping(Vp3DecodeContext *s)
static void init_dequantizer(Vp3DecodeContext *s, int qpi)
static void init_loop_filter(Vp3DecodeContext *s)
static int unpack_superblocks(Vp3DecodeContext *s, GetBitContext *gb)
static int unpack_modes(Vp3DecodeContext *s, GetBitContext *gb)
static int unpack_vectors(Vp3DecodeContext *s, GetBitContext *gb)
static int unpack_block_qpis(Vp3DecodeContext *s, GetBitContext *gb)
static int unpack_vlcs(Vp3DecodeContext *s, GetBitContext *gb,
VLC *table, int coeff_index,
int plane,
int eob_run)
static void reverse_dc_prediction(Vp3DecodeContext *s,
int first_fragment,
int fragment_width,
int fragment_height);
static int unpack_dct_coeffs(Vp3DecodeContext *s, GetBitContext *gb)
#define COMPATIBLE_FRAME(x)                                                   \
(compatible_frame[s->all_fragments[x].coding_method] == current_frame_type)
#define DC_COEFF(u) s->all_fragments[u].dc
static void reverse_dc_prediction(Vp3DecodeContext *s,
int first_fragment,
int fragment_width,
int fragment_height)
static void apply_loop_filter(Vp3DecodeContext *s, int plane,
int ystart, int yend)
static inline int vp3_dequant(Vp3DecodeContext *s, Vp3Fragment *frag,
int plane, int inter, int16_t block[64])
static void vp3_draw_horiz_band(Vp3DecodeContext *s, int y)
static void await_reference_row(Vp3DecodeContext *s, Vp3Fragment *fragment,
int motion_y, int y)
static void render_slice(Vp3DecodeContext *s, int slice)
static av_cold int allocate_tables(AVCodecContext *avctx)
static av_cold int init_frames(Vp3DecodeContext *s)
static av_cold int vp3_decode_init(AVCodecContext *avctx)
static int update_frames(AVCodecContext *avctx)
static int ref_frame(Vp3DecodeContext *s, ThreadFrame *dst, ThreadFrame *src)
static int ref_frames(Vp3DecodeContext *dst, Vp3DecodeContext *src)
#if HAVE_THREADS
static int vp3_update_thread_context(AVCodecContext *dst, const AVCodecContext *src)
static int vp3_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
static int read_huffman_tree(AVCodecContext *avctx, GetBitContext *gb)
#if HAVE_THREADS
static int vp3_init_thread_copy(AVCodecContext *avctx)
#if CONFIG_THEORA_DECODER
static const enum AVPixelFormat theora_pix_fmts[4] = ;
static int theora_decode_header(AVCodecContext *avctx, GetBitContext *gb)
static int theora_decode_tables(AVCodecContext *avctx, GetBitContext *gb)
static av_cold int theora_decode_init(AVCodecContext *avctx)
AVCodec ff_theora_decoder = ;
AVCodec ff_vp3_decoder = ;
