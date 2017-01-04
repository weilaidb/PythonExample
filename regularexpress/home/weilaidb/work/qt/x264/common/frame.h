#define X264_FRAME_H
#define PADH 32
#define PADV 32
typedef struct x264_frame
x264_frame_t;
typedef struct
x264_sync_frame_list_t;
typedef void (*x264_deblock_inter_t)( pixel *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 );
typedef void (*x264_deblock_intra_t)( pixel *pix, intptr_t stride, int alpha, int beta );
typedef struct
x264_deblock_function_t;
void          x264_frame_delete( x264_frame_t *frame );
int           x264_frame_copy_picture( x264_t *h, x264_frame_t *dst, x264_picture_t *src );
void          x264_frame_expand_border( x264_t *h, x264_frame_t *frame, int mb_y );
void          x264_frame_expand_border_filtered( x264_t *h, x264_frame_t *frame, int mb_y, int b_end );
void          x264_frame_expand_border_lowres( x264_frame_t *frame );
void          x264_frame_expand_border_chroma( x264_t *h, x264_frame_t *frame, int plane );
void          x264_frame_expand_border_mod16( x264_t *h, x264_frame_t *frame );
void          x264_expand_border_mbpair( x264_t *h, int mb_x, int mb_y );
void          x264_frame_deblock_row( x264_t *h, int mb_y );
void          x264_macroblock_deblock( x264_t *h );
void          x264_frame_filter( x264_t *h, x264_frame_t *frame, int mb_y, int b_end );
void          x264_frame_init_lowres( x264_t *h, x264_frame_t *frame );
void          x264_deblock_init( int cpu, x264_deblock_function_t *pf, int b_mbaff );
void          x264_frame_cond_broadcast( x264_frame_t *frame, int i_lines_completed );
void          x264_frame_cond_wait( x264_frame_t *frame, int i_lines_completed );
int           x264_frame_new_slice( x264_t *h, x264_frame_t *frame );
void          x264_threadslice_cond_broadcast( x264_t *h, int pass );
void          x264_threadslice_cond_wait( x264_t *h, int pass );
void          x264_frame_push( x264_frame_t **list, x264_frame_t *frame );
x264_frame_t *x264_frame_pop( x264_frame_t **list );
void          x264_frame_unshift( x264_frame_t **list, x264_frame_t *frame );
x264_frame_t *x264_frame_shift( x264_frame_t **list );
void          x264_frame_push_unused( x264_t *h, x264_frame_t *frame );
void          x264_frame_push_blank_unused( x264_t *h, x264_frame_t *frame );
x264_frame_t *x264_frame_pop_blank_unused( x264_t *h );
void x264_weight_scale_plane( x264_t *h, pixel *dst, intptr_t i_dst_stride, pixel *src, intptr_t i_src_stride,
int i_width, int i_height, x264_weight_t *w );
x264_frame_t *x264_frame_pop_unused( x264_t *h, int b_fdec );
void          x264_frame_delete_list( x264_frame_t **list );
int           x264_sync_frame_list_init( x264_sync_frame_list_t *slist, int nelem );
void          x264_sync_frame_list_delete( x264_sync_frame_list_t *slist );
void          x264_sync_frame_list_push( x264_sync_frame_list_t *slist, x264_frame_t *frame );
x264_frame_t *x264_sync_frame_list_pop( x264_sync_frame_list_t *slist );
