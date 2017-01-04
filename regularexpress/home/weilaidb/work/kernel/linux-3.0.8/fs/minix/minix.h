#define FS_MINIX_H
#define INODE_VERSION(inode)	minix_sb(inode->i_sb)->s_version
#define MINIX_V1		0x0001
#define MINIX_V2		0x0002
#define MINIX_V3		0x0003
struct minix_inode_info ;
struct minix_sb_info ;
extern struct inode *minix_iget(struct super_block *, unsigned long);
extern struct minix_inode * minix_V1_raw_inode(struct super_block *, ino_t, struct buffer_head **);
extern struct minix2_inode * minix_V2_raw_inode(struct super_block *, ino_t, struct buffer_head **);
extern struct inode * minix_new_inode(const struct inode *, int, int *);
extern void minix_free_inode(struct inode * inode);
extern unsigned long minix_count_free_inodes(struct minix_sb_info *sbi);
extern int minix_new_block(struct inode * inode);
extern void minix_free_block(struct inode *inode, unsigned long block);
extern unsigned long minix_count_free_blocks(struct minix_sb_info *sbi);
extern int minix_getattr(struct vfsmount *, struct dentry *, struct kstat *);
extern int minix_prepare_chunk(struct page *page, loff_t pos, unsigned len);
extern void V1_minix_truncate(struct inode *);
extern void V2_minix_truncate(struct inode *);
extern void minix_truncate(struct inode *);
extern void minix_set_inode(struct inode *, dev_t);
extern int V1_minix_get_block(struct inode *, long, struct buffer_head *, int);
extern int V2_minix_get_block(struct inode *, long, struct buffer_head *, int);
extern unsigned V1_minix_blocks(loff_t, struct super_block *);
extern unsigned V2_minix_blocks(loff_t, struct super_block *);
extern struct minix_dir_entry *minix_find_entry(struct dentry*, struct page**);
extern int minix_add_link(struct dentry*, struct inode*);
extern int minix_delete_entry(struct minix_dir_entry*, struct page*);
extern int minix_make_empty(struct inode*, struct inode*);
extern int minix_empty_dir(struct inode*);
extern void minix_set_link(struct minix_dir_entry*, struct page*, struct inode*);
extern struct minix_dir_entry *minix_dotdot(struct inode*, struct page**);
extern ino_t minix_inode_by_name(struct dentry*);
extern const struct inode_operations minix_file_inode_operations;
extern const struct inode_operations minix_dir_inode_operations;
extern const struct file_operations minix_file_operations;
extern const struct file_operations minix_dir_operations;
static inline struct minix_sb_info *minix_sb(struct super_block *sb)
static inline struct minix_inode_info *minix_i(struct inode *inode)
#if defined(CONFIG_MINIX_FS_NATIVE_ENDIAN) && \
defined(CONFIG_MINIX_FS_BIG_ENDIAN_16BIT_INDEXED)
#error Minix file system byte order broken
#elif defined(CONFIG_MINIX_FS_NATIVE_ENDIAN)
#define minix_test_and_set_bit(nr, addr)	\
__test_and_set_bit((nr), (unsigned long *)(addr))
#define minix_set_bit(nr, addr)		\
__set_bit((nr), (unsigned long *)(addr))
#define minix_test_and_clear_bit(nr, addr) \
__test_and_clear_bit((nr), (unsigned long *)(addr))
#define minix_test_bit(nr, addr)		\
test_bit((nr), (unsigned long *)(addr))
#define minix_find_first_zero_bit(addr, size) \
find_first_zero_bit((unsigned long *)(addr), (size))
#elif defined(CONFIG_MINIX_FS_BIG_ENDIAN_16BIT_INDEXED)
static inline int minix_find_first_zero_bit(const void *vaddr, unsigned size)
#define minix_test_and_set_bit(nr, addr)	\
__test_and_set_bit((nr) ^ 16, (unsigned long *)(addr))
#define minix_set_bit(nr, addr)	\
__set_bit((nr) ^ 16, (unsigned long *)(addr))
#define minix_test_and_clear_bit(nr, addr)	\
__test_and_clear_bit((nr) ^ 16, (unsigned long *)(addr))
static inline int minix_test_bit(int nr, const void *vaddr)
#define minix_test_and_set_bit	__test_and_set_bit_le
#define minix_set_bit		__set_bit_le
#define minix_test_and_clear_bit	__test_and_clear_bit_le
#define minix_test_bit	test_bit_le
#define minix_find_first_zero_bit	find_first_zero_bit_le
