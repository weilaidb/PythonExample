#define __MBX_FB_H
struct mbxfb_val ;
struct fb_info;
struct mbxfb_platform_data ;
#define MBXFB_FMT_YUV16		0
#define MBXFB_FMT_YUV12		1
#define MBXFB_FMT_UY0VY1	2
#define MBXFB_FMT_VY0UY1	3
#define MBXFB_FMT_Y0UY1V	4
#define MBXFB_FMT_Y0VY1U	5
struct mbxfb_overlaySetup ;
#define MBXFB_ALPHABLEND_NONE		0
#define MBXFB_ALPHABLEND_GLOBAL		1
#define MBXFB_ALPHABLEND_PIXEL		2
#define MBXFB_COLORKEY_DISABLED		0
#define MBXFB_COLORKEY_PREVIOUS		1
#define MBXFB_COLORKEY_CURRENT		2
struct mbxfb_alphaCtl ;
#define MBXFB_PLANE_GRAPHICS	0
#define MBXFB_PLANE_VIDEO	1
struct mbxfb_planeorder ;
struct mbxfb_reg ;
#define MBXFB_IOCX_OVERLAY		_IOWR(0xF4, 0x00,struct mbxfb_overlaySetup)
#define MBXFB_IOCG_ALPHA		_IOR(0xF4, 0x01,struct mbxfb_alphaCtl)
#define MBXFB_IOCS_ALPHA		_IOW(0xF4, 0x02,struct mbxfb_alphaCtl)
#define MBXFB_IOCS_PLANEORDER	_IOR(0xF4, 0x03,struct mbxfb_planeorder)
#define MBXFB_IOCS_REG			_IOW(0xF4, 0x04,struct mbxfb_reg)
#define MBXFB_IOCX_REG			_IOWR(0xF4, 0x05,struct mbxfb_reg)
