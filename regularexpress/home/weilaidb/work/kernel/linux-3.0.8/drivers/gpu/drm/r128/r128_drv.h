#define __R128_DRV_H__
#define DRIVER_AUTHOR		"Gareth Hughes, VA Linux Systems Inc."
#define DRIVER_NAME		"r128"
#define DRIVER_DESC		"ATI Rage 128"
#define DRIVER_DATE		"20030725"
#define DRIVER_MAJOR		2
#define DRIVER_MINOR		5
#define DRIVER_PATCHLEVEL	0
#define GET_RING_HEAD(dev_priv)		R128_READ(R128_PM4_BUFFER_DL_RPTR)
typedef struct drm_r128_freelist  drm_r128_freelist_t;
typedef struct drm_r128_ring_buffer  drm_r128_ring_buffer_t;
typedef struct drm_r128_private  drm_r128_private_t;
typedef struct drm_r128_buf_priv  drm_r128_buf_priv_t;
extern struct drm_ioctl_desc r128_ioctls[];
extern int r128_max_ioctl;
extern int r128_cce_init(struct drm_device *dev, void *data, struct drm_file *file_priv);
extern int r128_cce_start(struct drm_device *dev, void *data, struct drm_file *file_priv);
extern int r128_cce_stop(struct drm_device *dev, void *data, struct drm_file *file_priv);
extern int r128_cce_reset(struct drm_device *dev, void *data, struct drm_file *file_priv);
extern int r128_cce_idle(struct drm_device *dev, void *data, struct drm_file *file_priv);
extern int r128_engine_reset(struct drm_device *dev, void *data, struct drm_file *file_priv);
extern int r128_fullscreen(struct drm_device *dev, void *data, struct drm_file *file_priv);
extern int r128_cce_buffers(struct drm_device *dev, void *data, struct drm_file *file_priv);
extern void r128_freelist_reset(struct drm_device *dev);
extern int r128_wait_ring(drm_r128_private_t *dev_priv, int n);
extern int r128_do_cce_idle(drm_r128_private_t *dev_priv);
extern int r128_do_cleanup_cce(struct drm_device *dev);
extern int r128_enable_vblank(struct drm_device *dev, int crtc);
extern void r128_disable_vblank(struct drm_device *dev, int crtc);
extern u32 r128_get_vblank_counter(struct drm_device *dev, int crtc);
extern irqreturn_t r128_driver_irq_handler(DRM_IRQ_ARGS);
extern void r128_driver_irq_preinstall(struct drm_device *dev);
extern int r128_driver_irq_postinstall(struct drm_device *dev);
extern void r128_driver_irq_uninstall(struct drm_device *dev);
extern void r128_driver_lastclose(struct drm_device *dev);
extern int r128_driver_load(struct drm_device *dev, unsigned long flags);
extern void r128_driver_preclose(struct drm_device *dev,
struct drm_file *file_priv);
extern long r128_compat_ioctl(struct file *filp, unsigned int cmd,
unsigned long arg);
#define R128_AUX_SC_CNTL		0x1660
#	define R128_AUX1_SC_EN			(1 << 0)
#	define R128_AUX1_SC_MODE_OR		(0 << 1)
#	define R128_AUX1_SC_MODE_NAND		(1 << 1)
#	define R128_AUX2_SC_EN			(1 << 2)
#	define R128_AUX2_SC_MODE_OR		(0 << 3)
#	define R128_AUX2_SC_MODE_NAND		(1 << 3)
#	define R128_AUX3_SC_EN			(1 << 4)
#	define R128_AUX3_SC_MODE_OR		(0 << 5)
#	define R128_AUX3_SC_MODE_NAND		(1 << 5)
#define R128_AUX1_SC_LEFT		0x1664
#define R128_AUX1_SC_RIGHT		0x1668
#define R128_AUX1_SC_TOP		0x166c
#define R128_AUX1_SC_BOTTOM		0x1670
#define R128_AUX2_SC_LEFT		0x1674
#define R128_AUX2_SC_RIGHT		0x1678
#define R128_AUX2_SC_TOP		0x167c
#define R128_AUX2_SC_BOTTOM		0x1680
#define R128_AUX3_SC_LEFT		0x1684
#define R128_AUX3_SC_RIGHT		0x1688
#define R128_AUX3_SC_TOP		0x168c
#define R128_AUX3_SC_BOTTOM		0x1690
#define R128_BRUSH_DATA0		0x1480
#define R128_BUS_CNTL			0x0030
#	define R128_BUS_MASTER_DIS		(1 << 6)
#define R128_CLOCK_CNTL_INDEX		0x0008
#define R128_CLOCK_CNTL_DATA		0x000c
#	define R128_PLL_WR_EN			(1 << 7)
#define R128_CONSTANT_COLOR_C		0x1d34
#define R128_CRTC_OFFSET		0x0224
#define R128_CRTC_OFFSET_CNTL		0x0228
#	define R128_CRTC_OFFSET_FLIP_CNTL	(1 << 16)
#define R128_DP_GUI_MASTER_CNTL		0x146c
#       define R128_GMC_SRC_PITCH_OFFSET_CNTL	(1    <<  0)
#       define R128_GMC_DST_PITCH_OFFSET_CNTL	(1    <<  1)
#	define R128_GMC_BRUSH_SOLID_COLOR	(13   <<  4)
#	define R128_GMC_BRUSH_NONE		(15   <<  4)
#	define R128_GMC_DST_16BPP		(4    <<  8)
#	define R128_GMC_DST_24BPP		(5    <<  8)
#	define R128_GMC_DST_32BPP		(6    <<  8)
#       define R128_GMC_DST_DATATYPE_SHIFT	8
#	define R128_GMC_SRC_DATATYPE_COLOR	(3    << 12)
#	define R128_DP_SRC_SOURCE_MEMORY	(2    << 24)
#	define R128_DP_SRC_SOURCE_HOST_DATA	(3    << 24)
#	define R128_GMC_CLR_CMP_CNTL_DIS	(1    << 28)
#	define R128_GMC_AUX_CLIP_DIS		(1    << 29)
#	define R128_GMC_WR_MSK_DIS		(1    << 30)
#	define R128_ROP3_S			0x00cc0000
#	define R128_ROP3_P			0x00f00000
#define R128_DP_WRITE_MASK		0x16cc
#define R128_DST_PITCH_OFFSET_C		0x1c80
#	define R128_DST_TILE			(1 << 31)
#define R128_GEN_INT_CNTL		0x0040
#	define R128_CRTC_VBLANK_INT_EN		(1 <<  0)
#define R128_GEN_INT_STATUS		0x0044
#	define R128_CRTC_VBLANK_INT		(1 <<  0)
#	define R128_CRTC_VBLANK_INT_AK		(1 <<  0)
#define R128_GEN_RESET_CNTL		0x00f0
#	define R128_SOFT_RESET_GUI		(1 <<  0)
#define R128_GUI_SCRATCH_REG0		0x15e0
#define R128_GUI_SCRATCH_REG1		0x15e4
#define R128_GUI_SCRATCH_REG2		0x15e8
#define R128_GUI_SCRATCH_REG3		0x15ec
#define R128_GUI_SCRATCH_REG4		0x15f0
#define R128_GUI_SCRATCH_REG5		0x15f4
#define R128_GUI_STAT			0x1740
#	define R128_GUI_FIFOCNT_MASK		0x0fff
#	define R128_GUI_ACTIVE			(1 << 31)
#define R128_MCLK_CNTL			0x000f
#	define R128_FORCE_GCP			(1 << 16)
#	define R128_FORCE_PIPE3D_CP		(1 << 17)
#	define R128_FORCE_RCP			(1 << 18)
#define R128_PC_GUI_CTLSTAT		0x1748
#define R128_PC_NGUI_CTLSTAT		0x0184
#	define R128_PC_FLUSH_GUI		(3 << 0)
#	define R128_PC_RI_GUI			(1 << 2)
#	define R128_PC_FLUSH_ALL		0x00ff
#	define R128_PC_BUSY			(1 << 31)
#define R128_PCI_GART_PAGE		0x017c
#define R128_PRIM_TEX_CNTL_C		0x1cb0
#define R128_SCALE_3D_CNTL		0x1a00
#define R128_SEC_TEX_CNTL_C		0x1d00
#define R128_SEC_TEXTURE_BORDER_COLOR_C	0x1d3c
#define R128_SETUP_CNTL			0x1bc4
#define R128_STEN_REF_MASK_C		0x1d40
#define R128_TEX_CNTL_C			0x1c9c
#	define R128_TEX_CACHE_FLUSH		(1 << 23)
#define R128_WAIT_UNTIL			0x1720
#	define R128_EVENT_CRTC_OFFSET		(1 << 0)
#define R128_WINDOW_XY_OFFSET		0x1bcc
#define R128_PM4_BUFFER_OFFSET		0x0700
#define R128_PM4_BUFFER_CNTL		0x0704
#	define R128_PM4_MASK			(15 << 28)
#	define R128_PM4_NONPM4			(0  << 28)
#	define R128_PM4_192PIO			(1  << 28)
#	define R128_PM4_192BM			(2  << 28)
#	define R128_PM4_128PIO_64INDBM		(3  << 28)
#	define R128_PM4_128BM_64INDBM		(4  << 28)
#	define R128_PM4_64PIO_128INDBM		(5  << 28)
#	define R128_PM4_64BM_128INDBM		(6  << 28)
#	define R128_PM4_64PIO_64VCBM_64INDBM	(7  << 28)
#	define R128_PM4_64BM_64VCBM_64INDBM	(8  << 28)
#	define R128_PM4_64PIO_64VCPIO_64INDPIO	(15 << 28)
#	define R128_PM4_BUFFER_CNTL_NOUPDATE	(1  << 27)
#define R128_PM4_BUFFER_WM_CNTL		0x0708
#	define R128_WMA_SHIFT			0
#	define R128_WMB_SHIFT			8
#	define R128_WMC_SHIFT			16
#	define R128_WB_WM_SHIFT			24
#define R128_PM4_BUFFER_DL_RPTR_ADDR	0x070c
#define R128_PM4_BUFFER_DL_RPTR		0x0710
#define R128_PM4_BUFFER_DL_WPTR		0x0714
#	define R128_PM4_BUFFER_DL_DONE		(1 << 31)
#define R128_PM4_VC_FPU_SETUP		0x071c
#define R128_PM4_IW_INDOFF		0x0738
#define R128_PM4_IW_INDSIZE		0x073c
#define R128_PM4_STAT			0x07b8
#	define R128_PM4_FIFOCNT_MASK		0x0fff
#	define R128_PM4_BUSY			(1 << 16)
#	define R128_PM4_GUI_ACTIVE		(1 << 31)
#define R128_PM4_MICROCODE_ADDR		0x07d4
#define R128_PM4_MICROCODE_RADDR	0x07d8
#define R128_PM4_MICROCODE_DATAH	0x07dc
#define R128_PM4_MICROCODE_DATAL	0x07e0
#define R128_PM4_BUFFER_ADDR		0x07f0
#define R128_PM4_MICRO_CNTL		0x07fc
#	define R128_PM4_MICRO_FREERUN		(1 << 30)
#define R128_PM4_FIFO_DATA_EVEN		0x1000
#define R128_PM4_FIFO_DATA_ODD		0x1004
#define R128_CCE_PACKET0		0x00000000
#define R128_CCE_PACKET1		0x40000000
#define R128_CCE_PACKET2		0x80000000
#define R128_CCE_PACKET3		0xC0000000
#	define R128_CNTL_HOSTDATA_BLT		0x00009400
#	define R128_CNTL_PAINT_MULTI		0x00009A00
#	define R128_CNTL_BITBLT_MULTI		0x00009B00
#	define R128_3D_RNDR_GEN_INDX_PRIM	0x00002300
#define R128_CCE_PACKET_MASK		0xC0000000
#define R128_CCE_PACKET_COUNT_MASK	0x3fff0000
#define R128_CCE_PACKET0_REG_MASK	0x000007ff
#define R128_CCE_PACKET1_REG0_MASK	0x000007ff
#define R128_CCE_PACKET1_REG1_MASK	0x003ff800
#define R128_CCE_VC_CNTL_PRIM_TYPE_NONE		0x00000000
#define R128_CCE_VC_CNTL_PRIM_TYPE_POINT	0x00000001
#define R128_CCE_VC_CNTL_PRIM_TYPE_LINE		0x00000002
#define R128_CCE_VC_CNTL_PRIM_TYPE_POLY_LINE	0x00000003
#define R128_CCE_VC_CNTL_PRIM_TYPE_TRI_LIST	0x00000004
#define R128_CCE_VC_CNTL_PRIM_TYPE_TRI_FAN	0x00000005
#define R128_CCE_VC_CNTL_PRIM_TYPE_TRI_STRIP	0x00000006
#define R128_CCE_VC_CNTL_PRIM_TYPE_TRI_TYPE2	0x00000007
#define R128_CCE_VC_CNTL_PRIM_WALK_IND		0x00000010
#define R128_CCE_VC_CNTL_PRIM_WALK_LIST		0x00000020
#define R128_CCE_VC_CNTL_PRIM_WALK_RING		0x00000030
#define R128_CCE_VC_CNTL_NUM_SHIFT		16
#define R128_DATATYPE_VQ		0
#define R128_DATATYPE_CI4		1
#define R128_DATATYPE_CI8		2
#define R128_DATATYPE_ARGB1555		3
#define R128_DATATYPE_RGB565		4
#define R128_DATATYPE_RGB888		5
#define R128_DATATYPE_ARGB8888		6
#define R128_DATATYPE_RGB332		7
#define R128_DATATYPE_Y8		8
#define R128_DATATYPE_RGB8		9
#define R128_DATATYPE_CI16		10
#define R128_DATATYPE_YVYU422		11
#define R128_DATATYPE_VYUY422		12
#define R128_DATATYPE_AYUV444		14
#define R128_DATATYPE_ARGB4444		15
#define R128_AGP_OFFSET			0x02000000
#define R128_WATERMARK_L		16
#define R128_WATERMARK_M		8
#define R128_WATERMARK_N		8
#define R128_WATERMARK_K		128
#define R128_MAX_USEC_TIMEOUT		100000
#define R128_LAST_FRAME_REG		R128_GUI_SCRATCH_REG0
#define R128_LAST_DISPATCH_REG		R128_GUI_SCRATCH_REG1
#define R128_MAX_VB_AGE			0x7fffffff
#define R128_MAX_VB_VERTS		(0xffff)
#define R128_RING_HIGH_MARK		128
#define R128_PERFORMANCE_BOXES		0
#define R128_PCIGART_TABLE_SIZE         32768
#define R128_READ(reg)		DRM_READ32(dev_priv->mmio, (reg))
#define R128_WRITE(reg, val)	DRM_WRITE32(dev_priv->mmio, (reg), (val))
#define R128_READ8(reg)		DRM_READ8(dev_priv->mmio, (reg))
#define R128_WRITE8(reg, val)	DRM_WRITE8(dev_priv->mmio, (reg), (val))
#define R128_WRITE_PLL(addr, val)					\
do  while (0)
#define CCE_PACKET0(reg, n)		(R128_CCE_PACKET0 |		\
((n) << 16) | ((reg) >> 2))
#define CCE_PACKET1(reg0, reg1)		(R128_CCE_PACKET1 |		\
(((reg1) >> 2) << 11) | ((reg0) >> 2))
#define CCE_PACKET2()			(R128_CCE_PACKET2)
#define CCE_PACKET3(pkt, n)		(R128_CCE_PACKET3 |		\
(pkt) | ((n) << 16))
static __inline__ void r128_update_ring_snapshot(drm_r128_private_t *dev_priv)
#define DEV_INIT_TEST_WITH_RETURN(_dev_priv)				\
do  while (0)
#define RING_SPACE_TEST_WITH_RETURN(dev_priv)				\
do  while (0)
#define VB_AGE_TEST_WITH_RETURN(dev_priv)				\
do  while (0)
#define R128_WAIT_UNTIL_PAGE_FLIPPED() do  while (0)
#define R128_VERBOSE	0
#define RING_LOCALS							\
int write, _nr; unsigned int tail_mask; volatile u32 *ring;
#define BEGIN_RING(n) do  while (0)
#define R128_BROKEN_CCE	1
#define ADVANCE_RING() do  while (0)
#define COMMIT_RING() do  while (0)
#define OUT_RING(x) do  while (0)
