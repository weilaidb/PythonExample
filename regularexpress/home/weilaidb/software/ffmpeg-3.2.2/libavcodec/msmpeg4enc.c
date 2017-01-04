static uint8_t rl_length[NB_RL_TABLES][MAX_LEVEL+1][MAX_RUN+1][2];
static av_cold int init_mv_table(MVTable *tab)
void ff_msmpeg4_code012(PutBitContext *pb, int n)
static int get_size_of_code(MpegEncContext * s, RLTable *rl, int last, int run, int level, int intra)
av_cold int ff_msmpeg4_encode_init(MpegEncContext *s)
static void find_best_tables(MpegEncContext * s)
void ff_msmpeg4_encode_picture_header(MpegEncContext * s, int picture_number)
void ff_msmpeg4_encode_ext_header(MpegEncContext * s)
void ff_msmpeg4_encode_motion(MpegEncContext * s,
int mx, int my)
void ff_msmpeg4_handle_slices(MpegEncContext *s)
static void msmpeg4v2_encode_motion(MpegEncContext * s, int val)
void ff_msmpeg4_encode_mb(MpegEncContext * s,
int16_t block[6][64],
int motion_x, int motion_y)
static void msmpeg4_encode_dc(MpegEncContext * s, int level, int n, int *dir_ptr)
void ff_msmpeg4_encode_block(MpegEncContext * s, int16_t * block, int n)
