int hfsplus_ext_cmp_key(const hfsplus_btree_key *k1,
const hfsplus_btree_key *k2)
static void hfsplus_ext_build_key(hfsplus_btree_key *key, u32 cnid,
u32 block, u8 type)
static u32 hfsplus_ext_find_block(struct hfsplus_extent *ext, u32 off)
static int hfsplus_ext_block_count(struct hfsplus_extent *ext)
static u32 hfsplus_ext_lastblock(struct hfsplus_extent *ext)
static void __hfsplus_ext_write_extent(struct inode *inode,
struct hfs_find_data *fd)
static void hfsplus_ext_write_extent_locked(struct inode *inode)
void hfsplus_ext_write_extent(struct inode *inode)
static inline int __hfsplus_ext_read_extent(struct hfs_find_data *fd,
struct hfsplus_extent *extent,
u32 cnid, u32 block, u8 type)
static inline int __hfsplus_ext_cache_extent(struct hfs_find_data *fd,
struct inode *inode, u32 block)
static int hfsplus_ext_read_extent(struct inode *inode, u32 block)
int hfsplus_get_block(struct inode *inode, sector_t iblock,
struct buffer_head *bh_result, int create)
static void hfsplus_dump_extent(struct hfsplus_extent *extent)
static int hfsplus_add_extent(struct hfsplus_extent *extent, u32 offset,
u32 alloc_block, u32 block_count)
static int hfsplus_free_extents(struct super_block *sb,
struct hfsplus_extent *extent,
u32 offset, u32 block_nr)
int hfsplus_free_fork(struct super_block *sb, u32 cnid,
struct hfsplus_fork_raw *fork, int type)
int hfsplus_file_extend(struct inode *inode)
void hfsplus_file_truncate(struct inode *inode)
