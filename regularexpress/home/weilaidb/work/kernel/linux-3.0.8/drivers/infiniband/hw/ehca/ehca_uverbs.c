struct ib_ucontext *ehca_alloc_ucontext(struct ib_device *device,
struct ib_udata *udata)
int ehca_dealloc_ucontext(struct ib_ucontext *context)
static void ehca_mm_open(struct vm_area_struct *vma)
static void ehca_mm_close(struct vm_area_struct *vma)
static const struct vm_operations_struct vm_ops = ;
static int ehca_mmap_fw(struct vm_area_struct *vma, struct h_galpas *galpas,
u32 *mm_count)
static int ehca_mmap_queue(struct vm_area_struct *vma, struct ipz_queue *queue,
u32 *mm_count)
static int ehca_mmap_cq(struct vm_area_struct *vma, struct ehca_cq *cq,
u32 rsrc_type)
static int ehca_mmap_qp(struct vm_area_struct *vma, struct ehca_qp *qp,
u32 rsrc_type)
int ehca_mmap(struct ib_ucontext *context, struct vm_area_struct *vma)
