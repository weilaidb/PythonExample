static unsigned long romfs_get_unmapped_area(struct file *file,
unsigned long addr,
unsigned long len,
unsigned long pgoff,
unsigned long flags)
static int romfs_mmap(struct file *file, struct vm_area_struct *vma)
const struct file_operations romfs_ro_fops = ;
