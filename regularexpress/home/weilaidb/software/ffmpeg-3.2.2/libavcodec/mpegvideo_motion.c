static void gmc1_motion(MpegEncContext *s,
uint8_t *dest_y, uint8_t *dest_cb, uint8_t *dest_cr,
uint8_t **ref_picture)
static void gmc_motion(MpegEncContext *s,
uint8_t *dest_y, uint8_t *dest_cb, uint8_t *dest_cr,
uint8_t **ref_picture)
static inline int hpel_motion(MpegEncContext *s,
uint8_t *dest, uint8_t *src,
int src_x, int src_y,
op_pixels_func *pix_op,
int motion_x, int motion_y)
static av_always_inline
void mpeg_motion_internal(MpegEncContext *s,
uint8_t *dest_y,
uint8_t *dest_cb,
uint8_t *dest_cr,
int field_based,
int bottom_field,
int field_select,
uint8_t **ref_picture,
op_pixels_func (*pix_op)[4],
int motion_x,
int motion_y,
int h,
int is_mpeg12,
int mb_y)
static void mpeg_motion(MpegEncContext *s,
uint8_t *dest_y, uint8_t *dest_cb, uint8_t *dest_cr,
int field_select, uint8_t **ref_picture,
op_pixels_func (*pix_op)[4],
int motion_x, int motion_y, int h, int mb_y)
static void mpeg_motion_field(MpegEncContext *s, uint8_t *dest_y,
uint8_t *dest_cb, uint8_t *dest_cr,
int bottom_field, int field_select,
uint8_t **ref_picture,
op_pixels_func (*pix_op)[4],
int motion_x, int motion_y, int h, int mb_y)
static inline void put_obmc(uint8_t *dst, uint8_t *src[5], int stride)
static inline void obmc_motion(MpegEncContext *s,
uint8_t *dest, uint8_t *src,
int src_x, int src_y,
op_pixels_func *pix_op,
int16_t mv[5][2])
#define MID    0
static inline void qpel_motion(MpegEncContext *s,
uint8_t *dest_y,
uint8_t *dest_cb,
uint8_t *dest_cr,
int field_based, int bottom_field,
int field_select, uint8_t **ref_picture,
op_pixels_func (*pix_op)[4],
qpel_mc_func (*qpix_op)[16],
int motion_x, int motion_y, int h)
static void chroma_4mv_motion(MpegEncContext *s,
uint8_t *dest_cb, uint8_t *dest_cr,
uint8_t **ref_picture,
op_pixels_func *pix_op,
int mx, int my)
static inline void prefetch_motion(MpegEncContext *s, uint8_t **pix, int dir)
static inline void apply_obmc(MpegEncContext *s,
uint8_t *dest_y,
uint8_t *dest_cb,
uint8_t *dest_cr,
uint8_t **ref_picture,
op_pixels_func (*pix_op)[4])
static inline void apply_8x8(MpegEncContext *s,
uint8_t *dest_y,
uint8_t *dest_cb,
uint8_t *dest_cr,
int dir,
uint8_t **ref_picture,
qpel_mc_func (*qpix_op)[16],
op_pixels_func (*pix_op)[4])
static av_always_inline void mpv_motion_internal(MpegEncContext *s,
uint8_t *dest_y,
uint8_t *dest_cb,
uint8_t *dest_cr,
int dir,
uint8_t **ref_picture,
op_pixels_func (*pix_op)[4],
qpel_mc_func (*qpix_op)[16],
int is_mpeg12)
void ff_mpv_motion(MpegEncContext *s,
uint8_t *dest_y, uint8_t *dest_cb,
uint8_t *dest_cr, int dir,
uint8_t **ref_picture,
op_pixels_func (*pix_op)[4],
qpel_mc_func (*qpix_op)[16])
