void qib_release_mmap_info(struct kref *ref)
static void qib_vma_open(struct vm_area_struct *vma)
static void qib_vma_close(struct vm_area_struct *vma)
static struct vm_operations_struct qib_vm_ops = ;
int qib_mmap(struct ib_ucontext *context, struct vm_area_struct *vma)
struct qib_mmap_info *qib_create_mmap_info(struct qib_ibdev *dev,
u32 size,
struct ib_ucontext *context,
void *obj)
void qib_update_mmap_info(struct qib_ibdev *dev, struct qib_mmap_info *ip,
u32 size, void *obj)
