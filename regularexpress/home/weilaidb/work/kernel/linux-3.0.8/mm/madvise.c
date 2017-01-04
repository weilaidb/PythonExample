static int madvise_need_mmap_write(int behavior)
static long madvise_behavior(struct vm_area_struct * vma,
struct vm_area_struct **prev,
unsigned long start, unsigned long end, int behavior)
static long madvise_willneed(struct vm_area_struct * vma,
struct vm_area_struct ** prev,
unsigned long start, unsigned long end)
static long madvise_dontneed(struct vm_area_struct * vma,
struct vm_area_struct ** prev,
unsigned long start, unsigned long end)
static long madvise_remove(struct vm_area_struct *vma,
struct vm_area_struct **prev,
unsigned long start, unsigned long end)
static int madvise_hwpoison(int bhv, unsigned long start, unsigned long end)
static long
madvise_vma(struct vm_area_struct *vma, struct vm_area_struct **prev,
unsigned long start, unsigned long end, int behavior)
static int
madvise_behavior_valid(int behavior)
SYSCALL_DEFINE3(madvise, unsigned long, start, size_t, len_in, int, behavior)
