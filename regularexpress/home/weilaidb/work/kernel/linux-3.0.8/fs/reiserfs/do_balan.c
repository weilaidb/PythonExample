static inline void buffer_info_init_left(struct tree_balance *tb,
struct buffer_info *bi)
static inline void buffer_info_init_right(struct tree_balance *tb,
struct buffer_info *bi)
static inline void buffer_info_init_tbS0(struct tree_balance *tb,
struct buffer_info *bi)
static inline void buffer_info_init_bh(struct tree_balance *tb,
struct buffer_info *bi,
struct buffer_head *bh)
inline void do_balance_mark_leaf_dirty(struct tree_balance *tb,
struct buffer_head *bh, int flag)
#define do_balance_mark_internal_dirty do_balance_mark_leaf_dirty
#define do_balance_mark_sb_dirty do_balance_mark_leaf_dirty
static int balance_leaf_when_delete(struct tree_balance *tb, int flag)
static int balance_leaf(struct tree_balance *tb, struct item_head *ih,
const char *body,
int flag,
struct item_head *insert_key,
struct buffer_head **insert_ptr
)
void make_empty_node(struct buffer_info *bi)
struct buffer_head *get_FEB(struct tree_balance *tb)
static void store_thrown(struct tree_balance *tb, struct buffer_head *bh)
static void free_thrown(struct tree_balance *tb)
void reiserfs_invalidate_buffer(struct tree_balance *tb, struct buffer_head *bh)
void replace_key(struct tree_balance *tb, struct buffer_head *dest, int n_dest,
struct buffer_head *src, int n_src)
int get_left_neighbor_position(struct tree_balance *tb, int h)
int get_right_neighbor_position(struct tree_balance *tb, int h)
int is_reusable(struct super_block *s, b_blocknr_t block, int bit_value);
static void check_internal_node(struct super_block *s, struct buffer_head *bh,
char *mes)
static int locked_or_not_in_tree(struct tree_balance *tb,
struct buffer_head *bh, char *which)
static int check_before_balancing(struct tree_balance *tb)
static void check_after_balance_leaf(struct tree_balance *tb)
static void check_leaf_level(struct tree_balance *tb)
static void check_internal_levels(struct tree_balance *tb)
static inline void do_balance_starts(struct tree_balance *tb)
static inline void do_balance_completed(struct tree_balance *tb)
void do_balance(struct tree_balance *tb,
struct item_head *ih,
const char *body,
int flag)
