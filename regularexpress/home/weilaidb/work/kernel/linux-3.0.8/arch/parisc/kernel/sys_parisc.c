static unsigned long get_unshared_area(unsigned long addr, unsigned long len)
#define DCACHE_ALIGN(addr) (((addr) + (SHMLBA - 1)) &~ (SHMLBA - 1))
static int get_offset(struct address_space *mapping)
static unsigned long get_shared_area(struct address_space *mapping,
unsigned long addr, unsigned long len, unsigned long pgoff)
unsigned long arch_get_unmapped_area(struct file *filp, unsigned long addr,
unsigned long len, unsigned long pgoff, unsigned long flags)
asmlinkage unsigned long sys_mmap2(unsigned long addr, unsigned long len,
unsigned long prot, unsigned long flags, unsigned long fd,
unsigned long pgoff)
asmlinkage unsigned long sys_mmap(unsigned long addr, unsigned long len,
unsigned long prot, unsigned long flags, unsigned long fd,
unsigned long offset)
asmlinkage long parisc_truncate64(const char __user * path,
unsigned int high, unsigned int low)
asmlinkage long parisc_ftruncate64(unsigned int fd,
unsigned int high, unsigned int low)
asmlinkage long sys_truncate64(const char __user * path, unsigned long length)
asmlinkage long sys_ftruncate64(unsigned int fd, unsigned long length)
asmlinkage long sys_fcntl64(unsigned int fd, unsigned int cmd, unsigned long arg)
asmlinkage long parisc_truncate64(const char __user * path,
unsigned int high, unsigned int low)
asmlinkage long parisc_ftruncate64(unsigned int fd,
unsigned int high, unsigned int low)
asmlinkage ssize_t parisc_pread64(unsigned int fd, char __user *buf, size_t count,
unsigned int high, unsigned int low)
asmlinkage ssize_t parisc_pwrite64(unsigned int fd, const char __user *buf,
size_t count, unsigned int high, unsigned int low)
asmlinkage ssize_t parisc_readahead(int fd, unsigned int high, unsigned int low,
size_t count)
asmlinkage long parisc_fadvise64_64(int fd,
unsigned int high_off, unsigned int low_off,
unsigned int high_len, unsigned int low_len, int advice)
asmlinkage long parisc_sync_file_range(int fd,
u32 hi_off, u32 lo_off, u32 hi_nbytes, u32 lo_nbytes,
unsigned int flags)
asmlinkage unsigned long sys_alloc_hugepages(int key, unsigned long addr, unsigned long len, int prot, int flag)
asmlinkage int sys_free_hugepages(unsigned long addr)
long parisc_personality(unsigned long personality)
