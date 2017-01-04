static VLC aic_top_vlc;
static VLC aic_mode1_vlc[AIC_MODE1_NUM], aic_mode2_vlc[AIC_MODE2_NUM];
static VLC ptype_vlc[NUM_PTYPE_VLCS], btype_vlc[NUM_BTYPE_VLCS];
static const int16_t mode2_offs[] = ;
static av_cold void rv40_init_tables(void)
static int get_dimension(GetBitContext *gb, const int *dim)
static void rv40_parse_picture_size(GetBitContext *gb, int *w, int *h)
static int rv40_parse_slice_header(RV34DecContext *r, GetBitContext *gb, SliceInfo *si)
static int rv40_decode_intra_types(RV34DecContext *r, GetBitContext *gb, int8_t *dst)
static int rv40_decode_mb_info(RV34DecContext *r)
enum RV40BlockPos;
#define MASK_CUR          0x0001
#define MASK_RIGHT        0x0008
#define MASK_BOTTOM       0x0010
#define MASK_TOP          0x1000
#define MASK_Y_TOP_ROW    0x000F
#define MASK_Y_LAST_ROW   0xF000
#define MASK_Y_LEFT_COL   0x1111
#define MASK_Y_RIGHT_COL  0x8888
#define MASK_C_TOP_ROW    0x0003
#define MASK_C_LAST_ROW   0x000C
#define MASK_C_LEFT_COL   0x0005
#define MASK_C_RIGHT_COL  0x000A
static const int neighbour_offs_x[4] = ;
static const int neighbour_offs_y[4] = ;
static void rv40_adaptive_loop_filter(RV34DSPContext *rdsp,
uint8_t *src, int stride, int dmode,
int lim_q1, int lim_p1,
int alpha, int beta, int beta2,
int chroma, int edge, int dir)
static void rv40_loop_filter(RV34DecContext *r, int row)
static av_cold int rv40_decode_init(AVCodecContext *avctx)
AVCodec ff_rv40_decoder = ;
