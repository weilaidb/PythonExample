#define P_LEFT P[1]
#define P_TOP P[2]
#define P_TOPRIGHT P[3]
#define P_MEDIAN P[4]
#define P_MV1 P[9]
#define ME_MAP_SHIFT 3
#define ME_MAP_MV_BITS 11
sad_hpel_motion_search;
update_map_generation
typedef struct MinimaMinima;
minima_cmp
#define FLAG_QPEL   1
#define FLAG_CHROMA 2
#define FLAG_DIRECT 4
init_ref
get_flags
cmp_direct_inline
cmp_inline
cmp_simple
cmp_fpel_internal
cmp_internal
cmp
cmp_hpel
cmp_qpel
zero_cmp
zero_hpel
ff_init_me
CHECK_SAD_HALF_MV \
sad_hpel_motion_search
set_p_mv_tables
get_limits
init_mv4_ref
h263_mv4_search
init_interlaced_ref
interlaced_search[2], uint8_t *field_select_tables[2], int mx, int my, int user_field_select)
get_penalty_factor
ff_estimate_p_frame_motion
ff_pre_estimate_p_frame_motion
estimate_motion_b[2], int ref_index, int f_code)
check_bidir_mv
bidir_refine
direct_search
ff_estimate_b_frame_motion
ff_get_best_fcode[2], int type)
ff_fix_long_p_mvs
ff_fix_long_mvs[2], int f_code, int type, int truncate)
