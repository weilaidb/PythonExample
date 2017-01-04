static void hfs_ext_build_key(hfs_btree_key *key, u32 cnid, u16 block, u8 type)
int hfs_ext_keycmp(const btree_key *key1, const btree_key *key2)
static u16 hfs_ext_find_block(struct hfs_extent *ext, u16 off)
static int hfs_ext_block_count(struct hfs_extent *ext)
static u16 hfs_ext_lastblock(struct hfs_extent *ext)
static void __hfs_ext_write_extent(struct inode *inode, struct hfs_find_data *fd)
void hfs_ext_write_extent(struct inode *inode)
static inline int __hfs_ext_read_extent(struct hfs_find_data *fd, struct hfs_extent *extent,
u32 cnid, u32 block, u8 type)
static inline int __hfs_ext_cache_extent(struct hfs_find_data *fd, struct inode *inode, u32 block)
static int hfs_ext_read_extent(struct inode *inode, u16 block)
static void hfs_dump_extent(struct hfs_extent *extent)
static int hfs_add_extent(struct hfs_extent *extent, u16 offset,
u16 alloc_block, u16 block_count)
static int hfs_free_extents(struct super_block *sb, struct hfs_extent *extent,
u16 offset, u16 block_nr)
int hfs_free_fork(struct super_block *sb, struct hfs_cat_file *file, int type)
int hfs_get_block(struct inode *inode, sector_t block,
struct buffer_head *bh_result, int create)
int hfs_extend_file(struct inode *inode)
void hfs_file_truncate(struct inode *inode)
