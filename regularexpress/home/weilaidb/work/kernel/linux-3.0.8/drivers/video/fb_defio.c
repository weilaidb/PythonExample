struct page *fb_deferred_io_page(struct fb_info *info, unsigned long offs)
static int fb_deferred_io_fault(struct vm_area_struct *vma,
struct vm_fault *vmf)
int fb_deferred_io_fsync(struct file *file, int datasync)
EXPORT_SYMBOL_GPL(fb_deferred_io_fsync);
static int fb_deferred_io_mkwrite(struct vm_area_struct *vma,
struct vm_fault *vmf)
static const struct vm_operations_struct fb_deferred_io_vm_ops = ;
static int fb_deferred_io_set_page_dirty(struct page *page)
static const struct address_space_operations fb_deferred_io_aops = ;
static int fb_deferred_io_mmap(struct fb_info *info, struct vm_area_struct *vma)
static void fb_deferred_io_work(struct work_struct *work)
void fb_deferred_io_init(struct fb_info *info)
EXPORT_SYMBOL_GPL(fb_deferred_io_init);
void fb_deferred_io_open(struct fb_info *info,
struct inode *inode,
struct file *file)
EXPORT_SYMBOL_GPL(fb_deferred_io_open);
void fb_deferred_io_cleanup(struct fb_info *info)
EXPORT_SYMBOL_GPL(fb_deferred_io_cleanup);
MODULE_LICENSE("GPL");
