#define _MEM_USER_H
struct iomem_region ;
extern struct iomem_region *iomem_regions;
extern int iomem_size;
#define ROUND_4M(n) ((((unsigned long) (n)) + (1 << 22)) & ~((1 << 22) - 1))
extern int init_mem_user(void);
extern void setup_memory(void *entry);
extern unsigned long find_iomem(char *driver, unsigned long *len_out);
extern int init_maps(unsigned long physmem, unsigned long iomem,
unsigned long highmem);
extern unsigned long get_vm(unsigned long len);
extern void setup_physmem(unsigned long start, unsigned long usable,
unsigned long len, unsigned long long highmem);
extern void add_iomem(char *name, int fd, unsigned long size);
extern unsigned long phys_offset(unsigned long phys);
extern void map_memory(unsigned long virt, unsigned long phys,
unsigned long len, int r, int w, int x);
