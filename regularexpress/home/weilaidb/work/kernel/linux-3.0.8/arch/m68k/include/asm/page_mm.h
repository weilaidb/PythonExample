#define _M68K_PAGE_MM_H
#define get_user_page(vaddr)		__get_free_page(GFP_KERNEL)
#define free_user_page(page, addr)	free_page(addr)
static inline void copy_page(void *to, void *from)
static inline void clear_page(void *page)
#define clear_page(page)	memset((page), 0, PAGE_SIZE)
#define copy_page(to,from)	memcpy((to), (from), PAGE_SIZE)
#define clear_user_page(addr, vaddr, page)	\
do  while (0)
#define copy_user_page(to, from, vaddr, page)	\
do  while (0)
extern unsigned long m68k_memoffset;
#define WANT_PAGE_VIRTUAL
static inline unsigned long ___pa(void *vaddr)
#define __pa(vaddr)	___pa((void *)(long)(vaddr))
static inline void *__va(unsigned long paddr)
#define __pa(x) ___pa((unsigned long)(x))
static inline unsigned long ___pa(unsigned long x)
static inline void *__va(unsigned long x)
#define virt_to_pfn(kaddr)	(__pa(kaddr) >> PAGE_SHIFT)
#define pfn_to_virt(pfn)	__va((pfn) << PAGE_SHIFT)
extern int m68k_virt_to_node_shift;
#define __virt_to_node(addr)	(&pg_data_map[0])
extern struct pglist_data *pg_data_table[];
static inline __attribute_const__ int __virt_to_node_shift(void)
#define __virt_to_node(addr)	(pg_data_table[(unsigned long)(addr) >> __virt_to_node_shift()])
#define virt_to_page(addr) ()
#define page_to_virt(page) ()
#define pfn_to_page(pfn) ()
#define page_to_pfn(_page) ()
#define virt_addr_valid(kaddr)	((void *)(kaddr) >= (void *)PAGE_OFFSET && (void *)(kaddr) < high_memory)
#define pfn_valid(pfn)		virt_addr_valid(pfn_to_virt(pfn))
#define VM_DATA_DEFAULT_FLAGS	(VM_READ | VM_WRITE | VM_EXEC | \
VM_MAYREAD | VM_MAYWRITE | VM_MAYEXEC)
