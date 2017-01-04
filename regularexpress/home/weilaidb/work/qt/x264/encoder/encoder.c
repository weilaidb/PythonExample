#if HAVE_INTEL_DISPATCHER
#define bs_write_ue bs_write_ue_big
static int x264_encoder_frame_end( x264_t *h, x264_t *thread_current,
x264_nal_t **pp_nal, int *pi_nal,
x264_picture_t *pic_out );
static double x264_psnr( double sqe, double size )
static double x264_ssim( double ssim )
static int x264_threadpool_wait_all( x264_t *h )
static void x264_frame_dump( x264_t *h )
static void x264_slice_header_init( x264_t *h, x264_slice_header_t *sh,
x264_sps_t *sps, x264_pps_t *pps,
int i_idr_pic_id, int i_frame, int i_qp )
static void x264_slice_header_write( bs_t *s, x264_slice_header_t *sh, int i_nal_ref_idc )
static int x264_bitstream_check_buffer_internal( x264_t *h, int size, int b_cabac, int i_nal )
static int x264_bitstream_check_buffer( x264_t *h )
static int x264_bitstream_check_buffer_filler( x264_t *h, int filler )
#if HAVE_THREAD
static void x264_encoder_thread_init( x264_t *h )
static int x264_validate_parameters( x264_t *h, int b_open )
static void mbcmp_init( x264_t *h )
static void chroma_dsp_init( x264_t *h )
static void x264_set_aspect_ratio( x264_t *h, x264_param_t *param, int initial )
x264_t *x264_encoder_open( x264_param_t *param )
static int x264_encoder_try_reconfig( x264_t *h, x264_param_t *param, int *rc_reconfig )
int x264_encoder_reconfig_apply( x264_t *h, x264_param_t *param )
int x264_encoder_reconfig( x264_t *h, x264_param_t *param )
void x264_encoder_parameters( x264_t *h, x264_param_t *param )
static void x264_nal_start( x264_t *h, int i_type, int i_ref_idc )
static int x264_nal_check_buffer( x264_t *h )
static int x264_nal_end( x264_t *h )
static int x264_check_encapsulated_buffer( x264_t *h, x264_t *h0, int start,
int previous_nal_size, int necessary_size )
static int x264_encoder_encapsulate_nals( x264_t *h, int start )
int x264_encoder_headers( x264_t *h, x264_nal_t **pp_nal, int *pi_nal )
static inline void x264_reference_check_reorder( x264_t *h )
static int x264_weighted_reference_duplicate( x264_t *h, int i_ref, const x264_weight_t *w )
static void x264_weighted_pred_init( x264_t *h )
static inline int x264_reference_distance( x264_t *h, x264_frame_t *frame )
static inline void x264_reference_build_list( x264_t *h, int i_poc )
static void x264_fdec_filter_row( x264_t *h, int mb_y, int pass )
static inline int x264_reference_update( x264_t *h )
static inline void x264_reference_reset( x264_t *h )
static inline void x264_reference_hierarchy_reset( x264_t *h )
static inline void x264_slice_init( x264_t *h, int i_nal_type, int i_global_qp )
typedef struct
x264_bs_bak_t;
static ALWAYS_INLINE void x264_bitstream_backup( x264_t *h, x264_bs_bak_t *bak, int i_skip, int full )
static ALWAYS_INLINE void x264_bitstream_restore( x264_t *h, x264_bs_bak_t *bak, int *skip, int full )
static intptr_t x264_slice_write( x264_t *h )
static void x264_thread_sync_context( x264_t *dst, x264_t *src )
static void x264_thread_sync_stat( x264_t *dst, x264_t *src )
static void *x264_slices_write( x264_t *h )
static int x264_threaded_slices_write( x264_t *h )
void x264_encoder_intra_refresh( x264_t *h )
int x264_encoder_invalidate_reference( x264_t *h, int64_t pts )
int     x264_encoder_encode( x264_t *h,
x264_nal_t **pp_nal, int *pi_nal,
x264_picture_t *pic_in,
x264_picture_t *pic_out )
static int x264_encoder_frame_end( x264_t *h, x264_t *thread_current,
x264_nal_t **pp_nal, int *pi_nal,
x264_picture_t *pic_out )
static void x264_print_intra( int64_t *i_mb_count, double i_count, int b_print_pcm, char *intra )
void    x264_encoder_close  ( x264_t *h )
int x264_encoder_delayed_frames( x264_t *h )
int x264_encoder_maximum_delayed_frames( x264_t *h )
