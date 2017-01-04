#define X264_MC_H
#define MC_CLIP_ADD(s,x) (s) = X264_MIN((s)+(x),(1<<15)-1)
#define MC_CLIP_ADD2(s,x)\
do\
while( 0 )
#define PROPAGATE_LIST(cpu)\
void x264_mbtree_propagate_list_internal_##cpu( int16_t (*mvs)[2], int16_t *propagate_amount,\
uint16_t *lowres_costs, int16_t *output,\
int bipred_weight, int mb_y, int len );\
\
static void x264_mbtree_propagate_list_##cpu( x264_t *h, uint16_t *ref_costs, int16_t (*mvs)[2],\
int16_t *propagate_amount, uint16_t *lowres_costs,\
int bipred_weight, int mb_y, int len, int list )\
void x264_plane_copy_c( pixel *, intptr_t, pixel *, intptr_t, int w, int h );
#define PLANE_COPY(align, cpu)\
static void x264_plane_copy_##cpu( pixel *dst, intptr_t i_dst, pixel *src, intptr_t i_src, int w, int h )\
void x264_plane_copy_swap_c( pixel *, intptr_t, pixel *, intptr_t, int w, int h );
#define PLANE_COPY_SWAP(align, cpu)\
static void x264_plane_copy_swap_##cpu( pixel *dst, intptr_t i_dst, pixel *src, intptr_t i_src, int w, int h )\
void x264_plane_copy_interleave_c( pixel *dst,  intptr_t i_dst,
pixel *srcu, intptr_t i_srcu,
pixel *srcv, intptr_t i_srcv, int w, int h );
#define PLANE_INTERLEAVE(cpu) \
static void x264_plane_copy_interleave_##cpu( pixel *dst,  intptr_t i_dst,\
pixel *srcu, intptr_t i_srcu,\
pixel *srcv, intptr_t i_srcv, int w, int h )\
struct x264_weight_t;
typedef void (* weight_fn_t)( pixel *, intptr_t, pixel *,intptr_t, const struct x264_weight_t *, int );
typedef struct x264_weight_t
ALIGNED_16( x264_weight_t );
extern const x264_weight_t x264_weight_none[3];
extern const uint8_t x264_hpel_ref0[16];
extern const uint8_t x264_hpel_ref1[16];
#define SET_WEIGHT( w, b, s, d, o )\
typedef struct
x264_mc_functions_t;
void x264_mc_init( int cpu, x264_mc_functions_t *pf, int cpu_independent );
