#define AVFILTER_VIDEO_H
AVFrame *ff_default_get_video_buffer(AVFilterLink *link, int w, int h);
AVFrame *ff_null_get_video_buffer(AVFilterLink *link, int w, int h);
AVFrame *ff_get_video_buffer(AVFilterLink *link, int w, int h);
