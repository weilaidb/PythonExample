void
__jffs2_dbg_acct_sanity_check_nolock(struct jffs2_sb_info *c,
struct jffs2_eraseblock *jeb)
void
__jffs2_dbg_acct_sanity_check(struct jffs2_sb_info *c,
struct jffs2_eraseblock *jeb)
void
__jffs2_dbg_fragtree_paranoia_check(struct jffs2_inode_info *f)
void
__jffs2_dbg_fragtree_paranoia_check_nolock(struct jffs2_inode_info *f)
void
__jffs2_dbg_prewrite_paranoia_check(struct jffs2_sb_info *c,
uint32_t ofs, int len)
void __jffs2_dbg_superblock_counts(struct jffs2_sb_info *c)
void
__jffs2_dbg_acct_paranoia_check(struct jffs2_sb_info *c,
struct jffs2_eraseblock *jeb)
void
__jffs2_dbg_acct_paranoia_check_nolock(struct jffs2_sb_info *c,
struct jffs2_eraseblock *jeb)
#if defined(JFFS2_DBG_DUMPS) || defined(JFFS2_DBG_PARANOIA_CHECKS)
void
__jffs2_dbg_dump_node_refs(struct jffs2_sb_info *c,
struct jffs2_eraseblock *jeb)
void
__jffs2_dbg_dump_node_refs_nolock(struct jffs2_sb_info *c,
struct jffs2_eraseblock *jeb)
void
__jffs2_dbg_dump_jeb(struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb)
void
__jffs2_dbg_dump_jeb_nolock(struct jffs2_eraseblock *jeb)
void
__jffs2_dbg_dump_block_lists(struct jffs2_sb_info *c)
void
__jffs2_dbg_dump_block_lists_nolock(struct jffs2_sb_info *c)
void
__jffs2_dbg_dump_fragtree(struct jffs2_inode_info *f)
void
__jffs2_dbg_dump_fragtree_nolock(struct jffs2_inode_info *f)
#define JFFS2_BUFDUMP_BYTES_PER_LINE	32
void
__jffs2_dbg_dump_buffer(unsigned char *buf, int len, uint32_t offs)
void
__jffs2_dbg_dump_node(struct jffs2_sb_info *c, uint32_t ofs)
