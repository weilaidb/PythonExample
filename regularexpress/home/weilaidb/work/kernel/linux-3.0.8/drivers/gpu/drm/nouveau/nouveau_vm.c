void
nouveau_vm_map_at(struct nouveau_vma *vma, u64 delta, struct nouveau_mem *node)
void
nouveau_vm_map(struct nouveau_vma *vma, struct nouveau_mem *node)
void
nouveau_vm_map_sg(struct nouveau_vma *vma, u64 delta, u64 length,
struct nouveau_mem *mem, dma_addr_t *list)
void
nouveau_vm_unmap_at(struct nouveau_vma *vma, u64 delta, u64 length)
void
nouveau_vm_unmap(struct nouveau_vma *vma)
static void
nouveau_vm_unmap_pgt(struct nouveau_vm *vm, int big, u32 fpde, u32 lpde)
static int
nouveau_vm_map_pgt(struct nouveau_vm *vm, u32 pde, u32 type)
int
nouveau_vm_get(struct nouveau_vm *vm, u64 size, u32 page_shift,
u32 access, struct nouveau_vma *vma)
void
nouveau_vm_put(struct nouveau_vma *vma)
int
nouveau_vm_new(struct drm_device *dev, u64 offset, u64 length, u64 mm_offset,
struct nouveau_vm **pvm)
static int
nouveau_vm_link(struct nouveau_vm *vm, struct nouveau_gpuobj *pgd)
static void
nouveau_vm_unlink(struct nouveau_vm *vm, struct nouveau_gpuobj *pgd)
static void
nouveau_vm_del(struct nouveau_vm *vm)
int
nouveau_vm_ref(struct nouveau_vm *ref, struct nouveau_vm **ptr,
struct nouveau_gpuobj *pgd)
