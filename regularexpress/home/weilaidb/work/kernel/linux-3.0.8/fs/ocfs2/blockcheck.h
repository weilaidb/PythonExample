#define OCFS2_BLOCKCHECK_H
struct ocfs2_blockcheck_stats ;
void ocfs2_compute_meta_ecc(struct super_block *sb, void *data,
struct ocfs2_block_check *bc);
int ocfs2_validate_meta_ecc(struct super_block *sb, void *data,
struct ocfs2_block_check *bc);
void ocfs2_compute_meta_ecc_bhs(struct super_block *sb,
struct buffer_head **bhs, int nr,
struct ocfs2_block_check *bc);
int ocfs2_validate_meta_ecc_bhs(struct super_block *sb,
struct buffer_head **bhs, int nr,
struct ocfs2_block_check *bc);
void ocfs2_block_check_compute(void *data, size_t blocksize,
struct ocfs2_block_check *bc);
int ocfs2_block_check_validate(void *data, size_t blocksize,
struct ocfs2_block_check *bc,
struct ocfs2_blockcheck_stats *stats);
void ocfs2_block_check_compute_bhs(struct buffer_head **bhs, int nr,
struct ocfs2_block_check *bc);
int ocfs2_block_check_validate_bhs(struct buffer_head **bhs, int nr,
struct ocfs2_block_check *bc,
struct ocfs2_blockcheck_stats *stats);
int ocfs2_blockcheck_stats_debugfs_install(struct ocfs2_blockcheck_stats *stats,
struct dentry *parent);
void ocfs2_blockcheck_stats_debugfs_remove(struct ocfs2_blockcheck_stats *stats);
u32 ocfs2_hamming_encode(u32 parity, void *data, unsigned int d,
unsigned int nr);
void ocfs2_hamming_fix(void *data, unsigned int d, unsigned int nr,
unsigned int fix);
extern u32 ocfs2_hamming_encode_block(void *data, unsigned int blocksize);
extern void ocfs2_hamming_fix_block(void *data, unsigned int blocksize,
unsigned int fix);
