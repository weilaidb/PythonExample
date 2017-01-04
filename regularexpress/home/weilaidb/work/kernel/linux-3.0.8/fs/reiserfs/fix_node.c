static inline int old_item_num(int new_num, int affected_item_num, int mode)
static void create_virtual_node(struct tree_balance *tb, int h)
static void check_left(struct tree_balance *tb, int h, int cur_free)
static void check_right(struct tree_balance *tb, int h, int cur_free)
static int get_num_ver(int mode, struct tree_balance *tb, int h,
int from, int from_bytes,
int to, int to_bytes, short *snum012, int flow)
static void set_parameters(struct tree_balance *tb, int h, int lnum,
int rnum, int blk_num, short *s012, int lb, int rb)
static int is_leaf_removable(struct tree_balance *tb)
static int are_leaves_removable(struct tree_balance *tb, int lfree, int rfree)
#define SET_PAR_SHIFT_LEFT \
if (h)\
\
else \
#define SET_PAR_SHIFT_RIGHT \
if (h)\
\
else \
static void free_buffers_in_tb(struct tree_balance *tb)
static int get_empty_nodes(struct tree_balance *tb, int h)
static int get_lfree(struct tree_balance *tb, int h)
static int get_rfree(struct tree_balance *tb, int h)
static int is_left_neighbor_in_cache(struct tree_balance *tb, int h)
#define LEFT_PARENTS  'l'
#define RIGHT_PARENTS 'r'
static void decrement_key(struct cpu_key *key)
static int get_far_parent(struct tree_balance *tb,
int h,
struct buffer_head **pfather,
struct buffer_head **pcom_father, char c_lr_par)
static int get_parents(struct tree_balance *tb, int h)
static inline int can_node_be_removed(int mode, int lfree, int sfree, int rfree,
struct tree_balance *tb, int h)
static int ip_check_balance(struct tree_balance *tb, int h)
static int dc_check_balance_internal(struct tree_balance *tb, int h)
static int dc_check_balance_leaf(struct tree_balance *tb, int h)
static int dc_check_balance(struct tree_balance *tb, int h)
static int check_balance(int mode,
struct tree_balance *tb,
int h,
int inum,
int pos_in_item,
struct item_head *ins_ih, const void *data)
static int get_direct_parent(struct tree_balance *tb, int h)
static int get_neighbors(struct tree_balance *tb, int h)
static int get_virtual_node_size(struct super_block *sb, struct buffer_head *bh)
static int get_mem_for_virtual_node(struct tree_balance *tb)
static void tb_buffer_sanity_check(struct super_block *sb,
struct buffer_head *bh,
const char *descr, int level)
static void tb_buffer_sanity_check(struct super_block *sb,
struct buffer_head *bh,
const char *descr, int level)
static int clear_all_dirty_bits(struct super_block *s, struct buffer_head *bh)
static int wait_tb_buffers_until_unlocked(struct tree_balance *tb)
int fix_nodes(int op_mode, struct tree_balance *tb,
struct item_head *ins_ih, const void *data)
void unfix_nodes(struct tree_balance *tb)
