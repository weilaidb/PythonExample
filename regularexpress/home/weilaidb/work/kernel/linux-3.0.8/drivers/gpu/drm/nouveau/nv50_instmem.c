#define BAR1_VM_BASE 0x0020000000ULL
#define BAR1_VM_SIZE pci_resource_len(dev->pdev, 1)
#define BAR3_VM_BASE 0x0000000000ULL
#define BAR3_VM_SIZE pci_resource_len(dev->pdev, 3)
struct nv50_instmem_priv ;
static void
nv50_channel_del(struct nouveau_channel **pchan)
static int
nv50_channel_new(struct drm_device *dev, u32 size, struct nouveau_vm *vm,
struct nouveau_channel **pchan)
int
nv50_instmem_init(struct drm_device *dev)
void
nv50_instmem_takedown(struct drm_device *dev)
int
nv50_instmem_suspend(struct drm_device *dev)
void
nv50_instmem_resume(struct drm_device *dev)
struct nv50_gpuobj_node ;
int
nv50_instmem_get(struct nouveau_gpuobj *gpuobj, u32 size, u32 align)
void
nv50_instmem_put(struct nouveau_gpuobj *gpuobj)
int
nv50_instmem_map(struct nouveau_gpuobj *gpuobj)
void
nv50_instmem_unmap(struct nouveau_gpuobj *gpuobj)
void
nv50_instmem_flush(struct drm_device *dev)
void
nv84_instmem_flush(struct drm_device *dev)
