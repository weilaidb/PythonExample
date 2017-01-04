#define __FSL_DIU_FB_H__
#define MEM_ALLOC_THRESHOLD (1024*768*4+32)
struct mfb_alpha ;
struct mfb_chroma_key ;
struct aoi_display_offset ;
#define MFB_SET_CHROMA_KEY	_IOW('M', 1, struct mfb_chroma_key)
#define MFB_SET_BRIGHTNESS	_IOW('M', 3, __u8)
#define MFB_SET_ALPHA		0x80014d00
#define MFB_GET_ALPHA		0x40014d00
#define MFB_SET_AOID		0x80084d04
#define MFB_GET_AOID		0x40084d04
#define MFB_SET_PIXFMT		0x80014d08
#define MFB_GET_PIXFMT		0x40014d08
#define FBIOGET_GWINFO		0x46E0
#define FBIOPUT_GWINFO		0x46E1
struct diu_ad  __attribute__ ((packed));
struct diu  __attribute__ ((packed));
struct diu_hw ;
struct diu_addr ;
struct diu_pool ;
#define FSL_DIU_BASE_OFFSET	0x2C000
#define INT_LCDC		64
#define FSL_AOI_NUM	6
#define MIN_XRES	64
#define MIN_YRES	64
#define MAX_CURS		32
#define MFB_MODE0	0
#define MFB_MODE1	1
#define MFB_MODE2	2
#define MFB_MODE3	3
#define MFB_MODE4	4
#define INT_VSYNC	0x01
#define INT_VSYNC_WB	0x02
#define INT_UNDRUN	0x04
#define INT_PARERR	0x08
#define INT_LS_BF_VS	0x10
#define MFB_TYPE_OUTPUT	0
#define MFB_TYPE_OFF	1
#define MFB_TYPE_WB	2
#define MFB_TYPE_TEST	3
