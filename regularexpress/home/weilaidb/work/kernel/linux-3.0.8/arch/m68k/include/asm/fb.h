#define _ASM_FB_H_
static inline void fb_pgprotect(struct file *file, struct vm_area_struct *vma,
unsigned long off)
static inline void fb_pgprotect(struct file *file, struct vm_area_struct *vma,
unsigned long off)
#define fb_pgprotect(...) do  while (0)
static inline int fb_is_primary_device(struct fb_info *info)
