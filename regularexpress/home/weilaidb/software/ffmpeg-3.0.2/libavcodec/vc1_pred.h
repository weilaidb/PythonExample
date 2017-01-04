#define AVCODEC_VC1_PRED_H
void ff_vc1_pred_mv(VC1Context *v, int n, int dmv_x, int dmv_y,
int mv1, int r_x, int r_y, uint8_t* is_intra,
int pred_flag, int dir);
void ff_vc1_pred_mv_intfr(VC1Context *v, int n, int dmv_x, int dmv_y,
int mvn, int r_x, int r_y, uint8_t* is_intra,
int dir);
void ff_vc1_pred_b_mv(VC1Context *v, int dmv_x[2], int dmv_y[2],
int direct, int mvtype);
void ff_vc1_pred_b_mv_intfi(VC1Context *v, int n, int *dmv_x, int *dmv_y,
int mv1, int *pred_flag);
static av_always_inline int scale_mv(int value, int bfrac, int inv, int qs)
