static av_always_inline int scaleforsame_x(VC1Context *v, int n, int dir)
static av_always_inline int scaleforsame_y(VC1Context *v, int i, int n, int dir)
static av_always_inline int scaleforopp_x(VC1Context *v, int n)
static av_always_inline int scaleforopp_y(VC1Context *v, int n, int dir)
static av_always_inline int scaleforsame(VC1Context *v, int i, int n,
int dim, int dir)
static av_always_inline int scaleforopp(VC1Context *v, int n,
int dim, int dir)
void ff_vc1_pred_mv(VC1Context *v, int n, int dmv_x, int dmv_y,
int mv1, int r_x, int r_y, uint8_t* is_intra,
int pred_flag, int dir)
void ff_vc1_pred_mv_intfr(VC1Context *v, int n, int dmv_x, int dmv_y,
int mvn, int r_x, int r_y, uint8_t* is_intra, int dir)
void ff_vc1_pred_b_mv(VC1Context *v, int dmv_x[2], int dmv_y[2],
int direct, int mvtype)
void ff_vc1_pred_b_mv_intfi(VC1Context *v, int n, int *dmv_x, int *dmv_y,
int mv1, int *pred_flag)
