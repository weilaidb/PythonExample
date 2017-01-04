#define TTM_BO_VM_NUM_PREFAULT 16
static struct ttm_buffer_object *ttm_bo_vm_lookup_rb(struct ttm_bo_device *bdev,
unsigned long page_start,
unsigned long num_pages)
static int ttm_bo_vm_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
static void ttm_bo_vm_open(struct vm_area_struct *vma)
static void ttm_bo_vm_close(struct vm_area_struct *vma)
static const struct vm_operations_struct ttm_bo_vm_ops = ;
int ttm_bo_mmap(struct file *filp, struct vm_area_struct *vma,
struct ttm_bo_device *bdev)
EXPORT_SYMBOL(ttm_bo_mmap);
int ttm_fbdev_mmap(struct vm_area_struct *vma, struct ttm_buffer_object *bo)
EXPORT_SYMBOL(ttm_fbdev_mmap);
ssize_t ttm_bo_io(struct ttm_bo_device *bdev, struct file *filp,
const char __user *wbuf, char __user *rbuf, size_t count,
loff_t *f_pos, bool write)
ssize_t ttm_bo_fbdev_io(struct ttm_buffer_object *bo, const char __user *wbuf,
char __user *rbuf, size_t count, loff_t *f_pos,
bool write)
