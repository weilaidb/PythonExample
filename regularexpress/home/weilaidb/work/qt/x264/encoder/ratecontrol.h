#define X264_RATECONTROL_H
#define BASE_FRAME_DURATION (0.04f / ((h->param.i_frame_packing == 5)+1))
#define MAX_FRAME_DURATION (1.00f / ((h->param.i_frame_packing == 5)+1))
#define MIN_FRAME_DURATION (0.01f / ((h->param.i_frame_packing == 5)+1))
#define CLIP_DURATION(f) x264_clip3f(f,MIN_FRAME_DURATION,MAX_FRAME_DURATION)
int  x264_ratecontrol_new   ( x264_t * );
void x264_ratecontrol_delete( x264_t * );
void x264_ratecontrol_init_reconfigurable( x264_t *h, int b_init );
int x264_encoder_reconfig_apply( x264_t *h, x264_param_t *param );
void x264_adaptive_quant_frame( x264_t *h, x264_frame_t *frame, float *quant_offsets );
int  x264_macroblock_tree_read( x264_t *h, x264_frame_t *frame, float *quant_offsets );
int  x264_reference_build_list_optimal( x264_t *h );
void x264_thread_sync_ratecontrol( x264_t *cur, x264_t *prev, x264_t *next );
void x264_ratecontrol_zone_init( x264_t * );
void x264_ratecontrol_start( x264_t *, int i_force_qp, int overhead );
int  x264_ratecontrol_slice_type( x264_t *, int i_frame );
void x264_ratecontrol_set_weights( x264_t *h, x264_frame_t *frm );
int  x264_ratecontrol_mb( x264_t *, int bits );
int  x264_ratecontrol_qp( x264_t * );
int  x264_ratecontrol_mb_qp( x264_t *h );
int  x264_ratecontrol_end( x264_t *, int bits, int *filler );
void x264_ratecontrol_summary( x264_t * );
void x264_ratecontrol_set_estimated_size( x264_t *, int bits );
int  x264_ratecontrol_get_estimated_size( x264_t const *);
int  x264_rc_analyse_slice( x264_t *h );
void x264_threads_distribute_ratecontrol( x264_t *h );
void x264_threads_merge_ratecontrol( x264_t *h );
void x264_hrd_fullness( x264_t *h );
