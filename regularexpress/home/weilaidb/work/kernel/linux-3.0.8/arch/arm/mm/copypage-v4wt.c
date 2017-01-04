static void __naked
v4wt_copy_user_page(void *kto, const void *kfrom)
void v4wt_copy_user_highpage(struct page *to, struct page *from,
unsigned long vaddr, struct vm_area_struct *vma)
void v4wt_clear_user_highpage(struct page *page, unsigned long vaddr)
struct cpu_user_fns v4wt_user_fns __initdata = ;
