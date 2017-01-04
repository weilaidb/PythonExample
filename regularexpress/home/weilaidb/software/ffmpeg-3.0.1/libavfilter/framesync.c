#define OFFSET(member) offsetof(FFFrameSync, member)
static const char *framesync_name(void *ptr)
static const AVClass framesync_class = ;
enum ;
int ff_framesync_init(FFFrameSync *fs, void *parent, unsigned nb_in)
static void framesync_sync_level_update(FFFrameSync *fs)
int ff_framesync_configure(FFFrameSync *fs)
static void framesync_advance(FFFrameSync *fs)
static int64_t framesync_pts_extrapolate(FFFrameSync *fs, unsigned in,
int64_t pts)
static void framesync_inject_frame(FFFrameSync *fs, unsigned in, AVFrame *frame)
int ff_framesync_add_frame(FFFrameSync *fs, unsigned in, AVFrame *frame)
void ff_framesync_next(FFFrameSync *fs)
void ff_framesync_drop(FFFrameSync *fs)
int ff_framesync_get_frame(FFFrameSync *fs, unsigned in, AVFrame **rframe,
unsigned get)
void ff_framesync_uninit(FFFrameSync *fs)
int ff_framesync_process_frame(FFFrameSync *fs, unsigned all)
int ff_framesync_filter_frame(FFFrameSync *fs, AVFilterLink *inlink,
AVFrame *in)
int ff_framesync_request_frame(FFFrameSync *fs, AVFilterLink *outlink)
