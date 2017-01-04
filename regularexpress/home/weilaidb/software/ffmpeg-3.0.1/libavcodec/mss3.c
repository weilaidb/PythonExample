#define HEADER_SIZE 27
#define MODEL2_SCALE       13
#define MODEL_SCALE        15
#define MODEL256_SEC_SCALE  9
typedef struct Model2  Model2;
typedef struct Model  Model;
typedef struct Model256  Model256;
#define RAC_BOTTOM 0x01000000
typedef struct RangeCoder  RangeCoder;
enum BlockType ;
typedef struct BlockTypeContext  BlockTypeContext;
typedef struct FillBlockCoder  FillBlockCoder;
typedef struct ImageBlockCoder  ImageBlockCoder;
typedef struct DCTBlockCoder  DCTBlockCoder;
typedef struct HaarBlockCoder  HaarBlockCoder;
typedef struct MSS3Context  MSS3Context;
static void model2_reset(Model2 *m)
static void model2_update(Model2 *m, int bit)
static void model_update(Model *m, int val)
static void model_reset(Model *m)
static av_cold void model_init(Model *m, int num_syms)
static void model256_update(Model256 *m, int val)
static void model256_reset(Model256 *m)
static av_cold void model256_init(Model256 *m)
static void rac_init(RangeCoder *c, const uint8_t *src, int size)
static void rac_normalise(RangeCoder *c)
static int rac_get_bit(RangeCoder *c)
static int rac_get_bits(RangeCoder *c, int nbits)
static int rac_get_model2_sym(RangeCoder *c, Model2 *m)
static int rac_get_model_sym(RangeCoder *c, Model *m)
static int rac_get_model256_sym(RangeCoder *c, Model256 *m)
static int decode_block_type(RangeCoder *c, BlockTypeContext *bt)
static int decode_coeff(RangeCoder *c, Model *m)
static void decode_fill_block(RangeCoder *c, FillBlockCoder *fc,
uint8_t *dst, int stride, int block_size)
static void decode_image_block(RangeCoder *c, ImageBlockCoder *ic,
uint8_t *dst, int stride, int block_size)
static int decode_dct(RangeCoder *c, DCTBlockCoder *bc, int *block,
int bx, int by)
static void decode_dct_block(RangeCoder *c, DCTBlockCoder *bc,
uint8_t *dst, int stride, int block_size,
int *block, int mb_x, int mb_y)
static void decode_haar_block(RangeCoder *c, HaarBlockCoder *hc,
uint8_t *dst, int stride, int block_size,
int *block)
static void reset_coders(MSS3Context *ctx, int quality)
static av_cold void init_coders(MSS3Context *ctx)
static int mss3_decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int mss3_decode_end(AVCodecContext *avctx)
static av_cold int mss3_decode_init(AVCodecContext *avctx)
AVCodec ff_msa1_decoder = ;
