#define _ASM_X86_FB_H
static inline void fb_pgprotect(struct file *file, struct vm_area_struct *vma,
unsigned long off)
extern int fb_is_primary_device(struct fb_info *info);
