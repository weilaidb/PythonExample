#define EXT4_ACL_VERSION	0x0001
typedef struct  ext4_acl_entry;
typedef struct  ext4_acl_entry_short;
typedef struct  ext4_acl_header;
static inline size_t ext4_acl_size(int count)
static inline int ext4_acl_count(size_t size)
extern int ext4_check_acl(struct inode *, int, unsigned int);
extern int ext4_acl_chmod(struct inode *);
extern int ext4_init_acl(handle_t *, struct inode *, struct inode *);
#define ext4_check_acl NULL
static inline int
ext4_acl_chmod(struct inode *inode)
static inline int
ext4_init_acl(handle_t *handle, struct inode *inode, struct inode *dir)
