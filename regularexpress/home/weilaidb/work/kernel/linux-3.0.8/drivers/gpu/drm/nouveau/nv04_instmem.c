static int
nouveau_fifo_ctx_size(struct drm_device *dev)
int nv04_instmem_init(struct drm_device *dev)
void
nv04_instmem_takedown(struct drm_device *dev)
int
nv04_instmem_suspend(struct drm_device *dev)
void
nv04_instmem_resume(struct drm_device *dev)
int
nv04_instmem_get(struct nouveau_gpuobj *gpuobj, u32 size, u32 align)
void
nv04_instmem_put(struct nouveau_gpuobj *gpuobj)
int
nv04_instmem_map(struct nouveau_gpuobj *gpuobj)
void
nv04_instmem_unmap(struct nouveau_gpuobj *gpuobj)
void
nv04_instmem_flush(struct drm_device *dev)
