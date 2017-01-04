int cx18_i2c_register(struct cx18 *cx, unsigned idx);
struct v4l2_subdev *cx18_find_hw(struct cx18 *cx, u32 hw);
int init_cx18_i2c(struct cx18 *cx);
void exit_cx18_i2c(struct cx18 *cx);
