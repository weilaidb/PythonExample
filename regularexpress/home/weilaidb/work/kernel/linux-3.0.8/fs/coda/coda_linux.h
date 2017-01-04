#define _LINUX_CODA_FS
extern const struct inode_operations coda_dir_inode_operations;
extern const struct inode_operations coda_file_inode_operations;
extern const struct inode_operations coda_ioctl_inode_operations;
extern const struct dentry_operations coda_dentry_operations;
extern const struct address_space_operations coda_file_aops;
extern const struct address_space_operations coda_symlink_aops;
extern const struct file_operations coda_dir_operations;
extern const struct file_operations coda_file_operations;
extern const struct file_operations coda_ioctl_operations;
int coda_open(struct inode *i, struct file *f);
int coda_release(struct inode *i, struct file *f);
int coda_permission(struct inode *inode, int mask, unsigned int flags);
int coda_revalidate_inode(struct dentry *);
int coda_getattr(struct vfsmount *, struct dentry *, struct kstat *);
int coda_setattr(struct dentry *, struct iattr *);
char *coda_f2s(struct CodaFid *f);
int coda_isroot(struct inode *i);
int coda_iscontrol(const char *name, size_t length);
void coda_vattr_to_iattr(struct inode *, struct coda_vattr *);
void coda_iattr_to_vattr(struct iattr *, struct coda_vattr *);
unsigned short coda_flags_to_cflags(unsigned short);
void coda_sysctl_init(void);
void coda_sysctl_clean(void);
#define CODA_ALLOC(ptr, cast, size) do  while (0)
#define CODA_FREE(ptr,size) \
do  while (0)
static inline struct coda_inode_info *ITOC(struct inode *inode)
static __inline__ struct CodaFid *coda_i2f(struct inode *inode)
static __inline__ char *coda_i2s(struct inode *inode)
static __inline__ void coda_flag_inode(struct inode *inode, int flag)
