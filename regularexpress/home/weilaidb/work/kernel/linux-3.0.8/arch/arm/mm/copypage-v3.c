static void __naked
v3_copy_user_page(void *kto, const void *kfrom)
void v3_copy_user_highpage(struct page *to, struct page *from,
unsigned long vaddr, struct vm_area_struct *vma)
void v3_clear_user_highpage(struct page *page, unsigned long vaddr)
struct cpu_user_fns v3_user_fns __initdata = ;
