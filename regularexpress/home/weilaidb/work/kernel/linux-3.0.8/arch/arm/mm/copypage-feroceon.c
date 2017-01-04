static void __naked
feroceon_copy_user_page(void *kto, const void *kfrom)
void feroceon_copy_user_highpage(struct page *to, struct page *from,
unsigned long vaddr, struct vm_area_struct *vma)
void feroceon_clear_user_highpage(struct page *page, unsigned long vaddr)
struct cpu_user_fns feroceon_user_fns __initdata = ;
