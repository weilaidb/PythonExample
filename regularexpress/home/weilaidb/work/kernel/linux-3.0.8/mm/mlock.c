int can_do_mlock(void)
EXPORT_SYMBOL(can_do_mlock);
void __clear_page_mlock(struct page *page)
void mlock_vma_page(struct page *page)
void munlock_vma_page(struct page *page)
static long __mlock_vma_pages_range(struct vm_area_struct *vma,
unsigned long start, unsigned long end,
int *nonblocking)
static int __mlock_posix_error_return(long retval)
long mlock_vma_pages_range(struct vm_area_struct *vma,
unsigned long start, unsigned long end)
void munlock_vma_pages_range(struct vm_area_struct *vma,
unsigned long start, unsigned long end)
static int mlock_fixup(struct vm_area_struct *vma, struct vm_area_struct **prev,
unsigned long start, unsigned long end, vm_flags_t newflags)
static int do_mlock(unsigned long start, size_t len, int on)
static int do_mlock_pages(unsigned long start, size_t len, int ignore_errors)
SYSCALL_DEFINE2(mlock, unsigned long, start, size_t, len)
SYSCALL_DEFINE2(munlock, unsigned long, start, size_t, len)
static int do_mlockall(int flags)
SYSCALL_DEFINE1(mlockall, int, flags)
SYSCALL_DEFINE0(munlockall)
static DEFINE_SPINLOCK(shmlock_user_lock);
int user_shm_lock(size_t size, struct user_struct *user)
void user_shm_unlock(size_t size, struct user_struct *user)
