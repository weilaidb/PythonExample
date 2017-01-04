int
nouveau_ttm_mmap(struct file *filp, struct vm_area_struct *vma)
static int
nouveau_ttm_mem_global_init(struct drm_global_reference *ref)
static void
nouveau_ttm_mem_global_release(struct drm_global_reference *ref)
int
nouveau_ttm_global_init(struct drm_nouveau_private *dev_priv)
void
nouveau_ttm_global_release(struct drm_nouveau_private *dev_priv)
