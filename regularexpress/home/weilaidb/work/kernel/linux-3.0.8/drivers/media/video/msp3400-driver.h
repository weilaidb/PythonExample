#define MSP3400_DRIVER_H
#define MSP_CARRIER(freq) ((int)((float)(freq / 18.432) * (1 << 24)))
#define MSP_MODE_AM_DETECT   0
#define MSP_MODE_FM_RADIO    2
#define MSP_MODE_FM_TERRA    3
#define MSP_MODE_FM_SAT      4
#define MSP_MODE_FM_NICAM1   5
#define MSP_MODE_FM_NICAM2   6
#define MSP_MODE_AM_NICAM    7
#define MSP_MODE_BTSC        8
#define MSP_MODE_EXTERN      9
#define SCART_IN1     0
#define SCART_IN2     1
#define SCART_IN3     2
#define SCART_IN4     3
#define SCART_IN1_DA  4
#define SCART_IN2_DA  5
#define SCART_MONO    6
#define SCART_MUTE    7
#define SCART_DSP_IN  0
#define SCART1_OUT    1
#define SCART2_OUT    2
#define OPMODE_AUTO       -1
#define OPMODE_MANUAL      0
#define OPMODE_AUTODETECT  1
#define OPMODE_AUTOSELECT  2
extern int msp_debug;
extern int msp_once;
extern int msp_amsound;
extern int msp_standard;
extern int msp_dolby;
extern int msp_stereo_thresh;
struct msp_state ;
static inline struct msp_state *to_state(struct v4l2_subdev *sd)
static inline struct msp_state *ctrl_to_state(struct v4l2_ctrl *ctrl)
int msp_write_dem(struct i2c_client *client, int addr, int val);
int msp_write_dsp(struct i2c_client *client, int addr, int val);
int msp_read_dem(struct i2c_client *client, int addr);
int msp_read_dsp(struct i2c_client *client, int addr);
int msp_reset(struct i2c_client *client);
void msp_set_scart(struct i2c_client *client, int in, int out);
void msp_update_volume(struct msp_state *state);
int msp_sleep(struct msp_state *state, int timeout);
const char *msp_standard_std_name(int std);
void msp_set_audmode(struct i2c_client *client);
int msp_detect_stereo(struct i2c_client *client);
int msp3400c_thread(void *data);
int msp3410d_thread(void *data);
int msp34xxg_thread(void *data);
void msp3400c_set_mode(struct i2c_client *client, int mode);
void msp3400c_set_carrier(struct i2c_client *client, int cdo1, int cdo2);
