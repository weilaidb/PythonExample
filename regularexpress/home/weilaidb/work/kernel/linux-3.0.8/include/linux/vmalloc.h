#define _LINUX_VMALLOC_H
struct vm_area_struct;
#define VM_IOREMAP	0x00000001
#define VM_ALLOC	0x00000002
#define VM_MAP		0x00000004
#define VM_USERMAP	0x00000008
#define VM_VPAGES	0x00000010
#define IOREMAP_MAX_ORDER	(7 + PAGE_SHIFT)
struct vm_struct ;
extern void vm_unmap_ram(const void *mem, unsigned int count);
extern void *vm_map_ram(struct page **pages, unsigned int count,
int node, pgprot_t prot);
extern void vm_unmap_aliases(void);
extern void __init vmalloc_init(void);
static inline void vmalloc_init(void)
extern void *vmalloc(unsigned long size);
extern void *vzalloc(unsigned long size);
extern void *vmalloc_user(unsigned long size);
extern void *vmalloc_node(unsigned long size, int node);
extern void *vzalloc_node(unsigned long size, int node);
extern void *vmalloc_exec(unsigned long size);
extern void *vmalloc_32(unsigned long size);
extern void *vmalloc_32_user(unsigned long size);
extern void *__vmalloc(unsigned long size, gfp_t gfp_mask, pgprot_t prot);
extern void *__vmalloc_node_range(unsigned long size, unsigned long align,
unsigned long start, unsigned long end, gfp_t gfp_mask,
pgprot_t prot, int node, void *caller);
extern void vfree(const void *addr);
extern void *vmap(struct page **pages, unsigned int count,
unsigned long flags, pgprot_t prot);
extern void vunmap(const void *addr);
extern int remap_vmalloc_range(struct vm_area_struct *vma, void *addr,
unsigned long pgoff);
void vmalloc_sync_all(void);
static inline size_t get_vm_area_size(const struct vm_struct *area)
extern struct vm_struct *get_vm_area(unsigned long size, unsigned long flags);
extern struct vm_struct *get_vm_area_caller(unsigned long size,
unsigned long flags, void *caller);
extern struct vm_struct *__get_vm_area(unsigned long size, unsigned long flags,
unsigned long start, unsigned long end);
extern struct vm_struct *__get_vm_area_caller(unsigned long size,
unsigned long flags,
unsigned long start, unsigned long end,
void *caller);
extern struct vm_struct *remove_vm_area(const void *addr);
extern int map_vm_area(struct vm_struct *area, pgprot_t prot,
struct page ***pages);
extern int map_kernel_range_noflush(unsigned long start, unsigned long size,
pgprot_t prot, struct page **pages);
extern void unmap_kernel_range_noflush(unsigned long addr, unsigned long size);
extern void unmap_kernel_range(unsigned long addr, unsigned long size);
static inline int
map_kernel_range_noflush(unsigned long start, unsigned long size,
pgprot_t prot, struct page **pages)
static inline void
unmap_kernel_range_noflush(unsigned long addr, unsigned long size)
static inline void
unmap_kernel_range(unsigned long addr, unsigned long size)
extern struct vm_struct *alloc_vm_area(size_t size);
extern void free_vm_area(struct vm_struct *area);
extern long vread(char *buf, char *addr, unsigned long count);
extern long vwrite(char *buf, char *addr, unsigned long count);
extern rwlock_t vmlist_lock;
extern struct vm_struct *vmlist;
extern __init void vm_area_register_early(struct vm_struct *vm, size_t align);
# ifdef CONFIG_MMU
struct vm_struct **pcpu_get_vm_areas(const unsigned long *offsets,
const size_t *sizes, int nr_vms,
size_t align);
void pcpu_free_vm_areas(struct vm_struct **vms, int nr_vms);
# else
static inline struct vm_struct **
pcpu_get_vm_areas(const unsigned long *offsets,
const size_t *sizes, int nr_vms,
size_t align)
static inline void
pcpu_free_vm_areas(struct vm_struct **vms, int nr_vms)
# endif
