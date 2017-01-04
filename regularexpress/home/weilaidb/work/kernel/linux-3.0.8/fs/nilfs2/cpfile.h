#define _NILFS_CPFILE_H
int nilfs_cpfile_get_checkpoint(struct inode *, __u64, int,
struct nilfs_checkpoint **,
struct buffer_head **);
void nilfs_cpfile_put_checkpoint(struct inode *, __u64, struct buffer_head *);
int nilfs_cpfile_delete_checkpoints(struct inode *, __u64, __u64);
int nilfs_cpfile_delete_checkpoint(struct inode *, __u64);
int nilfs_cpfile_change_cpmode(struct inode *, __u64, int);
int nilfs_cpfile_is_snapshot(struct inode *, __u64);
int nilfs_cpfile_get_stat(struct inode *, struct nilfs_cpstat *);
ssize_t nilfs_cpfile_get_cpinfo(struct inode *, __u64 *, int, void *, unsigned,
size_t);
int nilfs_cpfile_read(struct super_block *sb, size_t cpsize,
struct nilfs_inode *raw_inode, struct inode **inodep);
