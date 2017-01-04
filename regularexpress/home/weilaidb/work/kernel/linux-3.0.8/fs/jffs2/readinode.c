static int check_node_data(struct jffs2_sb_info *c, struct jffs2_tmp_dnode_info *tn)
static int check_tn_node(struct jffs2_sb_info *c, struct jffs2_tmp_dnode_info *tn)
static struct jffs2_tmp_dnode_info *jffs2_lookup_tn(struct rb_root *tn_root, uint32_t offset)
static void jffs2_kill_tn(struct jffs2_sb_info *c, struct jffs2_tmp_dnode_info *tn)
static int jffs2_add_tn_to_tree(struct jffs2_sb_info *c,
struct jffs2_readinode_info *rii,
struct jffs2_tmp_dnode_info *tn)
static void eat_last(struct rb_root *root, struct rb_node *node)
static void ver_insert(struct rb_root *ver_root, struct jffs2_tmp_dnode_info *tn)
static int jffs2_build_inode_fragtree(struct jffs2_sb_info *c,
struct jffs2_inode_info *f,
struct jffs2_readinode_info *rii)
static void jffs2_free_tmp_dnode_info_list(struct rb_root *list)
static void jffs2_free_full_dirent_list(struct jffs2_full_dirent *fd)
static struct jffs2_raw_node_ref *jffs2_first_valid_node(struct jffs2_raw_node_ref *ref)
static inline int read_direntry(struct jffs2_sb_info *c, struct jffs2_raw_node_ref *ref,
struct jffs2_raw_dirent *rd, size_t read,
struct jffs2_readinode_info *rii)
static inline int read_dnode(struct jffs2_sb_info *c, struct jffs2_raw_node_ref *ref,
struct jffs2_raw_inode *rd, int rdlen,
struct jffs2_readinode_info *rii)
static inline int read_unknown(struct jffs2_sb_info *c, struct jffs2_raw_node_ref *ref, struct jffs2_unknown_node *un)
static int read_more(struct jffs2_sb_info *c, struct jffs2_raw_node_ref *ref,
int needed_len, int *rdlen, unsigned char *buf)
static int jffs2_get_inode_nodes(struct jffs2_sb_info *c, struct jffs2_inode_info *f,
struct jffs2_readinode_info *rii)
static int jffs2_do_read_inode_internal(struct jffs2_sb_info *c,
struct jffs2_inode_info *f,
struct jffs2_raw_inode *latest_node)
int jffs2_do_read_inode(struct jffs2_sb_info *c, struct jffs2_inode_info *f,
uint32_t ino, struct jffs2_raw_inode *latest_node)
int jffs2_do_crccheck_inode(struct jffs2_sb_info *c, struct jffs2_inode_cache *ic)
void jffs2_do_clear_inode(struct jffs2_sb_info *c, struct jffs2_inode_info *f)
