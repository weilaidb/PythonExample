#define EXT2_ACL_VERSION	0x0001
typedef struct  ext2_acl_entry;
typedef struct  ext2_acl_entry_short;
typedef struct  ext2_acl_header;
static inline size_t ext2_acl_size(int count)
static inline int ext2_acl_count(size_t size)
extern int ext2_check_acl (struct inode *, int, unsigned int);
extern int ext2_acl_chmod (struct inode *);
extern int ext2_init_acl (struct inode *, struct inode *);
#define ext2_check_acl	NULL
#define ext2_get_acl	NULL
#define ext2_set_acl	NULL
static inline int
ext2_acl_chmod (struct inode *inode)
static inline int ext2_init_acl (struct inode *inode, struct inode *dir)
