int jffs2_sum_init(struct jffs2_sb_info *c)
void jffs2_sum_exit(struct jffs2_sb_info *c)
static int jffs2_sum_add_mem(struct jffs2_summary *s, union jffs2_sum_mem *item)
int jffs2_sum_add_padding_mem(struct jffs2_summary *s, uint32_t size)
int jffs2_sum_add_inode_mem(struct jffs2_summary *s, struct jffs2_raw_inode *ri,
uint32_t ofs)
int jffs2_sum_add_dirent_mem(struct jffs2_summary *s, struct jffs2_raw_dirent *rd,
uint32_t ofs)
int jffs2_sum_add_xattr_mem(struct jffs2_summary *s, struct jffs2_raw_xattr *rx, uint32_t ofs)
int jffs2_sum_add_xref_mem(struct jffs2_summary *s, struct jffs2_raw_xref *rr, uint32_t ofs)
static void jffs2_sum_clean_collected(struct jffs2_summary *s)
void jffs2_sum_reset_collected(struct jffs2_summary *s)
void jffs2_sum_disable_collecting(struct jffs2_summary *s)
int jffs2_sum_is_disabled(struct jffs2_summary *s)
void jffs2_sum_move_collected(struct jffs2_sb_info *c, struct jffs2_summary *s)
int jffs2_sum_add_kvec(struct jffs2_sb_info *c, const struct kvec *invecs,
unsigned long count, uint32_t ofs)
static struct jffs2_raw_node_ref *sum_link_node_ref(struct jffs2_sb_info *c,
struct jffs2_eraseblock *jeb,
uint32_t ofs, uint32_t len,
struct jffs2_inode_cache *ic)
static int jffs2_sum_process_sum_data(struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb,
struct jffs2_raw_summary *summary, uint32_t *pseudo_random)
return 0;
}
int jffs2_sum_scan_sumnode(struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb,
struct jffs2_raw_summary *summary, uint32_t sumsize,
uint32_t *pseudo_random)
static int jffs2_sum_write_data(struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb,
uint32_t infosize, uint32_t datasize, int padsize)
int jffs2_sum_write_sumnode(struct jffs2_sb_info *c)
