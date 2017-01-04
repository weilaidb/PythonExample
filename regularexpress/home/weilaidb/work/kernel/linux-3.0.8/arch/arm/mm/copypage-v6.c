#if SHMLBA > 16384
#error FIX ME
#define from_address	(0xffff8000)
#define to_address	(0xffffc000)
static DEFINE_SPINLOCK(v6_lock);
static void v6_copy_user_highpage_nonaliasing(struct page *to,
struct page *from, unsigned long vaddr, struct vm_area_struct *vma)
static void v6_clear_user_highpage_nonaliasing(struct page *page, unsigned long vaddr)
static void discard_old_kernel_data(void *kto)
static void v6_copy_user_highpage_aliasing(struct page *to,
struct page *from, unsigned long vaddr, struct vm_area_struct *vma)
static void v6_clear_user_highpage_aliasing(struct page *page, unsigned long vaddr)
struct cpu_user_fns v6_user_fns __initdata = ;
static int __init v6_userpage_init(void)
core_initcall(v6_userpage_init);
