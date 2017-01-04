#define _LINUX_NTFS_INODE_H
typedef struct _ntfs_inode ntfs_inode;
struct _ntfs_inode ;
typedef enum  ntfs_inode_state_bits;
#define NINO_FNS(flag)					\
static inline int NIno##flag(ntfs_inode *ni)		\
\
static inline void NInoSet##flag(ntfs_inode *ni)	\
\
static inline void NInoClear##flag(ntfs_inode *ni)	\
#define TAS_NINO_FNS(flag)					\
static inline int NInoTestSet##flag(ntfs_inode *ni)		\
\
static inline int NInoTestClear##flag(ntfs_inode *ni)		\
NINO_FNS(Dirty)
TAS_NINO_FNS(Dirty)
NINO_FNS(AttrList)
NINO_FNS(AttrListNonResident)
NINO_FNS(Attr)
NINO_FNS(MstProtected)
NINO_FNS(NonResident)
NINO_FNS(IndexAllocPresent)
NINO_FNS(Compressed)
NINO_FNS(Encrypted)
NINO_FNS(Sparse)
NINO_FNS(SparseDisabled)
NINO_FNS(TruncateFailed)
typedef struct  big_ntfs_inode;
static inline ntfs_inode *NTFS_I(struct inode *inode)
static inline struct inode *VFS_I(ntfs_inode *ni)
typedef struct  ntfs_attr;
typedef int (*test_t)(struct inode *, void *);
extern int ntfs_test_inode(struct inode *vi, ntfs_attr *na);
extern struct inode *ntfs_iget(struct super_block *sb, unsigned long mft_no);
extern struct inode *ntfs_attr_iget(struct inode *base_vi, ATTR_TYPE type,
ntfschar *name, u32 name_len);
extern struct inode *ntfs_index_iget(struct inode *base_vi, ntfschar *name,
u32 name_len);
extern struct inode *ntfs_alloc_big_inode(struct super_block *sb);
extern void ntfs_destroy_big_inode(struct inode *inode);
extern void ntfs_evict_big_inode(struct inode *vi);
extern void __ntfs_init_inode(struct super_block *sb, ntfs_inode *ni);
static inline void ntfs_init_big_inode(struct inode *vi)
extern ntfs_inode *ntfs_new_extent_inode(struct super_block *sb,
unsigned long mft_no);
extern void ntfs_clear_extent_inode(ntfs_inode *ni);
extern int ntfs_read_inode_mount(struct inode *vi);
extern int ntfs_show_options(struct seq_file *sf, struct vfsmount *mnt);
extern int ntfs_truncate(struct inode *vi);
extern void ntfs_truncate_vfs(struct inode *vi);
extern int ntfs_setattr(struct dentry *dentry, struct iattr *attr);
extern int __ntfs_write_inode(struct inode *vi, int sync);
static inline void ntfs_commit_inode(struct inode *vi)
