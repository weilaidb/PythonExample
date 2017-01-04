#define _CX25840_CORE_H_
struct cx25840_ir_state;
struct cx25840_state ;
static inline struct cx25840_state *to_state(struct v4l2_subdev *sd)
static inline struct v4l2_subdev *to_sd(struct v4l2_ctrl *ctrl)
static inline bool is_cx2583x(struct cx25840_state *state)
static inline bool is_cx231xx(struct cx25840_state *state)
static inline bool is_cx2388x(struct cx25840_state *state)
static inline bool is_cx23885(struct cx25840_state *state)
static inline bool is_cx23887(struct cx25840_state *state)
static inline bool is_cx23888(struct cx25840_state *state)
int cx25840_write(struct i2c_client *client, u16 addr, u8 value);
int cx25840_write4(struct i2c_client *client, u16 addr, u32 value);
u8 cx25840_read(struct i2c_client *client, u16 addr);
u32 cx25840_read4(struct i2c_client *client, u16 addr);
int cx25840_and_or(struct i2c_client *client, u16 addr, unsigned mask, u8 value);
int cx25840_and_or4(struct i2c_client *client, u16 addr, u32 and_mask,
u32 or_value);
void cx25840_std_setup(struct i2c_client *client);
int cx25840_loadfw(struct i2c_client *client);
void cx25840_audio_set_path(struct i2c_client *client);
int cx25840_s_clock_freq(struct v4l2_subdev *sd, u32 freq);
extern const struct v4l2_ctrl_ops cx25840_audio_ctrl_ops;
int cx25840_s_raw_fmt(struct v4l2_subdev *sd, struct v4l2_vbi_format *fmt);
int cx25840_s_sliced_fmt(struct v4l2_subdev *sd, struct v4l2_sliced_vbi_format *fmt);
int cx25840_g_sliced_fmt(struct v4l2_subdev *sd, struct v4l2_sliced_vbi_format *fmt);
int cx25840_decode_vbi_line(struct v4l2_subdev *sd, struct v4l2_decode_vbi_line *vbi);
extern const struct v4l2_subdev_ir_ops cx25840_ir_ops;
int cx25840_ir_log_status(struct v4l2_subdev *sd);
int cx25840_ir_irq_handler(struct v4l2_subdev *sd, u32 status, bool *handled);
int cx25840_ir_probe(struct v4l2_subdev *sd);
int cx25840_ir_remove(struct v4l2_subdev *sd);
