struct vm_area_struct *vb2_get_vma(struct vm_area_struct *vma)
void vb2_put_vma(struct vm_area_struct *vma)
EXPORT_SYMBOL_GPL(vb2_put_vma);
int vb2_get_contig_userptr(unsigned long vaddr, unsigned long size,
struct vm_area_struct **res_vma, dma_addr_t *res_pa)
EXPORT_SYMBOL_GPL(vb2_get_contig_userptr);
int vb2_mmap_pfn_range(struct vm_area_struct *vma, unsigned long paddr,
unsigned long size,
const struct vm_operations_struct *vm_ops,
void *priv)
EXPORT_SYMBOL_GPL(vb2_mmap_pfn_range);
static void vb2_common_vm_open(struct vm_area_struct *vma)
static void vb2_common_vm_close(struct vm_area_struct *vma)
const struct vm_operations_struct vb2_common_vm_ops = ;
EXPORT_SYMBOL_GPL(vb2_common_vm_ops);
MODULE_DESCRIPTION("common memory handling routines for videobuf2");
MODULE_AUTHOR("Pawel Osciak <pawel@osciak.com>");
MODULE_LICENSE("GPL");
