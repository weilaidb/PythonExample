#define NUMTAPS 64
static const int8_t filt[NUMTAPS] = ;
typedef struct  EarwaxContext;
static int query_formats(AVFilterContext *ctx)
static inline int16_t *scalarproduct(const int16_t *in, const int16_t *endin, int16_t *out)
static int filter_frame(AVFilterLink *inlink, AVFrame *insamples)
static const AVFilterPad earwax_inputs[] = ;
static const AVFilterPad earwax_outputs[] = ;
AVFilter ff_af_earwax = ;
