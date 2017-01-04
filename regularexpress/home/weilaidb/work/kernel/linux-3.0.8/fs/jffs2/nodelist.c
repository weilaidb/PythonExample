static void jffs2_obsolete_node_frag(struct jffs2_sb_info *c,
struct jffs2_node_frag *this);
void jffs2_add_fd_to_list(struct jffs2_sb_info *c, struct jffs2_full_dirent *new, struct jffs2_full_dirent **list)
uint32_t jffs2_truncate_fragtree(struct jffs2_sb_info *c, struct rb_root *list, uint32_t size)
static void jffs2_obsolete_node_frag(struct jffs2_sb_info *c,
struct jffs2_node_frag *this)
static void jffs2_fragtree_insert(struct jffs2_node_frag *newfrag, struct jffs2_node_frag *base)
static struct jffs2_node_frag * new_fragment(struct jffs2_full_dnode *fn, uint32_t ofs, uint32_t size)
static int no_overlapping_node(struct jffs2_sb_info *c, struct rb_root *root,
struct jffs2_node_frag *newfrag,
struct jffs2_node_frag *this, uint32_t lastend)
static int jffs2_add_frag_to_fragtree(struct jffs2_sb_info *c, struct rb_root *root, struct jffs2_node_frag *newfrag)
int jffs2_add_full_dnode_to_inode(struct jffs2_sb_info *c, struct jffs2_inode_info *f, struct jffs2_full_dnode *fn)
void jffs2_set_inocache_state(struct jffs2_sb_info *c, struct jffs2_inode_cache *ic, int state)
struct jffs2_inode_cache *jffs2_get_ino_cache(struct jffs2_sb_info *c, uint32_t ino)
void jffs2_add_ino_cache (struct jffs2_sb_info *c, struct jffs2_inode_cache *new)
void jffs2_del_ino_cache(struct jffs2_sb_info *c, struct jffs2_inode_cache *old)
void jffs2_free_ino_caches(struct jffs2_sb_info *c)
void jffs2_free_raw_node_refs(struct jffs2_sb_info *c)
struct jffs2_node_frag *jffs2_lookup_node_frag(struct rb_root *fragtree, uint32_t offset)
void jffs2_kill_fragtree(struct rb_root *root, struct jffs2_sb_info *c)
struct jffs2_raw_node_ref *jffs2_link_node_ref(struct jffs2_sb_info *c,
struct jffs2_eraseblock *jeb,
uint32_t ofs, uint32_t len,
struct jffs2_inode_cache *ic)
int jffs2_scan_dirty_space(struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb,
uint32_t size)
static inline uint32_t __ref_totlen(struct jffs2_sb_info *c,
struct jffs2_eraseblock *jeb,
struct jffs2_raw_node_ref *ref)
uint32_t __jffs2_ref_totlen(struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb,
struct jffs2_raw_node_ref *ref)
