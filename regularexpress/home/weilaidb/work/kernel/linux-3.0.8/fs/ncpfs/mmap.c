static int ncp_file_mmap_fault(struct vm_area_struct *area,
struct vm_fault *vmf)
static const struct vm_operations_struct ncp_file_mmap =
;
int ncp_mmap(struct file *file, struct vm_area_struct *vma)
