static void leaf_copy_dir_entries(struct buffer_info *dest_bi,
struct buffer_head *source, int last_first,
int item_num, int from, int copy_count)
static int leaf_copy_boundary_item(struct buffer_info *dest_bi,
struct buffer_head *src, int last_first,
int bytes_or_entries)
static void leaf_copy_items_entirely(struct buffer_info *dest_bi,
struct buffer_head *src, int last_first,
int first, int cpy_num)
static void leaf_item_bottle(struct buffer_info *dest_bi,
struct buffer_head *src, int last_first,
int item_num, int cpy_bytes)
static int leaf_copy_items(struct buffer_info *dest_bi, struct buffer_head *src,
int last_first, int cpy_num, int cpy_bytes)
static void leaf_define_dest_src_infos(int shift_mode, struct tree_balance *tb,
struct buffer_info *dest_bi,
struct buffer_info *src_bi,
int *first_last,
struct buffer_head *Snew)
int leaf_move_items(int shift_mode, struct tree_balance *tb, int mov_num,
int mov_bytes, struct buffer_head *Snew)
int leaf_shift_left(struct tree_balance *tb, int shift_num, int shift_bytes)
int leaf_shift_right(struct tree_balance *tb, int shift_num, int shift_bytes)
static void leaf_delete_items_entirely(struct buffer_info *bi,
int first, int del_num);
void leaf_delete_items(struct buffer_info *cur_bi, int last_first,
int first, int del_num, int del_bytes)
void leaf_insert_into_buf(struct buffer_info *bi, int before,
struct item_head *inserted_item_ih,
const char *inserted_item_body, int zeros_number)
void leaf_paste_in_buffer(struct buffer_info *bi, int affected_item_num,
int pos_in_item, int paste_size,
const char *body, int zeros_number)
static int leaf_cut_entries(struct buffer_head *bh,
struct item_head *ih, int from, int del_count)
void leaf_cut_from_buffer(struct buffer_info *bi, int cut_item_num,
int pos_in_item, int cut_size)
static void leaf_delete_items_entirely(struct buffer_info *bi,
int first, int del_num)
void leaf_paste_entries(struct buffer_info *bi,
int item_num,
int before,
int new_entry_count,
struct reiserfs_de_head *new_dehs,
const char *records, int paste_size)
