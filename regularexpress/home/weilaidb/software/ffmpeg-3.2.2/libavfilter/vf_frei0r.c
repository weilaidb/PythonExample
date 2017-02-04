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
*load_sym
set_param
set_params
load_path
frei0r_init
check_path_end:
av_free(path);
if (ret < 0)
return ret;
}
if (!s->dl_handle && (path = getenv()))
for (i = 0; !s->dl_handle && i < FF_ARRAY_ELEMS(frei0r_pathlist); i++)
if (!s->dl_handle)
if (!(f0r_init                = load_sym(ctx,            )) ||
!(f0r_get_plugin_info     = load_sym(ctx, )) ||
!(s->get_param_info  = load_sym(ctx,  )) ||
!(s->get_param_value = load_sym(ctx, )) ||
!(s->set_param_value = load_sym(ctx, )) ||
!(s->update          = load_sym(ctx,          )) ||
!(s->construct       = load_sym(ctx,       )) ||
!(s->destruct        = load_sym(ctx,        )) ||
!(s->deinit          = load_sym(ctx,          )))
AVERROR;
if (f0r_init() < 0)
f0r_get_plugin_info(&s->plugin_info);
pi = &s->plugin_info;
if (pi->plugin_type != type)
av_log(ctx, AV_LOG_VERBOSE,
,
pi->name, pi->author, pi->explanation,
pi->color_model == F0R_COLOR_MODEL_BGRA8888 ?  :
pi->color_model == F0R_COLOR_MODEL_RGBA8888 ?  :
pi->color_model == F0R_COLOR_MODEL_PACKED32 ? ,
pi->frei0r_version, pi->major_version, pi->minor_version, pi->num_params);
return 0;
}
filter_init
uninit
config_input_props
query_formats
filter_frame
OFFSET offsetof(Frei0rContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_FILTERING_PARAM
static const AVOption frei0r_options[] = ;
AVFILTER_DEFINE_CLASS(frei0r);
static const AVFilterPad avfilter_vf_frei0r_inputs[] = ;
static const AVFilterPad avfilter_vf_frei0r_outputs[] = ;
AVFilter ff_vf_frei0r = ;
source_init
source_config_props
source_request_frame
static const AVOption frei0r_src_options[] = ,
, 0, INT_MAX, .flags = FLAGS },
,
,
,
};
AVFILTER_DEFINE_CLASS(frei0r_src);
static const AVFilterPad avfilter_vsrc_frei0r_src_outputs[] = ;
AVFilter ff_vsrc_frei0r_src = ;
