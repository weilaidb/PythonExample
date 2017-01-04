static int jffs2_do_reserve_space(struct jffs2_sb_info *c,  uint32_t minsize,
uint32_t *len, uint32_t sumsize);
int jffs2_reserve_space(struct jffs2_sb_info *c, uint32_t minsize,
uint32_t *len, int prio, uint32_t sumsize)
int jffs2_reserve_space_gc(struct jffs2_sb_info *c, uint32_t minsize,
uint32_t *len, uint32_t sumsize)
static void jffs2_close_nextblock(struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb)
static int jffs2_find_nextblock(struct jffs2_sb_info *c)
static int jffs2_do_reserve_space(struct jffs2_sb_info *c, uint32_t minsize,
uint32_t *len, uint32_t sumsize)
struct jffs2_raw_node_ref *jffs2_add_physical_node_ref(struct jffs2_sb_info *c,
uint32_t ofs, uint32_t len,
struct jffs2_inode_cache *ic)
void jffs2_complete_reservation(struct jffs2_sb_info *c)
static inline int on_list(struct list_head *obj, struct list_head *head)
void jffs2_mark_node_obsolete(struct jffs2_sb_info *c, struct jffs2_raw_node_ref *ref)
int jffs2_thread_should_wake(struct jffs2_sb_info *c)
