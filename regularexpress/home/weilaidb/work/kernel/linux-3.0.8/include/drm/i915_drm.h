#define _I915_DRM_H_
extern unsigned long i915_read_mch_val(void);
extern bool i915_gpu_raise(void);
extern bool i915_gpu_lower(void);
extern bool i915_gpu_busy(void);
extern bool i915_gpu_turbo_disable(void);
#define I915_NR_TEX_REGIONS 255
#define I915_LOG_MIN_TEX_REGION_SIZE 14
typedef struct _drm_i915_init  drm_i915_init_t;
typedef struct _drm_i915_sarea  drm_i915_sarea_t;
#define planeA_x pipeA_x
#define planeA_y pipeA_y
#define planeA_w pipeA_w
#define planeA_h pipeA_h
#define planeB_x pipeB_x
#define planeB_y pipeB_y
#define planeB_w pipeB_w
#define planeB_h pipeB_h
#define I915_BOX_RING_EMPTY    0x1
#define I915_BOX_FLIP          0x2
#define I915_BOX_WAIT          0x4
#define I915_BOX_TEXTURE_LOAD  0x8
#define I915_BOX_LOST_CONTEXT  0x10
#define DRM_I915_INIT		0x00
#define DRM_I915_FLUSH		0x01
#define DRM_I915_FLIP		0x02
#define DRM_I915_BATCHBUFFER	0x03
#define DRM_I915_IRQ_EMIT	0x04
#define DRM_I915_IRQ_WAIT	0x05
#define DRM_I915_GETPARAM	0x06
#define DRM_I915_SETPARAM	0x07
#define DRM_I915_ALLOC		0x08
#define DRM_I915_FREE		0x09
#define DRM_I915_INIT_HEAP	0x0a
#define DRM_I915_CMDBUFFER	0x0b
#define DRM_I915_DESTROY_HEAP	0x0c
#define DRM_I915_SET_VBLANK_PIPE	0x0d
#define DRM_I915_GET_VBLANK_PIPE	0x0e
#define DRM_I915_VBLANK_SWAP	0x0f
#define DRM_I915_HWS_ADDR	0x11
#define DRM_I915_GEM_INIT	0x13
#define DRM_I915_GEM_EXECBUFFER	0x14
#define DRM_I915_GEM_PIN	0x15
#define DRM_I915_GEM_UNPIN	0x16
#define DRM_I915_GEM_BUSY	0x17
#define DRM_I915_GEM_THROTTLE	0x18
#define DRM_I915_GEM_ENTERVT	0x19
#define DRM_I915_GEM_LEAVEVT	0x1a
#define DRM_I915_GEM_CREATE	0x1b
#define DRM_I915_GEM_PREAD	0x1c
#define DRM_I915_GEM_PWRITE	0x1d
#define DRM_I915_GEM_MMAP	0x1e
#define DRM_I915_GEM_SET_DOMAIN	0x1f
#define DRM_I915_GEM_SW_FINISH	0x20
#define DRM_I915_GEM_SET_TILING	0x21
#define DRM_I915_GEM_GET_TILING	0x22
#define DRM_I915_GEM_GET_APERTURE 0x23
#define DRM_I915_GEM_MMAP_GTT	0x24
#define DRM_I915_GET_PIPE_FROM_CRTC_ID	0x25
#define DRM_I915_GEM_MADVISE	0x26
#define DRM_I915_OVERLAY_PUT_IMAGE	0x27
#define DRM_I915_OVERLAY_ATTRS	0x28
#define DRM_I915_GEM_EXECBUFFER2	0x29
#define DRM_IOCTL_I915_INIT		DRM_IOW( DRM_COMMAND_BASE + DRM_I915_INIT, drm_i915_init_t)
#define DRM_IOCTL_I915_FLUSH		DRM_IO ( DRM_COMMAND_BASE + DRM_I915_FLUSH)
#define DRM_IOCTL_I915_FLIP		DRM_IO ( DRM_COMMAND_BASE + DRM_I915_FLIP)
#define DRM_IOCTL_I915_BATCHBUFFER	DRM_IOW( DRM_COMMAND_BASE + DRM_I915_BATCHBUFFER, drm_i915_batchbuffer_t)
#define DRM_IOCTL_I915_IRQ_EMIT         DRM_IOWR(DRM_COMMAND_BASE + DRM_I915_IRQ_EMIT, drm_i915_irq_emit_t)
#define DRM_IOCTL_I915_IRQ_WAIT         DRM_IOW( DRM_COMMAND_BASE + DRM_I915_IRQ_WAIT, drm_i915_irq_wait_t)
#define DRM_IOCTL_I915_GETPARAM         DRM_IOWR(DRM_COMMAND_BASE + DRM_I915_GETPARAM, drm_i915_getparam_t)
#define DRM_IOCTL_I915_SETPARAM         DRM_IOW( DRM_COMMAND_BASE + DRM_I915_SETPARAM, drm_i915_setparam_t)
#define DRM_IOCTL_I915_ALLOC            DRM_IOWR(DRM_COMMAND_BASE + DRM_I915_ALLOC, drm_i915_mem_alloc_t)
#define DRM_IOCTL_I915_FREE             DRM_IOW( DRM_COMMAND_BASE + DRM_I915_FREE, drm_i915_mem_free_t)
#define DRM_IOCTL_I915_INIT_HEAP        DRM_IOW( DRM_COMMAND_BASE + DRM_I915_INIT_HEAP, drm_i915_mem_init_heap_t)
#define DRM_IOCTL_I915_CMDBUFFER	DRM_IOW( DRM_COMMAND_BASE + DRM_I915_CMDBUFFER, drm_i915_cmdbuffer_t)
#define DRM_IOCTL_I915_DESTROY_HEAP	DRM_IOW( DRM_COMMAND_BASE + DRM_I915_DESTROY_HEAP, drm_i915_mem_destroy_heap_t)
#define DRM_IOCTL_I915_SET_VBLANK_PIPE	DRM_IOW( DRM_COMMAND_BASE + DRM_I915_SET_VBLANK_PIPE, drm_i915_vblank_pipe_t)
#define DRM_IOCTL_I915_GET_VBLANK_PIPE	DRM_IOR( DRM_COMMAND_BASE + DRM_I915_GET_VBLANK_PIPE, drm_i915_vblank_pipe_t)
#define DRM_IOCTL_I915_VBLANK_SWAP	DRM_IOWR(DRM_COMMAND_BASE + DRM_I915_VBLANK_SWAP, drm_i915_vblank_swap_t)
#define DRM_IOCTL_I915_HWS_ADDR		DRM_IOW(DRM_COMMAND_BASE + DRM_I915_HWS_ADDR, struct drm_i915_gem_init)
#define DRM_IOCTL_I915_GEM_INIT		DRM_IOW(DRM_COMMAND_BASE + DRM_I915_GEM_INIT, struct drm_i915_gem_init)
#define DRM_IOCTL_I915_GEM_EXECBUFFER	DRM_IOW(DRM_COMMAND_BASE + DRM_I915_GEM_EXECBUFFER, struct drm_i915_gem_execbuffer)
#define DRM_IOCTL_I915_GEM_EXECBUFFER2	DRM_IOW(DRM_COMMAND_BASE + DRM_I915_GEM_EXECBUFFER2, struct drm_i915_gem_execbuffer2)
#define DRM_IOCTL_I915_GEM_PIN		DRM_IOWR(DRM_COMMAND_BASE + DRM_I915_GEM_PIN, struct drm_i915_gem_pin)
#define DRM_IOCTL_I915_GEM_UNPIN	DRM_IOW(DRM_COMMAND_BASE + DRM_I915_GEM_UNPIN, struct drm_i915_gem_unpin)
#define DRM_IOCTL_I915_GEM_BUSY		DRM_IOWR(DRM_COMMAND_BASE + DRM_I915_GEM_BUSY, struct drm_i915_gem_busy)
#define DRM_IOCTL_I915_GEM_THROTTLE	DRM_IO ( DRM_COMMAND_BASE + DRM_I915_GEM_THROTTLE)
#define DRM_IOCTL_I915_GEM_ENTERVT	DRM_IO(DRM_COMMAND_BASE + DRM_I915_GEM_ENTERVT)
#define DRM_IOCTL_I915_GEM_LEAVEVT	DRM_IO(DRM_COMMAND_BASE + DRM_I915_GEM_LEAVEVT)
#define DRM_IOCTL_I915_GEM_CREATE	DRM_IOWR(DRM_COMMAND_BASE + DRM_I915_GEM_CREATE, struct drm_i915_gem_create)
#define DRM_IOCTL_I915_GEM_PREAD	DRM_IOW (DRM_COMMAND_BASE + DRM_I915_GEM_PREAD, struct drm_i915_gem_pread)
#define DRM_IOCTL_I915_GEM_PWRITE	DRM_IOW (DRM_COMMAND_BASE + DRM_I915_GEM_PWRITE, struct drm_i915_gem_pwrite)
#define DRM_IOCTL_I915_GEM_MMAP		DRM_IOWR(DRM_COMMAND_BASE + DRM_I915_GEM_MMAP, struct drm_i915_gem_mmap)
#define DRM_IOCTL_I915_GEM_MMAP_GTT	DRM_IOWR(DRM_COMMAND_BASE + DRM_I915_GEM_MMAP_GTT, struct drm_i915_gem_mmap_gtt)
#define DRM_IOCTL_I915_GEM_SET_DOMAIN	DRM_IOW (DRM_COMMAND_BASE + DRM_I915_GEM_SET_DOMAIN, struct drm_i915_gem_set_domain)
#define DRM_IOCTL_I915_GEM_SW_FINISH	DRM_IOW (DRM_COMMAND_BASE + DRM_I915_GEM_SW_FINISH, struct drm_i915_gem_sw_finish)
#define DRM_IOCTL_I915_GEM_SET_TILING	DRM_IOWR (DRM_COMMAND_BASE + DRM_I915_GEM_SET_TILING, struct drm_i915_gem_set_tiling)
#define DRM_IOCTL_I915_GEM_GET_TILING	DRM_IOWR (DRM_COMMAND_BASE + DRM_I915_GEM_GET_TILING, struct drm_i915_gem_get_tiling)
#define DRM_IOCTL_I915_GEM_GET_APERTURE	DRM_IOR  (DRM_COMMAND_BASE + DRM_I915_GEM_GET_APERTURE, struct drm_i915_gem_get_aperture)
#define DRM_IOCTL_I915_GET_PIPE_FROM_CRTC_ID DRM_IOWR(DRM_COMMAND_BASE + DRM_I915_GET_PIPE_FROM_CRTC_ID, struct drm_i915_get_pipe_from_crtc_id)
#define DRM_IOCTL_I915_GEM_MADVISE	DRM_IOWR(DRM_COMMAND_BASE + DRM_I915_GEM_MADVISE, struct drm_i915_gem_madvise)
#define DRM_IOCTL_I915_OVERLAY_PUT_IMAGE	DRM_IOW(DRM_COMMAND_BASE + DRM_I915_OVERLAY_PUT_IMAGE, struct drm_intel_overlay_put_image)
#define DRM_IOCTL_I915_OVERLAY_ATTRS	DRM_IOWR(DRM_COMMAND_BASE + DRM_I915_OVERLAY_ATTRS, struct drm_intel_overlay_attrs)
typedef struct drm_i915_batchbuffer  drm_i915_batchbuffer_t;
typedef struct _drm_i915_cmdbuffer  drm_i915_cmdbuffer_t;
typedef struct drm_i915_irq_emit  drm_i915_irq_emit_t;
typedef struct drm_i915_irq_wait  drm_i915_irq_wait_t;
#define I915_PARAM_IRQ_ACTIVE            1
#define I915_PARAM_ALLOW_BATCHBUFFER     2
#define I915_PARAM_LAST_DISPATCH         3
#define I915_PARAM_CHIPSET_ID            4
#define I915_PARAM_HAS_GEM               5
#define I915_PARAM_NUM_FENCES_AVAIL      6
#define I915_PARAM_HAS_OVERLAY           7
#define I915_PARAM_HAS_PAGEFLIPPING	 8
#define I915_PARAM_HAS_EXECBUF2          9
#define I915_PARAM_HAS_BSD		 10
#define I915_PARAM_HAS_BLT		 11
#define I915_PARAM_HAS_RELAXED_FENCING	 12
#define I915_PARAM_HAS_COHERENT_RINGS	 13
#define I915_PARAM_HAS_EXEC_CONSTANTS	 14
#define I915_PARAM_HAS_RELAXED_DELTA	 15
typedef struct drm_i915_getparam  drm_i915_getparam_t;
#define I915_SETPARAM_USE_MI_BATCHBUFFER_START            1
#define I915_SETPARAM_TEX_LRU_LOG_GRANULARITY             2
#define I915_SETPARAM_ALLOW_BATCHBUFFER                   3
#define I915_SETPARAM_NUM_USED_FENCES                     4
typedef struct drm_i915_setparam  drm_i915_setparam_t;
#define I915_MEM_REGION_AGP 1
typedef struct drm_i915_mem_alloc  drm_i915_mem_alloc_t;
typedef struct drm_i915_mem_free  drm_i915_mem_free_t;
typedef struct drm_i915_mem_init_heap  drm_i915_mem_init_heap_t;
typedef struct drm_i915_mem_destroy_heap  drm_i915_mem_destroy_heap_t;
#define	DRM_I915_VBLANK_PIPE_A	1
#define	DRM_I915_VBLANK_PIPE_B	2
typedef struct drm_i915_vblank_pipe  drm_i915_vblank_pipe_t;
typedef struct drm_i915_vblank_swap  drm_i915_vblank_swap_t;
typedef struct drm_i915_hws_addr  drm_i915_hws_addr_t;
struct drm_i915_gem_init ;
struct drm_i915_gem_create ;
struct drm_i915_gem_pread ;
struct drm_i915_gem_pwrite ;
struct drm_i915_gem_mmap ;
struct drm_i915_gem_mmap_gtt ;
struct drm_i915_gem_set_domain ;
struct drm_i915_gem_sw_finish ;
struct drm_i915_gem_relocation_entry ;
#define I915_GEM_DOMAIN_CPU		0x00000001
#define I915_GEM_DOMAIN_RENDER		0x00000002
#define I915_GEM_DOMAIN_SAMPLER		0x00000004
#define I915_GEM_DOMAIN_COMMAND		0x00000008
#define I915_GEM_DOMAIN_INSTRUCTION	0x00000010
#define I915_GEM_DOMAIN_VERTEX		0x00000020
#define I915_GEM_DOMAIN_GTT		0x00000040
struct drm_i915_gem_exec_object ;
struct drm_i915_gem_execbuffer ;
struct drm_i915_gem_exec_object2 ;
struct drm_i915_gem_execbuffer2 ;
struct drm_i915_gem_pin ;
struct drm_i915_gem_unpin ;
struct drm_i915_gem_busy ;
#define I915_TILING_NONE	0
#define I915_TILING_X		1
#define I915_TILING_Y		2
#define I915_BIT_6_SWIZZLE_NONE		0
#define I915_BIT_6_SWIZZLE_9		1
#define I915_BIT_6_SWIZZLE_9_10		2
#define I915_BIT_6_SWIZZLE_9_11		3
#define I915_BIT_6_SWIZZLE_9_10_11	4
#define I915_BIT_6_SWIZZLE_UNKNOWN	5
#define I915_BIT_6_SWIZZLE_9_17		6
#define I915_BIT_6_SWIZZLE_9_10_17	7
struct drm_i915_gem_set_tiling ;
struct drm_i915_gem_get_tiling ;
struct drm_i915_gem_get_aperture ;
struct drm_i915_get_pipe_from_crtc_id ;
#define I915_MADV_WILLNEED 0
#define I915_MADV_DONTNEED 1
#define __I915_MADV_PURGED 2
struct drm_i915_gem_madvise ;
#define I915_OVERLAY_TYPE_MASK 		0xff
#define I915_OVERLAY_YUV_PLANAR 	0x01
#define I915_OVERLAY_YUV_PACKED 	0x02
#define I915_OVERLAY_RGB		0x03
#define I915_OVERLAY_DEPTH_MASK		0xff00
#define I915_OVERLAY_RGB24		0x1000
#define I915_OVERLAY_RGB16		0x2000
#define I915_OVERLAY_RGB15		0x3000
#define I915_OVERLAY_YUV422		0x0100
#define I915_OVERLAY_YUV411		0x0200
#define I915_OVERLAY_YUV420		0x0300
#define I915_OVERLAY_YUV410		0x0400
#define I915_OVERLAY_SWAP_MASK		0xff0000
#define I915_OVERLAY_NO_SWAP		0x000000
#define I915_OVERLAY_UV_SWAP		0x010000
#define I915_OVERLAY_Y_SWAP		0x020000
#define I915_OVERLAY_Y_AND_UV_SWAP	0x030000
#define I915_OVERLAY_FLAGS_MASK		0xff000000
#define I915_OVERLAY_ENABLE		0x01000000
struct drm_intel_overlay_put_image ;
#define I915_OVERLAY_UPDATE_ATTRS	(1<<0)
#define I915_OVERLAY_UPDATE_GAMMA	(1<<1)
struct drm_intel_overlay_attrs ;
