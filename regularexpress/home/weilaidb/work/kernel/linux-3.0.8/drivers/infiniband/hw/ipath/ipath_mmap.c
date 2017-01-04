void ipath_release_mmap_info(struct kref *ref)
static void ipath_vma_open(struct vm_area_struct *vma)
static void ipath_vma_close(struct vm_area_struct *vma)
static const struct vm_operations_struct ipath_vm_ops = ;
int ipath_mmap(struct ib_ucontext *context, struct vm_area_struct *vma)
struct ipath_mmap_info *ipath_create_mmap_info(struct ipath_ibdev *dev,
u32 size,
struct ib_ucontext *context,
void *obj)
void ipath_update_mmap_info(struct ipath_ibdev *dev,
struct ipath_mmap_info *ip,
u32 size, void *obj)
