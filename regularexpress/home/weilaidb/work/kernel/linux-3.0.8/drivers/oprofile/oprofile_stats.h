#define OPROFILE_STATS_H
struct oprofile_stat_struct ;
extern struct oprofile_stat_struct oprofile_stats;
void oprofile_reset_stats(void);
struct super_block;
struct dentry;
void oprofile_create_stats_files(struct super_block *sb, struct dentry *root);
