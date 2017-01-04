#define M5MOLS_H
extern int m5mols_debug;
#define to_m5mols(__sd)	container_of(__sd, struct m5mols_info, sd)
#define to_sd(__ctrl) \
(&container_of(__ctrl->handler, struct m5mols_info, handle)->sd)
enum m5mols_restype ;
struct m5mols_resolution ;
struct m5mols_exif ;
struct m5mols_capture ;
struct m5mols_scenemode ;
#define VERSION_STRING_SIZE	22
struct m5mols_version ;
struct m5mols_info ;
#define ST_CAPT_IRQ 0
#define is_powered(__info) (__info->power)
#define is_ctrl_synced(__info) (__info->ctrl_sync)
#define is_available_af(__info)	(__info->ver.af)
#define is_code(__code, __type) (__code == m5mols_default_ffmt[__type].code)
#define is_manufacturer(__info, __manufacturer)	\
(__info->ver.str[0] == __manufacturer[0] && \
__info->ver.str[1] == __manufacturer[1])
int m5mols_read_u8(struct v4l2_subdev *sd, u32 reg_comb, u8 *val);
int m5mols_read_u16(struct v4l2_subdev *sd, u32 reg_comb, u16 *val);
int m5mols_read_u32(struct v4l2_subdev *sd, u32 reg_comb, u32 *val);
int m5mols_write(struct v4l2_subdev *sd, u32 reg_comb, u32 val);
int m5mols_busy(struct v4l2_subdev *sd, u8 category, u8 cmd, u8 value);
int m5mols_mode(struct m5mols_info *info, u8 mode);
int m5mols_enable_interrupt(struct v4l2_subdev *sd, u8 reg);
int m5mols_sync_controls(struct m5mols_info *info);
int m5mols_start_capture(struct m5mols_info *info);
int m5mols_do_scenemode(struct m5mols_info *info, u8 mode);
int m5mols_lock_3a(struct m5mols_info *info, bool lock);
int m5mols_set_ctrl(struct v4l2_ctrl *ctrl);
int m5mols_update_fw(struct v4l2_subdev *sd,
int (*set_power)(struct m5mols_info *, bool));
