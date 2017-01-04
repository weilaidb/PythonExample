#define __UM_MALLOC_H__
extern void *uml_kmalloc(int size, int flags);
extern void kfree(const void *ptr);
extern void *vmalloc(unsigned long size);
extern void vfree(void *ptr);
