unsigned long transparent_hugepage_flags __read_mostly =
(1<<TRANSPARENT_HUGEPAGE_FLAG)|
(1<<TRANSPARENT_HUGEPAGE_REQ_MADV_FLAG)|
(1<<TRANSPARENT_HUGEPAGE_DEFRAG_FLAG)|
(1<<TRANSPARENT_HUGEPAGE_DEFRAG_KHUGEPAGED_FLAG);
static unsigned int khugepaged_pages_to_scan __read_mostly = HPAGE_PMD_NR*8;
static unsigned int khugepaged_pages_collapsed;
static unsigned int khugepaged_full_scans;
static unsigned int khugepaged_scan_sleep_millisecs __read_mostly = 10000;
static unsigned int khugepaged_alloc_sleep_millisecs __read_mostly = 60000;
static struct task_struct *khugepaged_thread __read_mostly;
static DEFINE_MUTEX(khugepaged_mutex);
static DEFINE_SPINLOCK(khugepaged_mm_lock);
static DECLARE_WAIT_QUEUE_HEAD(khugepaged_wait);
static unsigned int khugepaged_max_ptes_none __read_mostly = HPAGE_PMD_NR-1;
static int khugepaged(void *none);
static int mm_slots_hash_init(void);
static int khugepaged_slab_init(void);
static void khugepaged_slab_free(void);
#define MM_SLOTS_HASH_HEADS 1024
static struct hlist_head *mm_slots_hash __read_mostly;
static struct kmem_cache *mm_slot_cache __read_mostly;
struct mm_slot ;
struct khugepaged_scan  khugepaged_scan = ;
static int set_recommended_min_free_kbytes(void)
late_initcall(set_recommended_min_free_kbytes);
static int start_khugepaged(void)
static ssize_t double_flag_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf,
enum transparent_hugepage_flag enabled,
enum transparent_hugepage_flag req_madv)
static ssize_t double_flag_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t count,
enum transparent_hugepage_flag enabled,
enum transparent_hugepage_flag req_madv)
static ssize_t enabled_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
static ssize_t enabled_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t count)
static struct kobj_attribute enabled_attr =
__ATTR(enabled, 0644, enabled_show, enabled_store);
static ssize_t single_flag_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf,
enum transparent_hugepage_flag flag)
static ssize_t single_flag_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t count,
enum transparent_hugepage_flag flag)
static ssize_t defrag_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
static ssize_t defrag_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t count)
static struct kobj_attribute defrag_attr =
__ATTR(defrag, 0644, defrag_show, defrag_store);
static ssize_t debug_cow_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
static ssize_t debug_cow_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t count)
static struct kobj_attribute debug_cow_attr =
__ATTR(debug_cow, 0644, debug_cow_show, debug_cow_store);
static struct attribute *hugepage_attr[] = ;
static struct attribute_group hugepage_attr_group = ;
static ssize_t scan_sleep_millisecs_show(struct kobject *kobj,
struct kobj_attribute *attr,
char *buf)
static ssize_t scan_sleep_millisecs_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t count)
static struct kobj_attribute scan_sleep_millisecs_attr =
__ATTR(scan_sleep_millisecs, 0644, scan_sleep_millisecs_show,
scan_sleep_millisecs_store);
static ssize_t alloc_sleep_millisecs_show(struct kobject *kobj,
struct kobj_attribute *attr,
char *buf)
static ssize_t alloc_sleep_millisecs_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t count)
static struct kobj_attribute alloc_sleep_millisecs_attr =
__ATTR(alloc_sleep_millisecs, 0644, alloc_sleep_millisecs_show,
alloc_sleep_millisecs_store);
static ssize_t pages_to_scan_show(struct kobject *kobj,
struct kobj_attribute *attr,
char *buf)
static ssize_t pages_to_scan_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t count)
static struct kobj_attribute pages_to_scan_attr =
__ATTR(pages_to_scan, 0644, pages_to_scan_show,
pages_to_scan_store);
static ssize_t pages_collapsed_show(struct kobject *kobj,
struct kobj_attribute *attr,
char *buf)
static struct kobj_attribute pages_collapsed_attr =
__ATTR_RO(pages_collapsed);
static ssize_t full_scans_show(struct kobject *kobj,
struct kobj_attribute *attr,
char *buf)
static struct kobj_attribute full_scans_attr =
__ATTR_RO(full_scans);
static ssize_t khugepaged_defrag_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
static ssize_t khugepaged_defrag_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t count)
static struct kobj_attribute khugepaged_defrag_attr =
__ATTR(defrag, 0644, khugepaged_defrag_show,
khugepaged_defrag_store);
static ssize_t khugepaged_max_ptes_none_show(struct kobject *kobj,
struct kobj_attribute *attr,
char *buf)
static ssize_t khugepaged_max_ptes_none_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t count)
static struct kobj_attribute khugepaged_max_ptes_none_attr =
__ATTR(max_ptes_none, 0644, khugepaged_max_ptes_none_show,
khugepaged_max_ptes_none_store);
static struct attribute *khugepaged_attr[] = ;
static struct attribute_group khugepaged_attr_group = ;
static int __init hugepage_init(void)
module_init(hugepage_init)
static int __init setup_transparent_hugepage(char *str)
__setup("transparent_hugepage=", setup_transparent_hugepage);
static void prepare_pmd_huge_pte(pgtable_t pgtable,
struct mm_struct *mm)
static inline pmd_t maybe_pmd_mkwrite(pmd_t pmd, struct vm_area_struct *vma)
static int __do_huge_pmd_anonymous_page(struct mm_struct *mm,
struct vm_area_struct *vma,
unsigned long haddr, pmd_t *pmd,
struct page *page)
static inline gfp_t alloc_hugepage_gfpmask(int defrag, gfp_t extra_gfp)
static inline struct page *alloc_hugepage_vma(int defrag,
struct vm_area_struct *vma,
unsigned long haddr, int nd,
gfp_t extra_gfp)
static inline struct page *alloc_hugepage(int defrag)
int do_huge_pmd_anonymous_page(struct mm_struct *mm, struct vm_area_struct *vma,
unsigned long address, pmd_t *pmd,
unsigned int flags)
int copy_huge_pmd(struct mm_struct *dst_mm, struct mm_struct *src_mm,
pmd_t *dst_pmd, pmd_t *src_pmd, unsigned long addr,
struct vm_area_struct *vma)
pgtable_t get_pmd_huge_pte(struct mm_struct *mm)
static int do_huge_pmd_wp_page_fallback(struct mm_struct *mm,
struct vm_area_struct *vma,
unsigned long address,
pmd_t *pmd, pmd_t orig_pmd,
struct page *page,
unsigned long haddr)
int do_huge_pmd_wp_page(struct mm_struct *mm, struct vm_area_struct *vma,
unsigned long address, pmd_t *pmd, pmd_t orig_pmd)
struct page *follow_trans_huge_pmd(struct mm_struct *mm,
unsigned long addr,
pmd_t *pmd,
unsigned int flags)
int zap_huge_pmd(struct mmu_gather *tlb, struct vm_area_struct *vma,
pmd_t *pmd)
int mincore_huge_pmd(struct vm_area_struct *vma, pmd_t *pmd,
unsigned long addr, unsigned long end,
unsigned char *vec)
int change_huge_pmd(struct vm_area_struct *vma, pmd_t *pmd,
unsigned long addr, pgprot_t newprot)
pmd_t *page_check_address_pmd(struct page *page,
struct mm_struct *mm,
unsigned long address,
enum page_check_address_pmd_flag flag)
static int __split_huge_page_splitting(struct page *page,
struct vm_area_struct *vma,
unsigned long address)
static void __split_huge_page_refcount(struct page *page)
static int __split_huge_page_map(struct page *page,
struct vm_area_struct *vma,
unsigned long address)
static void __split_huge_page(struct page *page,
struct anon_vma *anon_vma)
int split_huge_page(struct page *page)
#define VM_NO_THP (VM_SPECIAL|VM_INSERTPAGE|VM_MIXEDMAP|VM_SAO| \
VM_HUGETLB|VM_SHARED|VM_MAYSHARE)
int hugepage_madvise(struct vm_area_struct *vma,
unsigned long *vm_flags, int advice)
static int __init khugepaged_slab_init(void)
static void __init khugepaged_slab_free(void)
static inline struct mm_slot *alloc_mm_slot(void)
static inline void free_mm_slot(struct mm_slot *mm_slot)
static int __init mm_slots_hash_init(void)
static struct mm_slot *get_mm_slot(struct mm_struct *mm)
static void insert_to_mm_slots_hash(struct mm_struct *mm,
struct mm_slot *mm_slot)
static inline int khugepaged_test_exit(struct mm_struct *mm)
int __khugepaged_enter(struct mm_struct *mm)
int khugepaged_enter_vma_merge(struct vm_area_struct *vma)
void __khugepaged_exit(struct mm_struct *mm)
static void release_pte_page(struct page *page)
static void release_pte_pages(pte_t *pte, pte_t *_pte)
static void release_all_pte_pages(pte_t *pte)
static int __collapse_huge_page_isolate(struct vm_area_struct *vma,
unsigned long address,
pte_t *pte)
static void __collapse_huge_page_copy(pte_t *pte, struct page *page,
struct vm_area_struct *vma,
unsigned long address,
spinlock_t *ptl)
static void collapse_huge_page(struct mm_struct *mm,
unsigned long address,
struct page **hpage,
struct vm_area_struct *vma,
int node)
static int khugepaged_scan_pmd(struct mm_struct *mm,
struct vm_area_struct *vma,
unsigned long address,
struct page **hpage)
static void collect_mm_slot(struct mm_slot *mm_slot)
static unsigned int khugepaged_scan_mm_slot(unsigned int pages,
struct page **hpage)
static int khugepaged_has_work(void)
static int khugepaged_wait_event(void)
static void khugepaged_do_scan(struct page **hpage)
static void khugepaged_alloc_sleep(void)
static struct page *khugepaged_alloc_hugepage(void)
static void khugepaged_loop(void)
static int khugepaged(void *none)
void __split_huge_page_pmd(struct mm_struct *mm, pmd_t *pmd)
static void split_huge_page_address(struct mm_struct *mm,
unsigned long address)
void __vma_adjust_trans_huge(struct vm_area_struct *vma,
unsigned long start,
unsigned long end,
long adjust_next)
