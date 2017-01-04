#define HDPVR_MAJOR_VERSION 0
#define HDPVR_MINOR_VERSION 2
#define HDPVR_RELEASE 0
#define HDPVR_VERSION \
KERNEL_VERSION(HDPVR_MAJOR_VERSION, HDPVR_MINOR_VERSION, HDPVR_RELEASE)
#define HDPVR_MAX 8
#define HDPVR_I2C_MAX_SIZE 128
#define HD_PVR_VENDOR_ID	0x2040
#define HD_PVR_PRODUCT_ID	0x4900
#define HD_PVR_PRODUCT_ID1	0x4901
#define HD_PVR_PRODUCT_ID2	0x4902
#define HD_PVR_PRODUCT_ID4	0x4903
#define HD_PVR_PRODUCT_ID3	0x4982
#define UNSET    (-1U)
#define NUM_BUFFERS 64
#define HDPVR_FIRMWARE_VERSION		0x08
#define HDPVR_FIRMWARE_VERSION_AC3	0x0d
#define HDPVR_FIRMWARE_VERSION_0X12	0x12
#define HDPVR_FIRMWARE_VERSION_0X15	0x15
extern int hdpvr_debug;
#define MSG_INFO	1
#define MSG_BUFFER	2
struct hdpvr_options ;
struct hdpvr_device ;
static inline struct hdpvr_device *to_hdpvr_dev(struct v4l2_device *v4l2_dev)
struct hdpvr_buffer ;
struct hdpvr_video_info ;
enum ;
enum ;
enum ;
#define CTRL_START_STREAMING_VALUE	0x0700
#define CTRL_STOP_STREAMING_VALUE	0x0800
#define CTRL_BITRATE_VALUE		0x1000
#define CTRL_BITRATE_MODE_VALUE		0x1200
#define CTRL_GOP_MODE_VALUE		0x1300
#define CTRL_VIDEO_INPUT_VALUE		0x1500
#define CTRL_VIDEO_STD_TYPE		0x1700
#define CTRL_AUDIO_INPUT_VALUE		0x2500
#define CTRL_BRIGHTNESS			0x2900
#define CTRL_CONTRAST			0x2a00
#define CTRL_HUE			0x2b00
#define CTRL_SATURATION			0x2c00
#define CTRL_SHARPNESS			0x2d00
#define CTRL_LOW_PASS_FILTER_VALUE	0x3100
#define CTRL_DEFAULT_INDEX		0x0003
enum hdpvr_video_std ;
enum hdpvr_video_input ;
enum hdpvr_audio_inputs ;
enum hdpvr_bitrate_mode ;
enum hdpvr_gop_mode ;
void hdpvr_delete(struct hdpvr_device *dev);
int hdpvr_set_options(struct hdpvr_device *dev);
int hdpvr_set_bitrate(struct hdpvr_device *dev);
int hdpvr_set_audio(struct hdpvr_device *dev, u8 input,
enum v4l2_mpeg_audio_encoding codec);
int hdpvr_config_call(struct hdpvr_device *dev, uint value,
unsigned char valbuf);
struct hdpvr_video_info *get_video_info(struct hdpvr_device *dev);
int get_input_lines_info(struct hdpvr_device *dev);
int hdpvr_register_videodev(struct hdpvr_device *dev, struct device *parent,
int devnumber);
int hdpvr_cancel_queue(struct hdpvr_device *dev);
int hdpvr_register_i2c_adapter(struct hdpvr_device *dev);
struct i2c_client *hdpvr_register_ir_rx_i2c(struct hdpvr_device *dev);
struct i2c_client *hdpvr_register_ir_tx_i2c(struct hdpvr_device *dev);
int hdpvr_free_buffers(struct hdpvr_device *dev);
int hdpvr_alloc_buffers(struct hdpvr_device *dev, uint count);
