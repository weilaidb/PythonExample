void
nvc0_vm_map_pgt(struct nouveau_gpuobj *pgd, u32 index,
struct nouveau_gpuobj *pgt[2])
static inline u64
nvc0_vm_addr(struct nouveau_vma *vma, u64 phys, u32 memtype, u32 target)
void
nvc0_vm_map(struct nouveau_vma *vma, struct nouveau_gpuobj *pgt,
struct nouveau_mem *mem, u32 pte, u32 cnt, u64 phys, u64 delta)
void
nvc0_vm_map_sg(struct nouveau_vma *vma, struct nouveau_gpuobj *pgt,
struct nouveau_mem *mem, u32 pte, u32 cnt, dma_addr_t *list)
void
nvc0_vm_unmap(struct nouveau_gpuobj *pgt, u32 pte, u32 cnt)
void
nvc0_vm_flush(struct nouveau_vm *vm)
