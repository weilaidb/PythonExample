#define _NILFS_SEGMENT_H
struct nilfs_root;
struct nilfs_recovery_info ;
#define NILFS_RECOVERY_SR_UPDATED	 1
#define NILFS_RECOVERY_ROLLFORWARD_DONE	 2
struct nilfs_cstage ;
struct nilfs_segment_buffer;
struct nilfs_segsum_pointer ;
struct nilfs_sc_info ;
enum ;
#define NILFS_SEGCTOR_QUIT	    0x0001
#define NILFS_SEGCTOR_COMMIT	    0x0004
#define NILFS_SC_CLEANUP_RETRY	    3
#define NILFS_SC_DEFAULT_TIMEOUT    5
#define NILFS_SC_DEFAULT_SR_FREQ    30
#define NILFS_SC_DEFAULT_WATERMARK  3600
extern struct kmem_cache *nilfs_transaction_cachep;
extern void nilfs_relax_pressure_in_lock(struct super_block *);
extern int nilfs_construct_segment(struct super_block *);
extern int nilfs_construct_dsync_segment(struct super_block *, struct inode *,
loff_t, loff_t);
extern void nilfs_flush_segment(struct super_block *, ino_t);
extern int nilfs_clean_segments(struct super_block *, struct nilfs_argv *,
void **);
int nilfs_attach_log_writer(struct super_block *sb, struct nilfs_root *root);
void nilfs_detach_log_writer(struct super_block *sb);
extern int nilfs_read_super_root_block(struct the_nilfs *, sector_t,
struct buffer_head **, int);
extern int nilfs_search_super_root(struct the_nilfs *,
struct nilfs_recovery_info *);
int nilfs_salvage_orphan_logs(struct the_nilfs *nilfs, struct super_block *sb,
struct nilfs_recovery_info *ri);
extern void nilfs_dispose_segment_list(struct list_head *);
