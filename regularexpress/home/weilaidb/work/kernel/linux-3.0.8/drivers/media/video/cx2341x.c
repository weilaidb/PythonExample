MODULE_DESCRIPTION("cx23415/6/8 driver");
MODULE_AUTHOR("Hans Verkuil");
MODULE_LICENSE("GPL");
static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Debug level (0-1)");
#define CX2341X_AUDIO_ENCODING_METHOD_MPEG	0
#define CX2341X_AUDIO_ENCODING_METHOD_AC3	1
#define CX2341X_AUDIO_ENCODING_METHOD_LPCM	2
static const char *cx2341x_get_name(u32 id)
static const char **cx2341x_get_menu(u32 id)
static void cx2341x_ctrl_fill(u32 id, const char **name, enum v4l2_ctrl_type *type,
s32 *min, s32 *max, s32 *step, s32 *def, u32 *flags)
const u32 cx2341x_mpeg_ctrls[] = ;
EXPORT_SYMBOL(cx2341x_mpeg_ctrls);
static const struct cx2341x_mpeg_params default_params = ;
static int cx2341x_get_ctrl(const struct cx2341x_mpeg_params *params,
struct v4l2_ext_control *ctrl)
static int cx2341x_set_ctrl(struct cx2341x_mpeg_params *params, int busy,
struct v4l2_ext_control *ctrl)
static int cx2341x_ctrl_query_fill(struct v4l2_queryctrl *qctrl,
s32 min, s32 max, s32 step, s32 def)
int cx2341x_ctrl_query(const struct cx2341x_mpeg_params *params,
struct v4l2_queryctrl *qctrl)
EXPORT_SYMBOL(cx2341x_ctrl_query);
const char * const *cx2341x_ctrl_get_menu(const struct cx2341x_mpeg_params *p, u32 id)
EXPORT_SYMBOL(cx2341x_ctrl_get_menu);
static void cx2341x_calc_audio_properties(struct cx2341x_mpeg_params *params)
int cx2341x_ext_ctrls(struct cx2341x_mpeg_params *params, int busy,
struct v4l2_ext_controls *ctrls, unsigned int cmd)
EXPORT_SYMBOL(cx2341x_ext_ctrls);
void cx2341x_fill_defaults(struct cx2341x_mpeg_params *p)
EXPORT_SYMBOL(cx2341x_fill_defaults);
static int cx2341x_api(void *priv, cx2341x_mbox_func func,
u32 cmd, int args, ...)
#define NEQ(field) (old->field != new->field)
int cx2341x_update(void *priv, cx2341x_mbox_func func,
const struct cx2341x_mpeg_params *old,
const struct cx2341x_mpeg_params *new)
EXPORT_SYMBOL(cx2341x_update);
static const char *cx2341x_menu_item(const struct cx2341x_mpeg_params *p, u32 id)
void cx2341x_log_status(const struct cx2341x_mpeg_params *p, const char *prefix)
EXPORT_SYMBOL(cx2341x_log_status);
static inline struct cx2341x_handler *to_cxhdl(struct v4l2_ctrl *ctrl)
static int cx2341x_hdl_api(struct cx2341x_handler *hdl,
u32 cmd, int args, ...)
static inline int cx2341x_neq(struct v4l2_ctrl *ctrl)
static int cx2341x_try_ctrl(struct v4l2_ctrl *ctrl)
static int cx2341x_s_ctrl(struct v4l2_ctrl *ctrl)
static const struct v4l2_ctrl_ops cx2341x_ops = ;
static struct v4l2_ctrl *cx2341x_ctrl_new_custom(struct v4l2_ctrl_handler *hdl,
u32 id, s32 min, s32 max, s32 step, s32 def)
static struct v4l2_ctrl *cx2341x_ctrl_new_std(struct v4l2_ctrl_handler *hdl,
u32 id, s32 min, s32 max, s32 step, s32 def)
static struct v4l2_ctrl *cx2341x_ctrl_new_menu(struct v4l2_ctrl_handler *hdl,
u32 id, s32 max, s32 mask, s32 def)
int cx2341x_handler_init(struct cx2341x_handler *cxhdl,
unsigned nr_of_controls_hint)
EXPORT_SYMBOL(cx2341x_handler_init);
void cx2341x_handler_set_50hz(struct cx2341x_handler *cxhdl, int is_50hz)
EXPORT_SYMBOL(cx2341x_handler_set_50hz);
int cx2341x_handler_setup(struct cx2341x_handler *cxhdl)
EXPORT_SYMBOL(cx2341x_handler_setup);
void cx2341x_handler_set_busy(struct cx2341x_handler *cxhdl, int busy)
EXPORT_SYMBOL(cx2341x_handler_set_busy);
