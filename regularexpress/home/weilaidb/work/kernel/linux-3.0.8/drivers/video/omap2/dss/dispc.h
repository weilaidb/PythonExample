#define __OMAP2_DISPC_REG_H
#define DISPC_REVISION			0x0000
#define DISPC_SYSCONFIG			0x0010
#define DISPC_SYSSTATUS			0x0014
#define DISPC_IRQSTATUS			0x0018
#define DISPC_IRQENABLE			0x001C
#define DISPC_CONTROL			0x0040
#define DISPC_CONFIG			0x0044
#define DISPC_CAPABLE			0x0048
#define DISPC_LINE_STATUS		0x005C
#define DISPC_LINE_NUMBER		0x0060
#define DISPC_GLOBAL_ALPHA		0x0074
#define DISPC_CONTROL2			0x0238
#define DISPC_CONFIG2			0x0620
#define DISPC_DIVISOR			0x0804
#define DISPC_OVL_BA0(n)		(DISPC_OVL_BASE(n) + \
DISPC_BA0_OFFSET(n))
#define DISPC_OVL_BA1(n)		(DISPC_OVL_BASE(n) + \
DISPC_BA1_OFFSET(n))
#define DISPC_OVL_BA0_UV(n)		(DISPC_OVL_BASE(n) + \
DISPC_BA0_UV_OFFSET(n))
#define DISPC_OVL_BA1_UV(n)		(DISPC_OVL_BASE(n) + \
DISPC_BA1_UV_OFFSET(n))
#define DISPC_OVL_POSITION(n)		(DISPC_OVL_BASE(n) + \
DISPC_POS_OFFSET(n))
#define DISPC_OVL_SIZE(n)		(DISPC_OVL_BASE(n) + \
DISPC_SIZE_OFFSET(n))
#define DISPC_OVL_ATTRIBUTES(n)		(DISPC_OVL_BASE(n) + \
DISPC_ATTR_OFFSET(n))
#define DISPC_OVL_ATTRIBUTES2(n)	(DISPC_OVL_BASE(n) + \
DISPC_ATTR2_OFFSET(n))
#define DISPC_OVL_FIFO_THRESHOLD(n)	(DISPC_OVL_BASE(n) + \
DISPC_FIFO_THRESH_OFFSET(n))
#define DISPC_OVL_FIFO_SIZE_STATUS(n)	(DISPC_OVL_BASE(n) + \
DISPC_FIFO_SIZE_STATUS_OFFSET(n))
#define DISPC_OVL_ROW_INC(n)		(DISPC_OVL_BASE(n) + \
DISPC_ROW_INC_OFFSET(n))
#define DISPC_OVL_PIXEL_INC(n)		(DISPC_OVL_BASE(n) + \
DISPC_PIX_INC_OFFSET(n))
#define DISPC_OVL_WINDOW_SKIP(n)	(DISPC_OVL_BASE(n) + \
DISPC_WINDOW_SKIP_OFFSET(n))
#define DISPC_OVL_TABLE_BA(n)		(DISPC_OVL_BASE(n) + \
DISPC_TABLE_BA_OFFSET(n))
#define DISPC_OVL_FIR(n)		(DISPC_OVL_BASE(n) + \
DISPC_FIR_OFFSET(n))
#define DISPC_OVL_FIR2(n)		(DISPC_OVL_BASE(n) + \
DISPC_FIR2_OFFSET(n))
#define DISPC_OVL_PICTURE_SIZE(n)	(DISPC_OVL_BASE(n) + \
DISPC_PIC_SIZE_OFFSET(n))
#define DISPC_OVL_ACCU0(n)		(DISPC_OVL_BASE(n) + \
DISPC_ACCU0_OFFSET(n))
#define DISPC_OVL_ACCU1(n)		(DISPC_OVL_BASE(n) + \
DISPC_ACCU1_OFFSET(n))
#define DISPC_OVL_ACCU2_0(n)		(DISPC_OVL_BASE(n) + \
DISPC_ACCU2_0_OFFSET(n))
#define DISPC_OVL_ACCU2_1(n)		(DISPC_OVL_BASE(n) + \
DISPC_ACCU2_1_OFFSET(n))
#define DISPC_OVL_FIR_COEF_H(n, i)	(DISPC_OVL_BASE(n) + \
DISPC_FIR_COEF_H_OFFSET(n, i))
#define DISPC_OVL_FIR_COEF_HV(n, i)	(DISPC_OVL_BASE(n) + \
DISPC_FIR_COEF_HV_OFFSET(n, i))
#define DISPC_OVL_FIR_COEF_H2(n, i)	(DISPC_OVL_BASE(n) + \
DISPC_FIR_COEF_H2_OFFSET(n, i))
#define DISPC_OVL_FIR_COEF_HV2(n, i)	(DISPC_OVL_BASE(n) + \
DISPC_FIR_COEF_HV2_OFFSET(n, i))
#define DISPC_OVL_CONV_COEF(n, i)	(DISPC_OVL_BASE(n) + \
DISPC_CONV_COEF_OFFSET(n, i))
#define DISPC_OVL_FIR_COEF_V(n, i)	(DISPC_OVL_BASE(n) + \
DISPC_FIR_COEF_V_OFFSET(n, i))
#define DISPC_OVL_FIR_COEF_V2(n, i)	(DISPC_OVL_BASE(n) + \
DISPC_FIR_COEF_V2_OFFSET(n, i))
#define DISPC_OVL_PRELOAD(n)		(DISPC_OVL_BASE(n) + \
DISPC_PRELOAD_OFFSET(n))
static inline u16 DISPC_DEFAULT_COLOR(enum omap_channel channel)
static inline u16 DISPC_TRANS_COLOR(enum omap_channel channel)
static inline u16 DISPC_TIMING_H(enum omap_channel channel)
static inline u16 DISPC_TIMING_V(enum omap_channel channel)
static inline u16 DISPC_POL_FREQ(enum omap_channel channel)
static inline u16 DISPC_DIVISORo(enum omap_channel channel)
static inline u16 DISPC_SIZE_MGR(enum omap_channel channel)
static inline u16 DISPC_DATA_CYCLE1(enum omap_channel channel)
static inline u16 DISPC_DATA_CYCLE2(enum omap_channel channel)
static inline u16 DISPC_DATA_CYCLE3(enum omap_channel channel)
static inline u16 DISPC_CPR_COEF_R(enum omap_channel channel)
static inline u16 DISPC_CPR_COEF_G(enum omap_channel channel)
static inline u16 DISPC_CPR_COEF_B(enum omap_channel channel)
static inline u16 DISPC_OVL_BASE(enum omap_plane plane)
static inline u16 DISPC_BA0_OFFSET(enum omap_plane plane)
static inline u16 DISPC_BA1_OFFSET(enum omap_plane plane)
static inline u16 DISPC_BA0_UV_OFFSET(enum omap_plane plane)
static inline u16 DISPC_BA1_UV_OFFSET(enum omap_plane plane)
static inline u16 DISPC_POS_OFFSET(enum omap_plane plane)
static inline u16 DISPC_SIZE_OFFSET(enum omap_plane plane)
static inline u16 DISPC_ATTR_OFFSET(enum omap_plane plane)
static inline u16 DISPC_ATTR2_OFFSET(enum omap_plane plane)
static inline u16 DISPC_FIFO_THRESH_OFFSET(enum omap_plane plane)
static inline u16 DISPC_FIFO_SIZE_STATUS_OFFSET(enum omap_plane plane)
static inline u16 DISPC_ROW_INC_OFFSET(enum omap_plane plane)
static inline u16 DISPC_PIX_INC_OFFSET(enum omap_plane plane)
static inline u16 DISPC_WINDOW_SKIP_OFFSET(enum omap_plane plane)
static inline u16 DISPC_TABLE_BA_OFFSET(enum omap_plane plane)
static inline u16 DISPC_FIR_OFFSET(enum omap_plane plane)
static inline u16 DISPC_FIR2_OFFSET(enum omap_plane plane)
static inline u16 DISPC_PIC_SIZE_OFFSET(enum omap_plane plane)
static inline u16 DISPC_ACCU0_OFFSET(enum omap_plane plane)
static inline u16 DISPC_ACCU2_0_OFFSET(enum omap_plane plane)
static inline u16 DISPC_ACCU1_OFFSET(enum omap_plane plane)
static inline u16 DISPC_ACCU2_1_OFFSET(enum omap_plane plane)
static inline u16 DISPC_FIR_COEF_H_OFFSET(enum omap_plane plane, u16 i)
static inline u16 DISPC_FIR_COEF_H2_OFFSET(enum omap_plane plane, u16 i)
static inline u16 DISPC_FIR_COEF_HV_OFFSET(enum omap_plane plane, u16 i)
static inline u16 DISPC_FIR_COEF_HV2_OFFSET(enum omap_plane plane, u16 i)
static inline u16 DISPC_CONV_COEF_OFFSET(enum omap_plane plane, u16 i)
static inline u16 DISPC_FIR_COEF_V_OFFSET(enum omap_plane plane, u16 i)
static inline u16 DISPC_FIR_COEF_V2_OFFSET(enum omap_plane plane, u16 i)
static inline u16 DISPC_PRELOAD_OFFSET(enum omap_plane plane)
