void
init_iova_domain(struct iova_domain *iovad, unsigned long pfn_32bit)
static struct rb_node *
__get_cached_rbnode(struct iova_domain *iovad, unsigned long *limit_pfn)
static void
__cached_rbnode_insert_update(struct iova_domain *iovad,
unsigned long limit_pfn, struct iova *new)
static void
__cached_rbnode_delete_update(struct iova_domain *iovad, struct iova *free)
static int
iova_get_pad_size(int size, unsigned int limit_pfn)
static int __alloc_and_insert_iova_range(struct iova_domain *iovad,
unsigned long size, unsigned long limit_pfn,
struct iova *new, bool size_aligned)
static void
iova_insert_rbtree(struct rb_root *root, struct iova *iova)
struct iova *
alloc_iova(struct iova_domain *iovad, unsigned long size,
unsigned long limit_pfn,
bool size_aligned)
struct iova *find_iova(struct iova_domain *iovad, unsigned long pfn)
void
__free_iova(struct iova_domain *iovad, struct iova *iova)
void
free_iova(struct iova_domain *iovad, unsigned long pfn)
void put_iova_domain(struct iova_domain *iovad)
static int
__is_range_overlap(struct rb_node *node,
unsigned long pfn_lo, unsigned long pfn_hi)
static struct iova *
__insert_new_range(struct iova_domain *iovad,
unsigned long pfn_lo, unsigned long pfn_hi)
static void
__adjust_overlap_range(struct iova *iova,
unsigned long *pfn_lo, unsigned long *pfn_hi)
struct iova *
reserve_iova(struct iova_domain *iovad,
unsigned long pfn_lo, unsigned long pfn_hi)
void
copy_reserved_iova(struct iova_domain *from, struct iova_domain *to)
