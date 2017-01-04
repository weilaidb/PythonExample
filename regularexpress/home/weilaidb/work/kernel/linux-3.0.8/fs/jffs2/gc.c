static int jffs2_garbage_collect_pristine(struct jffs2_sb_info *c,
struct jffs2_inode_cache *ic,
struct jffs2_raw_node_ref *raw);
static int jffs2_garbage_collect_metadata(struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb,
struct jffs2_inode_info *f, struct jffs2_full_dnode *fd);
static int jffs2_garbage_collect_dirent(struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb,
struct jffs2_inode_info *f, struct jffs2_full_dirent *fd);
static int jffs2_garbage_collect_deletion_dirent(struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb,
struct jffs2_inode_info *f, struct jffs2_full_dirent *fd);
static int jffs2_garbage_collect_hole(struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb,
struct jffs2_inode_info *f, struct jffs2_full_dnode *fn,
uint32_t start, uint32_t end);
static int jffs2_garbage_collect_dnode(struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb,
struct jffs2_inode_info *f, struct jffs2_full_dnode *fn,
uint32_t start, uint32_t end);
static int jffs2_garbage_collect_live(struct jffs2_sb_info *c,  struct jffs2_eraseblock *jeb,
struct jffs2_raw_node_ref *raw, struct jffs2_inode_info *f);
static struct jffs2_eraseblock *jffs2_find_gc_block(struct jffs2_sb_info *c)
int jffs2_garbage_collect_pass(struct jffs2_sb_info *c)
static int jffs2_garbage_collect_live(struct jffs2_sb_info *c,  struct jffs2_eraseblock *jeb,
struct jffs2_raw_node_ref *raw, struct jffs2_inode_info *f)
static int jffs2_garbage_collect_pristine(struct jffs2_sb_info *c,
struct jffs2_inode_cache *ic,
struct jffs2_raw_node_ref *raw)
static int jffs2_garbage_collect_metadata(struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb,
struct jffs2_inode_info *f, struct jffs2_full_dnode *fn)
static int jffs2_garbage_collect_dirent(struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb,
struct jffs2_inode_info *f, struct jffs2_full_dirent *fd)
static int jffs2_garbage_collect_deletion_dirent(struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb,
struct jffs2_inode_info *f, struct jffs2_full_dirent *fd)
static int jffs2_garbage_collect_hole(struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb,
struct jffs2_inode_info *f, struct jffs2_full_dnode *fn,
uint32_t start, uint32_t end)
static int jffs2_garbage_collect_dnode(struct jffs2_sb_info *c, struct jffs2_eraseblock *orig_jeb,
struct jffs2_inode_info *f, struct jffs2_full_dnode *fn,
uint32_t start, uint32_t end)
