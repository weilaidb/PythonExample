#define minicache_pgprot __pgprot(L_PTE_PRESENT | L_PTE_YOUNG | \
L_PTE_MT_MINICACHE)
static DEFINE_SPINLOCK(minicache_lock);
static void __naked
mc_copy_user_page(void *from, void *to)
void v4_mc_copy_user_highpage(struct page *to, struct page *from,
unsigned long vaddr, struct vm_area_struct *vma)
void v4_mc_clear_user_highpage(struct page *page, unsigned long vaddr)
struct cpu_user_fns v4_mc_user_fns __initdata = ;
