#define EXT3_ACL_VERSION	0x0001
typedef struct  ext3_acl_entry;
typedef struct  ext3_acl_entry_short;
typedef struct  ext3_acl_header;
static inline size_t ext3_acl_size(int count)
static inline int ext3_acl_count(size_t size)
extern int ext3_check_acl (struct inode *, int, unsigned int);
extern int ext3_acl_chmod (struct inode *);
extern int ext3_init_acl (handle_t *, struct inode *, struct inode *);
#define ext3_check_acl NULL
static inline int
ext3_acl_chmod(struct inode *inode)
static inline int
ext3_init_acl(handle_t *handle, struct inode *inode, struct inode *dir)
