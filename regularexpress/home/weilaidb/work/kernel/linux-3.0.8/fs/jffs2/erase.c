struct erase_priv_struct ;
static void jffs2_erase_callback(struct erase_info *);
static void jffs2_erase_failed(struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb, uint32_t bad_offset);
static void jffs2_erase_succeeded(struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb);
static void jffs2_mark_erased_block(struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb);
static void jffs2_erase_block(struct jffs2_sb_info *c,
struct jffs2_eraseblock *jeb)
int jffs2_erase_pending_blocks(struct jffs2_sb_info *c, int count)
static void jffs2_erase_succeeded(struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb)
static void jffs2_erase_failed(struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb, uint32_t bad_offset)
static void jffs2_erase_callback(struct erase_info *instr)
static inline void jffs2_remove_node_refs_from_ino_list(struct jffs2_sb_info *c,
struct jffs2_raw_node_ref *ref, struct jffs2_eraseblock *jeb)
void jffs2_free_jeb_node_refs(struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb)
static int jffs2_block_check_erase(struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb, uint32_t *bad_offset)
static void jffs2_mark_erased_block(struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb)
