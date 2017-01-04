static int is_empty(void *buf, int len)
static int first_non_ff(void *buf, int len)
static int get_master_node(const struct ubifs_info *c, int lnum, void **pbuf,
struct ubifs_mst_node **mst, void **cor)
static int write_rcvrd_mst_node(struct ubifs_info *c,
struct ubifs_mst_node *mst)
int ubifs_recover_master_node(struct ubifs_info *c)
int ubifs_write_rcvrd_mst_node(struct ubifs_info *c)
static int is_last_write(const struct ubifs_info *c, void *buf, int offs)
static void clean_buf(const struct ubifs_info *c, void **buf, int lnum,
int *offs, int *len)
static int no_more_nodes(const struct ubifs_info *c, void *buf, int len,
int lnum, int offs)
static int fix_unclean_leb(struct ubifs_info *c, struct ubifs_scan_leb *sleb,
int start)
static void drop_last_group(struct ubifs_scan_leb *sleb, int *offs)
static void drop_last_node(struct ubifs_scan_leb *sleb, int *offs)
struct ubifs_scan_leb *ubifs_recover_leb(struct ubifs_info *c, int lnum,
int offs, void *sbuf, int jhead)
static int get_cs_sqnum(struct ubifs_info *c, int lnum, int offs,
unsigned long long *cs_sqnum)
struct ubifs_scan_leb *ubifs_recover_log_leb(struct ubifs_info *c, int lnum,
int offs, void *sbuf)
static int recover_head(const struct ubifs_info *c, int lnum, int offs,
void *sbuf)
int ubifs_recover_inl_heads(const struct ubifs_info *c, void *sbuf)
static int clean_an_unclean_leb(const struct ubifs_info *c,
struct ubifs_unclean_leb *ucleb, void *sbuf)
int ubifs_clean_lebs(const struct ubifs_info *c, void *sbuf)
static int grab_empty_leb(struct ubifs_info *c)
int ubifs_rcvry_gc_commit(struct ubifs_info *c)
struct size_entry ;
static int add_ino(struct ubifs_info *c, ino_t inum, loff_t i_size,
loff_t d_size, int exists)
static struct size_entry *find_ino(struct ubifs_info *c, ino_t inum)
static void remove_ino(struct ubifs_info *c, ino_t inum)
void ubifs_destroy_size_tree(struct ubifs_info *c)
int ubifs_recover_size_accum(struct ubifs_info *c, union ubifs_key *key,
int deletion, loff_t new_size)
static int fix_size_in_place(struct ubifs_info *c, struct size_entry *e)
int ubifs_recover_size(struct ubifs_info *c)
