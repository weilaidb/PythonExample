#define DEFAULT_SLICE_MB_WIDTH 8
#define FF_PROFILE_PRORES_PROXY     0
#define FF_PROFILE_PRORES_LT        1
#define FF_PROFILE_PRORES_STANDARD  2
#define FF_PROFILE_PRORES_HQ        3
static const AVProfile profiles[] = ;
static const int qp_start_table[4] = ;
static const int qp_end_table[4]   = ;
static const int bitrate_table[5]  = ;
static const uint8_t progressive_scan[64] = ;
static const uint8_t QMAT_LUMA[4][64] = ;
static const uint8_t QMAT_CHROMA[4][64] = ;
typedef struct  ProresContext;
static void encode_codeword(PutBitContext *pb, int val, int codebook)
#define QSCALE(qmat,ind,val) ((val) / ((qmat)[ind]))
#define TO_GOLOMB(val) (((val) << 1) ^ ((val) >> 31))
#define DIFF_SIGN(val, sign) (((val) >> 31) ^ (sign))
#define IS_NEGATIVE(val) ((((val) >> 31) ^ -1) + 1)
#define TO_GOLOMB2(val,sign) ((val)==0 ? 0 : ((val) << 1) + (sign))
static av_always_inline int get_level(int val)
#define FIRST_DC_CB 0xB8
static const uint8_t dc_codebook[7] = ;
static void encode_dc_coeffs(PutBitContext *pb, int16_t *in,
int blocks_per_slice, int *qmat)
static const uint8_t run_to_cb[16] = ;
static const uint8_t lev_to_cb[10] = ;
static void encode_ac_coeffs(AVCodecContext *avctx, PutBitContext *pb,
int16_t *in, int blocks_per_slice, int *qmat)
static void get(uint8_t *pixels, int stride, int16_t* block)
static void fdct_get(FDCTDSPContext *fdsp, uint8_t *pixels, int stride, int16_t* block)
static int encode_slice_plane(AVCodecContext *avctx, int mb_count,
uint8_t *src, int src_stride, uint8_t *buf, unsigned buf_size,
int *qmat, int chroma)
static av_always_inline unsigned encode_slice_data(AVCodecContext *avctx,
uint8_t *dest_y, uint8_t *dest_u, uint8_t *dest_v, int luma_stride,
int chroma_stride, unsigned mb_count, uint8_t *buf, unsigned data_size,
unsigned* y_data_size, unsigned* u_data_size, unsigned* v_data_size,
int qp)
static void subimage_with_fill(uint16_t *src, unsigned x, unsigned y,
unsigned stride, unsigned width, unsigned height, uint16_t *dst,
unsigned dst_width, unsigned dst_height)
static int encode_slice(AVCodecContext *avctx, const AVFrame *pic, int mb_x,
int mb_y, unsigned mb_count, uint8_t *buf, unsigned data_size,
int unsafe, int *qp)
static int prores_encode_picture(AVCodecContext *avctx, const AVFrame *pic,
uint8_t *buf, const int buf_size)
static int prores_encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *pict, int *got_packet)
static void scale_mat(const uint8_t* src, int* dst, int scale)
static av_cold int prores_encode_init(AVCodecContext *avctx)
static av_cold int prores_encode_close(AVCodecContext *avctx)
AVCodec ff_prores_aw_encoder = ;
AVCodec ff_prores_encoder = ;
