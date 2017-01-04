struct nvc0_instmem_priv ;
int
nvc0_instmem_suspend(struct drm_device *dev)
void
nvc0_instmem_resume(struct drm_device *dev)
static void
nvc0_channel_del(struct nouveau_channel **pchan)
static int
nvc0_channel_new(struct drm_device *dev, u32 size, struct nouveau_vm *vm,
struct nouveau_channel **pchan,
struct nouveau_gpuobj *pgd, u64 vm_size)
int
nvc0_instmem_init(struct drm_device *dev)
void
nvc0_instmem_takedown(struct drm_device *dev)
