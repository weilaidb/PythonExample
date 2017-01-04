struct scan_data ;
static int valuable(struct ubifs_info *c, const struct ubifs_lprops *lprops)
static int scan_for_dirty_cb(struct ubifs_info *c,
const struct ubifs_lprops *lprops, int in_tree,
struct scan_data *data)
static const struct ubifs_lprops *scan_for_dirty(struct ubifs_info *c,
int min_space, int pick_free,
int exclude_index)
int ubifs_find_dirty_leb(struct ubifs_info *c, struct ubifs_lprops *ret_lp,
int min_space, int pick_free)
static int scan_for_free_cb(struct ubifs_info *c,
const struct ubifs_lprops *lprops, int in_tree,
struct scan_data *data)
static
const struct ubifs_lprops *do_find_free_space(struct ubifs_info *c,
int min_space, int pick_free,
int squeeze)
int ubifs_find_free_space(struct ubifs_info *c, int min_space, int *offs,
int squeeze)
static int scan_for_idx_cb(struct ubifs_info *c,
const struct ubifs_lprops *lprops, int in_tree,
struct scan_data *data)
static const struct ubifs_lprops *scan_for_leb_for_idx(struct ubifs_info *c)
int ubifs_find_free_leb_for_idx(struct ubifs_info *c)
static int cmp_dirty_idx(const struct ubifs_lprops **a,
const struct ubifs_lprops **b)
static void swap_dirty_idx(struct ubifs_lprops **a, struct ubifs_lprops **b,
int size)
int ubifs_save_dirty_idx_lnums(struct ubifs_info *c)
static int scan_dirty_idx_cb(struct ubifs_info *c,
const struct ubifs_lprops *lprops, int in_tree,
struct scan_data *data)
static int find_dirty_idx_leb(struct ubifs_info *c)
static int get_idx_gc_leb(struct ubifs_info *c)
static int find_dirtiest_idx_leb(struct ubifs_info *c)
int ubifs_find_dirty_idx_leb(struct ubifs_info *c)
