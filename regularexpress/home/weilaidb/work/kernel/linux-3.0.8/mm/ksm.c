struct mm_slot ;
struct ksm_scan ;
struct stable_node ;
struct rmap_item ;
#define SEQNR_MASK	0x0ff
#define UNSTABLE_FLAG	0x100
#define STABLE_FLAG	0x200
static struct rb_root root_stable_tree = RB_ROOT;
static struct rb_root root_unstable_tree = RB_ROOT;
#define MM_SLOTS_HASH_SHIFT 10
#define MM_SLOTS_HASH_HEADS (1 << MM_SLOTS_HASH_SHIFT)
static struct hlist_head mm_slots_hash[MM_SLOTS_HASH_HEADS];
static struct mm_slot ksm_mm_head = ;
static struct ksm_scan ksm_scan = ;
static struct kmem_cache *rmap_item_cache;
static struct kmem_cache *stable_node_cache;
static struct kmem_cache *mm_slot_cache;
static unsigned long ksm_pages_shared;
static unsigned long ksm_pages_sharing;
static unsigned long ksm_pages_unshared;
static unsigned long ksm_rmap_items;
static unsigned int ksm_thread_pages_to_scan = 100;
static unsigned int ksm_thread_sleep_millisecs = 20;
#define KSM_RUN_STOP	0
#define KSM_RUN_MERGE	1
#define KSM_RUN_UNMERGE	2
static unsigned int ksm_run = KSM_RUN_STOP;
static DECLARE_WAIT_QUEUE_HEAD(ksm_thread_wait);
static DEFINE_MUTEX(ksm_thread_mutex);
static DEFINE_SPINLOCK(ksm_mmlist_lock);
#define KSM_KMEM_CACHE(__struct, __flags) kmem_cache_create("ksm_"#__struct,\
sizeof(struct __struct), __alignof__(struct __struct),\
(__flags), NULL)
static int __init ksm_slab_init(void)
static void __init ksm_slab_free(void)
static inline struct rmap_item *alloc_rmap_item(void)
static inline void free_rmap_item(struct rmap_item *rmap_item)
static inline struct stable_node *alloc_stable_node(void)
static inline void free_stable_node(struct stable_node *stable_node)
static inline struct mm_slot *alloc_mm_slot(void)
static inline void free_mm_slot(struct mm_slot *mm_slot)
static struct mm_slot *get_mm_slot(struct mm_struct *mm)
static void insert_to_mm_slots_hash(struct mm_struct *mm,
struct mm_slot *mm_slot)
static inline int in_stable_tree(struct rmap_item *rmap_item)
static inline bool ksm_test_exit(struct mm_struct *mm)
static int break_ksm(struct vm_area_struct *vma, unsigned long addr)
static void break_cow(struct rmap_item *rmap_item)
static struct page *page_trans_compound_anon(struct page *page)
static struct page *get_mergeable_page(struct rmap_item *rmap_item)
static void remove_node_from_stable_tree(struct stable_node *stable_node)
static struct page *get_ksm_page(struct stable_node *stable_node)
static void remove_rmap_item_from_tree(struct rmap_item *rmap_item)
static void remove_trailing_rmap_items(struct mm_slot *mm_slot,
struct rmap_item **rmap_list)
static int unmerge_ksm_pages(struct vm_area_struct *vma,
unsigned long start, unsigned long end)
static int unmerge_and_remove_all_rmap_items(void)
static u32 calc_checksum(struct page *page)
static int memcmp_pages(struct page *page1, struct page *page2)
static inline int pages_identical(struct page *page1, struct page *page2)
static int write_protect_page(struct vm_area_struct *vma, struct page *page,
pte_t *orig_pte)
static int replace_page(struct vm_area_struct *vma, struct page *page,
struct page *kpage, pte_t orig_pte)
static int page_trans_compound_anon_split(struct page *page)
static int try_to_merge_one_page(struct vm_area_struct *vma,
struct page *page, struct page *kpage)
static int try_to_merge_with_ksm_page(struct rmap_item *rmap_item,
struct page *page, struct page *kpage)
static struct page *try_to_merge_two_pages(struct rmap_item *rmap_item,
struct page *page,
struct rmap_item *tree_rmap_item,
struct page *tree_page)
static struct page *stable_tree_search(struct page *page)
static struct stable_node *stable_tree_insert(struct page *kpage)
static
struct rmap_item *unstable_tree_search_insert(struct rmap_item *rmap_item,
struct page *page,
struct page **tree_pagep)
static void stable_tree_append(struct rmap_item *rmap_item,
struct stable_node *stable_node)
static void cmp_and_merge_page(struct page *page, struct rmap_item *rmap_item)
static struct rmap_item *get_next_rmap_item(struct mm_slot *mm_slot,
struct rmap_item **rmap_list,
unsigned long addr)
static struct rmap_item *scan_get_next_rmap_item(struct page **page)
static void ksm_do_scan(unsigned int scan_npages)
static int ksmd_should_run(void)
static int ksm_scan_thread(void *nothing)
int ksm_madvise(struct vm_area_struct *vma, unsigned long start,
unsigned long end, int advice, unsigned long *vm_flags)
int __ksm_enter(struct mm_struct *mm)
void __ksm_exit(struct mm_struct *mm)
struct page *ksm_does_need_to_copy(struct page *page,
struct vm_area_struct *vma, unsigned long address)
int page_referenced_ksm(struct page *page, struct mem_cgroup *memcg,
unsigned long *vm_flags)
int try_to_unmap_ksm(struct page *page, enum ttu_flags flags)
int rmap_walk_ksm(struct page *page, int (*rmap_one)(struct page *,
struct vm_area_struct *, unsigned long, void *), void *arg)
void ksm_migrate_page(struct page *newpage, struct page *oldpage)
static struct stable_node *ksm_check_stable_tree(unsigned long start_pfn,
unsigned long end_pfn)
static int ksm_memory_callback(struct notifier_block *self,
unsigned long action, void *arg)
#define KSM_ATTR_RO(_name) \
static struct kobj_attribute _name##_attr = __ATTR_RO(_name)
#define KSM_ATTR(_name) \
static struct kobj_attribute _name##_attr = \
__ATTR(_name, 0644, _name##_show, _name##_store)
static ssize_t sleep_millisecs_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
static ssize_t sleep_millisecs_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t count)
KSM_ATTR(sleep_millisecs);
static ssize_t pages_to_scan_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
static ssize_t pages_to_scan_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t count)
KSM_ATTR(pages_to_scan);
static ssize_t run_show(struct kobject *kobj, struct kobj_attribute *attr,
char *buf)
static ssize_t run_store(struct kobject *kobj, struct kobj_attribute *attr,
const char *buf, size_t count)
KSM_ATTR(run);
static ssize_t pages_shared_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
KSM_ATTR_RO(pages_shared);
static ssize_t pages_sharing_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
KSM_ATTR_RO(pages_sharing);
static ssize_t pages_unshared_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
KSM_ATTR_RO(pages_unshared);
static ssize_t pages_volatile_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
KSM_ATTR_RO(pages_volatile);
static ssize_t full_scans_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
KSM_ATTR_RO(full_scans);
static struct attribute *ksm_attrs[] = ;
static struct attribute_group ksm_attr_group = ;
static int __init ksm_init(void)
module_init(ksm_init)
