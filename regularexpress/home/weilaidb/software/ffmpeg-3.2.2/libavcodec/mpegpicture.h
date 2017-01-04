#define AVCODEC_MPEGPICTURE_H
#define MAX_PICTURE_COUNT 36
#define EDGE_WIDTH 16
typedef struct ScratchpadContext  ScratchpadContext;
typedef struct Picture  Picture;
int ff_alloc_picture(AVCodecContext *avctx, Picture *pic, MotionEstContext *me,
ScratchpadContext *sc, int shared, int encoding,
int chroma_x_shift, int chroma_y_shift, int out_format,
int mb_stride, int mb_width, int mb_height, int b8_stride,
ptrdiff_t *linesize, ptrdiff_t *uvlinesize);
int ff_mpeg_framesize_alloc(AVCodecContext *avctx, MotionEstContext *me,
ScratchpadContext *sc, int linesize);
int ff_mpeg_ref_picture(AVCodecContext *avctx, Picture *dst, Picture *src);
void ff_mpeg_unref_picture(AVCodecContext *avctx, Picture *picture);
void ff_free_picture_tables(Picture *pic);
int ff_update_picture_tables(Picture *dst, Picture *src);
int ff_find_unused_picture(AVCodecContext *avctx, Picture *picture, int shared);
