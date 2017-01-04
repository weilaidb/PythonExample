int balance_internal(struct tree_balance *,
int, int, struct item_head *, struct buffer_head **);
#define INTERNAL_SHIFT_FROM_S_TO_L 0
#define INTERNAL_SHIFT_FROM_R_TO_S 1
#define INTERNAL_SHIFT_FROM_L_TO_S 2
#define INTERNAL_SHIFT_FROM_S_TO_R 3
#define INTERNAL_INSERT_TO_S 4
#define INTERNAL_INSERT_TO_L 5
#define INTERNAL_INSERT_TO_R 6
static void internal_define_dest_src_infos(int shift_mode,
struct tree_balance *tb,
int h,
struct buffer_info *dest_bi,
struct buffer_info *src_bi,
int *d_key, struct buffer_head **cf)
static void internal_insert_childs(struct buffer_info *cur_bi,
int to, int count,
struct item_head *inserted,
struct buffer_head **bh)
static void internal_delete_pointers_items(struct buffer_info *cur_bi,
int first_p,
int first_i, int del_num)
static void internal_delete_childs(struct buffer_info *cur_bi, int from, int n)
static void internal_copy_pointers_items(struct buffer_info *dest_bi,
struct buffer_head *src,
int last_first, int cpy_num)
static void internal_move_pointers_items(struct buffer_info *dest_bi,
struct buffer_info *src_bi,
int last_first, int cpy_num,
int del_par)
static void internal_insert_key(struct buffer_info *dest_bi, int dest_position_before,
struct buffer_head *src, int src_position)
static void internal_shift_left(int mode,
struct tree_balance *tb,
int h, int pointer_amount)
static void internal_shift1_left(struct tree_balance *tb,
int h, int pointer_amount)
static void internal_shift_right(int mode,
struct tree_balance *tb,
int h, int pointer_amount)
static void internal_shift1_right(struct tree_balance *tb,
int h, int pointer_amount)
static void balance_internal_when_delete(struct tree_balance *tb,
int h, int child_pos)
static void replace_lkey(struct tree_balance *tb, int h, struct item_head *key)
static void replace_rkey(struct tree_balance *tb, int h, struct item_head *key)
int balance_internal(struct tree_balance *tb,
int h,
int child_pos, struct item_head *insert_key,
struct buffer_head **insert_ptr
)
