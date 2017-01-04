#if defined(__ia64__)
static void drm_vm_open(struct vm_area_struct *vma);
static void drm_vm_close(struct vm_area_struct *vma);
static pgprot_t drm_io_prot(uint32_t map_type, struct vm_area_struct *vma)
static pgprot_t drm_dma_prot(uint32_t map_type, struct vm_area_struct *vma)
#if __OS_HAS_AGP
static int drm_do_vm_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
static int drm_do_vm_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
static int drm_do_vm_shm_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
static void drm_vm_shm_close(struct vm_area_struct *vma)
static int drm_do_vm_dma_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
static int drm_do_vm_sg_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
static int drm_vm_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
static int drm_vm_shm_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
static int drm_vm_dma_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
static int drm_vm_sg_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
static const struct vm_operations_struct drm_vm_ops = ;
static const struct vm_operations_struct drm_vm_shm_ops = ;
static const struct vm_operations_struct drm_vm_dma_ops = ;
static const struct vm_operations_struct drm_vm_sg_ops = ;
void drm_vm_open_locked(struct vm_area_struct *vma)
static void drm_vm_open(struct vm_area_struct *vma)
void drm_vm_close_locked(struct vm_area_struct *vma)
static void drm_vm_close(struct vm_area_struct *vma)
static int drm_mmap_dma(struct file *filp, struct vm_area_struct *vma)
static resource_size_t drm_core_get_reg_ofs(struct drm_device *dev)
int drm_mmap_locked(struct file *filp, struct vm_area_struct *vma)
int drm_mmap(struct file *filp, struct vm_area_struct *vma)
EXPORT_SYMBOL(drm_mmap);
