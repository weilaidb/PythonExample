static const uint8_t subpel_iterations[][4] =
;
static const uint8_t mod6m1[8] = ;
static const int8_t hex2[8][2] = ;
static const int8_t square1[9][2] = ;
static void refine_subpel( x264_t *h, x264_me_t *m, int hpel_iters, int qpel_iters, int *p_halfpel_thresh, int b_refine_qpel );
#define BITS_MVD( mx, my )\
(p_cost_mvx[(mx)<<2] + p_cost_mvy[(my)<<2])
#define COST_MV( mx, my )\
do\
while( 0 )
#define COST_MV_HPEL( mx, my, cost )\
do\
while( 0 )
#define COST_MV_X3_DIR( m0x, m0y, m1x, m1y, m2x, m2y, costs )\
#define COST_MV_X4_DIR( m0x, m0y, m1x, m1y, m2x, m2y, m3x, m3y, costs )\
#define COST_MV_X4( m0x, m0y, m1x, m1y, m2x, m2y, m3x, m3y )\
#define COST_MV_X3_ABS( m0x, m0y, m1x, m1y, m2x, m2y )\
#define DIA1_ITER( mx, my )\
#define CROSS( start, x_max, y_max )\
#define FPEL(mv) (((mv)+2)>>2)
#define SPEL(mv) ((mv)<<2)
#define SPELx2(mv) (SPEL(mv)&0xFFFCFFFC)
void x264_me_search_ref( x264_t *h, x264_me_t *m, int16_t (*mvc)[2], int i_mvc, int *p_halfpel_thresh )
while( nmvsad > limit )
for( int i = 0; i < nmvsad; i++ )
COST_MV( mvsads[i].mv[0], mvsads[i].mv[1] );
}
else
}
break;
}
uint32_t bmv = pack16to32_mask(bmx,bmy);
uint32_t bmv_spel = SPELx2(bmv);
if( h->mb.i_subpel_refine < 3 )
else
if( h->mb.i_subpel_refine >= 2 )
}
#undef COST_MV
void x264_me_refine_qpel( x264_t *h, x264_me_t *m )
void x264_me_refine_qpel_refdupe( x264_t *h, x264_me_t *m, int *p_halfpel_thresh )
#define COST_MV_SAD( mx, my ) \
#define COST_MV_SATD( mx, my, dir ) \
if( b_refine_qpel || (dir^1) != odir ) \
static void refine_subpel( x264_t *h, x264_me_t *m, int hpel_iters, int qpel_iters, int *p_halfpel_thresh, int b_refine_qpel )
#define BIME_CACHE( dx, dy, list )\
#define SATD_THRESH(cost) (cost+(cost>>4))
int x264_iter_kludge = 0;
static void ALWAYS_INLINE x264_me_refine_bidir( x264_t *h, x264_me_t *m0, x264_me_t *m1, int i_weight, int i8, int i_lambda2, int rd )
void x264_me_refine_bidir_satd( x264_t *h, x264_me_t *m0, x264_me_t *m1, int i_weight )
void x264_me_refine_bidir_rd( x264_t *h, x264_me_t *m0, x264_me_t *m1, int i_weight, int i8, int i_lambda2 )
#undef COST_MV_SATD
#define COST_MV_SATD( mx, my, dst, avoid_mvp ) \
#define COST_MV_RD( mx, my, satd, do_dir, mdir ) \
void x264_me_refine_qpel_rd( x264_t *h, x264_me_t *m, int i_lambda2, int i4, int i_list )
