struct FFVideoFramePool ;
FFVideoFramePool *ff_video_frame_pool_init(AVBufferRef* (*alloc)(int size),
int width,
int height,
enum AVPixelFormat format,
int align)
int ff_video_frame_pool_get_config(FFVideoFramePool *pool,
int *width,
int *height,
enum AVPixelFormat *format,
int *align)
AVFrame *ff_video_frame_pool_get(FFVideoFramePool *pool)
void ff_video_frame_pool_uninit(FFVideoFramePool **pool)
