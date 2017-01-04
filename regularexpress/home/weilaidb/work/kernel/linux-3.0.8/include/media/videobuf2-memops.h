#define _MEDIA_VIDEOBUF2_MEMOPS_H
struct vb2_vmarea_handler ;
extern const struct vm_operations_struct vb2_common_vm_ops;
int vb2_get_contig_userptr(unsigned long vaddr, unsigned long size,
struct vm_area_struct **res_vma, dma_addr_t *res_pa);
int vb2_mmap_pfn_range(struct vm_area_struct *vma, unsigned long paddr,
unsigned long size,
const struct vm_operations_struct *vm_ops,
void *priv);
struct vm_area_struct *vb2_get_vma(struct vm_area_struct *vma);
void vb2_put_vma(struct vm_area_struct *vma);
