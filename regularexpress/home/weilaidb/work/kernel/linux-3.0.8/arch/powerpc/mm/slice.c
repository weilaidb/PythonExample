#undef DEBUG
static DEFINE_SPINLOCK(slice_convert_lock);
int _slice_debug = 1;
static void slice_print_mask(const char *label, struct slice_mask mask)
#define slice_dbg(fmt...) do  while(0)
static void slice_print_mask(const char *label, struct slice_mask mask)
#define slice_dbg(fmt...)
static struct slice_mask slice_range_to_mask(unsigned long start,
unsigned long len)
static int slice_area_is_free(struct mm_struct *mm, unsigned long addr,
unsigned long len)
static int slice_low_has_vma(struct mm_struct *mm, unsigned long slice)
static int slice_high_has_vma(struct mm_struct *mm, unsigned long slice)
static struct slice_mask slice_mask_for_free(struct mm_struct *mm)
static struct slice_mask slice_mask_for_size(struct mm_struct *mm, int psize)
static int slice_check_fit(struct slice_mask mask, struct slice_mask available)
static void slice_flush_segments(void *parm)
static void slice_convert(struct mm_struct *mm, struct slice_mask mask, int psize)
static unsigned long slice_find_area_bottomup(struct mm_struct *mm,
unsigned long len,
struct slice_mask available,
int psize, int use_cache)
static unsigned long slice_find_area_topdown(struct mm_struct *mm,
unsigned long len,
struct slice_mask available,
int psize, int use_cache)
static unsigned long slice_find_area(struct mm_struct *mm, unsigned long len,
struct slice_mask mask, int psize,
int topdown, int use_cache)
#define or_mask(dst, src)	do  while (0)
#define andnot_mask(dst, src)	do  while (0)
#define MMU_PAGE_BASE	MMU_PAGE_64K
#define MMU_PAGE_BASE	MMU_PAGE_4K
unsigned long slice_get_unmapped_area(unsigned long addr, unsigned long len,
unsigned long flags, unsigned int psize,
int topdown, int use_cache)
EXPORT_SYMBOL_GPL(slice_get_unmapped_area);
unsigned long arch_get_unmapped_area(struct file *filp,
unsigned long addr,
unsigned long len,
unsigned long pgoff,
unsigned long flags)
unsigned long arch_get_unmapped_area_topdown(struct file *filp,
const unsigned long addr0,
const unsigned long len,
const unsigned long pgoff,
const unsigned long flags)
unsigned int get_slice_psize(struct mm_struct *mm, unsigned long addr)
EXPORT_SYMBOL_GPL(get_slice_psize);
void slice_set_user_psize(struct mm_struct *mm, unsigned int psize)
void slice_set_psize(struct mm_struct *mm, unsigned long address,
unsigned int psize)
void slice_set_range_psize(struct mm_struct *mm, unsigned long start,
unsigned long len, unsigned int psize)
int is_hugepage_only_range(struct mm_struct *mm, unsigned long addr,
unsigned long len)
