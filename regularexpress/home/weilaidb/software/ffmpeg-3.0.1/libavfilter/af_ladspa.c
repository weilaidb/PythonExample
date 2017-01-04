typedef struct LADSPAContext  LADSPAContext;
#define OFFSET(x) offsetof(LADSPAContext, x)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM | AV_OPT_FLAG_FILTERING_PARAM
static const AVOption ladspa_options[] = ;
AVFILTER_DEFINE_CLASS(ladspa);
static void print_ctl_info(AVFilterContext *ctx, int level,
LADSPAContext *s, int ctl, unsigned long *map,
LADSPA_Data *values, int print)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static int request_frame(AVFilterLink *outlink)
static void set_default_ctl_value(LADSPAContext *s, int ctl,
unsigned long *map, LADSPA_Data *values)
static int connect_ports(AVFilterContext *ctx, AVFilterLink *link)
static int config_input(AVFilterLink *inlink)
static int config_output(AVFilterLink *outlink)
static void count_ports(const LADSPA_Descriptor *desc,
unsigned long *nb_inputs, unsigned long *nb_outputs)
static void *try_load(const char *dir, const char *soname)
static int set_control(AVFilterContext *ctx, unsigned long port, LADSPA_Data value)
static av_cold int init(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int process_command(AVFilterContext *ctx, const char *cmd, const char *args,
char *res, int res_len, int flags)
static const AVFilterPad ladspa_outputs[] = ;
AVFilter ff_af_ladspa = ;
