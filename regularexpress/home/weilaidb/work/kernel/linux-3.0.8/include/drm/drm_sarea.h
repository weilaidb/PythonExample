#define _DRM_SAREA_H_
#if defined(__alpha__)
#define SAREA_MAX                       0x2000U
#elif defined(__ia64__)
#define SAREA_MAX                       0x10000U
#define SAREA_MAX                       0x2000U
#define SAREA_MAX_DRAWABLES		256
#define SAREA_DRAWABLE_CLAIMED_ENTRY    0x80000000
struct drm_sarea_drawable ;
struct drm_sarea_frame ;
struct drm_sarea ;
typedef struct drm_sarea_drawable drm_sarea_drawable_t;
typedef struct drm_sarea_frame drm_sarea_frame_t;
typedef struct drm_sarea drm_sarea_t;
