#define __R128_DRM_H__
#define __R128_SAREA_DEFINES__
#define R128_UPLOAD_CONTEXT		0x001
#define R128_UPLOAD_SETUP		0x002
#define R128_UPLOAD_TEX0		0x004
#define R128_UPLOAD_TEX1		0x008
#define R128_UPLOAD_TEX0IMAGES		0x010
#define R128_UPLOAD_TEX1IMAGES		0x020
#define R128_UPLOAD_CORE		0x040
#define R128_UPLOAD_MASKS		0x080
#define R128_UPLOAD_WINDOW		0x100
#define R128_UPLOAD_CLIPRECTS		0x200
#define R128_REQUIRE_QUIESCENCE		0x400
#define R128_UPLOAD_ALL			0x7ff
#define R128_FRONT			0x1
#define R128_BACK			0x2
#define R128_DEPTH			0x4
#define R128_POINTS			0x1
#define R128_LINES			0x2
#define R128_LINE_STRIP			0x3
#define R128_TRIANGLES			0x4
#define R128_TRIANGLE_FAN		0x5
#define R128_TRIANGLE_STRIP		0x6
#define R128_BUFFER_SIZE		16384
#define R128_INDEX_PRIM_OFFSET		20
#define R128_HOSTDATA_BLIT_OFFSET	32
#define R128_NR_SAREA_CLIPRECTS		12
#define R128_LOCAL_TEX_HEAP		0
#define R128_AGP_TEX_HEAP		1
#define R128_NR_TEX_HEAPS		2
#define R128_NR_TEX_REGIONS		64
#define R128_LOG_TEX_GRANULARITY	16
#define R128_NR_CONTEXT_REGS		12
#define R128_MAX_TEXTURE_LEVELS		11
#define R128_MAX_TEXTURE_UNITS		2
typedef struct  drm_r128_context_regs_t;
typedef struct  drm_r128_texture_regs_t;
typedef struct drm_r128_sarea  drm_r128_sarea_t;
#define DRM_R128_INIT       0x00
#define DRM_R128_CCE_START  0x01
#define DRM_R128_CCE_STOP   0x02
#define DRM_R128_CCE_RESET  0x03
#define DRM_R128_CCE_IDLE   0x04
#define DRM_R128_RESET      0x06
#define DRM_R128_SWAP       0x07
#define DRM_R128_CLEAR      0x08
#define DRM_R128_VERTEX     0x09
#define DRM_R128_INDICES    0x0a
#define DRM_R128_BLIT       0x0b
#define DRM_R128_DEPTH      0x0c
#define DRM_R128_STIPPLE    0x0d
#define DRM_R128_INDIRECT   0x0f
#define DRM_R128_FULLSCREEN 0x10
#define DRM_R128_CLEAR2     0x11
#define DRM_R128_GETPARAM   0x12
#define DRM_R128_FLIP       0x13
#define DRM_IOCTL_R128_INIT       DRM_IOW( DRM_COMMAND_BASE + DRM_R128_INIT, drm_r128_init_t)
#define DRM_IOCTL_R128_CCE_START  DRM_IO(  DRM_COMMAND_BASE + DRM_R128_CCE_START)
#define DRM_IOCTL_R128_CCE_STOP   DRM_IOW( DRM_COMMAND_BASE + DRM_R128_CCE_STOP, drm_r128_cce_stop_t)
#define DRM_IOCTL_R128_CCE_RESET  DRM_IO(  DRM_COMMAND_BASE + DRM_R128_CCE_RESET)
#define DRM_IOCTL_R128_CCE_IDLE   DRM_IO(  DRM_COMMAND_BASE + DRM_R128_CCE_IDLE)
#define DRM_IOCTL_R128_RESET      DRM_IO(  DRM_COMMAND_BASE + DRM_R128_RESET)
#define DRM_IOCTL_R128_SWAP       DRM_IO(  DRM_COMMAND_BASE + DRM_R128_SWAP)
#define DRM_IOCTL_R128_CLEAR      DRM_IOW( DRM_COMMAND_BASE + DRM_R128_CLEAR, drm_r128_clear_t)
#define DRM_IOCTL_R128_VERTEX     DRM_IOW( DRM_COMMAND_BASE + DRM_R128_VERTEX, drm_r128_vertex_t)
#define DRM_IOCTL_R128_INDICES    DRM_IOW( DRM_COMMAND_BASE + DRM_R128_INDICES, drm_r128_indices_t)
#define DRM_IOCTL_R128_BLIT       DRM_IOW( DRM_COMMAND_BASE + DRM_R128_BLIT, drm_r128_blit_t)
#define DRM_IOCTL_R128_DEPTH      DRM_IOW( DRM_COMMAND_BASE + DRM_R128_DEPTH, drm_r128_depth_t)
#define DRM_IOCTL_R128_STIPPLE    DRM_IOW( DRM_COMMAND_BASE + DRM_R128_STIPPLE, drm_r128_stipple_t)
#define DRM_IOCTL_R128_INDIRECT   DRM_IOWR(DRM_COMMAND_BASE + DRM_R128_INDIRECT, drm_r128_indirect_t)
#define DRM_IOCTL_R128_FULLSCREEN DRM_IOW( DRM_COMMAND_BASE + DRM_R128_FULLSCREEN, drm_r128_fullscreen_t)
#define DRM_IOCTL_R128_CLEAR2     DRM_IOW( DRM_COMMAND_BASE + DRM_R128_CLEAR2, drm_r128_clear2_t)
#define DRM_IOCTL_R128_GETPARAM   DRM_IOWR( DRM_COMMAND_BASE + DRM_R128_GETPARAM, drm_r128_getparam_t)
#define DRM_IOCTL_R128_FLIP       DRM_IO(  DRM_COMMAND_BASE + DRM_R128_FLIP)
typedef struct drm_r128_init  drm_r128_init_t;
typedef struct drm_r128_cce_stop  drm_r128_cce_stop_t;
typedef struct drm_r128_clear  drm_r128_clear_t;
typedef struct drm_r128_vertex  drm_r128_vertex_t;
typedef struct drm_r128_indices  drm_r128_indices_t;
typedef struct drm_r128_blit  drm_r128_blit_t;
typedef struct drm_r128_depth  drm_r128_depth_t;
typedef struct drm_r128_stipple  drm_r128_stipple_t;
typedef struct drm_r128_indirect  drm_r128_indirect_t;
typedef struct drm_r128_fullscreen  drm_r128_fullscreen_t;
#define R128_PARAM_IRQ_NR            1
typedef struct drm_r128_getparam  drm_r128_getparam_t;
