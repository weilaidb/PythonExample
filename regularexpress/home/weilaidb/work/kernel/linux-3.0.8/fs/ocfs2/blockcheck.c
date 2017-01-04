static unsigned int calc_code_bit(unsigned int i, unsigned int *p_cache)
u32 ocfs2_hamming_encode(u32 parity, void *data, unsigned int d, unsigned int nr)
u32 ocfs2_hamming_encode_block(void *data, unsigned int blocksize)
void ocfs2_hamming_fix(void *data, unsigned int d, unsigned int nr,
unsigned int fix)
void ocfs2_hamming_fix_block(void *data, unsigned int blocksize,
unsigned int fix)
static int blockcheck_u64_get(void *data, u64 *val)
DEFINE_SIMPLE_ATTRIBUTE(blockcheck_fops, blockcheck_u64_get, NULL, "%llu\n");
static struct dentry *blockcheck_debugfs_create(const char *name,
struct dentry *parent,
u64 *value)
static void ocfs2_blockcheck_debug_remove(struct ocfs2_blockcheck_stats *stats)
static int ocfs2_blockcheck_debug_install(struct ocfs2_blockcheck_stats *stats,
struct dentry *parent)
static inline int ocfs2_blockcheck_debug_install(struct ocfs2_blockcheck_stats *stats,
struct dentry *parent)
static inline void ocfs2_blockcheck_debug_remove(struct ocfs2_blockcheck_stats *stats)
int ocfs2_blockcheck_stats_debugfs_install(struct ocfs2_blockcheck_stats *stats,
struct dentry *parent)
void ocfs2_blockcheck_stats_debugfs_remove(struct ocfs2_blockcheck_stats *stats)
static void ocfs2_blockcheck_inc_check(struct ocfs2_blockcheck_stats *stats)
static void ocfs2_blockcheck_inc_failure(struct ocfs2_blockcheck_stats *stats)
static void ocfs2_blockcheck_inc_recover(struct ocfs2_blockcheck_stats *stats)
void ocfs2_block_check_compute(void *data, size_t blocksize,
struct ocfs2_block_check *bc)
int ocfs2_block_check_validate(void *data, size_t blocksize,
struct ocfs2_block_check *bc,
struct ocfs2_blockcheck_stats *stats)
void ocfs2_block_check_compute_bhs(struct buffer_head **bhs, int nr,
struct ocfs2_block_check *bc)
int ocfs2_block_check_validate_bhs(struct buffer_head **bhs, int nr,
struct ocfs2_block_check *bc,
struct ocfs2_blockcheck_stats *stats)
void ocfs2_compute_meta_ecc(struct super_block *sb, void *data,
struct ocfs2_block_check *bc)
int ocfs2_validate_meta_ecc(struct super_block *sb, void *data,
struct ocfs2_block_check *bc)
void ocfs2_compute_meta_ecc_bhs(struct super_block *sb,
struct buffer_head **bhs, int nr,
struct ocfs2_block_check *bc)
int ocfs2_validate_meta_ecc_bhs(struct super_block *sb,
struct buffer_head **bhs, int nr,
struct ocfs2_block_check *bc)
