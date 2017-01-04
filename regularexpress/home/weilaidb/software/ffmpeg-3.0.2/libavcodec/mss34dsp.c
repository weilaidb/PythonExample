static const uint8_t luma_quant[64] = ;
static const uint8_t chroma_quant[64] = ;
void ff_mss34_gen_quant_mat(uint16_t *qmat, int quality, int luma)
#define DCT_TEMPLATE(blk, step, SOP, shift)                         \
const int t0 = -39409 * blk[7 * step] -  58980 * blk[1 * step]; \
const int t1 =  39410 * blk[1 * step] -  58980 * blk[7 * step]; \
const int t2 = -33410 * blk[5 * step] - 167963 * blk[3 * step]; \
const int t3 =  33410 * blk[3 * step] - 167963 * blk[5 * step]; \
const int t4 =          blk[3 * step] +          blk[7 * step]; \
const int t5 =          blk[1 * step] +          blk[5 * step]; \
const int t6 =  77062 * t4            +  51491 * t5;            \
const int t7 =  77062 * t5            -  51491 * t4;            \
const int t8 =  35470 * blk[2 * step] -  85623 * blk[6 * step]; \
const int t9 =  35470 * blk[6 * step] +  85623 * blk[2 * step]; \
const int tA = SOP(blk[0 * step] - blk[4 * step]);              \
const int tB = SOP(blk[0 * step] + blk[4 * step]);              \
\
blk[0 * step] = (  t1 + t6  + t9 + tB) >> shift;                \
blk[1 * step] = (  t3 + t7  + t8 + tA) >> shift;                \
blk[2 * step] = (  t2 + t6  - t8 + tA) >> shift;                \
blk[3 * step] = (  t0 + t7  - t9 + tB) >> shift;                \
blk[4 * step] = (-(t0 + t7) - t9 + tB) >> shift;                \
blk[5 * step] = (-(t2 + t6) - t8 + tA) >> shift;                \
blk[6 * step] = (-(t3 + t7) + t8 + tA) >> shift;                \
blk[7 * step] = (-(t1 + t6) + t9 + tB) >> shift;                \
#define SOP_ROW(a) (((a) << 16) + 0x2000)
#define SOP_COL(a) (((a) + 32) << 16)
void ff_mss34_dct_put(uint8_t *dst, int stride, int *block)
