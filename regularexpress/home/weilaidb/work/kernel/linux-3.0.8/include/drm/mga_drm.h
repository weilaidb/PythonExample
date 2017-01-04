#define __MGA_DRM_H__
#define __MGA_SAREA_DEFINES__
#define MGA_F			0x1
#define MGA_A			0x2
#define MGA_S			0x4
#define MGA_T2			0x8
#define MGA_WARP_TGZ		0
#define MGA_WARP_TGZF		(MGA_F)
#define MGA_WARP_TGZA		(MGA_A)
#define MGA_WARP_TGZAF		(MGA_F|MGA_A)
#define MGA_WARP_TGZS		(MGA_S)
#define MGA_WARP_TGZSF		(MGA_S|MGA_F)
#define MGA_WARP_TGZSA		(MGA_S|MGA_A)
#define MGA_WARP_TGZSAF		(MGA_S|MGA_F|MGA_A)
#define MGA_WARP_T2GZ		(MGA_T2)
#define MGA_WARP_T2GZF		(MGA_T2|MGA_F)
#define MGA_WARP_T2GZA		(MGA_T2|MGA_A)
#define MGA_WARP_T2GZAF		(MGA_T2|MGA_A|MGA_F)
#define MGA_WARP_T2GZS		(MGA_T2|MGA_S)
#define MGA_WARP_T2GZSF		(MGA_T2|MGA_S|MGA_F)
#define MGA_WARP_T2GZSA		(MGA_T2|MGA_S|MGA_A)
#define MGA_WARP_T2GZSAF	(MGA_T2|MGA_S|MGA_F|MGA_A)
#define MGA_MAX_G200_PIPES	8
#define MGA_MAX_G400_PIPES	16
#define MGA_MAX_WARP_PIPES	MGA_MAX_G400_PIPES
#define MGA_WARP_UCODE_SIZE	32768
#define MGA_CARD_TYPE_G200	1
#define MGA_CARD_TYPE_G400	2
#define MGA_CARD_TYPE_G450	3
#define MGA_CARD_TYPE_G550	4
#define MGA_FRONT		0x1
#define MGA_BACK		0x2
#define MGA_DEPTH		0x4
#define MGA_UPLOAD_CONTEXT	0x1
#define MGA_UPLOAD_TEX0		0x2
#define MGA_UPLOAD_TEX1		0x4
#define MGA_UPLOAD_PIPE		0x8
#define MGA_UPLOAD_TEX0IMAGE	0x10
#define MGA_UPLOAD_TEX1IMAGE	0x20
#define MGA_UPLOAD_2D		0x40
#define MGA_WAIT_AGE		0x80
#define MGA_UPLOAD_CLIPRECTS	0x100
#define MGA_BUFFER_SIZE		(1 << 16)
#define MGA_NUM_BUFFERS		128
#define MGA_NR_SAREA_CLIPRECTS	8
#define MGA_CARD_HEAP			0
#define MGA_AGP_HEAP			1
#define MGA_NR_TEX_HEAPS		2
#define MGA_NR_TEX_REGIONS		16
#define MGA_LOG_MIN_TEX_REGION_SIZE	16
#define  DRM_MGA_IDLE_RETRY          2048
typedef struct  drm_mga_context_regs_t;
typedef struct  drm_mga_server_regs_t;
typedef struct  drm_mga_texture_regs_t;
typedef struct  drm_mga_age_t;
typedef struct _drm_mga_sarea  drm_mga_sarea_t;
#define DRM_MGA_INIT     0x00
#define DRM_MGA_FLUSH    0x01
#define DRM_MGA_RESET    0x02
#define DRM_MGA_SWAP     0x03
#define DRM_MGA_CLEAR    0x04
#define DRM_MGA_VERTEX   0x05
#define DRM_MGA_INDICES  0x06
#define DRM_MGA_ILOAD    0x07
#define DRM_MGA_BLIT     0x08
#define DRM_MGA_GETPARAM 0x09
#define DRM_MGA_SET_FENCE      0x0a
#define DRM_MGA_WAIT_FENCE     0x0b
#define DRM_MGA_DMA_BOOTSTRAP  0x0c
#define DRM_IOCTL_MGA_INIT     DRM_IOW( DRM_COMMAND_BASE + DRM_MGA_INIT, drm_mga_init_t)
#define DRM_IOCTL_MGA_FLUSH    DRM_IOW( DRM_COMMAND_BASE + DRM_MGA_FLUSH, struct drm_lock)
#define DRM_IOCTL_MGA_RESET    DRM_IO(  DRM_COMMAND_BASE + DRM_MGA_RESET)
#define DRM_IOCTL_MGA_SWAP     DRM_IO(  DRM_COMMAND_BASE + DRM_MGA_SWAP)
#define DRM_IOCTL_MGA_CLEAR    DRM_IOW( DRM_COMMAND_BASE + DRM_MGA_CLEAR, drm_mga_clear_t)
#define DRM_IOCTL_MGA_VERTEX   DRM_IOW( DRM_COMMAND_BASE + DRM_MGA_VERTEX, drm_mga_vertex_t)
#define DRM_IOCTL_MGA_INDICES  DRM_IOW( DRM_COMMAND_BASE + DRM_MGA_INDICES, drm_mga_indices_t)
#define DRM_IOCTL_MGA_ILOAD    DRM_IOW( DRM_COMMAND_BASE + DRM_MGA_ILOAD, drm_mga_iload_t)
#define DRM_IOCTL_MGA_BLIT     DRM_IOW( DRM_COMMAND_BASE + DRM_MGA_BLIT, drm_mga_blit_t)
#define DRM_IOCTL_MGA_GETPARAM DRM_IOWR(DRM_COMMAND_BASE + DRM_MGA_GETPARAM, drm_mga_getparam_t)
#define DRM_IOCTL_MGA_SET_FENCE     DRM_IOW( DRM_COMMAND_BASE + DRM_MGA_SET_FENCE, __u32)
#define DRM_IOCTL_MGA_WAIT_FENCE    DRM_IOWR(DRM_COMMAND_BASE + DRM_MGA_WAIT_FENCE, __u32)
#define DRM_IOCTL_MGA_DMA_BOOTSTRAP DRM_IOWR(DRM_COMMAND_BASE + DRM_MGA_DMA_BOOTSTRAP, drm_mga_dma_bootstrap_t)
typedef struct _drm_mga_warp_index  drm_mga_warp_index_t;
typedef struct drm_mga_init  drm_mga_init_t;
typedef struct drm_mga_dma_bootstrap  drm_mga_dma_bootstrap_t;
typedef struct drm_mga_clear  drm_mga_clear_t;
typedef struct drm_mga_vertex  drm_mga_vertex_t;
typedef struct drm_mga_indices  drm_mga_indices_t;
typedef struct drm_mga_iload  drm_mga_iload_t;
typedef struct _drm_mga_blit  drm_mga_blit_t;
#define MGA_PARAM_IRQ_NR            1
#define MGA_PARAM_CARD_TYPE         2
typedef struct drm_mga_getparam  drm_mga_getparam_t;
