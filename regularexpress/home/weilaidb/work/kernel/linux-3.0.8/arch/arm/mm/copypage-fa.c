static void __naked
fa_copy_user_page(void *kto, const void *kfrom)
void fa_copy_user_highpage(struct page *to, struct page *from,
unsigned long vaddr, struct vm_area_struct *vma)
void fa_clear_user_highpage(struct page *page, unsigned long vaddr)
struct cpu_user_fns fa_user_fns __initdata = ;
