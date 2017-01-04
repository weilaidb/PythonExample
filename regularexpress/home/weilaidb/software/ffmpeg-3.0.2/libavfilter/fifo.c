typedef struct Buf  Buf;
typedef struct FifoContext  FifoContext;
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int add_to_queue(AVFilterLink *inlink, AVFrame *frame)
static void queue_pop(FifoContext *s)
static void buffer_offset(AVFilterLink *link, AVFrame *frame,
int offset)
static int calc_ptr_alignment(AVFrame *frame)
static int return_audio_frame(AVFilterContext *ctx)
static int request_frame(AVFilterLink *outlink)
static const AVFilterPad avfilter_vf_fifo_inputs[] = ;
static const AVFilterPad avfilter_vf_fifo_outputs[] = ;
AVFilter ff_vf_fifo = ;
static const AVFilterPad avfilter_af_afifo_inputs[] = ;
static const AVFilterPad avfilter_af_afifo_outputs[] = ;
AVFilter ff_af_afifo = ;
