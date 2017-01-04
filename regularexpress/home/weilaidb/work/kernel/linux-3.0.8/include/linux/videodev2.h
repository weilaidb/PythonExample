#define __LINUX_VIDEODEV2_H
#define VIDEO_MAX_FRAME               32
#define VIDEO_MAX_PLANES               8
#define VID_TYPE_CAPTURE	1
#define VID_TYPE_TUNER		2
#define VID_TYPE_TELETEXT	4
#define VID_TYPE_OVERLAY	8
#define VID_TYPE_CHROMAKEY	16
#define VID_TYPE_CLIPPING	32
#define VID_TYPE_FRAMERAM	64
#define VID_TYPE_SCALES		128
#define VID_TYPE_MONOCHROME	256
#define VID_TYPE_SUBCAPTURE	512
#define VID_TYPE_MPEG_DECODER	1024
#define VID_TYPE_MPEG_ENCODER	2048
#define VID_TYPE_MJPEG_DECODER	4096
#define VID_TYPE_MJPEG_ENCODER	8192
#define v4l2_fourcc(a, b, c, d)\
((__u32)(a) | ((__u32)(b) << 8) | ((__u32)(c) << 16) | ((__u32)(d) << 24))
enum v4l2_field ;
#define V4L2_FIELD_HAS_TOP(field)	\
((field) == V4L2_FIELD_TOP 	||\
(field) == V4L2_FIELD_INTERLACED ||\
(field) == V4L2_FIELD_INTERLACED_TB ||\
(field) == V4L2_FIELD_INTERLACED_BT ||\
(field) == V4L2_FIELD_SEQ_TB	||\
(field) == V4L2_FIELD_SEQ_BT)
#define V4L2_FIELD_HAS_BOTTOM(field)	\
((field) == V4L2_FIELD_BOTTOM 	||\
(field) == V4L2_FIELD_INTERLACED ||\
(field) == V4L2_FIELD_INTERLACED_TB ||\
(field) == V4L2_FIELD_INTERLACED_BT ||\
(field) == V4L2_FIELD_SEQ_TB	||\
(field) == V4L2_FIELD_SEQ_BT)
#define V4L2_FIELD_HAS_BOTH(field)	\
((field) == V4L2_FIELD_INTERLACED ||\
(field) == V4L2_FIELD_INTERLACED_TB ||\
(field) == V4L2_FIELD_INTERLACED_BT ||\
(field) == V4L2_FIELD_SEQ_TB ||\
(field) == V4L2_FIELD_SEQ_BT)
enum v4l2_buf_type ;
#define V4L2_TYPE_IS_MULTIPLANAR(type)			\
((type) == V4L2_BUF_TYPE_VIDEO_CAPTURE_MPLANE	\
|| (type) == V4L2_BUF_TYPE_VIDEO_OUTPUT_MPLANE)
#define V4L2_TYPE_IS_OUTPUT(type)				\
((type) == V4L2_BUF_TYPE_VIDEO_OUTPUT			\
|| (type) == V4L2_BUF_TYPE_VIDEO_OUTPUT_MPLANE		\
|| (type) == V4L2_BUF_TYPE_VIDEO_OVERLAY		\
|| (type) == V4L2_BUF_TYPE_VIDEO_OUTPUT_OVERLAY	\
|| (type) == V4L2_BUF_TYPE_VBI_OUTPUT			\
|| (type) == V4L2_BUF_TYPE_SLICED_VBI_OUTPUT)
enum v4l2_tuner_type ;
enum v4l2_memory ;
V4L2_COLORSPACE_SMPTE170M     = 1,
V4L2_COLORSPACE_SMPTE240M     = 2,
V4L2_COLORSPACE_REC709        = 3,
V4L2_COLORSPACE_BT878         = 4,
V4L2_COLORSPACE_470_SYSTEM_M  = 5,
V4L2_COLORSPACE_470_SYSTEM_BG = 6,
V4L2_COLORSPACE_JPEG          = 7,
V4L2_COLORSPACE_SRGB          = 8,
};
enum v4l2_priority ;
struct v4l2_rect ;
struct v4l2_fract ;
struct v4l2_capability ;
#define V4L2_CAP_VIDEO_CAPTURE		0x00000001
#define V4L2_CAP_VIDEO_OUTPUT		0x00000002
#define V4L2_CAP_VIDEO_OVERLAY		0x00000004
#define V4L2_CAP_VBI_CAPTURE		0x00000010
#define V4L2_CAP_VBI_OUTPUT		0x00000020
#define V4L2_CAP_SLICED_VBI_CAPTURE	0x00000040
#define V4L2_CAP_SLICED_VBI_OUTPUT	0x00000080
#define V4L2_CAP_RDS_CAPTURE		0x00000100
#define V4L2_CAP_VIDEO_OUTPUT_OVERLAY	0x00000200
#define V4L2_CAP_HW_FREQ_SEEK		0x00000400
#define V4L2_CAP_RDS_OUTPUT		0x00000800
#define V4L2_CAP_VIDEO_CAPTURE_MPLANE	0x00001000
#define V4L2_CAP_VIDEO_OUTPUT_MPLANE	0x00002000
#define V4L2_CAP_TUNER			0x00010000
#define V4L2_CAP_AUDIO			0x00020000
#define V4L2_CAP_RADIO			0x00040000
#define V4L2_CAP_MODULATOR		0x00080000
#define V4L2_CAP_READWRITE              0x01000000
#define V4L2_CAP_ASYNCIO                0x02000000
#define V4L2_CAP_STREAMING              0x04000000
struct v4l2_pix_format ;
#define V4L2_PIX_FMT_RGB332  v4l2_fourcc('R', 'G', 'B', '1')
#define V4L2_PIX_FMT_RGB444  v4l2_fourcc('R', '4', '4', '4')
#define V4L2_PIX_FMT_RGB555  v4l2_fourcc('R', 'G', 'B', 'O')
#define V4L2_PIX_FMT_RGB565  v4l2_fourcc('R', 'G', 'B', 'P')
#define V4L2_PIX_FMT_RGB555X v4l2_fourcc('R', 'G', 'B', 'Q')
#define V4L2_PIX_FMT_RGB565X v4l2_fourcc('R', 'G', 'B', 'R')
#define V4L2_PIX_FMT_BGR666  v4l2_fourcc('B', 'G', 'R', 'H')
#define V4L2_PIX_FMT_BGR24   v4l2_fourcc('B', 'G', 'R', '3')
#define V4L2_PIX_FMT_RGB24   v4l2_fourcc('R', 'G', 'B', '3')
#define V4L2_PIX_FMT_BGR32   v4l2_fourcc('B', 'G', 'R', '4')
#define V4L2_PIX_FMT_RGB32   v4l2_fourcc('R', 'G', 'B', '4')
#define V4L2_PIX_FMT_GREY    v4l2_fourcc('G', 'R', 'E', 'Y')
#define V4L2_PIX_FMT_Y4      v4l2_fourcc('Y', '0', '4', ' ')
#define V4L2_PIX_FMT_Y6      v4l2_fourcc('Y', '0', '6', ' ')
#define V4L2_PIX_FMT_Y10     v4l2_fourcc('Y', '1', '0', ' ')
#define V4L2_PIX_FMT_Y12     v4l2_fourcc('Y', '1', '2', ' ')
#define V4L2_PIX_FMT_Y16     v4l2_fourcc('Y', '1', '6', ' ')
#define V4L2_PIX_FMT_Y10BPACK    v4l2_fourcc('Y', '1', '0', 'B')
#define V4L2_PIX_FMT_PAL8    v4l2_fourcc('P', 'A', 'L', '8')
#define V4L2_PIX_FMT_YVU410  v4l2_fourcc('Y', 'V', 'U', '9')
#define V4L2_PIX_FMT_YVU420  v4l2_fourcc('Y', 'V', '1', '2')
#define V4L2_PIX_FMT_YUYV    v4l2_fourcc('Y', 'U', 'Y', 'V')
#define V4L2_PIX_FMT_YYUV    v4l2_fourcc('Y', 'Y', 'U', 'V')
#define V4L2_PIX_FMT_YVYU    v4l2_fourcc('Y', 'V', 'Y', 'U')
#define V4L2_PIX_FMT_UYVY    v4l2_fourcc('U', 'Y', 'V', 'Y')
#define V4L2_PIX_FMT_VYUY    v4l2_fourcc('V', 'Y', 'U', 'Y')
#define V4L2_PIX_FMT_YUV422P v4l2_fourcc('4', '2', '2', 'P')
#define V4L2_PIX_FMT_YUV411P v4l2_fourcc('4', '1', '1', 'P')
#define V4L2_PIX_FMT_Y41P    v4l2_fourcc('Y', '4', '1', 'P')
#define V4L2_PIX_FMT_YUV444  v4l2_fourcc('Y', '4', '4', '4')
#define V4L2_PIX_FMT_YUV555  v4l2_fourcc('Y', 'U', 'V', 'O')
#define V4L2_PIX_FMT_YUV565  v4l2_fourcc('Y', 'U', 'V', 'P')
#define V4L2_PIX_FMT_YUV32   v4l2_fourcc('Y', 'U', 'V', '4')
#define V4L2_PIX_FMT_YUV410  v4l2_fourcc('Y', 'U', 'V', '9')
#define V4L2_PIX_FMT_YUV420  v4l2_fourcc('Y', 'U', '1', '2')
#define V4L2_PIX_FMT_HI240   v4l2_fourcc('H', 'I', '2', '4')
#define V4L2_PIX_FMT_HM12    v4l2_fourcc('H', 'M', '1', '2')
#define V4L2_PIX_FMT_M420    v4l2_fourcc('M', '4', '2', '0')
#define V4L2_PIX_FMT_NV12    v4l2_fourcc('N', 'V', '1', '2')
#define V4L2_PIX_FMT_NV21    v4l2_fourcc('N', 'V', '2', '1')
#define V4L2_PIX_FMT_NV16    v4l2_fourcc('N', 'V', '1', '6')
#define V4L2_PIX_FMT_NV61    v4l2_fourcc('N', 'V', '6', '1')
#define V4L2_PIX_FMT_NV12M   v4l2_fourcc('N', 'M', '1', '2')
#define V4L2_PIX_FMT_NV12MT  v4l2_fourcc('T', 'M', '1', '2')
#define V4L2_PIX_FMT_YUV420M v4l2_fourcc('Y', 'M', '1', '2')
#define V4L2_PIX_FMT_SGBRG8  v4l2_fourcc('G', 'B', 'R', 'G')
#define V4L2_PIX_FMT_SGRBG8  v4l2_fourcc('G', 'R', 'B', 'G')
#define V4L2_PIX_FMT_SRGGB8  v4l2_fourcc('R', 'G', 'G', 'B')
#define V4L2_PIX_FMT_SBGGR10 v4l2_fourcc('B', 'G', '1', '0')
#define V4L2_PIX_FMT_SGBRG10 v4l2_fourcc('G', 'B', '1', '0')
#define V4L2_PIX_FMT_SGRBG10 v4l2_fourcc('B', 'A', '1', '0')
#define V4L2_PIX_FMT_SRGGB10 v4l2_fourcc('R', 'G', '1', '0')
#define V4L2_PIX_FMT_SBGGR12 v4l2_fourcc('B', 'G', '1', '2')
#define V4L2_PIX_FMT_SGBRG12 v4l2_fourcc('G', 'B', '1', '2')
#define V4L2_PIX_FMT_SGRBG12 v4l2_fourcc('B', 'A', '1', '2')
#define V4L2_PIX_FMT_SRGGB12 v4l2_fourcc('R', 'G', '1', '2')
#define V4L2_PIX_FMT_SGRBG10DPCM8 v4l2_fourcc('B', 'D', '1', '0')
#define V4L2_PIX_FMT_SBGGR16 v4l2_fourcc('B', 'Y', 'R', '2')
#define V4L2_PIX_FMT_MJPEG    v4l2_fourcc('M', 'J', 'P', 'G')
#define V4L2_PIX_FMT_JPEG     v4l2_fourcc('J', 'P', 'E', 'G')
#define V4L2_PIX_FMT_DV       v4l2_fourcc('d', 'v', 's', 'd')
#define V4L2_PIX_FMT_MPEG     v4l2_fourcc('M', 'P', 'E', 'G')
#define V4L2_PIX_FMT_CPIA1    v4l2_fourcc('C', 'P', 'I', 'A')
#define V4L2_PIX_FMT_WNVA     v4l2_fourcc('W', 'N', 'V', 'A')
#define V4L2_PIX_FMT_SN9C10X  v4l2_fourcc('S', '9', '1', '0')
#define V4L2_PIX_FMT_SN9C20X_I420 v4l2_fourcc('S', '9', '2', '0')
#define V4L2_PIX_FMT_PWC1     v4l2_fourcc('P', 'W', 'C', '1')
#define V4L2_PIX_FMT_PWC2     v4l2_fourcc('P', 'W', 'C', '2')
#define V4L2_PIX_FMT_ET61X251 v4l2_fourcc('E', '6', '2', '5')
#define V4L2_PIX_FMT_SPCA501  v4l2_fourcc('S', '5', '0', '1')
#define V4L2_PIX_FMT_SPCA505  v4l2_fourcc('S', '5', '0', '5')
#define V4L2_PIX_FMT_SPCA508  v4l2_fourcc('S', '5', '0', '8')
#define V4L2_PIX_FMT_SPCA561  v4l2_fourcc('S', '5', '6', '1')
#define V4L2_PIX_FMT_PAC207   v4l2_fourcc('P', '2', '0', '7')
#define V4L2_PIX_FMT_MR97310A v4l2_fourcc('M', '3', '1', '0')
#define V4L2_PIX_FMT_SN9C2028 v4l2_fourcc('S', 'O', 'N', 'X')
#define V4L2_PIX_FMT_SQ905C   v4l2_fourcc('9', '0', '5', 'C')
#define V4L2_PIX_FMT_PJPG     v4l2_fourcc('P', 'J', 'P', 'G')
#define V4L2_PIX_FMT_OV511    v4l2_fourcc('O', '5', '1', '1')
#define V4L2_PIX_FMT_OV518    v4l2_fourcc('O', '5', '1', '8')
#define V4L2_PIX_FMT_STV0680  v4l2_fourcc('S', '6', '8', '0')
#define V4L2_PIX_FMT_TM6000   v4l2_fourcc('T', 'M', '6', '0')
#define V4L2_PIX_FMT_CIT_YYVYUY v4l2_fourcc('C', 'I', 'T', 'V')
#define V4L2_PIX_FMT_KONICA420  v4l2_fourcc('K', 'O', 'N', 'I')
#define V4L2_PIX_FMT_JPGL	v4l2_fourcc('J', 'P', 'G', 'L')
struct v4l2_fmtdesc ;
#define V4L2_FMT_FLAG_COMPRESSED 0x0001
#define V4L2_FMT_FLAG_EMULATED   0x0002
#if 1
enum v4l2_frmsizetypes ;
struct v4l2_frmsize_discrete ;
struct v4l2_frmsize_stepwise ;
struct v4l2_frmsizeenum ;
enum v4l2_frmivaltypes ;
struct v4l2_frmival_stepwise ;
struct v4l2_frmivalenum ;
struct v4l2_timecode ;
#define V4L2_TC_TYPE_24FPS		1
#define V4L2_TC_TYPE_25FPS		2
#define V4L2_TC_TYPE_30FPS		3
#define V4L2_TC_TYPE_50FPS		4
#define V4L2_TC_TYPE_60FPS		5
#define V4L2_TC_FLAG_DROPFRAME		0x0001
#define V4L2_TC_FLAG_COLORFRAME		0x0002
#define V4L2_TC_USERBITS_field		0x000C
#define V4L2_TC_USERBITS_USERDEFINED	0x0000
#define V4L2_TC_USERBITS_8BITCHARS	0x0008
struct v4l2_jpegcompression ;
struct v4l2_requestbuffers ;
struct v4l2_plane ;
struct v4l2_buffer ;
#define V4L2_BUF_FLAG_MAPPED	0x0001
#define V4L2_BUF_FLAG_QUEUED	0x0002
#define V4L2_BUF_FLAG_DONE	0x0004
#define V4L2_BUF_FLAG_KEYFRAME	0x0008
#define V4L2_BUF_FLAG_PFRAME	0x0010
#define V4L2_BUF_FLAG_BFRAME	0x0020
#define V4L2_BUF_FLAG_ERROR	0x0040
#define V4L2_BUF_FLAG_TIMECODE	0x0100
#define V4L2_BUF_FLAG_INPUT     0x0200
struct v4l2_framebuffer ;
#define V4L2_FBUF_CAP_EXTERNOVERLAY	0x0001
#define V4L2_FBUF_CAP_CHROMAKEY		0x0002
#define V4L2_FBUF_CAP_LIST_CLIPPING     0x0004
#define V4L2_FBUF_CAP_BITMAP_CLIPPING	0x0008
#define V4L2_FBUF_CAP_LOCAL_ALPHA	0x0010
#define V4L2_FBUF_CAP_GLOBAL_ALPHA	0x0020
#define V4L2_FBUF_CAP_LOCAL_INV_ALPHA	0x0040
#define V4L2_FBUF_CAP_SRC_CHROMAKEY	0x0080
#define V4L2_FBUF_FLAG_PRIMARY		0x0001
#define V4L2_FBUF_FLAG_OVERLAY		0x0002
#define V4L2_FBUF_FLAG_CHROMAKEY	0x0004
#define V4L2_FBUF_FLAG_LOCAL_ALPHA	0x0008
#define V4L2_FBUF_FLAG_GLOBAL_ALPHA	0x0010
#define V4L2_FBUF_FLAG_LOCAL_INV_ALPHA	0x0020
#define V4L2_FBUF_FLAG_SRC_CHROMAKEY	0x0040
struct v4l2_clip ;
struct v4l2_window ;
struct v4l2_captureparm ;
#define V4L2_MODE_HIGHQUALITY	0x0001
#define V4L2_CAP_TIMEPERFRAME	0x1000
struct v4l2_outputparm ;
struct v4l2_cropcap ;
struct v4l2_crop ;
typedef __u64 v4l2_std_id;
#define V4L2_STD_PAL_B          ((v4l2_std_id)0x00000001)
#define V4L2_STD_PAL_B1         ((v4l2_std_id)0x00000002)
#define V4L2_STD_PAL_G          ((v4l2_std_id)0x00000004)
#define V4L2_STD_PAL_H          ((v4l2_std_id)0x00000008)
#define V4L2_STD_PAL_I          ((v4l2_std_id)0x00000010)
#define V4L2_STD_PAL_D          ((v4l2_std_id)0x00000020)
#define V4L2_STD_PAL_D1         ((v4l2_std_id)0x00000040)
#define V4L2_STD_PAL_K          ((v4l2_std_id)0x00000080)
#define V4L2_STD_PAL_M          ((v4l2_std_id)0x00000100)
#define V4L2_STD_PAL_N          ((v4l2_std_id)0x00000200)
#define V4L2_STD_PAL_Nc         ((v4l2_std_id)0x00000400)
#define V4L2_STD_PAL_60         ((v4l2_std_id)0x00000800)
#define V4L2_STD_NTSC_M         ((v4l2_std_id)0x00001000)
#define V4L2_STD_NTSC_M_JP      ((v4l2_std_id)0x00002000)
#define V4L2_STD_NTSC_443       ((v4l2_std_id)0x00004000)
#define V4L2_STD_NTSC_M_KR      ((v4l2_std_id)0x00008000)
#define V4L2_STD_SECAM_B        ((v4l2_std_id)0x00010000)
#define V4L2_STD_SECAM_D        ((v4l2_std_id)0x00020000)
#define V4L2_STD_SECAM_G        ((v4l2_std_id)0x00040000)
#define V4L2_STD_SECAM_H        ((v4l2_std_id)0x00080000)
#define V4L2_STD_SECAM_K        ((v4l2_std_id)0x00100000)
#define V4L2_STD_SECAM_K1       ((v4l2_std_id)0x00200000)
#define V4L2_STD_SECAM_L        ((v4l2_std_id)0x00400000)
#define V4L2_STD_SECAM_LC       ((v4l2_std_id)0x00800000)
#define V4L2_STD_ATSC_8_VSB     ((v4l2_std_id)0x01000000)
#define V4L2_STD_ATSC_16_VSB    ((v4l2_std_id)0x02000000)
#define V4L2_STD_MN	(V4L2_STD_PAL_M|V4L2_STD_PAL_N|V4L2_STD_PAL_Nc|V4L2_STD_NTSC)
#define V4L2_STD_B	(V4L2_STD_PAL_B|V4L2_STD_PAL_B1|V4L2_STD_SECAM_B)
#define V4L2_STD_GH	(V4L2_STD_PAL_G|V4L2_STD_PAL_H|V4L2_STD_SECAM_G|V4L2_STD_SECAM_H)
#define V4L2_STD_DK	(V4L2_STD_PAL_DK|V4L2_STD_SECAM_DK)
#define V4L2_STD_PAL_BG		(V4L2_STD_PAL_B		|\
V4L2_STD_PAL_B1	|\
V4L2_STD_PAL_G)
#define V4L2_STD_PAL_DK		(V4L2_STD_PAL_D		|\
V4L2_STD_PAL_D1	|\
V4L2_STD_PAL_K)
#define V4L2_STD_PAL		(V4L2_STD_PAL_BG	|\
V4L2_STD_PAL_DK	|\
V4L2_STD_PAL_H		|\
V4L2_STD_PAL_I)
#define V4L2_STD_NTSC           (V4L2_STD_NTSC_M	|\
V4L2_STD_NTSC_M_JP     |\
V4L2_STD_NTSC_M_KR)
#define V4L2_STD_SECAM_DK      	(V4L2_STD_SECAM_D	|\
V4L2_STD_SECAM_K	|\
V4L2_STD_SECAM_K1)
#define V4L2_STD_SECAM		(V4L2_STD_SECAM_B	|\
V4L2_STD_SECAM_G	|\
V4L2_STD_SECAM_H	|\
V4L2_STD_SECAM_DK	|\
V4L2_STD_SECAM_L       |\
V4L2_STD_SECAM_LC)
#define V4L2_STD_525_60		(V4L2_STD_PAL_M		|\
V4L2_STD_PAL_60	|\
V4L2_STD_NTSC		|\
V4L2_STD_NTSC_443)
#define V4L2_STD_625_50		(V4L2_STD_PAL		|\
V4L2_STD_PAL_N		|\
V4L2_STD_PAL_Nc	|\
V4L2_STD_SECAM)
#define V4L2_STD_ATSC           (V4L2_STD_ATSC_8_VSB    |\
V4L2_STD_ATSC_16_VSB)
#define V4L2_STD_UNKNOWN        0
#define V4L2_STD_ALL            (V4L2_STD_525_60	|\
V4L2_STD_625_50)
struct v4l2_standard ;
struct v4l2_dv_preset ;
struct v4l2_dv_enum_preset ;
#define		V4L2_DV_INVALID		0
#define		V4L2_DV_480P59_94	1
#define		V4L2_DV_576P50		2
#define		V4L2_DV_720P24		3
#define		V4L2_DV_720P25		4
#define		V4L2_DV_720P30		5
#define		V4L2_DV_720P50		6
#define		V4L2_DV_720P59_94	7
#define		V4L2_DV_720P60		8
#define		V4L2_DV_1080I29_97	9
#define		V4L2_DV_1080I30		10
#define		V4L2_DV_1080I25		11
#define		V4L2_DV_1080I50		12
#define		V4L2_DV_1080I60		13
#define		V4L2_DV_1080P24		14
#define		V4L2_DV_1080P25		15
#define		V4L2_DV_1080P30		16
#define		V4L2_DV_1080P50		17
#define		V4L2_DV_1080P60		18
struct v4l2_bt_timings  __attribute__ ((packed));
#define	V4L2_DV_PROGRESSIVE	0
#define	V4L2_DV_INTERLACED	1
#define V4L2_DV_VSYNC_POS_POL	0x00000001
#define V4L2_DV_HSYNC_POS_POL	0x00000002
struct v4l2_dv_timings  __attribute__ ((packed));
#define V4L2_DV_BT_656_1120	0
struct v4l2_input ;
#define V4L2_INPUT_TYPE_TUNER		1
#define V4L2_INPUT_TYPE_CAMERA		2
#define V4L2_IN_ST_NO_POWER    0x00000001
#define V4L2_IN_ST_NO_SIGNAL   0x00000002
#define V4L2_IN_ST_NO_COLOR    0x00000004
#define V4L2_IN_ST_HFLIP       0x00000010
#define V4L2_IN_ST_VFLIP       0x00000020
#define V4L2_IN_ST_NO_H_LOCK   0x00000100
#define V4L2_IN_ST_COLOR_KILL  0x00000200
#define V4L2_IN_ST_NO_SYNC     0x00010000
#define V4L2_IN_ST_NO_EQU      0x00020000
#define V4L2_IN_ST_NO_CARRIER  0x00040000
#define V4L2_IN_ST_MACROVISION 0x01000000
#define V4L2_IN_ST_NO_ACCESS   0x02000000
#define V4L2_IN_ST_VTR         0x04000000
#define V4L2_IN_CAP_PRESETS		0x00000001
#define V4L2_IN_CAP_CUSTOM_TIMINGS	0x00000002
#define V4L2_IN_CAP_STD			0x00000004
struct v4l2_output ;
#define V4L2_OUTPUT_TYPE_MODULATOR		1
#define V4L2_OUTPUT_TYPE_ANALOG			2
#define V4L2_OUTPUT_TYPE_ANALOGVGAOVERLAY	3
#define V4L2_OUT_CAP_PRESETS		0x00000001
#define V4L2_OUT_CAP_CUSTOM_TIMINGS	0x00000002
#define V4L2_OUT_CAP_STD		0x00000004
struct v4l2_control ;
struct v4l2_ext_control  __attribute__ ((packed));
struct v4l2_ext_controls ;
#define V4L2_CTRL_CLASS_USER 0x00980000
#define V4L2_CTRL_CLASS_MPEG 0x00990000
#define V4L2_CTRL_CLASS_CAMERA 0x009a0000
#define V4L2_CTRL_CLASS_FM_TX 0x009b0000
#define V4L2_CTRL_ID_MASK      	  (0x0fffffff)
#define V4L2_CTRL_ID2CLASS(id)    ((id) & 0x0fff0000UL)
#define V4L2_CTRL_DRIVER_PRIV(id) (((id) & 0xffff) >= 0x1000)
enum v4l2_ctrl_type ;
struct v4l2_queryctrl ;
struct v4l2_querymenu ;
#define V4L2_CTRL_FLAG_DISABLED		0x0001
#define V4L2_CTRL_FLAG_GRABBED		0x0002
#define V4L2_CTRL_FLAG_READ_ONLY 	0x0004
#define V4L2_CTRL_FLAG_UPDATE 		0x0008
#define V4L2_CTRL_FLAG_INACTIVE 	0x0010
#define V4L2_CTRL_FLAG_SLIDER 		0x0020
#define V4L2_CTRL_FLAG_WRITE_ONLY 	0x0040
#define V4L2_CTRL_FLAG_NEXT_CTRL	0x80000000
#define V4L2_CID_BASE			(V4L2_CTRL_CLASS_USER | 0x900)
#define V4L2_CID_USER_BASE 		V4L2_CID_BASE
#define V4L2_CID_PRIVATE_BASE		0x08000000
#define V4L2_CID_USER_CLASS 		(V4L2_CTRL_CLASS_USER | 1)
#define V4L2_CID_BRIGHTNESS		(V4L2_CID_BASE+0)
#define V4L2_CID_CONTRAST		(V4L2_CID_BASE+1)
#define V4L2_CID_SATURATION		(V4L2_CID_BASE+2)
#define V4L2_CID_HUE			(V4L2_CID_BASE+3)
#define V4L2_CID_AUDIO_VOLUME		(V4L2_CID_BASE+5)
#define V4L2_CID_AUDIO_BALANCE		(V4L2_CID_BASE+6)
#define V4L2_CID_AUDIO_BASS		(V4L2_CID_BASE+7)
#define V4L2_CID_AUDIO_TREBLE		(V4L2_CID_BASE+8)
#define V4L2_CID_AUDIO_MUTE		(V4L2_CID_BASE+9)
#define V4L2_CID_AUDIO_LOUDNESS		(V4L2_CID_BASE+10)
#define V4L2_CID_BLACK_LEVEL		(V4L2_CID_BASE+11)
#define V4L2_CID_AUTO_WHITE_BALANCE	(V4L2_CID_BASE+12)
#define V4L2_CID_DO_WHITE_BALANCE	(V4L2_CID_BASE+13)
#define V4L2_CID_RED_BALANCE		(V4L2_CID_BASE+14)
#define V4L2_CID_BLUE_BALANCE		(V4L2_CID_BASE+15)
#define V4L2_CID_GAMMA			(V4L2_CID_BASE+16)
#define V4L2_CID_WHITENESS		(V4L2_CID_GAMMA)
#define V4L2_CID_EXPOSURE		(V4L2_CID_BASE+17)
#define V4L2_CID_AUTOGAIN		(V4L2_CID_BASE+18)
#define V4L2_CID_GAIN			(V4L2_CID_BASE+19)
#define V4L2_CID_HFLIP			(V4L2_CID_BASE+20)
#define V4L2_CID_VFLIP			(V4L2_CID_BASE+21)
#define V4L2_CID_HCENTER		(V4L2_CID_BASE+22)
#define V4L2_CID_VCENTER		(V4L2_CID_BASE+23)
#define V4L2_CID_POWER_LINE_FREQUENCY	(V4L2_CID_BASE+24)
enum v4l2_power_line_frequency ;
#define V4L2_CID_HUE_AUTO			(V4L2_CID_BASE+25)
#define V4L2_CID_WHITE_BALANCE_TEMPERATURE	(V4L2_CID_BASE+26)
#define V4L2_CID_SHARPNESS			(V4L2_CID_BASE+27)
#define V4L2_CID_BACKLIGHT_COMPENSATION 	(V4L2_CID_BASE+28)
#define V4L2_CID_CHROMA_AGC                     (V4L2_CID_BASE+29)
#define V4L2_CID_COLOR_KILLER                   (V4L2_CID_BASE+30)
#define V4L2_CID_COLORFX			(V4L2_CID_BASE+31)
enum v4l2_colorfx ;
#define V4L2_CID_AUTOBRIGHTNESS			(V4L2_CID_BASE+32)
#define V4L2_CID_BAND_STOP_FILTER		(V4L2_CID_BASE+33)
#define V4L2_CID_ROTATE				(V4L2_CID_BASE+34)
#define V4L2_CID_BG_COLOR			(V4L2_CID_BASE+35)
#define V4L2_CID_CHROMA_GAIN                    (V4L2_CID_BASE+36)
#define V4L2_CID_ILLUMINATORS_1			(V4L2_CID_BASE+37)
#define V4L2_CID_ILLUMINATORS_2			(V4L2_CID_BASE+38)
#define V4L2_CID_LASTP1                         (V4L2_CID_BASE+39)
#define V4L2_CID_MPEG_BASE 			(V4L2_CTRL_CLASS_MPEG | 0x900)
#define V4L2_CID_MPEG_CLASS 			(V4L2_CTRL_CLASS_MPEG | 1)
#define V4L2_CID_MPEG_STREAM_TYPE 		(V4L2_CID_MPEG_BASE+0)
enum v4l2_mpeg_stream_type ;
#define V4L2_CID_MPEG_STREAM_PID_PMT 		(V4L2_CID_MPEG_BASE+1)
#define V4L2_CID_MPEG_STREAM_PID_AUDIO 		(V4L2_CID_MPEG_BASE+2)
#define V4L2_CID_MPEG_STREAM_PID_VIDEO 		(V4L2_CID_MPEG_BASE+3)
#define V4L2_CID_MPEG_STREAM_PID_PCR 		(V4L2_CID_MPEG_BASE+4)
#define V4L2_CID_MPEG_STREAM_PES_ID_AUDIO 	(V4L2_CID_MPEG_BASE+5)
#define V4L2_CID_MPEG_STREAM_PES_ID_VIDEO 	(V4L2_CID_MPEG_BASE+6)
#define V4L2_CID_MPEG_STREAM_VBI_FMT 		(V4L2_CID_MPEG_BASE+7)
enum v4l2_mpeg_stream_vbi_fmt ;
#define V4L2_CID_MPEG_AUDIO_SAMPLING_FREQ 	(V4L2_CID_MPEG_BASE+100)
enum v4l2_mpeg_audio_sampling_freq ;
#define V4L2_CID_MPEG_AUDIO_ENCODING 		(V4L2_CID_MPEG_BASE+101)
enum v4l2_mpeg_audio_encoding ;
#define V4L2_CID_MPEG_AUDIO_L1_BITRATE 		(V4L2_CID_MPEG_BASE+102)
enum v4l2_mpeg_audio_l1_bitrate ;
#define V4L2_CID_MPEG_AUDIO_L2_BITRATE 		(V4L2_CID_MPEG_BASE+103)
enum v4l2_mpeg_audio_l2_bitrate ;
#define V4L2_CID_MPEG_AUDIO_L3_BITRATE 		(V4L2_CID_MPEG_BASE+104)
enum v4l2_mpeg_audio_l3_bitrate ;
#define V4L2_CID_MPEG_AUDIO_MODE 		(V4L2_CID_MPEG_BASE+105)
enum v4l2_mpeg_audio_mode ;
#define V4L2_CID_MPEG_AUDIO_MODE_EXTENSION 	(V4L2_CID_MPEG_BASE+106)
enum v4l2_mpeg_audio_mode_extension ;
#define V4L2_CID_MPEG_AUDIO_EMPHASIS 		(V4L2_CID_MPEG_BASE+107)
enum v4l2_mpeg_audio_emphasis ;
#define V4L2_CID_MPEG_AUDIO_CRC 		(V4L2_CID_MPEG_BASE+108)
enum v4l2_mpeg_audio_crc ;
#define V4L2_CID_MPEG_AUDIO_MUTE 		(V4L2_CID_MPEG_BASE+109)
#define V4L2_CID_MPEG_AUDIO_AAC_BITRATE		(V4L2_CID_MPEG_BASE+110)
#define V4L2_CID_MPEG_AUDIO_AC3_BITRATE		(V4L2_CID_MPEG_BASE+111)
enum v4l2_mpeg_audio_ac3_bitrate ;
#define V4L2_CID_MPEG_VIDEO_ENCODING 		(V4L2_CID_MPEG_BASE+200)
enum v4l2_mpeg_video_encoding ;
#define V4L2_CID_MPEG_VIDEO_ASPECT 		(V4L2_CID_MPEG_BASE+201)
enum v4l2_mpeg_video_aspect ;
#define V4L2_CID_MPEG_VIDEO_B_FRAMES 		(V4L2_CID_MPEG_BASE+202)
#define V4L2_CID_MPEG_VIDEO_GOP_SIZE 		(V4L2_CID_MPEG_BASE+203)
#define V4L2_CID_MPEG_VIDEO_GOP_CLOSURE 	(V4L2_CID_MPEG_BASE+204)
#define V4L2_CID_MPEG_VIDEO_PULLDOWN 		(V4L2_CID_MPEG_BASE+205)
#define V4L2_CID_MPEG_VIDEO_BITRATE_MODE 	(V4L2_CID_MPEG_BASE+206)
enum v4l2_mpeg_video_bitrate_mode ;
#define V4L2_CID_MPEG_VIDEO_BITRATE 		(V4L2_CID_MPEG_BASE+207)
#define V4L2_CID_MPEG_VIDEO_BITRATE_PEAK 	(V4L2_CID_MPEG_BASE+208)
#define V4L2_CID_MPEG_VIDEO_TEMPORAL_DECIMATION (V4L2_CID_MPEG_BASE+209)
#define V4L2_CID_MPEG_VIDEO_MUTE 		(V4L2_CID_MPEG_BASE+210)
#define V4L2_CID_MPEG_VIDEO_MUTE_YUV 		(V4L2_CID_MPEG_BASE+211)
#define V4L2_CID_MPEG_CX2341X_BASE 				(V4L2_CTRL_CLASS_MPEG | 0x1000)
#define V4L2_CID_MPEG_CX2341X_VIDEO_SPATIAL_FILTER_MODE 	(V4L2_CID_MPEG_CX2341X_BASE+0)
enum v4l2_mpeg_cx2341x_video_spatial_filter_mode ;
#define V4L2_CID_MPEG_CX2341X_VIDEO_SPATIAL_FILTER 		(V4L2_CID_MPEG_CX2341X_BASE+1)
#define V4L2_CID_MPEG_CX2341X_VIDEO_LUMA_SPATIAL_FILTER_TYPE 	(V4L2_CID_MPEG_CX2341X_BASE+2)
enum v4l2_mpeg_cx2341x_video_luma_spatial_filter_type ;
#define V4L2_CID_MPEG_CX2341X_VIDEO_CHROMA_SPATIAL_FILTER_TYPE 	(V4L2_CID_MPEG_CX2341X_BASE+3)
enum v4l2_mpeg_cx2341x_video_chroma_spatial_filter_type ;
#define V4L2_CID_MPEG_CX2341X_VIDEO_TEMPORAL_FILTER_MODE 	(V4L2_CID_MPEG_CX2341X_BASE+4)
enum v4l2_mpeg_cx2341x_video_temporal_filter_mode ;
#define V4L2_CID_MPEG_CX2341X_VIDEO_TEMPORAL_FILTER 		(V4L2_CID_MPEG_CX2341X_BASE+5)
#define V4L2_CID_MPEG_CX2341X_VIDEO_MEDIAN_FILTER_TYPE 		(V4L2_CID_MPEG_CX2341X_BASE+6)
enum v4l2_mpeg_cx2341x_video_median_filter_type ;
#define V4L2_CID_MPEG_CX2341X_VIDEO_LUMA_MEDIAN_FILTER_BOTTOM 	(V4L2_CID_MPEG_CX2341X_BASE+7)
#define V4L2_CID_MPEG_CX2341X_VIDEO_LUMA_MEDIAN_FILTER_TOP 	(V4L2_CID_MPEG_CX2341X_BASE+8)
#define V4L2_CID_MPEG_CX2341X_VIDEO_CHROMA_MEDIAN_FILTER_BOTTOM	(V4L2_CID_MPEG_CX2341X_BASE+9)
#define V4L2_CID_MPEG_CX2341X_VIDEO_CHROMA_MEDIAN_FILTER_TOP 	(V4L2_CID_MPEG_CX2341X_BASE+10)
#define V4L2_CID_MPEG_CX2341X_STREAM_INSERT_NAV_PACKETS 	(V4L2_CID_MPEG_CX2341X_BASE+11)
#define V4L2_CID_CAMERA_CLASS_BASE 	(V4L2_CTRL_CLASS_CAMERA | 0x900)
#define V4L2_CID_CAMERA_CLASS 		(V4L2_CTRL_CLASS_CAMERA | 1)
#define V4L2_CID_EXPOSURE_AUTO			(V4L2_CID_CAMERA_CLASS_BASE+1)
enum  v4l2_exposure_auto_type ;
#define V4L2_CID_EXPOSURE_ABSOLUTE		(V4L2_CID_CAMERA_CLASS_BASE+2)
#define V4L2_CID_EXPOSURE_AUTO_PRIORITY		(V4L2_CID_CAMERA_CLASS_BASE+3)
#define V4L2_CID_PAN_RELATIVE			(V4L2_CID_CAMERA_CLASS_BASE+4)
#define V4L2_CID_TILT_RELATIVE			(V4L2_CID_CAMERA_CLASS_BASE+5)
#define V4L2_CID_PAN_RESET			(V4L2_CID_CAMERA_CLASS_BASE+6)
#define V4L2_CID_TILT_RESET			(V4L2_CID_CAMERA_CLASS_BASE+7)
#define V4L2_CID_PAN_ABSOLUTE			(V4L2_CID_CAMERA_CLASS_BASE+8)
#define V4L2_CID_TILT_ABSOLUTE			(V4L2_CID_CAMERA_CLASS_BASE+9)
#define V4L2_CID_FOCUS_ABSOLUTE			(V4L2_CID_CAMERA_CLASS_BASE+10)
#define V4L2_CID_FOCUS_RELATIVE			(V4L2_CID_CAMERA_CLASS_BASE+11)
#define V4L2_CID_FOCUS_AUTO			(V4L2_CID_CAMERA_CLASS_BASE+12)
#define V4L2_CID_ZOOM_ABSOLUTE			(V4L2_CID_CAMERA_CLASS_BASE+13)
#define V4L2_CID_ZOOM_RELATIVE			(V4L2_CID_CAMERA_CLASS_BASE+14)
#define V4L2_CID_ZOOM_CONTINUOUS		(V4L2_CID_CAMERA_CLASS_BASE+15)
#define V4L2_CID_PRIVACY			(V4L2_CID_CAMERA_CLASS_BASE+16)
#define V4L2_CID_IRIS_ABSOLUTE			(V4L2_CID_CAMERA_CLASS_BASE+17)
#define V4L2_CID_IRIS_RELATIVE			(V4L2_CID_CAMERA_CLASS_BASE+18)
#define V4L2_CID_FM_TX_CLASS_BASE		(V4L2_CTRL_CLASS_FM_TX | 0x900)
#define V4L2_CID_FM_TX_CLASS			(V4L2_CTRL_CLASS_FM_TX | 1)
#define V4L2_CID_RDS_TX_DEVIATION		(V4L2_CID_FM_TX_CLASS_BASE + 1)
#define V4L2_CID_RDS_TX_PI			(V4L2_CID_FM_TX_CLASS_BASE + 2)
#define V4L2_CID_RDS_TX_PTY			(V4L2_CID_FM_TX_CLASS_BASE + 3)
#define V4L2_CID_RDS_TX_PS_NAME			(V4L2_CID_FM_TX_CLASS_BASE + 5)
#define V4L2_CID_RDS_TX_RADIO_TEXT		(V4L2_CID_FM_TX_CLASS_BASE + 6)
#define V4L2_CID_AUDIO_LIMITER_ENABLED		(V4L2_CID_FM_TX_CLASS_BASE + 64)
#define V4L2_CID_AUDIO_LIMITER_RELEASE_TIME	(V4L2_CID_FM_TX_CLASS_BASE + 65)
#define V4L2_CID_AUDIO_LIMITER_DEVIATION	(V4L2_CID_FM_TX_CLASS_BASE + 66)
#define V4L2_CID_AUDIO_COMPRESSION_ENABLED	(V4L2_CID_FM_TX_CLASS_BASE + 80)
#define V4L2_CID_AUDIO_COMPRESSION_GAIN		(V4L2_CID_FM_TX_CLASS_BASE + 81)
#define V4L2_CID_AUDIO_COMPRESSION_THRESHOLD	(V4L2_CID_FM_TX_CLASS_BASE + 82)
#define V4L2_CID_AUDIO_COMPRESSION_ATTACK_TIME	(V4L2_CID_FM_TX_CLASS_BASE + 83)
#define V4L2_CID_AUDIO_COMPRESSION_RELEASE_TIME	(V4L2_CID_FM_TX_CLASS_BASE + 84)
#define V4L2_CID_PILOT_TONE_ENABLED		(V4L2_CID_FM_TX_CLASS_BASE + 96)
#define V4L2_CID_PILOT_TONE_DEVIATION		(V4L2_CID_FM_TX_CLASS_BASE + 97)
#define V4L2_CID_PILOT_TONE_FREQUENCY		(V4L2_CID_FM_TX_CLASS_BASE + 98)
#define V4L2_CID_TUNE_PREEMPHASIS		(V4L2_CID_FM_TX_CLASS_BASE + 112)
enum v4l2_preemphasis ;
#define V4L2_CID_TUNE_POWER_LEVEL		(V4L2_CID_FM_TX_CLASS_BASE + 113)
#define V4L2_CID_TUNE_ANTENNA_CAPACITOR		(V4L2_CID_FM_TX_CLASS_BASE + 114)
struct v4l2_tuner ;
struct v4l2_modulator ;
#define V4L2_TUNER_CAP_LOW		0x0001
#define V4L2_TUNER_CAP_NORM		0x0002
#define V4L2_TUNER_CAP_STEREO		0x0010
#define V4L2_TUNER_CAP_LANG2		0x0020
#define V4L2_TUNER_CAP_SAP		0x0020
#define V4L2_TUNER_CAP_LANG1		0x0040
#define V4L2_TUNER_CAP_RDS		0x0080
#define V4L2_TUNER_CAP_RDS_BLOCK_IO	0x0100
#define V4L2_TUNER_CAP_RDS_CONTROLS	0x0200
#define V4L2_TUNER_SUB_MONO		0x0001
#define V4L2_TUNER_SUB_STEREO		0x0002
#define V4L2_TUNER_SUB_LANG2		0x0004
#define V4L2_TUNER_SUB_SAP		0x0004
#define V4L2_TUNER_SUB_LANG1		0x0008
#define V4L2_TUNER_SUB_RDS		0x0010
#define V4L2_TUNER_MODE_MONO		0x0000
#define V4L2_TUNER_MODE_STEREO		0x0001
#define V4L2_TUNER_MODE_LANG2		0x0002
#define V4L2_TUNER_MODE_SAP		0x0002
#define V4L2_TUNER_MODE_LANG1		0x0003
#define V4L2_TUNER_MODE_LANG1_LANG2	0x0004
struct v4l2_frequency ;
struct v4l2_hw_freq_seek ;
struct v4l2_rds_data  __attribute__ ((packed));
#define V4L2_RDS_BLOCK_MSK 	 0x7
#define V4L2_RDS_BLOCK_A 	 0
#define V4L2_RDS_BLOCK_B 	 1
#define V4L2_RDS_BLOCK_C 	 2
#define V4L2_RDS_BLOCK_D 	 3
#define V4L2_RDS_BLOCK_C_ALT 	 4
#define V4L2_RDS_BLOCK_INVALID 	 7
#define V4L2_RDS_BLOCK_CORRECTED 0x40
#define V4L2_RDS_BLOCK_ERROR 	 0x80
struct v4l2_audio ;
#define V4L2_AUDCAP_STEREO		0x00001
#define V4L2_AUDCAP_AVL			0x00002
#define V4L2_AUDMODE_AVL		0x00001
struct v4l2_audioout ;
#if 1
#define V4L2_ENC_IDX_FRAME_I    (0)
#define V4L2_ENC_IDX_FRAME_P    (1)
#define V4L2_ENC_IDX_FRAME_B    (2)
#define V4L2_ENC_IDX_FRAME_MASK (0xf)
struct v4l2_enc_idx_entry ;
#define V4L2_ENC_IDX_ENTRIES (64)
struct v4l2_enc_idx ;
#define V4L2_ENC_CMD_START      (0)
#define V4L2_ENC_CMD_STOP       (1)
#define V4L2_ENC_CMD_PAUSE      (2)
#define V4L2_ENC_CMD_RESUME     (3)
#define V4L2_ENC_CMD_STOP_AT_GOP_END    (1 << 0)
struct v4l2_encoder_cmd ;
struct v4l2_vbi_format ;
#define V4L2_VBI_UNSYNC		(1 << 0)
#define V4L2_VBI_INTERLACED	(1 << 1)
struct v4l2_sliced_vbi_format ;
#define V4L2_SLICED_TELETEXT_B          (0x0001)
#define V4L2_SLICED_VPS                 (0x0400)
#define V4L2_SLICED_CAPTION_525         (0x1000)
#define V4L2_SLICED_WSS_625             (0x4000)
#define V4L2_SLICED_VBI_525             (V4L2_SLICED_CAPTION_525)
#define V4L2_SLICED_VBI_625             (V4L2_SLICED_TELETEXT_B | V4L2_SLICED_VPS | V4L2_SLICED_WSS_625)
struct v4l2_sliced_vbi_cap ;
struct v4l2_sliced_vbi_data ;
#define V4L2_MPEG_VBI_IVTV_TELETEXT_B     (1)
#define V4L2_MPEG_VBI_IVTV_CAPTION_525    (4)
#define V4L2_MPEG_VBI_IVTV_WSS_625        (5)
#define V4L2_MPEG_VBI_IVTV_VPS            (7)
struct v4l2_mpeg_vbi_itv0_line  __attribute__ ((packed));
struct v4l2_mpeg_vbi_itv0  __attribute__ ((packed));
struct v4l2_mpeg_vbi_ITV0  __attribute__ ((packed));
#define V4L2_MPEG_VBI_IVTV_MAGIC0	"itv0"
#define V4L2_MPEG_VBI_IVTV_MAGIC1	"ITV0"
struct v4l2_mpeg_vbi_fmt_ivtv  __attribute__ ((packed));
struct v4l2_plane_pix_format  __attribute__ ((packed));
struct v4l2_pix_format_mplane  __attribute__ ((packed));
struct v4l2_format ;
struct v4l2_streamparm ;
#define V4L2_EVENT_ALL				0
#define V4L2_EVENT_VSYNC			1
#define V4L2_EVENT_EOS				2
#define V4L2_EVENT_PRIVATE_START		0x08000000
struct v4l2_event_vsync  __attribute__ ((packed));
struct v4l2_event ;
struct v4l2_event_subscription ;
#define V4L2_CHIP_MATCH_HOST       0
#define V4L2_CHIP_MATCH_I2C_DRIVER 1
#define V4L2_CHIP_MATCH_I2C_ADDR   2
#define V4L2_CHIP_MATCH_AC97       3
struct v4l2_dbg_match  __attribute__ ((packed));
struct v4l2_dbg_register  __attribute__ ((packed));
struct v4l2_dbg_chip_ident  __attribute__ ((packed));
#define VIDIOC_QUERYCAP		 _IOR('V',  0, struct v4l2_capability)
#define VIDIOC_RESERVED		  _IO('V',  1)
#define VIDIOC_ENUM_FMT         _IOWR('V',  2, struct v4l2_fmtdesc)
#define VIDIOC_G_FMT		_IOWR('V',  4, struct v4l2_format)
#define VIDIOC_S_FMT		_IOWR('V',  5, struct v4l2_format)
#define VIDIOC_REQBUFS		_IOWR('V',  8, struct v4l2_requestbuffers)
#define VIDIOC_QUERYBUF		_IOWR('V',  9, struct v4l2_buffer)
#define VIDIOC_G_FBUF		 _IOR('V', 10, struct v4l2_framebuffer)
#define VIDIOC_S_FBUF		 _IOW('V', 11, struct v4l2_framebuffer)
#define VIDIOC_OVERLAY		 _IOW('V', 14, int)
#define VIDIOC_QBUF		_IOWR('V', 15, struct v4l2_buffer)
#define VIDIOC_DQBUF		_IOWR('V', 17, struct v4l2_buffer)
#define VIDIOC_STREAMON		 _IOW('V', 18, int)
#define VIDIOC_STREAMOFF	 _IOW('V', 19, int)
#define VIDIOC_G_PARM		_IOWR('V', 21, struct v4l2_streamparm)
#define VIDIOC_S_PARM		_IOWR('V', 22, struct v4l2_streamparm)
#define VIDIOC_G_STD		 _IOR('V', 23, v4l2_std_id)
#define VIDIOC_S_STD		 _IOW('V', 24, v4l2_std_id)
#define VIDIOC_ENUMSTD		_IOWR('V', 25, struct v4l2_standard)
#define VIDIOC_ENUMINPUT	_IOWR('V', 26, struct v4l2_input)
#define VIDIOC_G_CTRL		_IOWR('V', 27, struct v4l2_control)
#define VIDIOC_S_CTRL		_IOWR('V', 28, struct v4l2_control)
#define VIDIOC_G_TUNER		_IOWR('V', 29, struct v4l2_tuner)
#define VIDIOC_S_TUNER		 _IOW('V', 30, struct v4l2_tuner)
#define VIDIOC_G_AUDIO		 _IOR('V', 33, struct v4l2_audio)
#define VIDIOC_S_AUDIO		 _IOW('V', 34, struct v4l2_audio)
#define VIDIOC_QUERYCTRL	_IOWR('V', 36, struct v4l2_queryctrl)
#define VIDIOC_QUERYMENU	_IOWR('V', 37, struct v4l2_querymenu)
#define VIDIOC_G_INPUT		 _IOR('V', 38, int)
#define VIDIOC_S_INPUT		_IOWR('V', 39, int)
#define VIDIOC_G_OUTPUT		 _IOR('V', 46, int)
#define VIDIOC_S_OUTPUT		_IOWR('V', 47, int)
#define VIDIOC_ENUMOUTPUT	_IOWR('V', 48, struct v4l2_output)
#define VIDIOC_G_AUDOUT		 _IOR('V', 49, struct v4l2_audioout)
#define VIDIOC_S_AUDOUT		 _IOW('V', 50, struct v4l2_audioout)
#define VIDIOC_G_MODULATOR	_IOWR('V', 54, struct v4l2_modulator)
#define VIDIOC_S_MODULATOR	 _IOW('V', 55, struct v4l2_modulator)
#define VIDIOC_G_FREQUENCY	_IOWR('V', 56, struct v4l2_frequency)
#define VIDIOC_S_FREQUENCY	 _IOW('V', 57, struct v4l2_frequency)
#define VIDIOC_CROPCAP		_IOWR('V', 58, struct v4l2_cropcap)
#define VIDIOC_G_CROP		_IOWR('V', 59, struct v4l2_crop)
#define VIDIOC_S_CROP		 _IOW('V', 60, struct v4l2_crop)
#define VIDIOC_G_JPEGCOMP	 _IOR('V', 61, struct v4l2_jpegcompression)
#define VIDIOC_S_JPEGCOMP	 _IOW('V', 62, struct v4l2_jpegcompression)
#define VIDIOC_QUERYSTD      	 _IOR('V', 63, v4l2_std_id)
#define VIDIOC_TRY_FMT      	_IOWR('V', 64, struct v4l2_format)
#define VIDIOC_ENUMAUDIO	_IOWR('V', 65, struct v4l2_audio)
#define VIDIOC_ENUMAUDOUT	_IOWR('V', 66, struct v4l2_audioout)
#define VIDIOC_G_PRIORITY        _IOR('V', 67, enum v4l2_priority)
#define VIDIOC_S_PRIORITY        _IOW('V', 68, enum v4l2_priority)
#define VIDIOC_G_SLICED_VBI_CAP _IOWR('V', 69, struct v4l2_sliced_vbi_cap)
#define VIDIOC_LOG_STATUS         _IO('V', 70)
#define VIDIOC_G_EXT_CTRLS	_IOWR('V', 71, struct v4l2_ext_controls)
#define VIDIOC_S_EXT_CTRLS	_IOWR('V', 72, struct v4l2_ext_controls)
#define VIDIOC_TRY_EXT_CTRLS	_IOWR('V', 73, struct v4l2_ext_controls)
#if 1
#define VIDIOC_ENUM_FRAMESIZES	_IOWR('V', 74, struct v4l2_frmsizeenum)
#define VIDIOC_ENUM_FRAMEINTERVALS _IOWR('V', 75, struct v4l2_frmivalenum)
#define VIDIOC_G_ENC_INDEX       _IOR('V', 76, struct v4l2_enc_idx)
#define VIDIOC_ENCODER_CMD      _IOWR('V', 77, struct v4l2_encoder_cmd)
#define VIDIOC_TRY_ENCODER_CMD  _IOWR('V', 78, struct v4l2_encoder_cmd)
#if 1
#define	VIDIOC_DBG_S_REGISTER 	 _IOW('V', 79, struct v4l2_dbg_register)
#define	VIDIOC_DBG_G_REGISTER 	_IOWR('V', 80, struct v4l2_dbg_register)
#define VIDIOC_DBG_G_CHIP_IDENT _IOWR('V', 81, struct v4l2_dbg_chip_ident)
#define VIDIOC_S_HW_FREQ_SEEK	 _IOW('V', 82, struct v4l2_hw_freq_seek)
#define	VIDIOC_ENUM_DV_PRESETS	_IOWR('V', 83, struct v4l2_dv_enum_preset)
#define	VIDIOC_S_DV_PRESET	_IOWR('V', 84, struct v4l2_dv_preset)
#define	VIDIOC_G_DV_PRESET	_IOWR('V', 85, struct v4l2_dv_preset)
#define	VIDIOC_QUERY_DV_PRESET	_IOR('V',  86, struct v4l2_dv_preset)
#define	VIDIOC_S_DV_TIMINGS	_IOWR('V', 87, struct v4l2_dv_timings)
#define	VIDIOC_G_DV_TIMINGS	_IOWR('V', 88, struct v4l2_dv_timings)
#define	VIDIOC_DQEVENT		 _IOR('V', 89, struct v4l2_event)
#define	VIDIOC_SUBSCRIBE_EVENT	 _IOW('V', 90, struct v4l2_event_subscription)
#define	VIDIOC_UNSUBSCRIBE_EVENT _IOW('V', 91, struct v4l2_event_subscription)
#define BASE_VIDIOC_PRIVATE	192
