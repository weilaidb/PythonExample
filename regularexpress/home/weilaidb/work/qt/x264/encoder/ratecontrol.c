#undef NDEBUG
typedef struct
ratecontrol_entry_t;
typedef struct
predictor_t;
struct x264_ratecontrol_t
;
static int parse_zones( x264_t *h );
static int init_pass2(x264_t *);
static float rate_estimate_qscale( x264_t *h );
static int update_vbv( x264_t *h, int bits );
static void update_vbv_plan( x264_t *h, int overhead );
static float predict_size( predictor_t *p, float q, float var );
static void update_predictor( predictor_t *p, float q, float var, float bits );
#define CMP_OPT_FIRST_PASS( opt, param_val )\
static inline float qp2qscale( float qp )
static inline float qscale2qp( float qscale )
static inline double qscale2bits( ratecontrol_entry_t *rce, double qscale )
static ALWAYS_INLINE uint32_t ac_energy_var( uint64_t sum_ssd, int shift, x264_frame_t *frame, int i, int b_store )
static ALWAYS_INLINE uint32_t ac_energy_plane( x264_t *h, int mb_x, int mb_y, x264_frame_t *frame, int i, int b_chroma, int b_field, int b_store )
static NOINLINE uint32_t x264_ac_energy_mb( x264_t *h, int mb_x, int mb_y, x264_frame_t *frame )
void x264_adaptive_quant_frame( x264_t *h, x264_frame_t *frame, float *quant_offsets )
static int x264_macroblock_tree_rescale_init( x264_t *h, x264_ratecontrol_t *rc )
static void x264_macroblock_tree_rescale_destroy( x264_ratecontrol_t *rc )
static ALWAYS_INLINE float tapfilter( float *src, int pos, int max, int stride, float *coeff, int filtersize )
static void x264_macroblock_tree_rescale( x264_t *h, x264_ratecontrol_t *rc, float *dst )
int x264_macroblock_tree_read( x264_t *h, x264_frame_t *frame, float *quant_offsets )
int x264_reference_build_list_optimal( x264_t *h )
static char *x264_strcat_filename( char *input, char *suffix )
void x264_ratecontrol_init_reconfigurable( x264_t *h, int b_init )
int x264_ratecontrol_new( x264_t *h )
static int parse_zone( x264_t *h, x264_zone_t *z, char *p )
static int parse_zones( x264_t *h )
static x264_zone_t *get_zone( x264_t *h, int frame_num )
void x264_ratecontrol_summary( x264_t *h )
void x264_ratecontrol_delete( x264_t *h )
static void accum_p_qp_update( x264_t *h, float qp )
void x264_ratecontrol_zone_init( x264_t *h )
void x264_ratecontrol_start( x264_t *h, int i_force_qp, int overhead )
static float predict_row_size( x264_t *h, int y, float qscale )
static int row_bits_so_far( x264_t *h, int y )
static float predict_row_size_to_end( x264_t *h, int y, float qp )
int x264_ratecontrol_mb( x264_t *h, int bits )
int x264_ratecontrol_qp( x264_t *h )
int x264_ratecontrol_mb_qp( x264_t *h )
int x264_ratecontrol_slice_type( x264_t *h, int frame_num )
void x264_ratecontrol_set_weights( x264_t *h, x264_frame_t *frm )
int x264_ratecontrol_end( x264_t *h, int bits, int *filler )
static double get_qscale(x264_t *h, ratecontrol_entry_t *rce, double rate_factor, int frame_num)
static double get_diff_limited_q(x264_t *h, ratecontrol_entry_t *rce, double q, int frame_num)
static float predict_size( predictor_t *p, float q, float var )
static void update_predictor( predictor_t *p, float q, float var, float bits )
static int update_vbv( x264_t *h, int bits )
void x264_hrd_fullness( x264_t *h )
static void update_vbv_plan( x264_t *h, int overhead )
static double clip_qscale( x264_t *h, int pict_type, double q )
static float rate_estimate_qscale( x264_t *h )
static void x264_threads_normalize_predictors( x264_t *h )
void x264_threads_distribute_ratecontrol( x264_t *h )
void x264_threads_merge_ratecontrol( x264_t *h )
void x264_thread_sync_ratecontrol( x264_t *cur, x264_t *prev, x264_t *next )
static int find_underflow( x264_t *h, double *fills, int *t0, int *t1, int over )
static int fix_underflow( x264_t *h, int t0, int t1, double adjustment, double qscale_min, double qscale_max )
static double count_expected_bits( x264_t *h )
static int vbv_pass2( x264_t *h, double all_available_bits )
static int init_pass2( x264_t *h )
