#define ERRBUFSIZE 1024
void
befs_error(const struct super_block *sb, const char *fmt, ...)
void
befs_warning(const struct super_block *sb, const char *fmt, ...)
void
befs_debug(const struct super_block *sb, const char *fmt, ...)
void
befs_dump_inode(const struct super_block *sb, befs_inode * inode)
void
befs_dump_super_block(const struct super_block *sb, befs_super_block * sup)
}
void
befs_dump_index_entry(const struct super_block *sb, befs_disk_btree_super * super)
void
befs_dump_index_node(const struct super_block *sb, befs_btree_nodehead * node)
