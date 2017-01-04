#define _V4L2_CTRLS_H
struct v4l2_ctrl_handler;
struct v4l2_ctrl;
struct video_device;
struct v4l2_subdev;
struct v4l2_ctrl_ops ;
struct v4l2_ctrl ;
struct v4l2_ctrl_ref ;
struct v4l2_ctrl_handler ;
struct v4l2_ctrl_config ;
void v4l2_ctrl_fill(u32 id, const char **name, enum v4l2_ctrl_type *type,
s32 *min, s32 *max, s32 *step, s32 *def, u32 *flags);
int v4l2_ctrl_handler_init(struct v4l2_ctrl_handler *hdl,
unsigned nr_of_controls_hint);
void v4l2_ctrl_handler_free(struct v4l2_ctrl_handler *hdl);
int v4l2_ctrl_handler_setup(struct v4l2_ctrl_handler *hdl);
void v4l2_ctrl_handler_log_status(struct v4l2_ctrl_handler *hdl,
const char *prefix);
struct v4l2_ctrl *v4l2_ctrl_new_custom(struct v4l2_ctrl_handler *hdl,
const struct v4l2_ctrl_config *cfg, void *priv);
struct v4l2_ctrl *v4l2_ctrl_new_std(struct v4l2_ctrl_handler *hdl,
const struct v4l2_ctrl_ops *ops,
u32 id, s32 min, s32 max, u32 step, s32 def);
struct v4l2_ctrl *v4l2_ctrl_new_std_menu(struct v4l2_ctrl_handler *hdl,
const struct v4l2_ctrl_ops *ops,
u32 id, s32 max, s32 mask, s32 def);
struct v4l2_ctrl *v4l2_ctrl_add_ctrl(struct v4l2_ctrl_handler *hdl,
struct v4l2_ctrl *ctrl);
int v4l2_ctrl_add_handler(struct v4l2_ctrl_handler *hdl,
struct v4l2_ctrl_handler *add);
void v4l2_ctrl_cluster(unsigned ncontrols, struct v4l2_ctrl **controls);
struct v4l2_ctrl *v4l2_ctrl_find(struct v4l2_ctrl_handler *hdl, u32 id);
void v4l2_ctrl_activate(struct v4l2_ctrl *ctrl, bool active);
void v4l2_ctrl_grab(struct v4l2_ctrl *ctrl, bool grabbed);
static inline void v4l2_ctrl_lock(struct v4l2_ctrl *ctrl)
static inline void v4l2_ctrl_unlock(struct v4l2_ctrl *ctrl)
s32 v4l2_ctrl_g_ctrl(struct v4l2_ctrl *ctrl);
int v4l2_ctrl_s_ctrl(struct v4l2_ctrl *ctrl, s32 val);
int v4l2_queryctrl(struct v4l2_ctrl_handler *hdl, struct v4l2_queryctrl *qc);
int v4l2_querymenu(struct v4l2_ctrl_handler *hdl, struct v4l2_querymenu *qm);
int v4l2_g_ctrl(struct v4l2_ctrl_handler *hdl, struct v4l2_control *ctrl);
int v4l2_s_ctrl(struct v4l2_ctrl_handler *hdl, struct v4l2_control *ctrl);
int v4l2_g_ext_ctrls(struct v4l2_ctrl_handler *hdl, struct v4l2_ext_controls *c);
int v4l2_try_ext_ctrls(struct v4l2_ctrl_handler *hdl, struct v4l2_ext_controls *c);
int v4l2_s_ext_ctrls(struct v4l2_ctrl_handler *hdl, struct v4l2_ext_controls *c);
int v4l2_subdev_queryctrl(struct v4l2_subdev *sd, struct v4l2_queryctrl *qc);
int v4l2_subdev_querymenu(struct v4l2_subdev *sd, struct v4l2_querymenu *qm);
int v4l2_subdev_g_ext_ctrls(struct v4l2_subdev *sd, struct v4l2_ext_controls *cs);
int v4l2_subdev_try_ext_ctrls(struct v4l2_subdev *sd, struct v4l2_ext_controls *cs);
int v4l2_subdev_s_ext_ctrls(struct v4l2_subdev *sd, struct v4l2_ext_controls *cs);
int v4l2_subdev_g_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl);
int v4l2_subdev_s_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl);
