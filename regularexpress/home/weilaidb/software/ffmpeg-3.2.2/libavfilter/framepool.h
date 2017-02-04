#define AVFILTER_FRAMEPOOL_H
typedef struct FFVideoFramePool FFVideoFramePool;
*ff_video_frame_pool_init(int size),
int width,
int height,
enum AVPixelFormat format,
int align);
ff_video_frame_pool_uninit;
ff_video_frame_pool_get_config;
*ff_video_frame_pool_get;
