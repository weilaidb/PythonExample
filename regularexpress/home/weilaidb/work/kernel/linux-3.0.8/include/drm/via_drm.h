#define _VIA_DRM_H_
#define _VIA_DEFINES_
#define VIA_NR_SAREA_CLIPRECTS		8
#define VIA_NR_XVMC_PORTS               10
#define VIA_NR_XVMC_LOCKS               5
#define VIA_MAX_CACHELINE_SIZE          64
#define XVMCLOCKPTR(saPriv,lockNo)					\
((volatile struct drm_hw_lock *)(((((unsigned long) (saPriv)->XvMCLockArea) + \
(VIA_MAX_CACHELINE_SIZE - 1)) &	\
~(VIA_MAX_CACHELINE_SIZE - 1)) +	\
VIA_MAX_CACHELINE_SIZE*(lockNo)))
#define VIA_NR_TEX_REGIONS 64
#define VIA_LOG_MIN_TEX_REGION_SIZE 16
#define VIA_UPLOAD_TEX0IMAGE  0x1
#define VIA_UPLOAD_TEX1IMAGE  0x2
#define VIA_UPLOAD_CTX        0x4
#define VIA_UPLOAD_BUFFERS    0x8
#define VIA_UPLOAD_TEX0       0x10
#define VIA_UPLOAD_TEX1       0x20
#define VIA_UPLOAD_CLIPRECTS  0x40
#define VIA_UPLOAD_ALL        0xff
#define DRM_VIA_ALLOCMEM	0x00
#define DRM_VIA_FREEMEM	        0x01
#define DRM_VIA_AGP_INIT	0x02
#define DRM_VIA_FB_INIT	        0x03
#define DRM_VIA_MAP_INIT	0x04
#define DRM_VIA_DEC_FUTEX       0x05
#define NOT_USED
#define DRM_VIA_DMA_INIT	0x07
#define DRM_VIA_CMDBUFFER	0x08
#define DRM_VIA_FLUSH	        0x09
#define DRM_VIA_PCICMD	        0x0a
#define DRM_VIA_CMDBUF_SIZE	0x0b
#define NOT_USED
#define DRM_VIA_WAIT_IRQ        0x0d
#define DRM_VIA_DMA_BLIT        0x0e
#define DRM_VIA_BLIT_SYNC       0x0f
#define DRM_IOCTL_VIA_ALLOCMEM	  DRM_IOWR(DRM_COMMAND_BASE + DRM_VIA_ALLOCMEM, drm_via_mem_t)
#define DRM_IOCTL_VIA_FREEMEM	  DRM_IOW( DRM_COMMAND_BASE + DRM_VIA_FREEMEM, drm_via_mem_t)
#define DRM_IOCTL_VIA_AGP_INIT	  DRM_IOWR(DRM_COMMAND_BASE + DRM_VIA_AGP_INIT, drm_via_agp_t)
#define DRM_IOCTL_VIA_FB_INIT	  DRM_IOWR(DRM_COMMAND_BASE + DRM_VIA_FB_INIT, drm_via_fb_t)
#define DRM_IOCTL_VIA_MAP_INIT	  DRM_IOWR(DRM_COMMAND_BASE + DRM_VIA_MAP_INIT, drm_via_init_t)
#define DRM_IOCTL_VIA_DEC_FUTEX   DRM_IOW( DRM_COMMAND_BASE + DRM_VIA_DEC_FUTEX, drm_via_futex_t)
#define DRM_IOCTL_VIA_DMA_INIT	  DRM_IOWR(DRM_COMMAND_BASE + DRM_VIA_DMA_INIT, drm_via_dma_init_t)
#define DRM_IOCTL_VIA_CMDBUFFER	  DRM_IOW( DRM_COMMAND_BASE + DRM_VIA_CMDBUFFER, drm_via_cmdbuffer_t)
#define DRM_IOCTL_VIA_FLUSH	  DRM_IO(  DRM_COMMAND_BASE + DRM_VIA_FLUSH)
#define DRM_IOCTL_VIA_PCICMD	  DRM_IOW( DRM_COMMAND_BASE + DRM_VIA_PCICMD, drm_via_cmdbuffer_t)
#define DRM_IOCTL_VIA_CMDBUF_SIZE DRM_IOWR( DRM_COMMAND_BASE + DRM_VIA_CMDBUF_SIZE, \
drm_via_cmdbuf_size_t)
#define DRM_IOCTL_VIA_WAIT_IRQ    DRM_IOWR( DRM_COMMAND_BASE + DRM_VIA_WAIT_IRQ, drm_via_irqwait_t)
#define DRM_IOCTL_VIA_DMA_BLIT    DRM_IOW(DRM_COMMAND_BASE + DRM_VIA_DMA_BLIT, drm_via_dmablit_t)
#define DRM_IOCTL_VIA_BLIT_SYNC   DRM_IOW(DRM_COMMAND_BASE + DRM_VIA_BLIT_SYNC, drm_via_blitsync_t)
#define VIA_TEX_SETUP_SIZE 8
#define VIA_FRONT   0x1
#define VIA_BACK    0x2
#define VIA_DEPTH   0x4
#define VIA_STENCIL 0x8
#define VIA_MEM_VIDEO   0
#define VIA_MEM_AGP     1
#define VIA_MEM_SYSTEM  2
#define VIA_MEM_MIXED   3
#define VIA_MEM_UNKNOWN 4
typedef struct  drm_via_agp_t;
typedef struct  drm_via_fb_t;
typedef struct  drm_via_mem_t;
typedef struct _drm_via_init  drm_via_init_t;
typedef struct _drm_via_futex  drm_via_futex_t;
typedef struct _drm_via_dma_init  drm_via_dma_init_t;
typedef struct _drm_via_cmdbuffer  drm_via_cmdbuffer_t;
typedef struct _drm_via_tex_region  drm_via_tex_region_t;
typedef struct _drm_via_sarea  drm_via_sarea_t;
typedef struct _drm_via_cmdbuf_size  drm_via_cmdbuf_size_t;
typedef enum  via_irq_seq_type_t;
#define VIA_IRQ_FLAGS_MASK 0xF0000000
enum drm_via_irqs ;
struct drm_via_wait_irq_request ;
typedef union drm_via_irqwait  drm_via_irqwait_t;
typedef struct drm_via_blitsync  drm_via_blitsync_t;
typedef struct drm_via_dmablit  drm_via_dmablit_t;
