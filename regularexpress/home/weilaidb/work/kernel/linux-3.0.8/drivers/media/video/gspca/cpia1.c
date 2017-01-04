#define MODULE_NAME "cpia1"
MODULE_AUTHOR("Hans de Goede <hdegoede@redhat.com>");
MODULE_DESCRIPTION("Vision CPiA");
MODULE_LICENSE("GPL");
#define MAGIC_0		0x19
#define MAGIC_1		0x68
#define DATA_IN		0xc0
#define DATA_OUT	0x40
#define VIDEOSIZE_QCIF	0
#define VIDEOSIZE_CIF	1
#define SUBSAMPLE_420	0
#define SUBSAMPLE_422	1
#define YUVORDER_YUYV	0
#define YUVORDER_UYVY	1
#define NOT_COMPRESSED	0
#define COMPRESSED	1
#define NO_DECIMATION	0
#define DECIMATION_ENAB	1
#define EOI		0xff
#define EOL		0xfd
#define FRAME_HEADER_SIZE	64
#define CPIA_GRAB_SINGLE	0
#define CPIA_GRAB_CONTINEOUS	1
#define CPIA_COMPRESSION_NONE	0
#define CPIA_COMPRESSION_AUTO	1
#define CPIA_COMPRESSION_MANUAL	2
#define CPIA_COMPRESSION_TARGET_QUALITY         0
#define CPIA_COMPRESSION_TARGET_FRAMERATE       1
#define SYSTEMSTATE	0
#define GRABSTATE	1
#define STREAMSTATE	2
#define FATALERROR	3
#define CMDERROR	4
#define DEBUGFLAGS	5
#define VPSTATUS	6
#define ERRORCODE	7
#define UNINITIALISED_STATE	0
#define PASS_THROUGH_STATE	1
#define LO_POWER_STATE		2
#define HI_POWER_STATE		3
#define WARM_BOOT_STATE		4
#define GRAB_IDLE		0
#define GRAB_ACTIVE		1
#define GRAB_DONE		2
#define STREAM_NOT_READY	0
#define STREAM_READY		1
#define STREAM_OPEN		2
#define STREAM_PAUSED		3
#define STREAM_FINISHED		4
#define CPIA_FLAG	  1
#define SYSTEM_FLAG	  2
#define INT_CTRL_FLAG	  4
#define PROCESS_FLAG	  8
#define COM_FLAG	 16
#define VP_CTRL_FLAG	 32
#define CAPTURE_FLAG	 64
#define DEBUG_FLAG	128
#define VP_STATE_OK			0x00
#define VP_STATE_FAILED_VIDEOINIT	0x01
#define VP_STATE_FAILED_AECACBINIT	0x02
#define VP_STATE_AEC_MAX		0x04
#define VP_STATE_ACB_BMAX		0x08
#define VP_STATE_ACB_RMIN		0x10
#define VP_STATE_ACB_GMIN		0x20
#define VP_STATE_ACB_RMAX		0x40
#define VP_STATE_ACB_GMAX		0x80
#define COMP_RED        220
#define COMP_GREEN1     214
#define COMP_GREEN2     COMP_GREEN1
#define COMP_BLUE       230
#define EXPOSURE_VERY_LIGHT 0
#define EXPOSURE_LIGHT      1
#define EXPOSURE_NORMAL     2
#define EXPOSURE_DARK       3
#define EXPOSURE_VERY_DARK  4
#define CPIA_MODULE_CPIA			(0 << 5)
#define CPIA_MODULE_SYSTEM			(1 << 5)
#define CPIA_MODULE_VP_CTRL			(5 << 5)
#define CPIA_MODULE_CAPTURE			(6 << 5)
#define CPIA_MODULE_DEBUG			(7 << 5)
#define INPUT (DATA_IN << 8)
#define OUTPUT (DATA_OUT << 8)
#define CPIA_COMMAND_GetCPIAVersion	(INPUT | CPIA_MODULE_CPIA | 1)
#define CPIA_COMMAND_GetPnPID		(INPUT | CPIA_MODULE_CPIA | 2)
#define CPIA_COMMAND_GetCameraStatus	(INPUT | CPIA_MODULE_CPIA | 3)
#define CPIA_COMMAND_GotoHiPower	(OUTPUT | CPIA_MODULE_CPIA | 4)
#define CPIA_COMMAND_GotoLoPower	(OUTPUT | CPIA_MODULE_CPIA | 5)
#define CPIA_COMMAND_GotoSuspend	(OUTPUT | CPIA_MODULE_CPIA | 7)
#define CPIA_COMMAND_GotoPassThrough	(OUTPUT | CPIA_MODULE_CPIA | 8)
#define CPIA_COMMAND_ModifyCameraStatus	(OUTPUT | CPIA_MODULE_CPIA | 10)
#define CPIA_COMMAND_ReadVCRegs		(INPUT | CPIA_MODULE_SYSTEM | 1)
#define CPIA_COMMAND_WriteVCReg		(OUTPUT | CPIA_MODULE_SYSTEM | 2)
#define CPIA_COMMAND_ReadMCPorts	(INPUT | CPIA_MODULE_SYSTEM | 3)
#define CPIA_COMMAND_WriteMCPort	(OUTPUT | CPIA_MODULE_SYSTEM | 4)
#define CPIA_COMMAND_SetBaudRate	(OUTPUT | CPIA_MODULE_SYSTEM | 5)
#define CPIA_COMMAND_SetECPTiming	(OUTPUT | CPIA_MODULE_SYSTEM | 6)
#define CPIA_COMMAND_ReadIDATA		(INPUT | CPIA_MODULE_SYSTEM | 7)
#define CPIA_COMMAND_WriteIDATA		(OUTPUT | CPIA_MODULE_SYSTEM | 8)
#define CPIA_COMMAND_GenericCall	(OUTPUT | CPIA_MODULE_SYSTEM | 9)
#define CPIA_COMMAND_I2CStart		(OUTPUT | CPIA_MODULE_SYSTEM | 10)
#define CPIA_COMMAND_I2CStop		(OUTPUT | CPIA_MODULE_SYSTEM | 11)
#define CPIA_COMMAND_I2CWrite		(OUTPUT | CPIA_MODULE_SYSTEM | 12)
#define CPIA_COMMAND_I2CRead		(INPUT | CPIA_MODULE_SYSTEM | 13)
#define CPIA_COMMAND_GetVPVersion	(INPUT | CPIA_MODULE_VP_CTRL | 1)
#define CPIA_COMMAND_ResetFrameCounter	(INPUT | CPIA_MODULE_VP_CTRL | 2)
#define CPIA_COMMAND_SetColourParams	(OUTPUT | CPIA_MODULE_VP_CTRL | 3)
#define CPIA_COMMAND_SetExposure	(OUTPUT | CPIA_MODULE_VP_CTRL | 4)
#define CPIA_COMMAND_SetColourBalance	(OUTPUT | CPIA_MODULE_VP_CTRL | 6)
#define CPIA_COMMAND_SetSensorFPS	(OUTPUT | CPIA_MODULE_VP_CTRL | 7)
#define CPIA_COMMAND_SetVPDefaults	(OUTPUT | CPIA_MODULE_VP_CTRL | 8)
#define CPIA_COMMAND_SetApcor		(OUTPUT | CPIA_MODULE_VP_CTRL | 9)
#define CPIA_COMMAND_SetFlickerCtrl	(OUTPUT | CPIA_MODULE_VP_CTRL | 10)
#define CPIA_COMMAND_SetVLOffset	(OUTPUT | CPIA_MODULE_VP_CTRL | 11)
#define CPIA_COMMAND_GetColourParams	(INPUT | CPIA_MODULE_VP_CTRL | 16)
#define CPIA_COMMAND_GetColourBalance	(INPUT | CPIA_MODULE_VP_CTRL | 17)
#define CPIA_COMMAND_GetExposure	(INPUT | CPIA_MODULE_VP_CTRL | 18)
#define CPIA_COMMAND_SetSensorMatrix	(OUTPUT | CPIA_MODULE_VP_CTRL | 19)
#define CPIA_COMMAND_ColourBars		(OUTPUT | CPIA_MODULE_VP_CTRL | 25)
#define CPIA_COMMAND_ReadVPRegs		(INPUT | CPIA_MODULE_VP_CTRL | 30)
#define CPIA_COMMAND_WriteVPReg		(OUTPUT | CPIA_MODULE_VP_CTRL | 31)
#define CPIA_COMMAND_GrabFrame		(OUTPUT | CPIA_MODULE_CAPTURE | 1)
#define CPIA_COMMAND_UploadFrame	(OUTPUT | CPIA_MODULE_CAPTURE | 2)
#define CPIA_COMMAND_SetGrabMode	(OUTPUT | CPIA_MODULE_CAPTURE | 3)
#define CPIA_COMMAND_InitStreamCap	(OUTPUT | CPIA_MODULE_CAPTURE | 4)
#define CPIA_COMMAND_FiniStreamCap	(OUTPUT | CPIA_MODULE_CAPTURE | 5)
#define CPIA_COMMAND_StartStreamCap	(OUTPUT | CPIA_MODULE_CAPTURE | 6)
#define CPIA_COMMAND_EndStreamCap	(OUTPUT | CPIA_MODULE_CAPTURE | 7)
#define CPIA_COMMAND_SetFormat		(OUTPUT | CPIA_MODULE_CAPTURE | 8)
#define CPIA_COMMAND_SetROI		(OUTPUT | CPIA_MODULE_CAPTURE | 9)
#define CPIA_COMMAND_SetCompression	(OUTPUT | CPIA_MODULE_CAPTURE | 10)
#define CPIA_COMMAND_SetCompressionTarget (OUTPUT | CPIA_MODULE_CAPTURE | 11)
#define CPIA_COMMAND_SetYUVThresh	(OUTPUT | CPIA_MODULE_CAPTURE | 12)
#define CPIA_COMMAND_SetCompressionParams (OUTPUT | CPIA_MODULE_CAPTURE | 13)
#define CPIA_COMMAND_DiscardFrame	(OUTPUT | CPIA_MODULE_CAPTURE | 14)
#define CPIA_COMMAND_GrabReset		(OUTPUT | CPIA_MODULE_CAPTURE | 15)
#define CPIA_COMMAND_OutputRS232	(OUTPUT | CPIA_MODULE_DEBUG | 1)
#define CPIA_COMMAND_AbortProcess	(OUTPUT | CPIA_MODULE_DEBUG | 4)
#define CPIA_COMMAND_SetDramPage	(OUTPUT | CPIA_MODULE_DEBUG | 5)
#define CPIA_COMMAND_StartDramUpload	(OUTPUT | CPIA_MODULE_DEBUG | 6)
#define CPIA_COMMAND_StartDummyDtream	(OUTPUT | CPIA_MODULE_DEBUG | 8)
#define CPIA_COMMAND_AbortStream	(OUTPUT | CPIA_MODULE_DEBUG | 9)
#define CPIA_COMMAND_DownloadDRAM	(OUTPUT | CPIA_MODULE_DEBUG | 10)
#define CPIA_COMMAND_Null		(OUTPUT | CPIA_MODULE_DEBUG | 11)
#define ROUND_UP_EXP_FOR_FLICKER 15
#define MAX_EXP       302
#define MAX_EXP_102   255
#define LOW_EXP       140
#define VERY_LOW_EXP   70
#define TC             94
#define	EXP_ACC_DARK   50
#define	EXP_ACC_LIGHT  90
#define HIGH_COMP_102 160
#define MAX_COMP      239
#define DARK_TIME       3
#define LIGHT_TIME      3
#define FIRMWARE_VERSION(x, y) (sd->params.version.firmwareVersion == (x) && \
sd->params.version.firmwareRevision == (y))
static u8 flicker_jumps[2][2][4] =
;
struct cam_params ;
struct sd ;
static int sd_setbrightness(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getbrightness(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setcontrast(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getcontrast(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setsaturation(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getsaturation(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setfreq(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getfreq(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setcomptarget(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getcomptarget(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setilluminator1(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getilluminator1(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setilluminator2(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getilluminator2(struct gspca_dev *gspca_dev, __s32 *val);
static const struct ctrl sd_ctrls[] = ;
static const struct v4l2_pix_format mode[] = ;
static int cpia_usb_transferCmd(struct gspca_dev *gspca_dev, u8 *command)
static int do_command(struct gspca_dev *gspca_dev, u16 command,
u8 a, u8 b, u8 c, u8 d)
static int do_command_extended(struct gspca_dev *gspca_dev, u16 command,
u8 a, u8 b, u8 c, u8 d,
u8 e, u8 f, u8 g, u8 h,
u8 i, u8 j, u8 k, u8 l)
#define FLICKER_MAX_EXPOSURE                    250
#define FLICKER_ALLOWABLE_OVER_EXPOSURE         146
#define FLICKER_BRIGHTNESS_CONSTANT             59
static int find_over_exposure(int brightness)
#undef FLICKER_MAX_EXPOSURE
#undef FLICKER_ALLOWABLE_OVER_EXPOSURE
#undef FLICKER_BRIGHTNESS_CONSTANT
static void reset_camera_params(struct gspca_dev *gspca_dev)
static void printstatus(struct cam_params *params)
static int goto_low_power(struct gspca_dev *gspca_dev)
static int goto_high_power(struct gspca_dev *gspca_dev)
static int get_version_information(struct gspca_dev *gspca_dev)
static int save_camera_state(struct gspca_dev *gspca_dev)
static int command_setformat(struct gspca_dev *gspca_dev)
static int command_setcolourparams(struct gspca_dev *gspca_dev)
static int command_setapcor(struct gspca_dev *gspca_dev)
static int command_setvloffset(struct gspca_dev *gspca_dev)
static int command_setexposure(struct gspca_dev *gspca_dev)
static int command_setcolourbalance(struct gspca_dev *gspca_dev)
static int command_setcompressiontarget(struct gspca_dev *gspca_dev)
static int command_setyuvtresh(struct gspca_dev *gspca_dev)
static int command_setcompressionparams(struct gspca_dev *gspca_dev)
static int command_setcompression(struct gspca_dev *gspca_dev)
static int command_setsensorfps(struct gspca_dev *gspca_dev)
static int command_setflickerctrl(struct gspca_dev *gspca_dev)
static int command_setecptiming(struct gspca_dev *gspca_dev)
static int command_pause(struct gspca_dev *gspca_dev)
static int command_resume(struct gspca_dev *gspca_dev)
static int command_setlights(struct gspca_dev *gspca_dev)
static int set_flicker(struct gspca_dev *gspca_dev, int on, int apply)
static void monitor_exposure(struct gspca_dev *gspca_dev)
static void restart_flicker(struct gspca_dev *gspca_dev)
static int sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static int sd_start(struct gspca_dev *gspca_dev)
static void sd_stopN(struct gspca_dev *gspca_dev)
static int sd_init(struct gspca_dev *gspca_dev)
static void sd_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data,
int len)
static void sd_dq_callback(struct gspca_dev *gspca_dev)
static int sd_setbrightness(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getbrightness(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setcontrast(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getcontrast(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setsaturation(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getsaturation(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setfreq(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getfreq(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setcomptarget(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getcomptarget(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setilluminator(struct gspca_dev *gspca_dev, __s32 val, int n)
static int sd_setilluminator1(struct gspca_dev *gspca_dev, __s32 val)
static int sd_setilluminator2(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getilluminator(struct gspca_dev *gspca_dev, __s32 *val, int n)
static int sd_getilluminator1(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_getilluminator2(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_querymenu(struct gspca_dev *gspca_dev,
struct v4l2_querymenu *menu)
static const struct sd_desc sd_desc = ;
static const struct usb_device_id device_table[] = ;
MODULE_DEVICE_TABLE(usb, device_table);
static int sd_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_driver sd_driver = ;
static int __init sd_mod_init(void)
static void __exit sd_mod_exit(void)
module_init(sd_mod_init);
module_exit(sd_mod_exit);
