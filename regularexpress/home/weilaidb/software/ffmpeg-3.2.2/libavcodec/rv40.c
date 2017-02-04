static VLC aic_top_vlc;
static VLC aic_mode1_vlc[AIC_MODE1_NUM], aic_mode2_vlc[AIC_MODE2_NUM];
static VLC ptype_vlc[NUM_PTYPE_VLCS], btype_vlc[NUM_BTYPE_VLCS];
static const int16_t mode2_offs[] = ;
rv40_init_tables
get_dimension
rv40_parse_picture_size
rv40_parse_slice_header
rv40_decode_intra_types
rv40_decode_mb_info
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
rv40_adaptive_loop_filter
rv40_loop_filter
rv40_decode_init
AVCodec ff_rv40_decoder = ;
