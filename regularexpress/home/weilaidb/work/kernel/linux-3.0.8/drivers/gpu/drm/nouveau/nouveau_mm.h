#define __NOUVEAU_REGION_H__
struct nouveau_mm_node ;
struct nouveau_mm ;
int  nouveau_mm_init(struct nouveau_mm **, u32 offset, u32 length, u32 block);
int  nouveau_mm_fini(struct nouveau_mm **);
int  nouveau_mm_pre(struct nouveau_mm *);
int  nouveau_mm_get(struct nouveau_mm *, int type, u32 size, u32 size_nc,
u32 align, struct nouveau_mm_node **);
void nouveau_mm_put(struct nouveau_mm *, struct nouveau_mm_node *);
int  nv50_vram_init(struct drm_device *);
int  nv50_vram_new(struct drm_device *, u64 size, u32 align, u32 size_nc,
u32 memtype, struct nouveau_mem **);
void nv50_vram_del(struct drm_device *, struct nouveau_mem **);
bool nv50_vram_flags_valid(struct drm_device *, u32 tile_flags);
int  nvc0_vram_init(struct drm_device *);
int  nvc0_vram_new(struct drm_device *, u64 size, u32 align, u32 ncmin,
u32 memtype, struct nouveau_mem **);
bool nvc0_vram_flags_valid(struct drm_device *, u32 tile_flags);
