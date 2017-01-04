#define __SAVAGE_DRV_H__
#define DRIVER_AUTHOR	"Felix Kuehling"
#define DRIVER_NAME	"savage"
#define DRIVER_DESC	"Savage3D/MX/IX, Savage4, SuperSavage, Twister, ProSavage[DDR]"
#define DRIVER_DATE	"20050313"
#define DRIVER_MAJOR		2
#define DRIVER_MINOR		4
#define DRIVER_PATCHLEVEL	1
typedef struct drm_savage_age  drm_savage_age_t;
typedef struct drm_savage_buf_priv  drm_savage_buf_priv_t;
typedef struct drm_savage_dma_page  drm_savage_dma_page_t;
#define SAVAGE_DMA_PAGE_SIZE 1024
#define SAVAGE_FAKE_DMA_SIZE (SAVAGE_DMA_PAGE_SIZE*4*4)
typedef union  drm_savage_state_t;
enum savage_family ;
extern struct drm_ioctl_desc savage_ioctls[];
extern int savage_max_ioctl;
#define S3_SAVAGE3D_SERIES(chip)  ((chip>=S3_SAVAGE3D) && (chip<=S3_SAVAGE_MX))
#define S3_SAVAGE4_SERIES(chip)  ((chip==S3_SAVAGE4)            \
|| (chip==S3_PROSAVAGE)       \
|| (chip==S3_TWISTER)         \
|| (chip==S3_PROSAVAGEDDR))
#define	S3_SAVAGE_MOBILE_SERIES(chip)	((chip==S3_SAVAGE_MX) || (chip==S3_SUPERSAVAGE))
#define S3_SAVAGE_SERIES(chip)    ((chip>=S3_SAVAGE3D) && (chip<=S3_SAVAGE2000))
#define S3_MOBILE_TWISTER_SERIES(chip)   ((chip==S3_TWISTER)    \
||(chip==S3_PROSAVAGEDDR))
#define SAVAGE_IS_AGP 1
typedef struct drm_savage_private  drm_savage_private_t;
extern int savage_bci_cmdbuf(struct drm_device *dev, void *data, struct drm_file *file_priv);
extern int savage_bci_buffers(struct drm_device *dev, void *data, struct drm_file *file_priv);
extern uint16_t savage_bci_emit_event(drm_savage_private_t * dev_priv,
unsigned int flags);
extern void savage_freelist_put(struct drm_device * dev, struct drm_buf * buf);
extern void savage_dma_reset(drm_savage_private_t * dev_priv);
extern void savage_dma_wait(drm_savage_private_t * dev_priv, unsigned int page);
extern uint32_t *savage_dma_alloc(drm_savage_private_t * dev_priv,
unsigned int n);
extern int savage_driver_load(struct drm_device *dev, unsigned long chipset);
extern int savage_driver_firstopen(struct drm_device *dev);
extern void savage_driver_lastclose(struct drm_device *dev);
extern int savage_driver_unload(struct drm_device *dev);
extern void savage_reclaim_buffers(struct drm_device *dev,
struct drm_file *file_priv);
extern void savage_emit_clip_rect_s3d(drm_savage_private_t * dev_priv,
const struct drm_clip_rect * pbox);
extern void savage_emit_clip_rect_s4(drm_savage_private_t * dev_priv,
const struct drm_clip_rect * pbox);
#define SAVAGE_FB_SIZE_S3	0x01000000
#define SAVAGE_FB_SIZE_S4	0x02000000
#define SAVAGE_MMIO_SIZE        0x00080000
#define SAVAGE_APERTURE_OFFSET  0x02000000
#define SAVAGE_APERTURE_SIZE    0x05000000
#define SAVAGE_BCI_OFFSET       0x00010000
#define SAVAGE_BCI_FIFO_SIZE	32
#define SAVAGE_STATUS_WORD0		0x48C00
#define SAVAGE_STATUS_WORD1		0x48C04
#define SAVAGE_ALT_STATUS_WORD0 	0x48C60
#define SAVAGE_FIFO_USED_MASK_S3D	0x0001ffff
#define SAVAGE_FIFO_USED_MASK_S4	0x001fffff
#define SAVAGE_BD_STRIDE_SHIFT 0
#define SAVAGE_BD_BPP_SHIFT   16
#define SAVAGE_BD_TILE_SHIFT  24
#define SAVAGE_BD_BW_DISABLE  (1<<28)
#define	SAVAGE_BD_TILE_LINEAR		0
#define	SAVAGE_BD_TILE_16BPP		2
#define	SAVAGE_BD_TILE_32BPP		3
#define	SAVAGE_BD_TILE_DEST		1
#define	SAVAGE_BD_TILE_TEXTURE		2
#define SAVAGE_GBD_BCI_ENABLE                    8
#define SAVAGE_GBD_BCI_ENABLE_TWISTER            0
#define SAVAGE_GBD_BIG_ENDIAN                    4
#define SAVAGE_GBD_LITTLE_ENDIAN                 0
#define SAVAGE_GBD_64                            1
#define SAVAGE_BCI_GLB_BD_LOW             0x8168
#define SAVAGE_BCI_GLB_BD_HIGH            0x816C
#define SAVAGE_DRAWLOCALCTRL_S4		0x1e
#define SAVAGE_TEXPALADDR_S4		0x1f
#define SAVAGE_TEXCTRL0_S4		0x20
#define SAVAGE_TEXCTRL1_S4		0x21
#define SAVAGE_TEXADDR0_S4		0x22
#define SAVAGE_TEXADDR1_S4		0x23
#define SAVAGE_TEXBLEND0_S4		0x24
#define SAVAGE_TEXBLEND1_S4		0x25
#define SAVAGE_TEXXPRCLR_S4		0x26
#define SAVAGE_TEXDESCR_S4		0x27
#define SAVAGE_FOGTABLE_S4		0x28
#define SAVAGE_FOGCTRL_S4		0x30
#define SAVAGE_STENCILCTRL_S4		0x31
#define SAVAGE_ZBUFCTRL_S4		0x32
#define SAVAGE_ZBUFOFF_S4		0x33
#define SAVAGE_DESTCTRL_S4		0x34
#define SAVAGE_DRAWCTRL0_S4		0x35
#define SAVAGE_DRAWCTRL1_S4		0x36
#define SAVAGE_ZWATERMARK_S4		0x37
#define SAVAGE_DESTTEXRWWATERMARK_S4	0x38
#define SAVAGE_TEXBLENDCOLOR_S4		0x39
#define SAVAGE_TEXPALADDR_S3D		0x18
#define SAVAGE_TEXXPRCLR_S3D		0x19
#define SAVAGE_TEXADDR_S3D		0x1A
#define SAVAGE_TEXDESCR_S3D		0x1B
#define SAVAGE_TEXCTRL_S3D		0x1C
#define SAVAGE_FOGTABLE_S3D		0x20
#define SAVAGE_FOGCTRL_S3D		0x30
#define SAVAGE_DRAWCTRL_S3D		0x31
#define SAVAGE_ZBUFCTRL_S3D		0x32
#define SAVAGE_ZBUFOFF_S3D		0x33
#define SAVAGE_DESTCTRL_S3D		0x34
#define SAVAGE_SCSTART_S3D		0x35
#define SAVAGE_SCEND_S3D		0x36
#define SAVAGE_ZWATERMARK_S3D		0x37
#define SAVAGE_DESTTEXRWWATERMARK_S3D	0x38
#define SAVAGE_VERTBUFADDR		0x3e
#define SAVAGE_BITPLANEWTMASK		0xd7
#define SAVAGE_DMABUFADDR		0x51
#define SAVAGE_TEXCTRL_TEXEN_MASK	0x00010000
#define SAVAGE_TEXDESCR_TEX0EN_MASK	0x02000000
#define SAVAGE_TEXDESCR_TEX1EN_MASK	0x04000000
#define SAVAGE_DRAWCTRL_S3D_GLOBAL	0x03f3c00c
#define SAVAGE_ZBUFCTRL_S3D_GLOBAL	0x00000027
#define SAVAGE_SCISSOR_MASK_S4		0x00fff7ff
#define SAVAGE_SCISSOR_MASK_S3D		0x07ff07ff
#define BCI_CMD_NOP                  0x40000000
#define BCI_CMD_RECT                 0x48000000
#define BCI_CMD_RECT_XP              0x01000000
#define BCI_CMD_RECT_YP              0x02000000
#define BCI_CMD_SCANLINE             0x50000000
#define BCI_CMD_LINE                 0x5C000000
#define BCI_CMD_LINE_LAST_PIXEL      0x58000000
#define BCI_CMD_BYTE_TEXT            0x63000000
#define BCI_CMD_NT_BYTE_TEXT         0x67000000
#define BCI_CMD_BIT_TEXT             0x6C000000
#define BCI_CMD_GET_ROP(cmd)         (((cmd) >> 16) & 0xFF)
#define BCI_CMD_SET_ROP(cmd, rop)    ((cmd) |= ((rop & 0xFF) << 16))
#define BCI_CMD_SEND_COLOR           0x00008000
#define BCI_CMD_CLIP_NONE            0x00000000
#define BCI_CMD_CLIP_CURRENT         0x00002000
#define BCI_CMD_CLIP_LR              0x00004000
#define BCI_CMD_CLIP_NEW             0x00006000
#define BCI_CMD_DEST_GBD             0x00000000
#define BCI_CMD_DEST_PBD             0x00000800
#define BCI_CMD_DEST_PBD_NEW         0x00000C00
#define BCI_CMD_DEST_SBD             0x00001000
#define BCI_CMD_DEST_SBD_NEW         0x00001400
#define BCI_CMD_SRC_TRANSPARENT      0x00000200
#define BCI_CMD_SRC_SOLID            0x00000000
#define BCI_CMD_SRC_GBD              0x00000020
#define BCI_CMD_SRC_COLOR            0x00000040
#define BCI_CMD_SRC_MONO             0x00000060
#define BCI_CMD_SRC_PBD_COLOR        0x00000080
#define BCI_CMD_SRC_PBD_MONO         0x000000A0
#define BCI_CMD_SRC_PBD_COLOR_NEW    0x000000C0
#define BCI_CMD_SRC_PBD_MONO_NEW     0x000000E0
#define BCI_CMD_SRC_SBD_COLOR        0x00000100
#define BCI_CMD_SRC_SBD_MONO         0x00000120
#define BCI_CMD_SRC_SBD_COLOR_NEW    0x00000140
#define BCI_CMD_SRC_SBD_MONO_NEW     0x00000160
#define BCI_CMD_PAT_TRANSPARENT      0x00000010
#define BCI_CMD_PAT_NONE             0x00000000
#define BCI_CMD_PAT_COLOR            0x00000002
#define BCI_CMD_PAT_MONO             0x00000003
#define BCI_CMD_PAT_PBD_COLOR        0x00000004
#define BCI_CMD_PAT_PBD_MONO         0x00000005
#define BCI_CMD_PAT_PBD_COLOR_NEW    0x00000006
#define BCI_CMD_PAT_PBD_MONO_NEW     0x00000007
#define BCI_CMD_PAT_SBD_COLOR        0x00000008
#define BCI_CMD_PAT_SBD_MONO         0x00000009
#define BCI_CMD_PAT_SBD_COLOR_NEW    0x0000000A
#define BCI_CMD_PAT_SBD_MONO_NEW     0x0000000B
#define BCI_BD_BW_DISABLE            0x10000000
#define BCI_BD_TILE_MASK             0x03000000
#define BCI_BD_TILE_NONE             0x00000000
#define BCI_BD_TILE_16               0x02000000
#define BCI_BD_TILE_32               0x03000000
#define BCI_BD_GET_BPP(bd)           (((bd) >> 16) & 0xFF)
#define BCI_BD_SET_BPP(bd, bpp)      ((bd) |= (((bpp) & 0xFF) << 16))
#define BCI_BD_GET_STRIDE(bd)        ((bd) & 0xFFFF)
#define BCI_BD_SET_STRIDE(bd, st)    ((bd) |= ((st) & 0xFFFF))
#define BCI_CMD_SET_REGISTER            0x96000000
#define BCI_CMD_WAIT                    0xC0000000
#define BCI_CMD_WAIT_3D                 0x00010000
#define BCI_CMD_WAIT_2D                 0x00020000
#define BCI_CMD_UPDATE_EVENT_TAG        0x98000000
#define BCI_CMD_DRAW_PRIM               0x80000000
#define BCI_CMD_DRAW_INDEXED_PRIM       0x88000000
#define BCI_CMD_DRAW_CONT               0x01000000
#define BCI_CMD_DRAW_TRILIST            0x00000000
#define BCI_CMD_DRAW_TRISTRIP           0x02000000
#define BCI_CMD_DRAW_TRIFAN             0x04000000
#define BCI_CMD_DRAW_SKIPFLAGS          0x000000ff
#define BCI_CMD_DRAW_NO_Z		0x00000001
#define BCI_CMD_DRAW_NO_W		0x00000002
#define BCI_CMD_DRAW_NO_CD		0x00000004
#define BCI_CMD_DRAW_NO_CS		0x00000008
#define BCI_CMD_DRAW_NO_U0		0x00000010
#define BCI_CMD_DRAW_NO_V0		0x00000020
#define BCI_CMD_DRAW_NO_UV0		0x00000030
#define BCI_CMD_DRAW_NO_U1		0x00000040
#define BCI_CMD_DRAW_NO_V1		0x00000080
#define BCI_CMD_DRAW_NO_UV1		0x000000c0
#define BCI_CMD_DMA			0xa8000000
#define BCI_W_H(w, h)                ((((h) << 16) | (w)) & 0x0FFF0FFF)
#define BCI_X_Y(x, y)                ((((y) << 16) | (x)) & 0x0FFF0FFF)
#define BCI_X_W(x, y)                ((((w) << 16) | (x)) & 0x0FFF0FFF)
#define BCI_CLIP_LR(l, r)            ((((r) << 16) | (l)) & 0x0FFF0FFF)
#define BCI_CLIP_TL(t, l)            ((((t) << 16) | (l)) & 0x0FFF0FFF)
#define BCI_CLIP_BR(b, r)            ((((b) << 16) | (r)) & 0x0FFF0FFF)
#define BCI_LINE_X_Y(x, y)           (((y) << 16) | ((x) & 0xFFFF))
#define BCI_LINE_STEPS(diag, axi)    (((axi) << 16) | ((diag) & 0xFFFF))
#define BCI_LINE_MISC(maj, ym, xp, yp, err) \
(((maj) & 0x1FFF) | \
((ym) ? 1<<13 : 0) | \
((xp) ? 1<<14 : 0) | \
((yp) ? 1<<15 : 0) | \
((err) << 16))
#define BCI_SET_REGISTERS( first, n )			\
BCI_WRITE(BCI_CMD_SET_REGISTER |		\
((uint32_t)(n) & 0xff) << 16 |	\
((uint32_t)(first) & 0xffff))
#define DMA_SET_REGISTERS( first, n )			\
DMA_WRITE(BCI_CMD_SET_REGISTER |		\
((uint32_t)(n) & 0xff) << 16 |	\
((uint32_t)(first) & 0xffff))
#define BCI_DRAW_PRIMITIVE(n, type, skip)         \
BCI_WRITE(BCI_CMD_DRAW_PRIM | (type) | (skip) | \
((n) << 16))
#define DMA_DRAW_PRIMITIVE(n, type, skip)         \
DMA_WRITE(BCI_CMD_DRAW_PRIM | (type) | (skip) | \
((n) << 16))
#define BCI_DRAW_INDICES_S3D(n, type, i0)         \
BCI_WRITE(BCI_CMD_DRAW_INDEXED_PRIM | (type) |  \
((n) << 16) | (i0))
#define BCI_DRAW_INDICES_S4(n, type, skip)        \
BCI_WRITE(BCI_CMD_DRAW_INDEXED_PRIM | (type) |  \
(skip) | ((n) << 16))
#define BCI_DMA(n)	\
BCI_WRITE(BCI_CMD_DMA | (((n) >> 1) - 1))
#define SAVAGE_READ(reg)	DRM_READ32(  dev_priv->mmio, (reg) )
#define SAVAGE_WRITE(reg)	DRM_WRITE32( dev_priv->mmio, (reg) )
#define SAVAGE_BCI_DEBUG 1
#define BCI_LOCALS    volatile uint32_t *bci_ptr;
#define BEGIN_BCI( n ) do  while(0)
#define BCI_WRITE( val ) *bci_ptr++ = (uint32_t)(val)
#define SAVAGE_DMA_DEBUG 1
#define DMA_LOCALS   uint32_t *dma_ptr;
#define BEGIN_DMA( n ) do  while(0)
#define DMA_WRITE( val ) *dma_ptr++ = (uint32_t)(val)
#define DMA_COPY(src, n) do  while(0)
#if SAVAGE_DMA_DEBUG
#define DMA_COMMIT() do  while(0)
#define DMA_COMMIT() do  while(0)
#define DMA_FLUSH() dev_priv->dma_flush(dev_priv)
#define UPDATE_EVENT_COUNTER( ) do  while(0)
#define SET_AGE( age, e, w ) do  while(0)
#define TEST_AGE( age, e, w )				\
( (age)->wrap < (w) || ( (age)->wrap == (w) && (age)->event <= (e) ) )
