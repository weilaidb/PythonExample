#define PWC_IOCTL_H
#define PSZ_SQCIF	0x00
#define PSZ_QSIF	0x01
#define PSZ_QCIF	0x02
#define PSZ_SIF		0x03
#define PSZ_CIF		0x04
#define PSZ_VGA		0x05
#define PSZ_MAX		6
#define PWC_FPS_SHIFT		16
#define PWC_FPS_MASK		0x00FF0000
#define PWC_FPS_FRMASK		0x003F0000
#define PWC_FPS_SNAPSHOT	0x00400000
#define PWC_QLT_MASK		0x03000000
#define PWC_QLT_SHIFT		24
struct pwc_coord
;
struct pwc_probe
;
struct pwc_serial
;
#define PWC_WB_INDOOR		0
#define PWC_WB_OUTDOOR		1
#define PWC_WB_FL		2
#define PWC_WB_MANUAL		3
#define PWC_WB_AUTO		4
struct pwc_whitebalance
;
struct pwc_wb_speed
;
struct pwc_leds
;
struct pwc_imagesize
;
#define PWC_MPT_PAN		0x01
#define PWC_MPT_TILT		0x02
#define PWC_MPT_TIMEOUT		0x04
struct pwc_mpt_angles
;
struct pwc_mpt_range
;
struct pwc_mpt_status
;
struct pwc_video_command
;
#define PWCX_FLAG_PLANAR	0x0001
#define PWCX_FLAG_BAYER		0x0008
#define VIDIOCPWCRUSER		_IO('v', 192)
#define VIDIOCPWCSUSER		_IO('v', 193)
#define VIDIOCPWCFACTORY	_IO('v', 194)
#define VIDIOCPWCSCQUAL		_IOW('v', 195, int)
#define VIDIOCPWCGCQUAL		_IOR('v', 195, int)
#define VIDIOCPWCGSERIAL	_IOR('v', 198, struct pwc_serial)
#define VIDIOCPWCPROBE		_IOR('v', 199, struct pwc_probe)
#define VIDIOCPWCSAGC		_IOW('v', 200, int)
#define VIDIOCPWCGAGC		_IOR('v', 200, int)
#define VIDIOCPWCSSHUTTER	_IOW('v', 201, int)
#define VIDIOCPWCSAWB           _IOW('v', 202, struct pwc_whitebalance)
#define VIDIOCPWCGAWB           _IOR('v', 202, struct pwc_whitebalance)
#define VIDIOCPWCSAWBSPEED	_IOW('v', 203, struct pwc_wb_speed)
#define VIDIOCPWCGAWBSPEED	_IOR('v', 203, struct pwc_wb_speed)
#define VIDIOCPWCSLED           _IOW('v', 205, struct pwc_leds)
#define VIDIOCPWCGLED           _IOR('v', 205, struct pwc_leds)
#define VIDIOCPWCSCONTOUR	_IOW('v', 206, int)
#define VIDIOCPWCGCONTOUR	_IOR('v', 206, int)
#define VIDIOCPWCSBACKLIGHT	_IOW('v', 207, int)
#define VIDIOCPWCGBACKLIGHT	_IOR('v', 207, int)
#define VIDIOCPWCSFLICKER	_IOW('v', 208, int)
#define VIDIOCPWCGFLICKER	_IOR('v', 208, int)
#define VIDIOCPWCSDYNNOISE	_IOW('v', 209, int)
#define VIDIOCPWCGDYNNOISE	_IOR('v', 209, int)
#define VIDIOCPWCGREALSIZE	_IOR('v', 210, struct pwc_imagesize)
#define VIDIOCPWCMPTRESET	_IOW('v', 211, int)
#define VIDIOCPWCMPTGRANGE	_IOR('v', 211, struct pwc_mpt_range)
#define VIDIOCPWCMPTSANGLE	_IOW('v', 212, struct pwc_mpt_angles)
#define VIDIOCPWCMPTGANGLE	_IOR('v', 212, struct pwc_mpt_angles)
#define VIDIOCPWCMPTSTATUS	_IOR('v', 213, struct pwc_mpt_status)
#define VIDIOCPWCGVIDCMD	_IOR('v', 215, struct pwc_video_command)
struct pwc_table_init_buffer ;
#define VIDIOCPWCGVIDTABLE	_IOR('v', 216, struct pwc_table_init_buffer)
#define V4L2_CID_PRIVATE_SAVE_USER       (V4L2_CID_PRIVATE_BASE + 0)
#define V4L2_CID_PRIVATE_RESTORE_USER    (V4L2_CID_PRIVATE_BASE + 1)
#define V4L2_CID_PRIVATE_RESTORE_FACTORY (V4L2_CID_PRIVATE_BASE + 2)
#define V4L2_CID_PRIVATE_COLOUR_MODE     (V4L2_CID_PRIVATE_BASE + 3)
#define V4L2_CID_PRIVATE_AUTOCONTOUR     (V4L2_CID_PRIVATE_BASE + 4)
#define V4L2_CID_PRIVATE_CONTOUR         (V4L2_CID_PRIVATE_BASE + 5)
#define V4L2_CID_PRIVATE_BACKLIGHT       (V4L2_CID_PRIVATE_BASE + 6)
#define V4L2_CID_PRIVATE_FLICKERLESS     (V4L2_CID_PRIVATE_BASE + 7)
#define V4L2_CID_PRIVATE_NOISE_REDUCTION (V4L2_CID_PRIVATE_BASE + 8)
struct pwc_raw_frame  __attribute__ ((packed));
