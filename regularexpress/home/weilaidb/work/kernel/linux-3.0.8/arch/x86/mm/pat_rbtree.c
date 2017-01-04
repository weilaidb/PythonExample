static struct rb_root memtype_rbroot = RB_ROOT;
static int is_node_overlap(struct memtype *node, u64 start, u64 end)
static u64 get_subtree_max_end(struct rb_node *node)
static void memtype_rb_augment_cb(struct rb_node *node, void *__unused)
static struct memtype *memtype_rb_lowest_match(struct rb_root *root,
u64 start, u64 end)
static struct memtype *memtype_rb_exact_match(struct rb_root *root,
u64 start, u64 end)
static int memtype_rb_check_conflict(struct rb_root *root,
u64 start, u64 end,
unsigned long reqtype, unsigned long *newtype)
static void memtype_rb_insert(struct rb_root *root, struct memtype *newdata)
int rbt_memtype_check_insert(struct memtype *new, unsigned long *ret_type)
struct memtype *rbt_memtype_erase(u64 start, u64 end)
struct memtype *rbt_memtype_lookup(u64 addr)
#if defined(CONFIG_DEBUG_FS)
int rbt_memtype_copy_nth_element(struct memtype *out, loff_t pos)
