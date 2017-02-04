#define AVFILTER_FRAMESYNC_H
enum FFFrameSyncExtMode ;
typedef struct FFFrameSyncIn  FFFrameSyncIn;
typedef struct FFFrameSync  FFFrameSync;
ff_framesync_init;
ff_framesync_configure;
ff_framesync_uninit;
ff_framesync_add_frame;
ff_framesync_next;
ff_framesync_drop;
ff_framesync_get_frame;
ff_framesync_process_frame;
ff_framesync_filter_frame;
ff_framesync_request_frame;
