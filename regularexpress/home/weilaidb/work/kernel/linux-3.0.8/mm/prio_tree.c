#define RADIX_INDEX(vma)  ((vma)->vm_pgoff)
#define VMA_SIZE(vma)	  (((vma)->vm_end - (vma)->vm_start) >> PAGE_SHIFT)
#define HEAP_INDEX(vma)   ((vma)->vm_pgoff + (VMA_SIZE(vma) - 1))
void vma_prio_tree_add(struct vm_area_struct *vma, struct vm_area_struct *old)
void vma_prio_tree_insert(struct vm_area_struct *vma,
struct prio_tree_root *root)
void vma_prio_tree_remove(struct vm_area_struct *vma,
struct prio_tree_root *root)
struct vm_area_struct *vma_prio_tree_next(struct vm_area_struct *vma,
struct prio_tree_iter *iter)
