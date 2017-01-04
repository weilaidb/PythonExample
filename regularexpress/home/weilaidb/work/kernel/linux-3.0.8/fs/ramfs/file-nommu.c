static int ramfs_nommu_setattr(struct dentry *, struct iattr *);
const struct address_space_operations ramfs_aops = ;
const struct file_operations ramfs_file_operations = ;
const struct inode_operations ramfs_file_inode_operations = ;
int ramfs_nommu_expand_for_mapping(struct inode *inode, size_t newsize)
static int ramfs_nommu_resize(struct inode *inode, loff_t newsize, loff_t size)
static int ramfs_nommu_setattr(struct dentry *dentry, struct iattr *ia)
unsigned long ramfs_nommu_get_unmapped_area(struct file *file,
unsigned long addr, unsigned long len,
unsigned long pgoff, unsigned long flags)
int ramfs_nommu_mmap(struct file *file, struct vm_area_struct *vma)
