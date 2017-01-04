#define __NOUVEAU_VM_H__
struct nouveau_vm_pgt ;
struct nouveau_vm_pgd ;
struct nouveau_vma ;
struct nouveau_vm ;
int  nouveau_vm_new(struct drm_device *, u64 offset, u64 length, u64 mm_offset,
struct nouveau_vm **);
int  nouveau_vm_ref(struct nouveau_vm *, struct nouveau_vm **,
struct nouveau_gpuobj *pgd);
int  nouveau_vm_get(struct nouveau_vm *, u64 size, u32 page_shift,
u32 access, struct nouveau_vma *);
void nouveau_vm_put(struct nouveau_vma *);
void nouveau_vm_map(struct nouveau_vma *, struct nouveau_mem *);
void nouveau_vm_map_at(struct nouveau_vma *, u64 offset, struct nouveau_mem *);
void nouveau_vm_unmap(struct nouveau_vma *);
void nouveau_vm_unmap_at(struct nouveau_vma *, u64 offset, u64 length);
void nouveau_vm_map_sg(struct nouveau_vma *, u64 offset, u64 length,
struct nouveau_mem *, dma_addr_t *);
void nv50_vm_map_pgt(struct nouveau_gpuobj *pgd, u32 pde,
struct nouveau_gpuobj *pgt[2]);
void nv50_vm_map(struct nouveau_vma *, struct nouveau_gpuobj *,
struct nouveau_mem *, u32 pte, u32 cnt, u64 phys, u64 delta);
void nv50_vm_map_sg(struct nouveau_vma *, struct nouveau_gpuobj *,
struct nouveau_mem *, u32 pte, u32 cnt, dma_addr_t *);
void nv50_vm_unmap(struct nouveau_gpuobj *, u32 pte, u32 cnt);
void nv50_vm_flush(struct nouveau_vm *);
void nv50_vm_flush_engine(struct drm_device *, int engine);
void nvc0_vm_map_pgt(struct nouveau_gpuobj *pgd, u32 pde,
struct nouveau_gpuobj *pgt[2]);
void nvc0_vm_map(struct nouveau_vma *, struct nouveau_gpuobj *,
struct nouveau_mem *, u32 pte, u32 cnt, u64 phys, u64 delta);
void nvc0_vm_map_sg(struct nouveau_vma *, struct nouveau_gpuobj *,
struct nouveau_mem *, u32 pte, u32 cnt, dma_addr_t *);
void nvc0_vm_unmap(struct nouveau_gpuobj *, u32 pte, u32 cnt);
void nvc0_vm_flush(struct nouveau_vm *);
