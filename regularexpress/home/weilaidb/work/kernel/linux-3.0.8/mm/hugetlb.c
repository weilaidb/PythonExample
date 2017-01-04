const unsigned long hugetlb_zero = 0, hugetlb_infinity = ~0UL;
static gfp_t htlb_alloc_mask = GFP_HIGHUSER;
unsigned long hugepages_treat_as_movable;
static int max_hstate;
unsigned int default_hstate_idx;
struct hstate hstates[HUGE_MAX_HSTATE];
__initdata LIST_HEAD(huge_boot_pages);
static struct hstate * __initdata parsed_hstate;
static unsigned long __initdata default_hstate_max_huge_pages;
static unsigned long __initdata default_hstate_size;
#define for_each_hstate(h) \
for ((h) = hstates; (h) < &hstates[max_hstate]; (h)++)
static DEFINE_SPINLOCK(hugetlb_lock);
struct file_region ;
static long region_add(struct list_head *head, long f, long t)
static long region_chg(struct list_head *head, long f, long t)
static long region_truncate(struct list_head *head, long end)
static long region_count(struct list_head *head, long f, long t)
static pgoff_t vma_hugecache_offset(struct hstate *h,
struct vm_area_struct *vma, unsigned long address)
pgoff_t linear_hugepage_index(struct vm_area_struct *vma,
unsigned long address)
unsigned long vma_kernel_pagesize(struct vm_area_struct *vma)
EXPORT_SYMBOL_GPL(vma_kernel_pagesize);
unsigned long vma_mmu_pagesize(struct vm_area_struct *vma)
#define HPAGE_RESV_OWNER    (1UL << 0)
#define HPAGE_RESV_UNMAPPED (1UL << 1)
#define HPAGE_RESV_MASK (HPAGE_RESV_OWNER | HPAGE_RESV_UNMAPPED)
static unsigned long get_vma_private_data(struct vm_area_struct *vma)
static void set_vma_private_data(struct vm_area_struct *vma,
unsigned long value)
struct resv_map ;
static struct resv_map *resv_map_alloc(void)
static void resv_map_release(struct kref *ref)
static struct resv_map *vma_resv_map(struct vm_area_struct *vma)
static void set_vma_resv_map(struct vm_area_struct *vma, struct resv_map *map)
static void set_vma_resv_flags(struct vm_area_struct *vma, unsigned long flags)
static int is_vma_resv_set(struct vm_area_struct *vma, unsigned long flag)
static void decrement_hugepage_resv_vma(struct hstate *h,
struct vm_area_struct *vma)
void reset_vma_resv_huge_pages(struct vm_area_struct *vma)
static int vma_has_reserves(struct vm_area_struct *vma)
static void copy_gigantic_page(struct page *dst, struct page *src)
void copy_huge_page(struct page *dst, struct page *src)
static void enqueue_huge_page(struct hstate *h, struct page *page)
static struct page *dequeue_huge_page_node(struct hstate *h, int nid)
static struct page *dequeue_huge_page_vma(struct hstate *h,
struct vm_area_struct *vma,
unsigned long address, int avoid_reserve)
static void update_and_free_page(struct hstate *h, struct page *page)
struct hstate *size_to_hstate(unsigned long size)
static void free_huge_page(struct page *page)
static void prep_new_huge_page(struct hstate *h, struct page *page, int nid)
static void prep_compound_gigantic_page(struct page *page, unsigned long order)
int PageHuge(struct page *page)
EXPORT_SYMBOL_GPL(PageHuge);
static struct page *alloc_fresh_huge_page_node(struct hstate *h, int nid)
static int next_node_allowed(int nid, nodemask_t *nodes_allowed)
static int get_valid_node_allowed(int nid, nodemask_t *nodes_allowed)
static int hstate_next_node_to_alloc(struct hstate *h,
nodemask_t *nodes_allowed)
static int alloc_fresh_huge_page(struct hstate *h, nodemask_t *nodes_allowed)
static int hstate_next_node_to_free(struct hstate *h, nodemask_t *nodes_allowed)
static int free_pool_huge_page(struct hstate *h, nodemask_t *nodes_allowed,
bool acct_surplus)
static struct page *alloc_buddy_huge_page(struct hstate *h, int nid)
struct page *alloc_huge_page_node(struct hstate *h, int nid)
static int gather_surplus_pages(struct hstate *h, int delta)
static void return_unused_surplus_pages(struct hstate *h,
unsigned long unused_resv_pages)
static long vma_needs_reservation(struct hstate *h,
struct vm_area_struct *vma, unsigned long addr)
static void vma_commit_reservation(struct hstate *h,
struct vm_area_struct *vma, unsigned long addr)
static struct page *alloc_huge_page(struct vm_area_struct *vma,
unsigned long addr, int avoid_reserve)
int __weak alloc_bootmem_huge_page(struct hstate *h)
static void prep_compound_huge_page(struct page *page, int order)
static void __init gather_bootmem_prealloc(void)
static void __init hugetlb_hstate_alloc_pages(struct hstate *h)
static void __init hugetlb_init_hstates(void)
static char * __init memfmt(char *buf, unsigned long n)
static void __init report_hugepages(void)
static void try_to_free_low(struct hstate *h, unsigned long count,
nodemask_t *nodes_allowed)
static inline void try_to_free_low(struct hstate *h, unsigned long count,
nodemask_t *nodes_allowed)
static int adjust_pool_surplus(struct hstate *h, nodemask_t *nodes_allowed,
int delta)
#define persistent_huge_pages(h) (h->nr_huge_pages - h->surplus_huge_pages)
static unsigned long set_max_huge_pages(struct hstate *h, unsigned long count,
nodemask_t *nodes_allowed)
#define HSTATE_ATTR_RO(_name) \
static struct kobj_attribute _name##_attr = __ATTR_RO(_name)
#define HSTATE_ATTR(_name) \
static struct kobj_attribute _name##_attr = \
__ATTR(_name, 0644, _name##_show, _name##_store)
static struct kobject *hugepages_kobj;
static struct kobject *hstate_kobjs[HUGE_MAX_HSTATE];
static struct hstate *kobj_to_node_hstate(struct kobject *kobj, int *nidp);
static struct hstate *kobj_to_hstate(struct kobject *kobj, int *nidp)
static ssize_t nr_hugepages_show_common(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
static ssize_t nr_hugepages_store_common(bool obey_mempolicy,
struct kobject *kobj, struct kobj_attribute *attr,
const char *buf, size_t len)
static ssize_t nr_hugepages_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
static ssize_t nr_hugepages_store(struct kobject *kobj,
struct kobj_attribute *attr, const char *buf, size_t len)
HSTATE_ATTR(nr_hugepages);
static ssize_t nr_hugepages_mempolicy_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
static ssize_t nr_hugepages_mempolicy_store(struct kobject *kobj,
struct kobj_attribute *attr, const char *buf, size_t len)
HSTATE_ATTR(nr_hugepages_mempolicy);
static ssize_t nr_overcommit_hugepages_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
static ssize_t nr_overcommit_hugepages_store(struct kobject *kobj,
struct kobj_attribute *attr, const char *buf, size_t count)
HSTATE_ATTR(nr_overcommit_hugepages);
static ssize_t free_hugepages_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
HSTATE_ATTR_RO(free_hugepages);
static ssize_t resv_hugepages_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
HSTATE_ATTR_RO(resv_hugepages);
static ssize_t surplus_hugepages_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
HSTATE_ATTR_RO(surplus_hugepages);
static struct attribute *hstate_attrs[] = ;
static struct attribute_group hstate_attr_group = ;
static int hugetlb_sysfs_add_hstate(struct hstate *h, struct kobject *parent,
struct kobject **hstate_kobjs,
struct attribute_group *hstate_attr_group)
static void __init hugetlb_sysfs_init(void)
struct node_hstate ;
struct node_hstate node_hstates[MAX_NUMNODES];
static struct attribute *per_node_hstate_attrs[] = ;
static struct attribute_group per_node_hstate_attr_group = ;
static struct hstate *kobj_to_node_hstate(struct kobject *kobj, int *nidp)
void hugetlb_unregister_node(struct node *node)
static void hugetlb_unregister_all_nodes(void)
void hugetlb_register_node(struct node *node)
static void hugetlb_register_all_nodes(void)
static struct hstate *kobj_to_node_hstate(struct kobject *kobj, int *nidp)
static void hugetlb_unregister_all_nodes(void)
static void hugetlb_register_all_nodes(void)
static void __exit hugetlb_exit(void)
module_exit(hugetlb_exit);
static int __init hugetlb_init(void)
module_init(hugetlb_init);
void __init hugetlb_add_hstate(unsigned order)
static int __init hugetlb_nrpages_setup(char *s)
__setup("hugepages=", hugetlb_nrpages_setup);
static int __init hugetlb_default_setup(char *s)
__setup("default_hugepagesz=", hugetlb_default_setup);
static unsigned int cpuset_mems_nr(unsigned int *array)
static int hugetlb_sysctl_handler_common(bool obey_mempolicy,
struct ctl_table *table, int write,
void __user *buffer, size_t *length, loff_t *ppos)
int hugetlb_sysctl_handler(struct ctl_table *table, int write,
void __user *buffer, size_t *length, loff_t *ppos)
int hugetlb_mempolicy_sysctl_handler(struct ctl_table *table, int write,
void __user *buffer, size_t *length, loff_t *ppos)
int hugetlb_treat_movable_handler(struct ctl_table *table, int write,
void __user *buffer,
size_t *length, loff_t *ppos)
int hugetlb_overcommit_handler(struct ctl_table *table, int write,
void __user *buffer,
size_t *length, loff_t *ppos)
void hugetlb_report_meminfo(struct seq_file *m)
int hugetlb_report_node_meminfo(int nid, char *buf)
unsigned long hugetlb_total_pages(void)
static int hugetlb_acct_memory(struct hstate *h, long delta)
static void hugetlb_vm_op_open(struct vm_area_struct *vma)
static void hugetlb_vm_op_close(struct vm_area_struct *vma)
static int hugetlb_vm_op_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
const struct vm_operations_struct hugetlb_vm_ops = ;
static pte_t make_huge_pte(struct vm_area_struct *vma, struct page *page,
int writable)
static void set_huge_ptep_writable(struct vm_area_struct *vma,
unsigned long address, pte_t *ptep)
int copy_hugetlb_page_range(struct mm_struct *dst, struct mm_struct *src,
struct vm_area_struct *vma)
static int is_hugetlb_entry_migration(pte_t pte)
static int is_hugetlb_entry_hwpoisoned(pte_t pte)
void __unmap_hugepage_range(struct vm_area_struct *vma, unsigned long start,
unsigned long end, struct page *ref_page)
void unmap_hugepage_range(struct vm_area_struct *vma, unsigned long start,
unsigned long end, struct page *ref_page)
static int unmap_ref_private(struct mm_struct *mm, struct vm_area_struct *vma,
struct page *page, unsigned long address)
static int hugetlb_cow(struct mm_struct *mm, struct vm_area_struct *vma,
unsigned long address, pte_t *ptep, pte_t pte,
struct page *pagecache_page)
static struct page *hugetlbfs_pagecache_page(struct hstate *h,
struct vm_area_struct *vma, unsigned long address)
static bool hugetlbfs_pagecache_present(struct hstate *h,
struct vm_area_struct *vma, unsigned long address)
static int hugetlb_no_page(struct mm_struct *mm, struct vm_area_struct *vma,
unsigned long address, pte_t *ptep, unsigned int flags)
int hugetlb_fault(struct mm_struct *mm, struct vm_area_struct *vma,
unsigned long address, unsigned int flags)
__attribute__((weak)) struct page *
follow_huge_pud(struct mm_struct *mm, unsigned long address,
pud_t *pud, int write)
int follow_hugetlb_page(struct mm_struct *mm, struct vm_area_struct *vma,
struct page **pages, struct vm_area_struct **vmas,
unsigned long *position, int *length, int i,
unsigned int flags)
void hugetlb_change_protection(struct vm_area_struct *vma,
unsigned long address, unsigned long end, pgprot_t newprot)
int hugetlb_reserve_pages(struct inode *inode,
long from, long to,
struct vm_area_struct *vma,
vm_flags_t vm_flags)
void hugetlb_unreserve_pages(struct inode *inode, long offset, long freed)
static int is_hugepage_on_freelist(struct page *hpage)
int dequeue_hwpoisoned_huge_page(struct page *hpage)
