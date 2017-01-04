#define AVFILTER_FRAMESYNC_H
enum FFFrameSyncExtMode ;
typedef struct FFFrameSyncIn  FFFrameSyncIn;
typedef struct FFFrameSync  FFFrameSync;
int ff_framesync_init(FFFrameSync *fs, void *parent, unsigned nb_in);
int ff_framesync_configure(FFFrameSync *fs);
void ff_framesync_uninit(FFFrameSync *fs);
int ff_framesync_add_frame(FFFrameSync *fs, unsigned in, AVFrame *frame);
void ff_framesync_next(FFFrameSync *fs);
void ff_framesync_drop(FFFrameSync *fs);
int ff_framesync_get_frame(FFFrameSync *fs, unsigned in, AVFrame **rframe,
unsigned get);
int ff_framesync_process_frame(FFFrameSync *fs, unsigned all);
int ff_framesync_filter_frame(FFFrameSync *fs, AVFilterLink *inlink,
AVFrame *in);
int ff_framesync_request_frame(FFFrameSync *fs, AVFilterLink *outlink);
