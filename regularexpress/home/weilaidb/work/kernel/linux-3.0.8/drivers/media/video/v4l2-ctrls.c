struct ctrl_helper ;
const char * const *v4l2_ctrl_get_menu(u32 id)
EXPORT_SYMBOL(v4l2_ctrl_get_menu);
const char *v4l2_ctrl_get_name(u32 id)
EXPORT_SYMBOL(v4l2_ctrl_get_name);
void v4l2_ctrl_fill(u32 id, const char **name, enum v4l2_ctrl_type *type,
s32 *min, s32 *max, s32 *step, s32 *def, u32 *flags)
EXPORT_SYMBOL(v4l2_ctrl_fill);
static bool type_is_int(const struct v4l2_ctrl *ctrl)
static int cur_to_user(struct v4l2_ext_control *c,
struct v4l2_ctrl *ctrl)
static int user_to_new(struct v4l2_ext_control *c,
struct v4l2_ctrl *ctrl)
static int new_to_user(struct v4l2_ext_control *c,
struct v4l2_ctrl *ctrl)
static void new_to_cur(struct v4l2_ctrl *ctrl)
static void cur_to_new(struct v4l2_ctrl *ctrl)
static int cluster_changed(struct v4l2_ctrl *master)
static int validate_new(struct v4l2_ctrl *ctrl)
static inline u32 node2id(struct list_head *node)
static inline int handler_set_err(struct v4l2_ctrl_handler *hdl, int err)
int v4l2_ctrl_handler_init(struct v4l2_ctrl_handler *hdl,
unsigned nr_of_controls_hint)
EXPORT_SYMBOL(v4l2_ctrl_handler_init);
void v4l2_ctrl_handler_free(struct v4l2_ctrl_handler *hdl)
EXPORT_SYMBOL(v4l2_ctrl_handler_free);
static struct v4l2_ctrl_ref *find_private_ref(
struct v4l2_ctrl_handler *hdl, u32 id)
static struct v4l2_ctrl_ref *find_ref(struct v4l2_ctrl_handler *hdl, u32 id)
static struct v4l2_ctrl_ref *find_ref_lock(
struct v4l2_ctrl_handler *hdl, u32 id)
struct v4l2_ctrl *v4l2_ctrl_find(struct v4l2_ctrl_handler *hdl, u32 id)
EXPORT_SYMBOL(v4l2_ctrl_find);
static int handler_new_ref(struct v4l2_ctrl_handler *hdl,
struct v4l2_ctrl *ctrl)
static struct v4l2_ctrl *v4l2_ctrl_new(struct v4l2_ctrl_handler *hdl,
const struct v4l2_ctrl_ops *ops,
u32 id, const char *name, enum v4l2_ctrl_type type,
s32 min, s32 max, u32 step, s32 def,
u32 flags, const char * const *qmenu, void *priv)
struct v4l2_ctrl *v4l2_ctrl_new_custom(struct v4l2_ctrl_handler *hdl,
const struct v4l2_ctrl_config *cfg, void *priv)
EXPORT_SYMBOL(v4l2_ctrl_new_custom);
struct v4l2_ctrl *v4l2_ctrl_new_std(struct v4l2_ctrl_handler *hdl,
const struct v4l2_ctrl_ops *ops,
u32 id, s32 min, s32 max, u32 step, s32 def)
EXPORT_SYMBOL(v4l2_ctrl_new_std);
struct v4l2_ctrl *v4l2_ctrl_new_std_menu(struct v4l2_ctrl_handler *hdl,
const struct v4l2_ctrl_ops *ops,
u32 id, s32 max, s32 mask, s32 def)
EXPORT_SYMBOL(v4l2_ctrl_new_std_menu);
struct v4l2_ctrl *v4l2_ctrl_add_ctrl(struct v4l2_ctrl_handler *hdl,
struct v4l2_ctrl *ctrl)
EXPORT_SYMBOL(v4l2_ctrl_add_ctrl);
int v4l2_ctrl_add_handler(struct v4l2_ctrl_handler *hdl,
struct v4l2_ctrl_handler *add)
EXPORT_SYMBOL(v4l2_ctrl_add_handler);
void v4l2_ctrl_cluster(unsigned ncontrols, struct v4l2_ctrl **controls)
EXPORT_SYMBOL(v4l2_ctrl_cluster);
void v4l2_ctrl_activate(struct v4l2_ctrl *ctrl, bool active)
EXPORT_SYMBOL(v4l2_ctrl_activate);
void v4l2_ctrl_grab(struct v4l2_ctrl *ctrl, bool grabbed)
EXPORT_SYMBOL(v4l2_ctrl_grab);
static void log_ctrl(const struct v4l2_ctrl *ctrl,
const char *prefix, const char *colon)
void v4l2_ctrl_handler_log_status(struct v4l2_ctrl_handler *hdl,
const char *prefix)
EXPORT_SYMBOL(v4l2_ctrl_handler_log_status);
int v4l2_ctrl_handler_setup(struct v4l2_ctrl_handler *hdl)
EXPORT_SYMBOL(v4l2_ctrl_handler_setup);
int v4l2_queryctrl(struct v4l2_ctrl_handler *hdl, struct v4l2_queryctrl *qc)
EXPORT_SYMBOL(v4l2_queryctrl);
int v4l2_subdev_queryctrl(struct v4l2_subdev *sd, struct v4l2_queryctrl *qc)
EXPORT_SYMBOL(v4l2_subdev_queryctrl);
int v4l2_querymenu(struct v4l2_ctrl_handler *hdl, struct v4l2_querymenu *qm)
EXPORT_SYMBOL(v4l2_querymenu);
int v4l2_subdev_querymenu(struct v4l2_subdev *sd, struct v4l2_querymenu *qm)
EXPORT_SYMBOL(v4l2_subdev_querymenu);
static int prepare_ext_ctrls(struct v4l2_ctrl_handler *hdl,
struct v4l2_ext_controls *cs,
struct ctrl_helper *helpers,
bool try)
typedef int (*cluster_func)(struct v4l2_ext_control *c,
struct v4l2_ctrl *ctrl);
static int cluster_walk(unsigned from,
struct v4l2_ext_controls *cs,
struct ctrl_helper *helpers,
cluster_func f)
static void cluster_done(unsigned from,
struct v4l2_ext_controls *cs,
struct ctrl_helper *helpers)
static int class_check(struct v4l2_ctrl_handler *hdl, u32 ctrl_class)
int v4l2_g_ext_ctrls(struct v4l2_ctrl_handler *hdl, struct v4l2_ext_controls *cs)
EXPORT_SYMBOL(v4l2_g_ext_ctrls);
int v4l2_subdev_g_ext_ctrls(struct v4l2_subdev *sd, struct v4l2_ext_controls *cs)
EXPORT_SYMBOL(v4l2_subdev_g_ext_ctrls);
static int get_ctrl(struct v4l2_ctrl *ctrl, s32 *val)
int v4l2_g_ctrl(struct v4l2_ctrl_handler *hdl, struct v4l2_control *control)
EXPORT_SYMBOL(v4l2_g_ctrl);
int v4l2_subdev_g_ctrl(struct v4l2_subdev *sd, struct v4l2_control *control)
EXPORT_SYMBOL(v4l2_subdev_g_ctrl);
s32 v4l2_ctrl_g_ctrl(struct v4l2_ctrl *ctrl)
EXPORT_SYMBOL(v4l2_ctrl_g_ctrl);
static int try_or_set_control_cluster(struct v4l2_ctrl *master, bool set)
static int try_or_set_ext_ctrls(struct v4l2_ctrl_handler *hdl,
struct v4l2_ext_controls *cs,
struct ctrl_helper *helpers,
bool set)
static int try_set_ext_ctrls(struct v4l2_ctrl_handler *hdl,
struct v4l2_ext_controls *cs,
bool set)
int v4l2_try_ext_ctrls(struct v4l2_ctrl_handler *hdl, struct v4l2_ext_controls *cs)
EXPORT_SYMBOL(v4l2_try_ext_ctrls);
int v4l2_s_ext_ctrls(struct v4l2_ctrl_handler *hdl, struct v4l2_ext_controls *cs)
EXPORT_SYMBOL(v4l2_s_ext_ctrls);
int v4l2_subdev_try_ext_ctrls(struct v4l2_subdev *sd, struct v4l2_ext_controls *cs)
EXPORT_SYMBOL(v4l2_subdev_try_ext_ctrls);
int v4l2_subdev_s_ext_ctrls(struct v4l2_subdev *sd, struct v4l2_ext_controls *cs)
EXPORT_SYMBOL(v4l2_subdev_s_ext_ctrls);
static int set_ctrl(struct v4l2_ctrl *ctrl, s32 *val)
int v4l2_s_ctrl(struct v4l2_ctrl_handler *hdl, struct v4l2_control *control)
EXPORT_SYMBOL(v4l2_s_ctrl);
int v4l2_subdev_s_ctrl(struct v4l2_subdev *sd, struct v4l2_control *control)
EXPORT_SYMBOL(v4l2_subdev_s_ctrl);
int v4l2_ctrl_s_ctrl(struct v4l2_ctrl *ctrl, s32 val)
EXPORT_SYMBOL(v4l2_ctrl_s_ctrl);
