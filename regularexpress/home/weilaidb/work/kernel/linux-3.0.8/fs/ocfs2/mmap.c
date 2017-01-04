static int ocfs2_fault(struct vm_area_struct *area, struct vm_fault *vmf)
static int __ocfs2_page_mkwrite(struct file *file, struct buffer_head *di_bh,
struct page *page)
static int ocfs2_page_mkwrite(struct vm_area_struct *vma, struct vm_fault *vmf)
static const struct vm_operations_struct ocfs2_file_vm_ops = ;
int ocfs2_mmap(struct file *file, struct vm_area_struct *vma)
