#define __LINUX_USBVISION_H
#define USBVISION_DEBUG
#define USBVISION_PWR_REG		0x00
#define USBVISION_SSPND_EN		(1 << 1)
#define USBVISION_RES2			(1 << 2)
#define USBVISION_PWR_VID		(1 << 5)
#define USBVISION_E2_EN			(1 << 7)
#define USBVISION_CONFIG_REG		0x01
#define USBVISION_ADRS_REG		0x02
#define USBVISION_ALTER_REG		0x03
#define USBVISION_FORCE_ALTER_REG	0x04
#define USBVISION_STATUS_REG		0x05
#define USBVISION_IOPIN_REG		0x06
#define USBVISION_IO_1			(1 << 0)
#define USBVISION_IO_2			(1 << 1)
#define USBVISION_AUDIO_IN		0
#define USBVISION_AUDIO_TV		1
#define USBVISION_AUDIO_RADIO		2
#define USBVISION_AUDIO_MUTE		3
#define USBVISION_SER_MODE		0x07
#define USBVISION_CLK_OUT		(1 << 0)
#define USBVISION_DAT_IO		(1 << 1)
#define USBVISION_SENS_OUT		(1 << 2)
#define USBVISION_SER_MODE_SOFT		(0 << 4)
#define USBVISION_SER_MODE_SIO		(1 << 4)
#define USBVISION_SER_ADRS		0x08
#define USBVISION_SER_CONT		0x09
#define USBVISION_SER_DAT1		0x0A
#define USBVISION_SER_DAT2		0x0B
#define USBVISION_SER_DAT3		0x0C
#define USBVISION_SER_DAT4		0x0D
#define USBVISION_EE_DATA		0x0E
#define USBVISION_EE_LSBAD		0x0F
#define USBVISION_EE_CONT		0x10
#define USBVISION_DRM_CONT			0x12
#define USBVISION_REF			(1 << 0)
#define USBVISION_RES_UR		(1 << 2)
#define USBVISION_RES_FDL		(1 << 3)
#define USBVISION_RES_VDW		(1 << 4)
#define USBVISION_DRM_PRM1		0x13
#define USBVISION_DRM_PRM2		0x14
#define USBVISION_DRM_PRM3		0x15
#define USBVISION_DRM_PRM4		0x16
#define USBVISION_DRM_PRM5		0x17
#define USBVISION_DRM_PRM6		0x18
#define USBVISION_DRM_PRM7		0x19
#define USBVISION_DRM_PRM8		0x1A
#define USBVISION_VIN_REG1		0x1B
#define USBVISION_8_422_SYNC		0x01
#define USBVISION_16_422_SYNC		0x02
#define USBVISION_VSNC_POL		(1 << 3)
#define USBVISION_HSNC_POL		(1 << 4)
#define USBVISION_FID_POL		(1 << 5)
#define USBVISION_HVALID_PO		(1 << 6)
#define USBVISION_VCLK_POL		(1 << 7)
#define USBVISION_VIN_REG2		0x1C
#define USBVISION_AUTO_FID		(1 << 0)
#define USBVISION_NONE_INTER		(1 << 1)
#define USBVISION_NOHVALID		(1 << 2)
#define USBVISION_UV_ID			(1 << 3)
#define USBVISION_FIX_2C		(1 << 4)
#define USBVISION_SEND_FID		(1 << 5)
#define USBVISION_KEEP_BLANK		(1 << 7)
#define USBVISION_LXSIZE_I		0x1D
#define USBVISION_MXSIZE_I		0x1E
#define USBVISION_LYSIZE_I		0x1F
#define USBVISION_MYSIZE_I		0x20
#define USBVISION_LX_OFFST		0x21
#define USBVISION_MX_OFFST		0x22
#define USBVISION_LY_OFFST		0x23
#define USBVISION_MY_OFFST		0x24
#define USBVISION_FRM_RATE		0x25
#define USBVISION_LXSIZE_O		0x26
#define USBVISION_MXSIZE_O		0x27
#define USBVISION_LYSIZE_O		0x28
#define USBVISION_MYSIZE_O		0x29
#define USBVISION_FILT_CONT		0x2A
#define USBVISION_VO_MODE		0x2B
#define USBVISION_INTRA_CYC		0x2C
#define USBVISION_STRIP_SZ		0x2D
#define USBVISION_FORCE_INTRA		0x2E
#define USBVISION_FORCE_UP		0x2F
#define USBVISION_BUF_THR		0x30
#define USBVISION_DVI_YUV		0x31
#define USBVISION_AUDIO_CONT		0x32
#define USBVISION_AUD_PK_LEN		0x33
#define USBVISION_BLK_PK_LEN		0x34
#define USBVISION_PCM_THR1		0x38
#define USBVISION_PCM_THR2		0x39
#define USBVISION_DIST_THR_L		0x3A
#define USBVISION_DIST_THR_H		0x3B
#define USBVISION_MAX_DIST_L		0x3C
#define USBVISION_MAX_DIST_H		0x3D
#define USBVISION_OP_CODE		0x33
#define MAX_BYTES_PER_PIXEL		4
#define MIN_FRAME_WIDTH			64
#define MAX_USB_WIDTH			320
#define MAX_FRAME_WIDTH			320
#define MIN_FRAME_HEIGHT		48
#define MAX_USB_HEIGHT			240
#define MAX_FRAME_HEIGHT		240
#define MAX_FRAME_SIZE			(MAX_FRAME_WIDTH * MAX_FRAME_HEIGHT * MAX_BYTES_PER_PIXEL)
#define USBVISION_CLIPMASK_SIZE		(MAX_FRAME_WIDTH * MAX_FRAME_HEIGHT / 8)
#define USBVISION_URB_FRAMES		32
#define USBVISION_NUM_HEADERMARKER	20
#define USBVISION_NUMFRAMES		3
#define USBVISION_NUMSBUF		2
#define USBVISION_POWEROFF_TIME		(3 * HZ)
#define FRAMERATE_MIN	0
#define FRAMERATE_MAX	31
enum ;
#define RESTRICT_TO_RANGE(v, mi, ma) \
#define LIMIT_RGB(x) (((x) < 0) ? 0 : (((x) > 255) ? 255 : (x)))
#define YUV_TO_RGB_BY_THE_BOOK(my, mu, mv, mr, mg, mb)
#define USBVISION_SAY_AND_WAIT(what)
#define USBVISION_IS_OPERATIONAL(udevice) (\
(udevice != NULL) && \
((udevice)->dev != NULL) && \
((udevice)->last_error == 0) && \
(!(udevice)->remove_pending))
#define I2C_USB_ADAP_MAX	16
#define USBVISION_NORMS (V4L2_STD_PAL | V4L2_STD_NTSC | V4L2_STD_SECAM | V4L2_STD_PAL_M)
enum scan_state ;
enum parse_state ;
enum frame_state ;
enum stream_state ;
enum isoc_state ;
struct usb_device;
struct usbvision_sbuf ;
#define USBVISION_MAGIC_1			0x55
#define USBVISION_MAGIC_2			0xAA
#define USBVISION_HEADER_LENGTH			0x0c
#define USBVISION_SAA7111_ADDR			0x48
#define USBVISION_SAA7113_ADDR			0x4a
#define USBVISION_IIC_LRACK			0x20
#define USBVISION_IIC_LRNACK			0x30
#define USBVISION_FRAME_FORMAT_PARAM_INTRA	(1<<7)
struct usbvision_v4l2_format_st ;
#define USBVISION_SUPPORTED_PALETTES ARRAY_SIZE(usbvision_v4l2_format)
struct usbvision_frame_header ;
struct usbvision_frame ;
#define CODEC_SAA7113	7113
#define CODEC_SAA7111	7111
#define CODEC_WEBCAM	3000
#define BRIDGE_NT1003	1003
#define BRIDGE_NT1004	1004
#define BRIDGE_NT1005   1005
struct usbvision_device_data_st ;
extern struct usbvision_device_data_st usbvision_device_data[];
extern struct usb_device_id usbvision_table[];
struct usb_usbvision ;
static inline struct usb_usbvision *to_usbvision(struct v4l2_device *v4l2_dev)
#define call_all(usbvision, o, f, args...) \
v4l2_device_call_all(&usbvision->v4l2_dev, 0, o, f, ##args)
int usbvision_i2c_register(struct usb_usbvision *usbvision);
int usbvision_i2c_unregister(struct usb_usbvision *usbvision);
int usbvision_read_reg(struct usb_usbvision *usbvision, unsigned char reg);
int usbvision_write_reg(struct usb_usbvision *usbvision, unsigned char reg,
unsigned char value);
int usbvision_frames_alloc(struct usb_usbvision *usbvision, int number_of_frames);
void usbvision_frames_free(struct usb_usbvision *usbvision);
int usbvision_scratch_alloc(struct usb_usbvision *usbvision);
void usbvision_scratch_free(struct usb_usbvision *usbvision);
int usbvision_decompress_alloc(struct usb_usbvision *usbvision);
void usbvision_decompress_free(struct usb_usbvision *usbvision);
int usbvision_setup(struct usb_usbvision *usbvision, int format);
int usbvision_init_isoc(struct usb_usbvision *usbvision);
int usbvision_restart_isoc(struct usb_usbvision *usbvision);
void usbvision_stop_isoc(struct usb_usbvision *usbvision);
int usbvision_set_alternate(struct usb_usbvision *dev);
int usbvision_set_audio(struct usb_usbvision *usbvision, int audio_channel);
int usbvision_audio_off(struct usb_usbvision *usbvision);
int usbvision_begin_streaming(struct usb_usbvision *usbvision);
void usbvision_empty_framequeues(struct usb_usbvision *dev);
int usbvision_stream_interrupt(struct usb_usbvision *dev);
int usbvision_muxsel(struct usb_usbvision *usbvision, int channel);
int usbvision_set_input(struct usb_usbvision *usbvision);
int usbvision_set_output(struct usb_usbvision *usbvision, int width, int height);
void usbvision_init_power_off_timer(struct usb_usbvision *usbvision);
void usbvision_set_power_off_timer(struct usb_usbvision *usbvision);
void usbvision_reset_power_off_timer(struct usb_usbvision *usbvision);
int usbvision_power_off(struct usb_usbvision *usbvision);
int usbvision_power_on(struct usb_usbvision *usbvision);
