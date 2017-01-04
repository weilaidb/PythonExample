#define X264_ME_H
#define COST_MAX (1<<28)
#define COST_MAX64 (1ULL<<60)
typedef struct
ALIGNED_16( x264_me_t );
void x264_me_search_ref( x264_t *h, x264_me_t *m, int16_t (*mvc)[2], int i_mvc, int *p_fullpel_thresh );
#define x264_me_search( h, m, mvc, i_mvc )\
x264_me_search_ref( h, m, mvc, i_mvc, NULL )
void x264_me_refine_qpel( x264_t *h, x264_me_t *m );
void x264_me_refine_qpel_refdupe( x264_t *h, x264_me_t *m, int *p_halfpel_thresh );
void x264_me_refine_qpel_rd( x264_t *h, x264_me_t *m, int i_lambda2, int i4, int i_list );
void x264_me_refine_bidir_rd( x264_t *h, x264_me_t *m0, x264_me_t *m1, int i_weight, int i8, int i_lambda2 );
void x264_me_refine_bidir_satd( x264_t *h, x264_me_t *m0, x264_me_t *m1, int i_weight );
uint64_t x264_rd_cost_part( x264_t *h, int i_lambda2, int i8, int i_pixel );
extern uint16_t *x264_cost_mv_fpel[QP_MAX+1][4];
#define COPY1_IF_LT(x,y)\
if( (y) < (x) )\
(x) = (y);
#define COPY2_IF_LT(x,y,a,b)\
if( (y) < (x) )\
#define COPY3_IF_LT(x,y,a,b,c,d)\
if( (y) < (x) )\
#define COPY4_IF_LT(x,y,a,b,c,d,e,f)\
if( (y) < (x) )\
#define COPY2_IF_GT(x,y,a,b)\
if( (y) > (x) )\
