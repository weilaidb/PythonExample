#define _ASM_POWERPC_PS3AV_H_
#define PS3AV_VERSION 0x205
#define PS3AV_CID_AV_INIT              0x00000001
#define PS3AV_CID_AV_FIN               0x00000002
#define PS3AV_CID_AV_GET_HW_CONF       0x00000003
#define PS3AV_CID_AV_GET_MONITOR_INFO  0x00000004
#define PS3AV_CID_AV_ENABLE_EVENT      0x00000006
#define PS3AV_CID_AV_DISABLE_EVENT     0x00000007
#define PS3AV_CID_AV_TV_MUTE           0x0000000a
#define PS3AV_CID_AV_VIDEO_CS          0x00010001
#define PS3AV_CID_AV_VIDEO_MUTE        0x00010002
#define PS3AV_CID_AV_VIDEO_DISABLE_SIG 0x00010003
#define PS3AV_CID_AV_AUDIO_PARAM       0x00020001
#define PS3AV_CID_AV_AUDIO_MUTE        0x00020002
#define PS3AV_CID_AV_HDMI_MODE         0x00040001
#define PS3AV_CID_VIDEO_INIT           0x01000001
#define PS3AV_CID_VIDEO_MODE           0x01000002
#define PS3AV_CID_VIDEO_FORMAT         0x01000004
#define PS3AV_CID_VIDEO_PITCH          0x01000005
#define PS3AV_CID_AUDIO_INIT           0x02000001
#define PS3AV_CID_AUDIO_MODE           0x02000002
#define PS3AV_CID_AUDIO_MUTE           0x02000003
#define PS3AV_CID_AUDIO_ACTIVE         0x02000004
#define PS3AV_CID_AUDIO_INACTIVE       0x02000005
#define PS3AV_CID_AUDIO_SPDIF_BIT      0x02000006
#define PS3AV_CID_AUDIO_CTRL           0x02000007
#define PS3AV_CID_EVENT_UNPLUGGED      0x10000001
#define PS3AV_CID_EVENT_PLUGGED        0x10000002
#define PS3AV_CID_EVENT_HDCP_DONE      0x10000003
#define PS3AV_CID_EVENT_HDCP_FAIL      0x10000004
#define PS3AV_CID_EVENT_HDCP_AUTH      0x10000005
#define PS3AV_CID_EVENT_HDCP_ERROR     0x10000006
#define PS3AV_CID_AVB_PARAM            0x04000001
#define PS3AV_HDMI_MAX                 2
#define PS3AV_AVMULTI_MAX              1
#define PS3AV_AV_PORT_MAX              (PS3AV_HDMI_MAX + PS3AV_AVMULTI_MAX)
#define PS3AV_OPT_PORT_MAX             1
#define PS3AV_HEAD_MAX                 2
#define PS3AV_AVB_NUM_VIDEO            PS3AV_HEAD_MAX
#define PS3AV_AVB_NUM_AUDIO            0
#define PS3AV_AVB_NUM_AV_VIDEO         PS3AV_AV_PORT_MAX
#define PS3AV_AVB_NUM_AV_AUDIO         PS3AV_HDMI_MAX
#define PS3AV_MUTE_PORT_MAX            1
#define PS3AV_CMD_EVENT_BIT_UNPLUGGED			(1 << 0)
#define PS3AV_CMD_EVENT_BIT_PLUGGED			(1 << 1)
#define PS3AV_CMD_EVENT_BIT_HDCP_DONE			(1 << 2)
#define PS3AV_CMD_EVENT_BIT_HDCP_FAIL			(1 << 3)
#define PS3AV_CMD_EVENT_BIT_HDCP_REAUTH			(1 << 4)
#define PS3AV_CMD_EVENT_BIT_HDCP_TOPOLOGY		(1 << 5)
#define PS3AV_CMD_MUTE_OFF				0x0000
#define PS3AV_CMD_MUTE_ON				0x0001
#define PS3AV_CMD_AVPORT_HDMI_0				0x0000
#define PS3AV_CMD_AVPORT_HDMI_1				0x0001
#define PS3AV_CMD_AVPORT_AVMULTI_0			0x0010
#define PS3AV_CMD_AVPORT_SPDIF_0			0x0020
#define PS3AV_CMD_AVPORT_SPDIF_1			0x0021
#define PS3AV_CMD_AV_MCLK_128				0x0000
#define PS3AV_CMD_AV_MCLK_256				0x0001
#define PS3AV_CMD_AV_MCLK_512				0x0003
#define PS3AV_CMD_AV_INPUTLEN_16			0x02
#define PS3AV_CMD_AV_INPUTLEN_20			0x0a
#define PS3AV_CMD_AV_INPUTLEN_24			0x0b
#define PS3AV_CMD_AV_LAYOUT_32				(1 << 0)
#define PS3AV_CMD_AV_LAYOUT_44				(1 << 1)
#define PS3AV_CMD_AV_LAYOUT_48				(1 << 2)
#define PS3AV_CMD_AV_LAYOUT_88				(1 << 3)
#define PS3AV_CMD_AV_LAYOUT_96				(1 << 4)
#define PS3AV_CMD_AV_LAYOUT_176				(1 << 5)
#define PS3AV_CMD_AV_LAYOUT_192				(1 << 6)
#define PS3AV_CMD_AV_HDMI_MODE_NORMAL			0xff
#define PS3AV_CMD_AV_HDMI_HDCP_OFF			0x01
#define PS3AV_CMD_AV_HDMI_EDID_PASS			0x80
#define PS3AV_CMD_AV_HDMI_DVI				0x40
#define PS3AV_CMD_VIDEO_HEAD_A				0x0000
#define PS3AV_CMD_VIDEO_HEAD_B				0x0001
#define PS3AV_CMD_VIDEO_CS_NONE				0x0000
#define PS3AV_CMD_VIDEO_CS_RGB_8			0x0001
#define PS3AV_CMD_VIDEO_CS_YUV444_8			0x0002
#define PS3AV_CMD_VIDEO_CS_YUV422_8			0x0003
#define PS3AV_CMD_VIDEO_CS_XVYCC_8			0x0004
#define PS3AV_CMD_VIDEO_CS_RGB_10			0x0005
#define PS3AV_CMD_VIDEO_CS_YUV444_10			0x0006
#define PS3AV_CMD_VIDEO_CS_YUV422_10			0x0007
#define PS3AV_CMD_VIDEO_CS_XVYCC_10			0x0008
#define PS3AV_CMD_VIDEO_CS_RGB_12			0x0009
#define PS3AV_CMD_VIDEO_CS_YUV444_12			0x000a
#define PS3AV_CMD_VIDEO_CS_YUV422_12			0x000b
#define PS3AV_CMD_VIDEO_CS_XVYCC_12			0x000c
#define PS3AV_CMD_VIDEO_VID_NONE			0x0000
#define PS3AV_CMD_VIDEO_VID_480I			0x0001
#define PS3AV_CMD_VIDEO_VID_576I			0x0003
#define PS3AV_CMD_VIDEO_VID_480P			0x0005
#define PS3AV_CMD_VIDEO_VID_576P			0x0006
#define PS3AV_CMD_VIDEO_VID_1080I_60HZ			0x0007
#define PS3AV_CMD_VIDEO_VID_1080I_50HZ			0x0008
#define PS3AV_CMD_VIDEO_VID_720P_60HZ			0x0009
#define PS3AV_CMD_VIDEO_VID_720P_50HZ			0x000a
#define PS3AV_CMD_VIDEO_VID_1080P_60HZ			0x000b
#define PS3AV_CMD_VIDEO_VID_1080P_50HZ			0x000c
#define PS3AV_CMD_VIDEO_VID_WXGA			0x000d
#define PS3AV_CMD_VIDEO_VID_SXGA			0x000e
#define PS3AV_CMD_VIDEO_VID_WUXGA			0x000f
#define PS3AV_CMD_VIDEO_VID_480I_A			0x0010
#define PS3AV_CMD_VIDEO_FORMAT_BLACK			0x0000
#define PS3AV_CMD_VIDEO_FORMAT_ARGB_8BIT		0x0007
#define PS3AV_CMD_VIDEO_ORDER_RGB			0x0000
#define PS3AV_CMD_VIDEO_ORDER_BGR			0x0001
#define PS3AV_CMD_VIDEO_FMT_X8R8G8B8			0x0000
#define PS3AV_CMD_VIDEO_OUT_FORMAT_RGB_12BIT		0x0000
#define PS3AV_CMD_VIDEO_CL_CNV_ENABLE_LUT		0x0000
#define PS3AV_CMD_VIDEO_CL_CNV_DISABLE_LUT		0x0010
#define PS3AV_CMD_VIDEO_SYNC_VSYNC			0x0001
#define PS3AV_CMD_VIDEO_SYNC_CSYNC			0x0004
#define PS3AV_CMD_VIDEO_SYNC_HSYNC			0x0010
#define PS3AV_CMD_AUDIO_NUM_OF_CH_2			0x0000
#define PS3AV_CMD_AUDIO_NUM_OF_CH_3			0x0001
#define PS3AV_CMD_AUDIO_NUM_OF_CH_4			0x0002
#define PS3AV_CMD_AUDIO_NUM_OF_CH_5			0x0003
#define PS3AV_CMD_AUDIO_NUM_OF_CH_6			0x0004
#define PS3AV_CMD_AUDIO_NUM_OF_CH_7			0x0005
#define PS3AV_CMD_AUDIO_NUM_OF_CH_8			0x0006
#define PS3AV_CMD_AUDIO_FS_32K				0x0001
#define PS3AV_CMD_AUDIO_FS_44K				0x0002
#define PS3AV_CMD_AUDIO_FS_48K				0x0003
#define PS3AV_CMD_AUDIO_FS_88K				0x0004
#define PS3AV_CMD_AUDIO_FS_96K				0x0005
#define PS3AV_CMD_AUDIO_FS_176K				0x0006
#define PS3AV_CMD_AUDIO_FS_192K				0x0007
#define PS3AV_CMD_AUDIO_WORD_BITS_16			0x0001
#define PS3AV_CMD_AUDIO_WORD_BITS_20			0x0002
#define PS3AV_CMD_AUDIO_WORD_BITS_24			0x0003
#define PS3AV_CMD_AUDIO_FORMAT_PCM			0x0001
#define PS3AV_CMD_AUDIO_FORMAT_BITSTREAM		0x00ff
#define PS3AV_CMD_AUDIO_SOURCE_SERIAL			0x0000
#define PS3AV_CMD_AUDIO_SOURCE_SPDIF			0x0001
#define PS3AV_CMD_AUDIO_SWAP_0				0x0000
#define PS3AV_CMD_AUDIO_SWAP_1				0x0000
#define PS3AV_CMD_AUDIO_MAP_OUTPUT_0			0x0000
#define PS3AV_CMD_AUDIO_MAP_OUTPUT_1			0x0001
#define PS3AV_CMD_AUDIO_MAP_OUTPUT_2			0x0002
#define PS3AV_CMD_AUDIO_MAP_OUTPUT_3			0x0003
#define PS3AV_CMD_AUDIO_LAYOUT_2CH			0x0000
#define PS3AV_CMD_AUDIO_LAYOUT_6CH			0x000b
#define PS3AV_CMD_AUDIO_LAYOUT_8CH			0x001f
#define PS3AV_CMD_AUDIO_DOWNMIX_PERMITTED		0x0000
#define PS3AV_CMD_AUDIO_DOWNMIX_PROHIBITED		0x0001
#define PS3AV_CMD_AUDIO_PORT_HDMI_0			( 1 << 0 )
#define PS3AV_CMD_AUDIO_PORT_HDMI_1			( 1 << 1 )
#define PS3AV_CMD_AUDIO_PORT_AVMULTI_0			( 1 << 10 )
#define PS3AV_CMD_AUDIO_PORT_SPDIF_0			( 1 << 20 )
#define PS3AV_CMD_AUDIO_PORT_SPDIF_1			( 1 << 21 )
#define PS3AV_CMD_AUDIO_CTRL_ID_DAC_RESET		0x0000
#define PS3AV_CMD_AUDIO_CTRL_ID_DAC_DE_EMPHASIS		0x0001
#define PS3AV_CMD_AUDIO_CTRL_ID_AVCLK			0x0002
#define PS3AV_CMD_AUDIO_CTRL_RESET_NEGATE		0x0000
#define PS3AV_CMD_AUDIO_CTRL_RESET_ASSERT		0x0001
#define PS3AV_CMD_AUDIO_CTRL_DE_EMPHASIS_OFF		0x0000
#define PS3AV_CMD_AUDIO_CTRL_DE_EMPHASIS_ON		0x0001
#define PS3AV_CMD_AUDIO_CTRL_AVCLK_22			0x0000
#define PS3AV_CMD_AUDIO_CTRL_AVCLK_18			0x0001
#define PS3AV_CMD_AV_VID_480I				0x0000
#define PS3AV_CMD_AV_VID_480P				0x0001
#define PS3AV_CMD_AV_VID_720P_60HZ			0x0002
#define PS3AV_CMD_AV_VID_1080I_60HZ			0x0003
#define PS3AV_CMD_AV_VID_1080P_60HZ			0x0004
#define PS3AV_CMD_AV_VID_576I				0x0005
#define PS3AV_CMD_AV_VID_576P				0x0006
#define PS3AV_CMD_AV_VID_720P_50HZ			0x0007
#define PS3AV_CMD_AV_VID_1080I_50HZ			0x0008
#define PS3AV_CMD_AV_VID_1080P_50HZ			0x0009
#define PS3AV_CMD_AV_VID_WXGA				0x000a
#define PS3AV_CMD_AV_VID_SXGA				0x000b
#define PS3AV_CMD_AV_VID_WUXGA				0x000c
#define PS3AV_CMD_AV_CS_RGB_8				0x0000
#define PS3AV_CMD_AV_CS_YUV444_8			0x0001
#define PS3AV_CMD_AV_CS_YUV422_8			0x0002
#define PS3AV_CMD_AV_CS_XVYCC_8				0x0003
#define PS3AV_CMD_AV_CS_RGB_10				0x0004
#define PS3AV_CMD_AV_CS_YUV444_10			0x0005
#define PS3AV_CMD_AV_CS_YUV422_10			0x0006
#define PS3AV_CMD_AV_CS_XVYCC_10			0x0007
#define PS3AV_CMD_AV_CS_RGB_12				0x0008
#define PS3AV_CMD_AV_CS_YUV444_12			0x0009
#define PS3AV_CMD_AV_CS_YUV422_12			0x000a
#define PS3AV_CMD_AV_CS_XVYCC_12			0x000b
#define PS3AV_CMD_AV_CS_8				0x0000
#define PS3AV_CMD_AV_CS_10				0x0001
#define PS3AV_CMD_AV_CS_12				0x0002
#define PS3AV_CMD_AV_DITHER_OFF				0x0000
#define PS3AV_CMD_AV_DITHER_ON				0x0001
#define PS3AV_CMD_AV_DITHER_8BIT			0x0000
#define PS3AV_CMD_AV_DITHER_10BIT			0x0002
#define PS3AV_CMD_AV_DITHER_12BIT			0x0004
#define PS3AV_CMD_AV_SUPER_WHITE_OFF			0x0000
#define PS3AV_CMD_AV_SUPER_WHITE_ON			0x0001
#define PS3AV_CMD_AV_ASPECT_16_9			0x0000
#define PS3AV_CMD_AV_ASPECT_4_3				0x0001
#define PS3AV_CMD_VIDEO_CS_RGB				0x0001
#define PS3AV_CMD_VIDEO_CS_YUV422			0x0002
#define PS3AV_CMD_VIDEO_CS_YUV444			0x0003
#define PS3AV_RESBIT_720x480P			0x0003
#define PS3AV_RESBIT_720x576P			0x0003
#define PS3AV_RESBIT_1280x720P			0x0004
#define PS3AV_RESBIT_1920x1080I			0x0008
#define PS3AV_RESBIT_1920x1080P			0x4000
#define PS3AV_RES_MASK_60			(PS3AV_RESBIT_720x480P \
| PS3AV_RESBIT_1280x720P \
| PS3AV_RESBIT_1920x1080I \
| PS3AV_RESBIT_1920x1080P)
#define PS3AV_RES_MASK_50			(PS3AV_RESBIT_720x576P \
| PS3AV_RESBIT_1280x720P \
| PS3AV_RESBIT_1920x1080I \
| PS3AV_RESBIT_1920x1080P)
#define PS3AV_RESBIT_VGA			0x0001
#define PS3AV_RESBIT_WXGA			0x0002
#define PS3AV_RESBIT_SXGA			0x0004
#define PS3AV_RESBIT_WUXGA			0x0008
#define PS3AV_RES_MASK_VESA			(PS3AV_RESBIT_WXGA |\
PS3AV_RESBIT_SXGA |\
PS3AV_RESBIT_WUXGA)
#define PS3AV_MONITOR_TYPE_HDMI			1
#define PS3AV_MONITOR_TYPE_DVI			2
enum ps3av_mode_num ;
#define PS3AV_MODE_MASK				0x000F
#define PS3AV_MODE_HDCP_OFF			0x1000
#define PS3AV_MODE_DITHER			0x0800
#define PS3AV_MODE_COLOR			0x0400
#define PS3AV_MODE_WHITE			0x0200
#define PS3AV_MODE_FULL				0x0080
#define PS3AV_MODE_DVI				0x0040
#define PS3AV_MODE_RGB				0x0020
#define PS3AV_DEFAULT_HDMI_MODE_ID_REG_60	PS3AV_MODE_480P
#define PS3AV_DEFAULT_AVMULTI_MODE_ID_REG_60	PS3AV_MODE_480I
#define PS3AV_DEFAULT_HDMI_MODE_ID_REG_50	PS3AV_MODE_576P
#define PS3AV_DEFAULT_AVMULTI_MODE_ID_REG_50	PS3AV_MODE_576I
#define PS3AV_REGION_60				0x01
#define PS3AV_REGION_50				0x02
#define PS3AV_REGION_RGB			0x10
#define get_status(buf)				(((__u32 *)buf)[2])
#define PS3AV_HDR_SIZE				4
struct ps3av_send_hdr ;
struct ps3av_reply_hdr ;
struct ps3av_pkt_av_init ;
struct ps3av_pkt_av_fin ;
struct ps3av_pkt_av_get_hw_conf ;
struct ps3av_info_resolution ;
struct ps3av_info_cs ;
struct ps3av_info_color ;
struct ps3av_info_audio ;
struct ps3av_info_monitor  __attribute__ ((packed));
struct ps3av_pkt_av_get_monitor_info ;
struct ps3av_pkt_av_event ;
struct ps3av_pkt_av_video_cs ;
struct ps3av_av_mute ;
struct ps3av_pkt_av_video_mute ;
struct ps3av_pkt_av_video_disable_sig ;
struct ps3av_audio_info_frame ;
struct ps3av_pkt_av_audio_param ;
struct ps3av_pkt_av_audio_mute ;
struct ps3av_pkt_av_hdmi_mode ;
struct ps3av_pkt_av_tv_mute ;
struct ps3av_pkt_video_init ;
struct ps3av_pkt_video_mode ;
struct ps3av_pkt_video_format ;
struct ps3av_pkt_video_pitch ;
struct ps3av_pkt_audio_init ;
struct ps3av_pkt_audio_mode ;
struct ps3av_audio_mute ;
struct ps3av_pkt_audio_mute ;
struct ps3av_pkt_audio_active ;
struct ps3av_pkt_audio_spdif_bit ;
struct ps3av_pkt_audio_ctrl ;
#define PS3AV_PKT_AVB_PARAM_MAX_BUF_SIZE	\
(PS3AV_AVB_NUM_VIDEO*sizeof(struct ps3av_pkt_video_mode) + \
PS3AV_AVB_NUM_AUDIO*sizeof(struct ps3av_pkt_audio_mode) + \
PS3AV_AVB_NUM_AV_VIDEO*sizeof(struct ps3av_pkt_av_video_cs) + \
PS3AV_AVB_NUM_AV_AUDIO*sizeof(struct ps3av_pkt_av_audio_param))
struct ps3av_pkt_avb_param ;
extern u8 ps3av_mode_cs_info[];
#define PS3AV_STATUS_SUCCESS			0x0000
#define PS3AV_STATUS_RECEIVE_VUART_ERROR	0x0001
#define PS3AV_STATUS_SYSCON_COMMUNICATE_FAIL	0x0002
#define PS3AV_STATUS_INVALID_COMMAND		0x0003
#define PS3AV_STATUS_INVALID_PORT		0x0004
#define PS3AV_STATUS_INVALID_VID		0x0005
#define PS3AV_STATUS_INVALID_COLOR_SPACE	0x0006
#define PS3AV_STATUS_INVALID_FS			0x0007
#define PS3AV_STATUS_INVALID_AUDIO_CH		0x0008
#define PS3AV_STATUS_UNSUPPORTED_VERSION	0x0009
#define PS3AV_STATUS_INVALID_SAMPLE_SIZE	0x000a
#define PS3AV_STATUS_FAILURE			0x000b
#define PS3AV_STATUS_UNSUPPORTED_COMMAND	0x000c
#define PS3AV_STATUS_BUFFER_OVERFLOW		0x000d
#define PS3AV_STATUS_INVALID_VIDEO_PARAM	0x000e
#define PS3AV_STATUS_NO_SEL			0x000f
#define PS3AV_STATUS_INVALID_AV_PARAM		0x0010
#define PS3AV_STATUS_INVALID_AUDIO_PARAM	0x0011
#define PS3AV_STATUS_UNSUPPORTED_HDMI_MODE	0x0012
#define PS3AV_STATUS_NO_SYNC_HEAD		0x0013
extern void ps3av_set_hdr(u32, u16, struct ps3av_send_hdr *);
extern int ps3av_do_pkt(u32, u16, size_t, struct ps3av_send_hdr *);
extern int ps3av_cmd_init(void);
extern int ps3av_cmd_fin(void);
extern int ps3av_cmd_av_video_mute(int, u32 *, u32);
extern int ps3av_cmd_av_video_disable_sig(u32);
extern int ps3av_cmd_av_tv_mute(u32, u32);
extern int ps3av_cmd_enable_event(void);
extern int ps3av_cmd_av_hdmi_mode(u8);
extern u32 ps3av_cmd_set_av_video_cs(void *, u32, int, int, int, u32);
extern u32 ps3av_cmd_set_video_mode(void *, u32, int, int, u32);
extern int ps3av_cmd_video_format_black(u32, u32, u32);
extern int ps3av_cmd_av_audio_mute(int, u32 *, u32);
extern u32 ps3av_cmd_set_av_audio_param(void *, u32,
const struct ps3av_pkt_audio_mode *,
u32);
extern void ps3av_cmd_set_audio_mode(struct ps3av_pkt_audio_mode *, u32, u32,
u32, u32, u32, u32);
extern int ps3av_cmd_audio_mode(struct ps3av_pkt_audio_mode *);
extern int ps3av_cmd_audio_mute(int, u32 *, u32);
extern int ps3av_cmd_audio_active(int, u32);
extern int ps3av_cmd_avb_param(struct ps3av_pkt_avb_param *, u32);
extern int ps3av_cmd_av_get_hw_conf(struct ps3av_pkt_av_get_hw_conf *);
extern int ps3av_cmd_video_get_monitor_info(struct ps3av_pkt_av_get_monitor_info *,
u32);
extern int ps3av_set_video_mode(int);
extern int ps3av_set_audio_mode(u32, u32, u32, u32, u32);
extern int ps3av_get_auto_mode(void);
extern int ps3av_get_mode(void);
extern int ps3av_video_mode2res(u32, u32 *, u32 *);
extern int ps3av_video_mute(int);
extern int ps3av_audio_mute(int);
extern int ps3av_audio_mute_analog(int);
extern int ps3av_dev_open(void);
extern int ps3av_dev_close(void);
