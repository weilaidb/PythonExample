#define P_LEFT P[1]
#define P_TOP P[2]
#define P_TOPRIGHT P[3]
#define P_MEDIAN P[4]
#define P_MV1 P[9]
#define ME_MAP_SHIFT 3
#define ME_MAP_MV_BITS 11
static int sad_hpel_motion_search(MpegEncContext * s,
int *mx_ptr, int *my_ptr, int dmin,
int src_index, int ref_index,
int size, int h);
static inline unsigned update_map_generation(MotionEstContext *c)
typedef struct MinimaMinima;
static int minima_cmp(const void *a, const void *b)
#define FLAG_QPEL   1
#define FLAG_CHROMA 2
#define FLAG_DIRECT 4
static inline void init_ref(MotionEstContext *c, uint8_t *src[3], uint8_t *ref[3], uint8_t *ref2[3], int x, int y, int ref_index)
static int get_flags(MotionEstContext *c, int direct, int chroma)
static av_always_inline int cmp_direct_inline(MpegEncContext *s, const int x, const int y, const int subx, const int suby,
const int size, const int h, int ref_index, int src_index,
me_cmp_func cmp_func, me_cmp_func chroma_cmp_func, int qpel)
static av_always_inline int cmp_inline(MpegEncContext *s, const int x, const int y, const int subx, const int suby,
const int size, const int h, int ref_index, int src_index,
me_cmp_func cmp_func, me_cmp_func chroma_cmp_func, int qpel, int chroma)
static int cmp_simple(MpegEncContext *s, const int x, const int y,
int ref_index, int src_index,
me_cmp_func cmp_func, me_cmp_func chroma_cmp_func)
static int cmp_fpel_internal(MpegEncContext *s, const int x, const int y,
const int size, const int h, int ref_index, int src_index,
me_cmp_func cmp_func, me_cmp_func chroma_cmp_func, const int flags)
static int cmp_internal(MpegEncContext *s, const int x, const int y, const int subx, const int suby,
const int size, const int h, int ref_index, int src_index,
me_cmp_func cmp_func, me_cmp_func chroma_cmp_func, const int flags)
static av_always_inline int cmp(MpegEncContext *s, const int x, const int y, const int subx, const int suby,
const int size, const int h, int ref_index, int src_index,
me_cmp_func cmp_func, me_cmp_func chroma_cmp_func, const int flags)
static int cmp_hpel(MpegEncContext *s, const int x, const int y, const int subx, const int suby,
const int size, const int h, int ref_index, int src_index,
me_cmp_func cmp_func, me_cmp_func chroma_cmp_func, const int flags)
static int cmp_qpel(MpegEncContext *s, const int x, const int y, const int subx, const int suby,
const int size, const int h, int ref_index, int src_index,
me_cmp_func cmp_func, me_cmp_func chroma_cmp_func, const int flags)
static int zero_cmp(MpegEncContext *s, uint8_t *a, uint8_t *b,
ptrdiff_t stride, int h)
static void zero_hpel(uint8_t *a, const uint8_t *b, ptrdiff_t stride, int h)
int ff_init_me(MpegEncContext *s)
#define CHECK_SAD_HALF_MV(suffix, x, y) \
static int sad_hpel_motion_search(MpegEncContext * s,
int *mx_ptr, int *my_ptr, int dmin,
int src_index, int ref_index,
int size, int h)
static inline void set_p_mv_tables(MpegEncContext * s, int mx, int my, int mv4)
static inline void get_limits(MpegEncContext *s, int x, int y)
static inline void init_mv4_ref(MotionEstContext *c)
static inline int h263_mv4_search(MpegEncContext *s, int mx, int my, int shift)
static inline void init_interlaced_ref(MpegEncContext *s, int ref_index)
static int interlaced_search(MpegEncContext *s, int ref_index,
int16_t (*mv_tables[2][2])[2], uint8_t *field_select_tables[2], int mx, int my, int user_field_select)
static inline int get_penalty_factor(int lambda, int lambda2, int type)
void ff_estimate_p_frame_motion(MpegEncContext * s,
int mb_x, int mb_y)
int ff_pre_estimate_p_frame_motion(MpegEncContext * s,
int mb_x, int mb_y)
static int estimate_motion_b(MpegEncContext *s, int mb_x, int mb_y,
int16_t (*mv_table)[2], int ref_index, int f_code)
static inline int check_bidir_mv(MpegEncContext * s,
int motion_fx, int motion_fy,
int motion_bx, int motion_by,
int pred_fx, int pred_fy,
int pred_bx, int pred_by,
int size, int h)
static inline int bidir_refine(MpegEncContext * s, int mb_x, int mb_y)
static inline int direct_search(MpegEncContext * s, int mb_x, int mb_y)
void ff_estimate_b_frame_motion(MpegEncContext * s,
int mb_x, int mb_y)
int ff_get_best_fcode(MpegEncContext * s, int16_t (*mv_table)[2], int type)
void ff_fix_long_p_mvs(MpegEncContext * s)
void ff_fix_long_mvs(MpegEncContext * s, uint8_t *field_select_table, int field_select,
int16_t (*mv_table)[2], int f_code, int type, int truncate)
