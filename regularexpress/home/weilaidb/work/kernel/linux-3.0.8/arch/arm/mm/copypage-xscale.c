#define COPYPAGE_MINICACHE	0xffff8000
#define minicache_pgprot __pgprot(L_PTE_PRESENT | L_PTE_YOUNG | \
L_PTE_MT_MINICACHE)
static DEFINE_SPINLOCK(minicache_lock);
static void __naked
mc_copy_user_page(void *from, void *to)
void xscale_mc_copy_user_highpage(struct page *to, struct page *from,
unsigned long vaddr, struct vm_area_struct *vma)
void
xscale_mc_clear_user_highpage(struct page *page, unsigned long vaddr)
struct cpu_user_fns xscale_mc_user_fns __initdata = ;
