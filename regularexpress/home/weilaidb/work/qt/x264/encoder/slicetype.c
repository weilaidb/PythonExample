static const uint8_t delta_tfi_divisor[10] = ;
static int x264_slicetype_frame_cost( x264_t *h, x264_mb_analysis_t *a,
x264_frame_t **frames, int p0, int p1, int b );
void x264_weights_analyse( x264_t *h, x264_frame_t *fenc, x264_frame_t *ref, int b_lookahead );
#if HAVE_OPENCL
int x264_opencl_lowres_init( x264_t *h, x264_frame_t *fenc, int lambda );
int x264_opencl_motionsearch( x264_t *h, x264_frame_t **frames, int b, int ref, int b_islist1, int lambda, const x264_weight_t *w );
int x264_opencl_finalize_cost( x264_t *h, int lambda, x264_frame_t **frames, int p0, int p1, int b, int dist_scale_factor );
int x264_opencl_precalculate_frame_cost( x264_t *h, x264_frame_t **frames, int lambda, int p0, int p1, int b );
void x264_opencl_flush( x264_t *h );
void x264_opencl_slicetype_prep( x264_t *h, x264_frame_t **frames, int num_frames, int lambda );
void x264_opencl_slicetype_end( x264_t *h );
static void x264_lowres_context_init( x264_t *h, x264_mb_analysis_t *a )
static void x264_weight_get_h264( int weight_nonh264, int offset, x264_weight_t *w )
static NOINLINE pixel *x264_weight_cost_init_luma( x264_t *h, x264_frame_t *fenc, x264_frame_t *ref, pixel *dest )
static NOINLINE void x264_weight_cost_init_chroma( x264_t *h, x264_frame_t *fenc, x264_frame_t *ref, pixel *dstu, pixel *dstv )
static NOINLINE pixel *x264_weight_cost_init_chroma444( x264_t *h, x264_frame_t *fenc, x264_frame_t *ref, pixel *dst, int p )
static int x264_weight_slice_header_cost( x264_t *h, x264_weight_t *w, int b_chroma )
static NOINLINE unsigned int x264_weight_cost_luma( x264_t *h, x264_frame_t *fenc, pixel *src, x264_weight_t *w )
static NOINLINE unsigned int x264_weight_cost_chroma( x264_t *h, x264_frame_t *fenc, pixel *ref, x264_weight_t *w )
static NOINLINE unsigned int x264_weight_cost_chroma444( x264_t *h, x264_frame_t *fenc, pixel *ref, x264_weight_t *w, int p )
void x264_weights_analyse( x264_t *h, x264_frame_t *fenc, x264_frame_t *ref, int b_lookahead )
#define PAD_SIZE 32
#define NUM_INTS 4
#define COST_EST 0
#define COST_EST_AQ 1
#define INTRA_MBS 2
#define NUM_ROWS 3
#define ROW_SATD (NUM_INTS + (h->mb.i_mb_y - h->i_threadslice_start))
static void x264_slicetype_mb_cost( x264_t *h, x264_mb_analysis_t *a,
x264_frame_t **frames, int p0, int p1, int b,
int dist_scale_factor, int do_search[2], const x264_weight_t *w,
int *output_inter, int *output_intra )
#undef TRY_BIDIR
#define NUM_MBS\
(h->mb.i_mb_width > 2 && h->mb.i_mb_height > 2 ?\
(h->mb.i_mb_width - 2) * (h->mb.i_mb_height - 2) :\
h->mb.i_mb_width * h->mb.i_mb_height)
typedef struct
x264_slicetype_slice_t;
static void x264_slicetype_slice_cost( x264_slicetype_slice_t *s )
static int x264_slicetype_frame_cost( x264_t *h, x264_mb_analysis_t *a,
x264_frame_t **frames, int p0, int p1, int b )
static int x264_slicetype_frame_cost_recalculate( x264_t *h, x264_frame_t **frames, int p0, int p1, int b )
#define MBTREE_PRECISION 0.5f
static void x264_macroblock_tree_finish( x264_t *h, x264_frame_t *frame, float average_duration, int ref0_distance )
static void x264_macroblock_tree_propagate( x264_t *h, x264_frame_t **frames, float average_duration, int p0, int p1, int b, int referenced )
static void x264_macroblock_tree( x264_t *h, x264_mb_analysis_t *a, x264_frame_t **frames, int num_frames, int b_intra )
static int x264_vbv_frame_cost( x264_t *h, x264_mb_analysis_t *a, x264_frame_t **frames, int p0, int p1, int b )
static void x264_calculate_durations( x264_t *h, x264_frame_t *cur_frame, x264_frame_t *prev_frame, int64_t *i_cpb_delay, int64_t *i_coded_fields )
static void x264_vbv_lookahead( x264_t *h, x264_mb_analysis_t *a, x264_frame_t **frames, int num_frames, int keyframe )
static int x264_slicetype_path_cost( x264_t *h, x264_mb_analysis_t *a, x264_frame_t **frames, char *path, int threshold )
static void x264_slicetype_path( x264_t *h, x264_mb_analysis_t *a, x264_frame_t **frames, int length, char (*best_paths)[X264_LOOKAHEAD_MAX+1] )
static int scenecut_internal( x264_t *h, x264_mb_analysis_t *a, x264_frame_t **frames, int p0, int p1, int real_scenecut )
static int scenecut( x264_t *h, x264_mb_analysis_t *a, x264_frame_t **frames, int p0, int p1, int real_scenecut, int num_frames, int i_max_search )
#define IS_X264_TYPE_AUTO_OR_I(x) ((x)==X264_TYPE_AUTO || IS_X264_TYPE_I(x))
#define IS_X264_TYPE_AUTO_OR_B(x) ((x)==X264_TYPE_AUTO || IS_X264_TYPE_B(x))
void x264_slicetype_analyse( x264_t *h, int intra_minigop )
void x264_slicetype_decide( x264_t *h )
int x264_rc_analyse_slice( x264_t *h )
