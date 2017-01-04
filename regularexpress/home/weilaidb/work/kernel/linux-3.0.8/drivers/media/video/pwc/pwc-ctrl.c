#define SET_LUM_CTL			0x01
#define GET_LUM_CTL			0x02
#define SET_CHROM_CTL			0x03
#define GET_CHROM_CTL			0x04
#define SET_STATUS_CTL			0x05
#define GET_STATUS_CTL			0x06
#define SET_EP_STREAM_CTL		0x07
#define GET_EP_STREAM_CTL		0x08
#define GET_XX_CTL			0x09
#define SET_XX_CTL			0x0A
#define GET_XY_CTL			0x0B
#define SET_XY_CTL			0x0C
#define SET_MPT_CTL			0x0D
#define GET_MPT_CTL			0x0E
#define AGC_MODE_FORMATTER			0x2000
#define PRESET_AGC_FORMATTER			0x2100
#define SHUTTER_MODE_FORMATTER			0x2200
#define PRESET_SHUTTER_FORMATTER		0x2300
#define PRESET_CONTOUR_FORMATTER		0x2400
#define AUTO_CONTOUR_FORMATTER			0x2500
#define BACK_LIGHT_COMPENSATION_FORMATTER	0x2600
#define CONTRAST_FORMATTER			0x2700
#define DYNAMIC_NOISE_CONTROL_FORMATTER		0x2800
#define FLICKERLESS_MODE_FORMATTER		0x2900
#define AE_CONTROL_SPEED			0x2A00
#define BRIGHTNESS_FORMATTER			0x2B00
#define GAMMA_FORMATTER				0x2C00
#define WB_MODE_FORMATTER			0x1000
#define AWB_CONTROL_SPEED_FORMATTER		0x1100
#define AWB_CONTROL_DELAY_FORMATTER		0x1200
#define PRESET_MANUAL_RED_GAIN_FORMATTER	0x1300
#define PRESET_MANUAL_BLUE_GAIN_FORMATTER	0x1400
#define COLOUR_MODE_FORMATTER			0x1500
#define SATURATION_MODE_FORMATTER1		0x1600
#define SATURATION_MODE_FORMATTER2		0x1700
#define SAVE_USER_DEFAULTS_FORMATTER		0x0200
#define RESTORE_USER_DEFAULTS_FORMATTER		0x0300
#define RESTORE_FACTORY_DEFAULTS_FORMATTER	0x0400
#define READ_AGC_FORMATTER			0x0500
#define READ_SHUTTER_FORMATTER			0x0600
#define READ_RED_GAIN_FORMATTER			0x0700
#define READ_BLUE_GAIN_FORMATTER		0x0800
#define GET_STATUS_B00				0x0B00
#define SENSOR_TYPE_FORMATTER1			0x0C00
#define GET_STATUS_3000				0x3000
#define READ_RAW_Y_MEAN_FORMATTER		0x3100
#define SET_POWER_SAVE_MODE_FORMATTER		0x3200
#define MIRROR_IMAGE_FORMATTER			0x3300
#define LED_FORMATTER				0x3400
#define LOWLIGHT				0x3500
#define GET_STATUS_3600				0x3600
#define SENSOR_TYPE_FORMATTER2			0x3700
#define GET_STATUS_3800				0x3800
#define GET_STATUS_4000				0x4000
#define GET_STATUS_4100				0x4100
#define CTL_STATUS_4200				0x4200
#define VIDEO_OUTPUT_CONTROL_FORMATTER		0x0100
#define PT_RELATIVE_CONTROL_FORMATTER		0x01
#define PT_RESET_CONTROL_FORMATTER		0x02
#define PT_STATUS_FORMATTER			0x03
static const char *size2name[PSZ_MAX] =
;
#define PWC_FPS_MAX_NALA 8
struct Nala_table_entry ;
static unsigned int Nala_fps_vector[PWC_FPS_MAX_NALA] = ;
static struct Nala_table_entry Nala_table[PSZ_MAX][PWC_FPS_MAX_NALA] =
;
static void pwc_set_image_buffer_size(struct pwc_device *pdev);
static int _send_control_msg(struct pwc_device *pdev,
u8 request, u16 value, int index, void *buf, int buflen, int timeout)
static int recv_control_msg(struct pwc_device *pdev,
u8 request, u16 value, void *buf, int buflen)
static inline int send_video_command(struct pwc_device *pdev,
int index, void *buf, int buflen)
static inline int send_control_msg(struct pwc_device *pdev,
u8 request, u16 value, void *buf, int buflen)
static int set_video_mode_Nala(struct pwc_device *pdev, int size, int frames)
static int set_video_mode_Timon(struct pwc_device *pdev, int size, int frames, int compression, int snapshot)
static int set_video_mode_Kiara(struct pwc_device *pdev, int size, int frames, int compression, int snapshot)
int pwc_set_video_mode(struct pwc_device *pdev, int width, int height, int frames, int compression, int snapshot)
static unsigned int pwc_get_fps_Nala(struct pwc_device *pdev, unsigned int index, unsigned int size)
static unsigned int pwc_get_fps_Kiara(struct pwc_device *pdev, unsigned int index, unsigned int size)
static unsigned int pwc_get_fps_Timon(struct pwc_device *pdev, unsigned int index, unsigned int size)
unsigned int pwc_get_fps(struct pwc_device *pdev, unsigned int index, unsigned int size)
#define BLACK_Y 0
#define BLACK_U 128
#define BLACK_V 128
static void pwc_set_image_buffer_size(struct pwc_device *pdev)
int pwc_get_brightness(struct pwc_device *pdev)
int pwc_set_brightness(struct pwc_device *pdev, int value)
int pwc_get_contrast(struct pwc_device *pdev)
int pwc_set_contrast(struct pwc_device *pdev, int value)
int pwc_get_gamma(struct pwc_device *pdev)
int pwc_set_gamma(struct pwc_device *pdev, int value)
int pwc_get_saturation(struct pwc_device *pdev, int *value)
int pwc_set_saturation(struct pwc_device *pdev, int value)
int pwc_set_agc(struct pwc_device *pdev, int mode, int value)
int pwc_get_agc(struct pwc_device *pdev, int *value)
int pwc_set_shutter_speed(struct pwc_device *pdev, int mode, int value)
int pwc_get_shutter_speed(struct pwc_device *pdev, int *value)
int pwc_camera_power(struct pwc_device *pdev, int power)
int pwc_restore_user(struct pwc_device *pdev)
int pwc_save_user(struct pwc_device *pdev)
int pwc_restore_factory(struct pwc_device *pdev)
int pwc_set_awb(struct pwc_device *pdev, int mode)
int pwc_get_awb(struct pwc_device *pdev)
int pwc_set_red_gain(struct pwc_device *pdev, int value)
int pwc_get_red_gain(struct pwc_device *pdev, int *value)
int pwc_set_blue_gain(struct pwc_device *pdev, int value)
int pwc_get_blue_gain(struct pwc_device *pdev, int *value)
static int pwc_read_red_gain(struct pwc_device *pdev, int *value)
static int pwc_read_blue_gain(struct pwc_device *pdev, int *value)
static int pwc_set_wb_speed(struct pwc_device *pdev, int speed)
static int pwc_get_wb_speed(struct pwc_device *pdev, int *value)
static int pwc_set_wb_delay(struct pwc_device *pdev, int delay)
static int pwc_get_wb_delay(struct pwc_device *pdev, int *value)
int pwc_set_leds(struct pwc_device *pdev, int on_value, int off_value)
static int pwc_get_leds(struct pwc_device *pdev, int *on_value, int *off_value)
int pwc_set_contour(struct pwc_device *pdev, int contour)
int pwc_get_contour(struct pwc_device *pdev, int *contour)
int pwc_set_backlight(struct pwc_device *pdev, int backlight)
int pwc_get_backlight(struct pwc_device *pdev, int *backlight)
int pwc_set_colour_mode(struct pwc_device *pdev, int colour)
int pwc_get_colour_mode(struct pwc_device *pdev, int *colour)
int pwc_set_flicker(struct pwc_device *pdev, int flicker)
int pwc_get_flicker(struct pwc_device *pdev, int *flicker)
int pwc_set_dynamic_noise(struct pwc_device *pdev, int noise)
int pwc_get_dynamic_noise(struct pwc_device *pdev, int *noise)
static int _pwc_mpt_reset(struct pwc_device *pdev, int flags)
int pwc_mpt_reset(struct pwc_device *pdev, int flags)
static int _pwc_mpt_set_angle(struct pwc_device *pdev, int pan, int tilt)
int pwc_mpt_set_angle(struct pwc_device *pdev, int pan, int tilt)
static int pwc_mpt_get_status(struct pwc_device *pdev, struct pwc_mpt_status *status)
int pwc_get_cmos_sensor(struct pwc_device *pdev, int *sensor)
#define ARG_DEF(ARG_type, ARG_name)\
ARG_type *ARG_name = arg;
#define ARG_IN(ARG_name)
#define ARGR(ARG_name) (*ARG_name)
#define ARGA(ARG_name) ARG_name
#define ARG_OUT(ARG_name)
long pwc_ioctl(struct pwc_device *pdev, unsigned int cmd, void *arg)
