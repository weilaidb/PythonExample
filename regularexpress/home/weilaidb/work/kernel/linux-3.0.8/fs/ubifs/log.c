static int dbg_check_bud_bytes(struct ubifs_info *c);
#define dbg_check_bud_bytes(c) 0
struct ubifs_bud *ubifs_search_bud(struct ubifs_info *c, int lnum)
struct ubifs_wbuf *ubifs_get_wbuf(struct ubifs_info *c, int lnum)
static inline long long empty_log_bytes(const struct ubifs_info *c)
void ubifs_add_bud(struct ubifs_info *c, struct ubifs_bud *bud)
int ubifs_add_bud_to_log(struct ubifs_info *c, int jhead, int lnum, int offs)
static void remove_buds(struct ubifs_info *c)
int ubifs_log_start_commit(struct ubifs_info *c, int *ltail_lnum)
int ubifs_log_end_commit(struct ubifs_info *c, int ltail_lnum)
int ubifs_log_post_commit(struct ubifs_info *c, int old_ltail_lnum)
struct done_ref ;
static int done_already(struct rb_root *done_tree, int lnum)
static void destroy_done_tree(struct rb_root *done_tree)
static int add_node(struct ubifs_info *c, void *buf, int *lnum, int *offs,
void *node)
int ubifs_consolidate_log(struct ubifs_info *c)
static int dbg_check_bud_bytes(struct ubifs_info *c)
