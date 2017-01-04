#define SHL(a, n) ((n) >= 0 ? (a) << (n) : (a) >> -(n))
static int32_t tag_tree_size(int w, int h)
static Jpeg2000TgtNode *ff_jpeg2000_tag_tree_init(int w, int h)
static void tag_tree_zero(Jpeg2000TgtNode *t, int w, int h)
uint8_t ff_jpeg2000_sigctxno_lut[256][4];
static int getsigctxno(int flag, int bandno)
uint8_t ff_jpeg2000_sgnctxno_lut[16][16], ff_jpeg2000_xorbit_lut[16][16];
static const int contribtab[3][3] = ;
static const int  ctxlbltab[3][3] = ;
static const int  xorbittab[3][3] = ;
static int getsgnctxno(int flag, uint8_t *xorbit)
void av_cold ff_jpeg2000_init_tier1_luts(void)
void ff_jpeg2000_set_significance(Jpeg2000T1Context *t1, int x, int y,
int negative)
static void init_band_stepsize(AVCodecContext *avctx,
Jpeg2000Band *band,
Jpeg2000CodingStyle *codsty,
Jpeg2000QuantStyle *qntsty,
int bandno, int gbandno, int reslevelno,
int cbps)
static int init_prec(Jpeg2000Band *band,
Jpeg2000ResLevel *reslevel,
Jpeg2000Component *comp,
int precno, int bandno, int reslevelno,
int log2_band_prec_width,
int log2_band_prec_height)
static int init_band(AVCodecContext *avctx,
Jpeg2000ResLevel *reslevel,
Jpeg2000Component *comp,
Jpeg2000CodingStyle *codsty,
Jpeg2000QuantStyle *qntsty,
int bandno, int gbandno, int reslevelno,
int cbps, int dx, int dy)
int ff_jpeg2000_init_component(Jpeg2000Component *comp,
Jpeg2000CodingStyle *codsty,
Jpeg2000QuantStyle *qntsty,
int cbps, int dx, int dy,
AVCodecContext *avctx)
void ff_jpeg2000_reinit(Jpeg2000Component *comp, Jpeg2000CodingStyle *codsty)
void ff_jpeg2000_cleanup(Jpeg2000Component *comp, Jpeg2000CodingStyle *codsty)
