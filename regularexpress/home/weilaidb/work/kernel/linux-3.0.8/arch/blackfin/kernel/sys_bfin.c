asmlinkage void *sys_sram_alloc(size_t size, unsigned long flags)
asmlinkage int sys_sram_free(const void *addr)
asmlinkage void *sys_dma_memcpy(void *dest, const void *src, size_t len)
#if defined(CONFIG_FB) || defined(CONFIG_FB_MODULE)
unsigned long get_fb_unmapped_area(struct file *filp, unsigned long orig_addr,
unsigned long len, unsigned long pgoff, unsigned long flags)
EXPORT_SYMBOL(get_fb_unmapped_area);
static DEFINE_SPINLOCK(bfin_spinlock_lock);
__attribute__((l1_text))
asmlinkage int sys_bfin_spinlock(int *p)
SYSCALL_DEFINE3(cacheflush, unsigned long, addr, unsigned long, len, int, op)
