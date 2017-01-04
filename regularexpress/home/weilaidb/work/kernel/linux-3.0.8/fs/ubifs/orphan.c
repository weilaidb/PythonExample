static int dbg_check_orphans(struct ubifs_info *c);
#define dbg_check_orphans(c) 0
int ubifs_add_orphan(struct ubifs_info *c, ino_t inum)
void ubifs_delete_orphan(struct ubifs_info *c, ino_t inum)
int ubifs_orphan_start_commit(struct ubifs_info *c)
static int avail_orphs(struct ubifs_info *c)
static int tot_avail_orphs(struct ubifs_info *c)
static int do_write_orph_node(struct ubifs_info *c, int len, int atomic)
static int write_orph_node(struct ubifs_info *c, int atomic)
static int write_orph_nodes(struct ubifs_info *c, int atomic)
static int consolidate(struct ubifs_info *c)
static int commit_orphans(struct ubifs_info *c)
static void erase_deleted(struct ubifs_info *c)
int ubifs_orphan_end_commit(struct ubifs_info *c)
int ubifs_clear_orphans(struct ubifs_info *c)
static int insert_dead_orphan(struct ubifs_info *c, ino_t inum)
static int do_kill_orphans(struct ubifs_info *c, struct ubifs_scan_leb *sleb,
unsigned long long *last_cmt_no, int *outofdate,
int *last_flagged)
static int kill_orphans(struct ubifs_info *c)
int ubifs_mount_orphans(struct ubifs_info *c, int unclean, int read_only)
struct check_orphan ;
struct check_info ;
static int dbg_find_orphan(struct ubifs_info *c, ino_t inum)
static int dbg_ins_check_orphan(struct rb_root *root, ino_t inum)
static int dbg_find_check_orphan(struct rb_root *root, ino_t inum)
static void dbg_free_check_tree(struct rb_root *root)
static int dbg_orphan_check(struct ubifs_info *c, struct ubifs_zbranch *zbr,
void *priv)
static int dbg_read_orphans(struct check_info *ci, struct ubifs_scan_leb *sleb)
static int dbg_scan_orphans(struct ubifs_info *c, struct check_info *ci)
static int dbg_check_orphans(struct ubifs_info *c)
