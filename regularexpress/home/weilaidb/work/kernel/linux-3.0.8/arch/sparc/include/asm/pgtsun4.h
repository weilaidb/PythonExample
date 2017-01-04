#define _SPARC_PGTSUN4C_H
#define SUN4C_PMD_SHIFT       23
#define SUN4C_PGDIR_SHIFT       23
#define SUN4C_PGDIR_SIZE        (1UL << SUN4C_PGDIR_SHIFT)
#define SUN4C_PGDIR_MASK        (~(SUN4C_PGDIR_SIZE-1))
#define SUN4C_PGDIR_ALIGN(addr) (((addr)+SUN4C_PGDIR_SIZE-1)&SUN4C_PGDIR_MASK)
#define SUN4C_REAL_PGDIR_SHIFT       18
#define SUN4C_REAL_PGDIR_SIZE        (1UL << SUN4C_REAL_PGDIR_SHIFT)
#define SUN4C_REAL_PGDIR_MASK        (~(SUN4C_REAL_PGDIR_SIZE-1))
#define SUN4C_REAL_PGDIR_ALIGN(addr) (((addr)+SUN4C_REAL_PGDIR_SIZE-1)&SUN4C_REAL_PGDIR_MASK)
#define SUN4C_PFN_MASK 0x7ffff
#define SUN4C_MAX_SEGMAPS 256
#define SUN4C_MAX_CONTEXTS 16
#define SUN4C_PTRS_PER_PTE    1024
#define SUN4C_PTRS_PER_PMD    1
#define SUN4C_PTRS_PER_PGD    1024
#define _SUN4C_PAGE_VALID        0x80000000
#define _SUN4C_PAGE_SILENT_READ  0x80000000
#define _SUN4C_PAGE_DIRTY        0x40000000
#define _SUN4C_PAGE_SILENT_WRITE 0x40000000
#define _SUN4C_PAGE_PRIV         0x20000000
#define _SUN4C_PAGE_NOCACHE      0x10000000
#define _SUN4C_PAGE_PRESENT      0x08000000
#define _SUN4C_PAGE_IO           0x04000000
#define _SUN4C_PAGE_FILE         0x02000000
#define _SUN4C_PAGE_READ         0x00800000
#define _SUN4C_PAGE_WRITE        0x00400000
#define _SUN4C_PAGE_ACCESSED     0x00200000
#define _SUN4C_PAGE_MODIFIED     0x00100000
#define _SUN4C_READABLE		(_SUN4C_PAGE_READ|_SUN4C_PAGE_SILENT_READ|\
_SUN4C_PAGE_ACCESSED)
#define _SUN4C_WRITEABLE	(_SUN4C_PAGE_WRITE|_SUN4C_PAGE_SILENT_WRITE|\
_SUN4C_PAGE_MODIFIED)
#define _SUN4C_PAGE_CHG_MASK	(0xffff|_SUN4C_PAGE_ACCESSED|_SUN4C_PAGE_MODIFIED)
#define SUN4C_PAGE_NONE		__pgprot(_SUN4C_PAGE_PRESENT)
#define SUN4C_PAGE_SHARED	__pgprot(_SUN4C_PAGE_PRESENT|_SUN4C_READABLE|\
_SUN4C_PAGE_WRITE)
#define SUN4C_PAGE_COPY		__pgprot(_SUN4C_PAGE_PRESENT|_SUN4C_READABLE)
#define SUN4C_PAGE_READONLY	__pgprot(_SUN4C_PAGE_PRESENT|_SUN4C_READABLE)
#define SUN4C_PAGE_KERNEL	__pgprot(_SUN4C_READABLE|_SUN4C_WRITEABLE|\
_SUN4C_PAGE_DIRTY|_SUN4C_PAGE_PRIV)
#define SUN4C_SWP_TYPE_MASK	0x1f
#define SUN4C_SWP_OFF_MASK	0x7ffff
#define SUN4C_SWP_OFF_SHIFT	5
static inline unsigned long sun4c_get_synchronous_error(void)
static inline unsigned long sun4c_get_synchronous_address(void)
static inline unsigned long sun4c_get_segmap(unsigned long addr)
static inline void sun4c_put_segmap(unsigned long addr, unsigned long entry)
static inline unsigned long sun4c_get_pte(unsigned long addr)
static inline void sun4c_put_pte(unsigned long addr, unsigned long entry)
static inline int sun4c_get_context(void)
static inline int sun4c_set_context(int ctx)
