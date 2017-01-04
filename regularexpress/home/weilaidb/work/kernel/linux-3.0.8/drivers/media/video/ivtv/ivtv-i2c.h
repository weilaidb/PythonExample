#define IVTV_I2C_H
struct i2c_client *ivtv_i2c_new_ir_legacy(struct ivtv *itv);
int ivtv_i2c_register(struct ivtv *itv, unsigned idx);
struct v4l2_subdev *ivtv_find_hw(struct ivtv *itv, u32 hw);
int init_ivtv_i2c(struct ivtv *itv);
void exit_ivtv_i2c(struct ivtv *itv);
