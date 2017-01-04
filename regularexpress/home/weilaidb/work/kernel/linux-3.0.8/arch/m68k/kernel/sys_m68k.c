asmlinkage int do_page_fault(struct pt_regs *regs, unsigned long address,
unsigned long error_code);
asmlinkage long sys_mmap2(unsigned long addr, unsigned long len,
unsigned long prot, unsigned long flags,
unsigned long fd, unsigned long pgoff)
#define virt_to_phys_040(vaddr)						\
()
static inline int
cache_flush_040 (unsigned long addr, int scope, int cache, unsigned long len)
#define virt_to_phys_060(vaddr)				\
()
static inline int
cache_flush_060 (unsigned long addr, int scope, int cache, unsigned long len)
asmlinkage int
sys_cacheflush (unsigned long addr, int scope, int cache, unsigned long len)
asmlinkage int
sys_atomic_cmpxchg_32(unsigned long newval, int oldval, int d3, int d4, int d5,
unsigned long __user * mem)
asmlinkage int
sys_cacheflush (unsigned long addr, int scope, int cache, unsigned long len)
asmlinkage int
sys_atomic_cmpxchg_32(unsigned long newval, int oldval, int d3, int d4, int d5,
unsigned long __user * mem)
asmlinkage int sys_getpagesize(void)
int kernel_execve(const char *filename,
const char *const argv[],
const char *const envp[])
asmlinkage unsigned long sys_get_thread_area(void)
asmlinkage int sys_set_thread_area(unsigned long tp)
asmlinkage int sys_atomic_barrier(void)
