static struct vm_struct *switcher_vma;
static struct page **switcher_page;
DEFINE_MUTEX(lguest_lock);
static __init int map_switcher(void)
static void unmap_switcher(void)
bool lguest_address_ok(const struct lguest *lg,
unsigned long addr, unsigned long len)
void __lgread(struct lg_cpu *cpu, void *b, unsigned long addr, unsigned bytes)
void __lgwrite(struct lg_cpu *cpu, unsigned long addr, const void *b,
unsigned bytes)
int run_guest(struct lg_cpu *cpu, unsigned long __user *user)
static int __init init(void)
static void __exit fini(void)
module_init(init);
module_exit(fini);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Rusty Russell <rusty@rustcorp.com.au>");
