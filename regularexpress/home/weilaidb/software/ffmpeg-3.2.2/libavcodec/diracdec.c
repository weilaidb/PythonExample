#define MAX_REFERENCE_FRAMES 8
#define MAX_DELAY 5
#define MAX_FRAMES (MAX_REFERENCE_FRAMES + MAX_DELAY + 1)
#define MAX_QUANT 255
#define MAX_BLOCKSIZE 32
#define DIRAC_REF_MASK_REF1   1
#define DIRAC_REF_MASK_REF2   2
#define DIRAC_REF_MASK_GLOBAL 4
#define DELAYED_PIC_REF 4
#define CALC_PADDING(size, depth)                       \
(((size + (1 << depth) - 1) >> depth) << depth)
#define DIVRNDUP(a, b) (((a) + (b) - 1) / (b))
typedef struct  DiracFrame;
typedef struct  DiracBlock;
typedef struct SubBand  SubBand;
typedef struct Plane  Plane;
typedef struct DiracSlice  DiracSlice;
typedef struct DiracContext  DiracContext;
enum dirac_subband ;
static inline int divide3(int x)
static DiracFrame *remove_frame(DiracFrame *framelist[], int picnum)
static int add_frame(DiracFrame *framelist[], int maxframes, DiracFrame *frame)
static int alloc_sequence_buffers(DiracContext *s)
static int alloc_buffers(DiracContext *s, int stride)
static void free_sequence_buffers(DiracContext *s)
static av_cold int dirac_decode_init(AVCodecContext *avctx)
static void dirac_decode_flush(AVCodecContext *avctx)
static av_cold int dirac_decode_end(AVCodecContext *avctx)
static inline int coeff_unpack_golomb(GetBitContext *gb, int qfactor, int qoffset)
#define SIGN_CTX(x) (CTX_SIGN_ZERO + ((x) > 0) - ((x) < 0))
#define UNPACK_ARITH(n, type) \
static inline void coeff_unpack_arith_##n(DiracArith *c, int qfactor, int qoffset, \
SubBand *b, type *buf, int x, int y) \
\
UNPACK_ARITH(8, int16_t)
UNPACK_ARITH(10, int32_t)
static inline void codeblock(DiracContext *s, SubBand *b,
GetBitContext *gb, DiracArith *c,
int left, int right, int top, int bottom,
int blockcnt_one, int is_arith)
#define INTRA_DC_PRED(n, type) \
static inline void intra_dc_prediction_##n(SubBand *b) \
\
INTRA_DC_PRED(8, int16_t)
INTRA_DC_PRED(10, int32_t)
static av_always_inline void decode_subband_internal(DiracContext *s, SubBand *b, int is_arith)
static int decode_subband_arith(AVCodecContext *avctx, void *b)
static int decode_subband_golomb(AVCodecContext *avctx, void *arg)
static void decode_component(DiracContext *s, int comp)
#define PARSE_VALUES(type, x, gb, ebits, buf1, buf2) \
type *buf = (type *)buf1; \
buf[x] = coeff_unpack_golomb(gb, qfactor, qoffset); \
if (get_bits_count(gb) >= ebits) \
return; \
if (buf2)  \
static void decode_subband(DiracContext *s, GetBitContext *gb, int quant,
int slice_x, int slice_y, int bits_end,
SubBand *b1, SubBand *b2)
static int decode_lowdelay_slice(AVCodecContext *avctx, void *arg)
typedef struct SliceCoeffs  SliceCoeffs;
static int subband_coeffs(DiracContext *s, int x, int y, int p,
SliceCoeffs c[MAX_DWT_LEVELS])
static int decode_hq_slice(DiracContext *s, DiracSlice *slice, uint8_t *tmp_buf)
static int decode_hq_slice_row(AVCodecContext *avctx, void *arg, int jobnr, int threadnr)
static int decode_lowdelay(DiracContext *s)
static void init_planes(DiracContext *s)
static int dirac_unpack_prediction_parameters(DiracContext *s)
static int dirac_unpack_idwt_params(DiracContext *s)
static inline int pred_sbsplit(uint8_t *sbsplit, int stride, int x, int y)
static inline int pred_block_mode(DiracBlock *block, int stride, int x, int y, int refmask)
static inline void pred_block_dc(DiracBlock *block, int stride, int x, int y)
static inline void pred_mv(DiracBlock *block, int stride, int x, int y, int ref)
static void global_mv(DiracContext *s, DiracBlock *block, int x, int y, int ref)
static void decode_block_params(DiracContext *s, DiracArith arith[8], DiracBlock *block,
int stride, int x, int y)
static void propagate_block_data(DiracBlock *block, int stride, int size)
static int dirac_unpack_block_motion_data(DiracContext *s)
static int weight(int i, int blen, int offset)
static void init_obmc_weight_row(Plane *p, uint8_t *obmc_weight, int stride,
int left, int right, int wy)
static void init_obmc_weight(Plane *p, uint8_t *obmc_weight, int stride,
int left, int right, int top, int bottom)
static void init_obmc_weights(DiracContext *s, Plane *p, int by)
static const uint8_t epel_weights[4][4][4] = ;
static int mc_subpel(DiracContext *s, DiracBlock *block, const uint8_t *src[5],
int x, int y, int ref, int plane)
static void add_dc(uint16_t *dst, int dc, int stride,
uint8_t *obmc_weight, int xblen, int yblen)
static void block_mc(DiracContext *s, DiracBlock *block,
uint16_t *mctmp, uint8_t *obmc_weight,
int plane, int dstx, int dsty)
static void mc_row(DiracContext *s, DiracBlock *block, uint16_t *mctmp, int plane, int dsty)
static void select_dsp_funcs(DiracContext *s, int width, int height, int xblen, int yblen)
static int interpolate_refplane(DiracContext *s, DiracFrame *ref, int plane, int width, int height)
static int dirac_decode_frame_internal(DiracContext *s)
static int get_buffer_with_edge(AVCodecContext *avctx, AVFrame *f, int flags)
static int dirac_decode_picture_header(DiracContext *s)
static int get_delayed_pic(DiracContext *s, AVFrame *picture, int *got_frame)
#define DATA_UNIT_HEADER_SIZE 13
static int dirac_decode_data_unit(AVCodecContext *avctx, const uint8_t *buf, int size)
static int dirac_decode_frame(AVCodecContext *avctx, void *data, int *got_frame, AVPacket *pkt)
AVCodec ff_dirac_decoder = ;
