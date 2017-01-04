#define SOFT_LEBS_LIMIT 4
#define HARD_LEBS_LIMIT 32
static int switch_gc_head(struct ubifs_info *c)
static int data_nodes_cmp(void *priv, struct list_head *a, struct list_head *b)
static int nondata_nodes_cmp(void *priv, struct list_head *a,
struct list_head *b)
static int sort_nodes(struct ubifs_info *c, struct ubifs_scan_leb *sleb,
struct list_head *nondata, int *min)
static int move_node(struct ubifs_info *c, struct ubifs_scan_leb *sleb,
struct ubifs_scan_node *snod, struct ubifs_wbuf *wbuf)
static int move_nodes(struct ubifs_info *c, struct ubifs_scan_leb *sleb)
static int gc_sync_wbufs(struct ubifs_info *c)
int ubifs_garbage_collect_leb(struct ubifs_info *c, struct ubifs_lprops *lp)
int ubifs_garbage_collect(struct ubifs_info *c, int anyway)
int ubifs_gc_start_commit(struct ubifs_info *c)
int ubifs_gc_end_commit(struct ubifs_info *c)
void ubifs_destroy_idx_gc(struct ubifs_info *c)
int ubifs_get_idx_gc_leb(struct ubifs_info *c)
