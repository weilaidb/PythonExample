static void __naked
xsc3_mc_copy_user_page(void *kto, const void *kfrom)
void xsc3_mc_copy_user_highpage(struct page *to, struct page *from,
unsigned long vaddr, struct vm_area_struct *vma)
void xsc3_mc_clear_user_highpage(struct page *page, unsigned long vaddr)
struct cpu_user_fns xsc3_mc_user_fns __initdata = ;
