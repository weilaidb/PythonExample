#define WHITESPACES " \n\t\r"
static int link_filter(AVFilterContext *src, int srcpad,
AVFilterContext *dst, int dstpad,
void *log_ctx)
static char *parse_link_name(const char **buf, void *log_ctx)
static int create_filter(AVFilterContext **filt_ctx, AVFilterGraph *ctx, int index,
const char *filt_name, const char *args, void *log_ctx)
static int parse_filter(AVFilterContext **filt_ctx, const char **buf, AVFilterGraph *graph,
int index, void *log_ctx)
AVFilterInOut *avfilter_inout_alloc(void)
void avfilter_inout_free(AVFilterInOut **inout)
static AVFilterInOut *extract_inout(const char *label, AVFilterInOut **links)
static void insert_inout(AVFilterInOut **inouts, AVFilterInOut *element)
static void append_inout(AVFilterInOut **inouts, AVFilterInOut **element)
static int link_filter_inouts(AVFilterContext *filt_ctx,
AVFilterInOut **curr_inputs,
AVFilterInOut **open_inputs, void *log_ctx)
static int parse_inputs(const char **buf, AVFilterInOut **curr_inputs,
AVFilterInOut **open_outputs, void *log_ctx)
static int parse_outputs(const char **buf, AVFilterInOut **curr_inputs,
AVFilterInOut **open_inputs,
AVFilterInOut **open_outputs, void *log_ctx)
static int parse_sws_flags(const char **buf, AVFilterGraph *graph)
int avfilter_graph_parse2(AVFilterGraph *graph, const char *filters,
AVFilterInOut **inputs,
AVFilterInOut **outputs)
int avfilter_graph_parse(AVFilterGraph *graph, const char *filters,
AVFilterInOut *open_inputs,
AVFilterInOut *open_outputs, void *log_ctx)
int avfilter_graph_parse_ptr(AVFilterGraph *graph, const char *filters,
AVFilterInOut **open_inputs_ptr, AVFilterInOut **open_outputs_ptr,
void *log_ctx)
