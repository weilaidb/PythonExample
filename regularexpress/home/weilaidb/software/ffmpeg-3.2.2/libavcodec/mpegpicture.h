#define AVCODEC_MPEGPICTURE_H
#define MAX_PICTURE_COUNT 36
#define EDGE_WIDTH 16
typedef struct ScratchpadContext  ScratchpadContext;
typedef struct Picture  Picture;
ff_alloc_picture;
ff_mpeg_framesize_alloc;
ff_mpeg_ref_picture;
ff_mpeg_unref_picture;
ff_free_picture_tables;
ff_update_picture_tables;
ff_find_unused_picture;
