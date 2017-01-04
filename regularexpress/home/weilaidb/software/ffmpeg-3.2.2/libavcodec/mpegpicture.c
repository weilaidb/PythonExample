static int make_tables_writable(Picture *pic)
int ff_mpeg_framesize_alloc(AVCodecContext *avctx, MotionEstContext *me,
ScratchpadContext *sc, int linesize)
static int alloc_frame_buffer(AVCodecContext *avctx,  Picture *pic,
MotionEstContext *me, ScratchpadContext *sc,
int chroma_x_shift, int chroma_y_shift,
int linesize, int uvlinesize)
static int alloc_picture_tables(AVCodecContext *avctx, Picture *pic, int encoding, int out_format,
int mb_stride, int mb_width, int mb_height, int b8_stride)
int ff_alloc_picture(AVCodecContext *avctx, Picture *pic, MotionEstContext *me,
ScratchpadContext *sc, int shared, int encoding,
int chroma_x_shift, int chroma_y_shift, int out_format,
int mb_stride, int mb_width, int mb_height, int b8_stride,
ptrdiff_t *linesize, ptrdiff_t *uvlinesize)
void ff_mpeg_unref_picture(AVCodecContext *avctx, Picture *pic)
int ff_update_picture_tables(Picture *dst, Picture *src)
int ff_mpeg_ref_picture(AVCodecContext *avctx, Picture *dst, Picture *src)
static inline int pic_is_unused(Picture *pic)
static int find_unused_picture(AVCodecContext *avctx, Picture *picture, int shared)
int ff_find_unused_picture(AVCodecContext *avctx, Picture *picture, int shared)
void ff_free_picture_tables(Picture *pic)
