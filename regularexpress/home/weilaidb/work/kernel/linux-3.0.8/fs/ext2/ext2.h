struct ext2_mount_options ;
struct ext2_inode_info ;
#define EXT2_STATE_NEW			0x00000001
static inline struct ext2_inode_info *EXT2_I(struct inode *inode)
extern int ext2_bg_has_super(struct super_block *sb, int group);
extern unsigned long ext2_bg_num_gdb(struct super_block *sb, int group);
extern ext2_fsblk_t ext2_new_block(struct inode *, unsigned long, int *);
extern ext2_fsblk_t ext2_new_blocks(struct inode *, unsigned long,
unsigned long *, int *);
extern void ext2_free_blocks (struct inode *, unsigned long,
unsigned long);
extern unsigned long ext2_count_free_blocks (struct super_block *);
extern unsigned long ext2_count_dirs (struct super_block *);
extern void ext2_check_blocks_bitmap (struct super_block *);
extern struct ext2_group_desc * ext2_get_group_desc(struct super_block * sb,
unsigned int block_group,
struct buffer_head ** bh);
extern void ext2_discard_reservation (struct inode *);
extern int ext2_should_retry_alloc(struct super_block *sb, int *retries);
extern void ext2_init_block_alloc_info(struct inode *);
extern void ext2_rsv_window_add(struct super_block *sb, struct ext2_reserve_window_node *rsv);
extern int ext2_add_link (struct dentry *, struct inode *);
extern ino_t ext2_inode_by_name(struct inode *, struct qstr *);
extern int ext2_make_empty(struct inode *, struct inode *);
extern struct ext2_dir_entry_2 * ext2_find_entry (struct inode *,struct qstr *, struct page **);
extern int ext2_delete_entry (struct ext2_dir_entry_2 *, struct page *);
extern int ext2_empty_dir (struct inode *);
extern struct ext2_dir_entry_2 * ext2_dotdot (struct inode *, struct page **);
extern void ext2_set_link(struct inode *, struct ext2_dir_entry_2 *, struct page *, struct inode *, int);
extern struct inode * ext2_new_inode (struct inode *, int, const struct qstr *);
extern void ext2_free_inode (struct inode *);
extern unsigned long ext2_count_free_inodes (struct super_block *);
extern void ext2_check_inodes_bitmap (struct super_block *);
extern unsigned long ext2_count_free (struct buffer_head *, unsigned);
extern struct inode *ext2_iget (struct super_block *, unsigned long);
extern int ext2_write_inode (struct inode *, struct writeback_control *);
extern void ext2_evict_inode(struct inode *);
extern int ext2_get_block(struct inode *, sector_t, struct buffer_head *, int);
extern int ext2_setattr (struct dentry *, struct iattr *);
extern void ext2_set_inode_flags(struct inode *inode);
extern void ext2_get_inode_flags(struct ext2_inode_info *);
extern int ext2_fiemap(struct inode *inode, struct fiemap_extent_info *fieinfo,
u64 start, u64 len);
extern long ext2_ioctl(struct file *, unsigned int, unsigned long);
extern long ext2_compat_ioctl(struct file *, unsigned int, unsigned long);
struct dentry *ext2_get_parent(struct dentry *child);
extern void ext2_error (struct super_block *, const char *, const char *, ...)
__attribute__ ((format (printf, 3, 4)));
extern void ext2_msg(struct super_block *, const char *, const char *, ...)
__attribute__ ((format (printf, 3, 4)));
extern void ext2_update_dynamic_rev (struct super_block *sb);
extern void ext2_write_super (struct super_block *);
extern const struct file_operations ext2_dir_operations;
extern int ext2_fsync(struct file *file, int datasync);
extern const struct inode_operations ext2_file_inode_operations;
extern const struct file_operations ext2_file_operations;
extern const struct file_operations ext2_xip_file_operations;
extern const struct address_space_operations ext2_aops;
extern const struct address_space_operations ext2_aops_xip;
extern const struct address_space_operations ext2_nobh_aops;
extern const struct inode_operations ext2_dir_inode_operations;
extern const struct inode_operations ext2_special_inode_operations;
extern const struct inode_operations ext2_fast_symlink_inode_operations;
extern const struct inode_operations ext2_symlink_inode_operations;
static inline ext2_fsblk_t
ext2_group_first_block_no(struct super_block *sb, unsigned long group_no)
#define ext2_set_bit	__test_and_set_bit_le
#define ext2_clear_bit	__test_and_clear_bit_le
#define ext2_test_bit	test_bit_le
#define ext2_find_first_zero_bit	find_first_zero_bit_le
#define ext2_find_next_zero_bit		find_next_zero_bit_le
