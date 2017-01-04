static const uint8_t l0_l1_cand_idx[12][2] = ;
void ff_hevc_set_neighbour_available(HEVCContext *s, int x0, int y0,
int nPbW, int nPbH)
static av_always_inline int z_scan_block_avail(HEVCContext *s, int xCurr, int yCurr,
int xN, int yN)
static av_always_inline int is_diff_mer(HEVCContext *s, int xN, int yN, int xP, int yP)
#define MATCH_MV(x) (AV_RN32A(&A.x) == AV_RN32A(&B.x))
#define MATCH(x) (A.x == B.x)
static av_always_inline int compare_mv_ref_idx(struct MvField A, struct MvField B)
static av_always_inline void mv_scale(Mv *dst, Mv *src, int td, int tb)
static int check_mvset(Mv *mvLXCol, Mv *mvCol,
int colPic, int poc,
RefPicList *refPicList, int X, int refIdxLx,
RefPicList *refPicList_col, int listCol, int refidxCol)
#define CHECK_MVSET(l)                                          \
check_mvset(mvLXCol, temp_col.mv + l,                       \
colPic, s->poc,                                 \
refPicList, X, refIdxLx,                        \
refPicList_col, L ## l, temp_col.ref_idx[l])
static int derive_temporal_colocated_mvs(HEVCContext *s, MvField temp_col,
int refIdxLx, Mv *mvLXCol, int X,
int colPic, RefPicList *refPicList_col)
#define TAB_MVF(x, y)                                                   \
tab_mvf[(y) * min_pu_width + x]
#define TAB_MVF_PU(v)                                                   \
TAB_MVF(((x ## v) >> s->ps.sps->log2_min_pu_size),                     \
((y ## v) >> s->ps.sps->log2_min_pu_size))
#define DERIVE_TEMPORAL_COLOCATED_MVS                                   \
derive_temporal_colocated_mvs(s, temp_col,                          \
refIdxLx, mvLXCol, X, colPic,         \
ff_hevc_get_ref_list(s, ref, x, y))
static int temporal_luma_motion_vector(HEVCContext *s, int x0, int y0,
int nPbW, int nPbH, int refIdxLx,
Mv *mvLXCol, int X)
#define AVAILABLE(cand, v)                                      \
(cand && !(TAB_MVF_PU(v).pred_flag == PF_INTRA))
#define PRED_BLOCK_AVAILABLE(v)                                 \
z_scan_block_avail(s, x0, y0, x ## v, y ## v)
#define COMPARE_MV_REFIDX(a, b)                                 \
compare_mv_ref_idx(TAB_MVF_PU(a), TAB_MVF_PU(b))
static void derive_spatial_merge_candidates(HEVCContext *s, int x0, int y0,
int nPbW, int nPbH,
int log2_cb_size,
int singleMCLFlag, int part_idx,
int merge_idx,
struct MvField mergecandlist[])
void ff_hevc_luma_mv_merge_mode(HEVCContext *s, int x0, int y0, int nPbW,
int nPbH, int log2_cb_size, int part_idx,
int merge_idx, MvField *mv)
static av_always_inline void dist_scale(HEVCContext *s, Mv *mv,
int min_pu_width, int x, int y,
int elist, int ref_idx_curr, int ref_idx)
static int mv_mp_mode_mx(HEVCContext *s, int x, int y, int pred_flag_index,
Mv *mv, int ref_idx_curr, int ref_idx)
static int mv_mp_mode_mx_lt(HEVCContext *s, int x, int y, int pred_flag_index,
Mv *mv, int ref_idx_curr, int ref_idx)
#define MP_MX(v, pred, mx)                                      \
mv_mp_mode_mx(s,                                            \
(x ## v) >> s->ps.sps->log2_min_pu_size,         \
(y ## v) >> s->ps.sps->log2_min_pu_size,         \
pred, &mx, ref_idx_curr, ref_idx)
#define MP_MX_LT(v, pred, mx)                                   \
mv_mp_mode_mx_lt(s,                                         \
(x ## v) >> s->ps.sps->log2_min_pu_size,      \
(y ## v) >> s->ps.sps->log2_min_pu_size,      \
pred, &mx, ref_idx_curr, ref_idx)
void ff_hevc_luma_mv_mvp_mode(HEVCContext *s, int x0, int y0, int nPbW,
int nPbH, int log2_cb_size, int part_idx,
int merge_idx, MvField *mv,
int mvp_lx_flag, int LX)
