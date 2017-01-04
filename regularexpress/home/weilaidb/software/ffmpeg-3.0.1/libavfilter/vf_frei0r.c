typedef f0r_instance_t (*f0r_construct_f)(unsigned int width, unsigned int height);
typedef void (*f0r_destruct_f)(f0r_instance_t instance);
typedef void (*f0r_deinit_f)(void);
typedef int (*f0r_init_f)(void);
typedef void (*f0r_get_plugin_info_f)(f0r_plugin_info_t *info);
typedef void (*f0r_get_param_info_f)(f0r_param_info_t *info, int param_index);
typedef void (*f0r_update_f)(f0r_instance_t instance, double time, const uint32_t *inframe, uint32_t *outframe);
typedef void (*f0r_update2_f)(f0r_instance_t instance, double time, const uint32_t *inframe1, const uint32_t *inframe2, const uint32_t *inframe3, uint32_t *outframe);
typedef void (*f0r_set_param_value_f)(f0r_instance_t instance, f0r_param_t param, int param_index);
typedef void (*f0r_get_param_value_f)(f0r_instance_t instance, f0r_param_t param, int param_index);
typedef struct Frei0rContext  Frei0rContext;
static void *load_sym(AVFilterContext *ctx, const char *sym_name)
static int set_param(AVFilterContext *ctx, f0r_param_info_t info, int index, char *param)
static int set_params(AVFilterContext *ctx, const char *params)
static int load_path(AVFilterContext *ctx, void **handle_ptr, const char *prefix, const char *name)
static av_cold int frei0r_init(AVFilterContext *ctx,
const char *dl_name, int type)
check_path_end:
av_free(path);
if (ret < 0)
return ret;
}
if (!s->dl_handle && (path = getenv("HOME")))
for (i = 0; !s->dl_handle && i < FF_ARRAY_ELEMS(frei0r_pathlist); i++)
if (!s->dl_handle)
if (!(f0r_init                = load_sym(ctx, "f0r_init"           )) ||
!(f0r_get_plugin_info     = load_sym(ctx, "f0r_get_plugin_info")) ||
!(s->get_param_info  = load_sym(ctx, "f0r_get_param_info" )) ||
!(s->get_param_value = load_sym(ctx, "f0r_get_param_value")) ||
!(s->set_param_value = load_sym(ctx, "f0r_set_param_value")) ||
!(s->update          = load_sym(ctx, "f0r_update"         )) ||
!(s->construct       = load_sym(ctx, "f0r_construct"      )) ||
!(s->destruct        = load_sym(ctx, "f0r_destruct"       )) ||
!(s->deinit          = load_sym(ctx, "f0r_deinit"         )))
return AVERROR(EINVAL);
if (f0r_init() < 0)
f0r_get_plugin_info(&s->plugin_info);
pi = &s->plugin_info;
if (pi->plugin_type != type)
av_log(ctx, AV_LOG_VERBOSE,
"name:%s author:'%s' explanation:'%s' color_model:%s "
"frei0r_version:%d version:%d.%d num_params:%d\n",
pi->name, pi->author, pi->explanation,
pi->color_model == F0R_COLOR_MODEL_BGRA8888 ? "bgra8888" :
pi->color_model == F0R_COLOR_MODEL_RGBA8888 ? "rgba8888" :
pi->color_model == F0R_COLOR_MODEL_PACKED32 ? "packed32" : "unknown",
pi->frei0r_version, pi->major_version, pi->minor_version, pi->num_params);
return 0;
}
static av_cold int filter_init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int config_input_props(AVFilterLink *inlink)
static int query_formats(AVFilterContext *ctx)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
#define OFFSET(x) offsetof(Frei0rContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_FILTERING_PARAM
static const AVOption frei0r_options[] = ;
AVFILTER_DEFINE_CLASS(frei0r);
static const AVFilterPad avfilter_vf_frei0r_inputs[] = ;
static const AVFilterPad avfilter_vf_frei0r_outputs[] = ;
AVFilter ff_vf_frei0r = ;
static av_cold int source_init(AVFilterContext *ctx)
static int source_config_props(AVFilterLink *outlink)
static int source_request_frame(AVFilterLink *outlink)
static const AVOption frei0r_src_options[] = ;
AVFILTER_DEFINE_CLASS(frei0r_src);
static const AVFilterPad avfilter_vsrc_frei0r_src_outputs[] = ;
AVFilter ff_vsrc_frei0r_src = ;
