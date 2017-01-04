typedef struct  SeparateFieldsContext;
static int config_props_output(AVFilterLink *outlink)
static void extract_field(AVFrame *frame, int nb_planes, int type)
static int filter_frame(AVFilterLink *inlink, AVFrame *inpicref)
static int request_frame(AVFilterLink *outlink)
static const AVFilterPad separatefields_inputs[] = ;
static const AVFilterPad separatefields_outputs[] = ;
AVFilter ff_vf_separatefields = ;
