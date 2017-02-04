static const uint8_t l0_l1_cand_idx[12][2] = ;
ff_hevc_set_neighbour_available
z_scan_block_avail
is_diff_mer
MATCH_MV (AV_RN32A(&A.x) == AV_RN32A(&B.x))
MATCH (A.x == B.x)
compare_mv_ref_idx
mv_scale
check_mvset
CHECK_MVSET                                          \
check_mvset(mvLXCol, temp_col.mv + l,                       \
colPic, s->poc,                                 \
refPicList, X, refIdxLx,                        \
refPicList_col, L ## l, temp_col.ref_idx[l])
derive_temporal_colocated_mvs
TAB_MVF                                                   \
tab_mvf[(y) * min_pu_width + x]
TAB_MVF_PU                                                   \
TAB_MVF(((x ## v) >> s->ps.sps->log2_min_pu_size),                     \
((y ## v) >> s->ps.sps->log2_min_pu_size))
#define DERIVE_TEMPORAL_COLOCATED_MVS                                   \
derive_temporal_colocated_mvs(s, temp_col,                          \
refIdxLx, mvLXCol, X, colPic,         \
ff_hevc_get_ref_list(s, ref, x, y))
temporal_luma_motion_vector
AVAILABLE                                      \
(cand && !(TAB_MVF_PU(v).pred_flag == PF_INTRA))
PRED_BLOCK_AVAILABLE                                 \
z_scan_block_avail(s, x0, y0, x ## v, y ## v)
COMPARE_MV_REFIDX                                 \
compare_mv_ref_idx(TAB_MVF_PU(a), TAB_MVF_PU(b))
derive_spatial_merge_candidates
ff_hevc_luma_mv_merge_mode
dist_scale
mv_mp_mode_mx
mv_mp_mode_mx_lt
MP_MX                                      \
mv_mp_mode_mx(s,                                            \
(x ## v) >> s->ps.sps->log2_min_pu_size,         \
(y ## v) >> s->ps.sps->log2_min_pu_size,         \
pred, &mx, ref_idx_curr, ref_idx)
MP_MX_LT                                   \
mv_mp_mode_mx_lt(s,                                         \
(x ## v) >> s->ps.sps->log2_min_pu_size,      \
(y ## v) >> s->ps.sps->log2_min_pu_size,      \
pred, &mx, ref_idx_curr, ref_idx)
ff_hevc_luma_mv_mvp_mode
