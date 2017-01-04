static int get_heap_comp_val(struct ubifs_lprops *lprops, int cat)
static void move_up_lpt_heap(struct ubifs_info *c, struct ubifs_lpt_heap *heap,
struct ubifs_lprops *lprops, int cat)
static void adjust_lpt_heap(struct ubifs_info *c, struct ubifs_lpt_heap *heap,
struct ubifs_lprops *lprops, int hpos, int cat)
static int add_to_lpt_heap(struct ubifs_info *c, struct ubifs_lprops *lprops,
int cat)
static void remove_from_lpt_heap(struct ubifs_info *c,
struct ubifs_lprops *lprops, int cat)
static void lpt_heap_replace(struct ubifs_info *c,
struct ubifs_lprops *old_lprops,
struct ubifs_lprops *new_lprops, int cat)
void ubifs_add_to_cat(struct ubifs_info *c, struct ubifs_lprops *lprops,
int cat)
static void ubifs_remove_from_cat(struct ubifs_info *c,
struct ubifs_lprops *lprops, int cat)
void ubifs_replace_cat(struct ubifs_info *c, struct ubifs_lprops *old_lprops,
struct ubifs_lprops *new_lprops)
void ubifs_ensure_cat(struct ubifs_info *c, struct ubifs_lprops *lprops)
int ubifs_categorize_lprops(const struct ubifs_info *c,
const struct ubifs_lprops *lprops)
static void change_category(struct ubifs_info *c, struct ubifs_lprops *lprops)
int ubifs_calc_dark(const struct ubifs_info *c, int spc)
static int is_lprops_dirty(struct ubifs_info *c, struct ubifs_lprops *lprops)
const struct ubifs_lprops *ubifs_change_lp(struct ubifs_info *c,
const struct ubifs_lprops *lp,
int free, int dirty, int flags,
int idx_gc_cnt)
void ubifs_get_lp_stats(struct ubifs_info *c, struct ubifs_lp_stats *lst)
int ubifs_change_one_lp(struct ubifs_info *c, int lnum, int free, int dirty,
int flags_set, int flags_clean, int idx_gc_cnt)
int ubifs_update_one_lp(struct ubifs_info *c, int lnum, int free, int dirty,
int flags_set, int flags_clean)
int ubifs_read_one_lp(struct ubifs_info *c, int lnum, struct ubifs_lprops *lp)
const struct ubifs_lprops *ubifs_fast_find_free(struct ubifs_info *c)
const struct ubifs_lprops *ubifs_fast_find_empty(struct ubifs_info *c)
const struct ubifs_lprops *ubifs_fast_find_freeable(struct ubifs_info *c)
const struct ubifs_lprops *ubifs_fast_find_frdi_idx(struct ubifs_info *c)
int dbg_check_cats(struct ubifs_info *c)
void dbg_check_heap(struct ubifs_info *c, struct ubifs_lpt_heap *heap, int cat,
int add_pos)
static int scan_check_cb(struct ubifs_info *c,
const struct ubifs_lprops *lp, int in_tree,
struct ubifs_lp_stats *lst)
int dbg_check_lprops(struct ubifs_info *c)
