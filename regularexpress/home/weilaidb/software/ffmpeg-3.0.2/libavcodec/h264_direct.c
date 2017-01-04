static int get_scale_factor(H264SliceContext *sl,
int poc, int poc1, int i)
void ff_h264_direct_dist_scale_factor(const H264Context *const h,
H264SliceContext *sl)
static void fill_colmap(const H264Context *h, H264SliceContext *sl,
int map[2][16 + 32], int list,
int field, int colfield, int mbafi)
void ff_h264_direct_ref_list_init(const H264Context *const h, H264SliceContext *sl)
static void await_reference_mb_row(const H264Context *const h, H264Ref *ref,
int mb_y)
static void pred_spatial_direct_motion(const H264Context *const h, H264SliceContext *sl,
int *mb_type)
static void pred_temp_direct_motion(const H264Context *const h, H264SliceContext *sl,
int *mb_type)
void ff_h264_pred_direct_motion(const H264Context *const h, H264SliceContext *sl,
int *mb_type)
