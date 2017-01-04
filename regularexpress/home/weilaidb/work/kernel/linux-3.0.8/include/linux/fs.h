#define _LINUX_FS_H
#undef NR_OPEN
#define INR_OPEN_CUR 1024
#define INR_OPEN_MAX 4096
#define BLOCK_SIZE_BITS 10
#define BLOCK_SIZE (1<<BLOCK_SIZE_BITS)
#define SEEK_SET	0
#define SEEK_CUR	1
#define SEEK_END	2
#define SEEK_MAX	SEEK_END
struct fstrim_range ;
struct files_stat_struct ;
struct inodes_stat_t ;
#define NR_FILE  8192
#define MAY_EXEC 1
#define MAY_WRITE 2
#define MAY_READ 4
#define MAY_APPEND 8
#define MAY_ACCESS 16
#define MAY_OPEN 32
#define MAY_CHDIR 64
#define FMODE_READ		((__force fmode_t)0x1)
#define FMODE_WRITE		((__force fmode_t)0x2)
#define FMODE_LSEEK		((__force fmode_t)0x4)
#define FMODE_PREAD		((__force fmode_t)0x8)
#define FMODE_PWRITE		((__force fmode_t)0x10)
#define FMODE_EXEC		((__force fmode_t)0x20)
#define FMODE_NDELAY		((__force fmode_t)0x40)
#define FMODE_EXCL		((__force fmode_t)0x80)
#define FMODE_WRITE_IOCTL	((__force fmode_t)0x100)
#define FMODE_NOCMTIME		((__force fmode_t)0x800)
#define FMODE_RANDOM		((__force fmode_t)0x1000)
#define FMODE_UNSIGNED_OFFSET	((__force fmode_t)0x2000)
#define FMODE_PATH		((__force fmode_t)0x4000)
#define FMODE_NONOTIFY		((__force fmode_t)0x1000000)
#define RW_MASK			REQ_WRITE
#define RWA_MASK		REQ_RAHEAD
#define READ			0
#define WRITE			RW_MASK
#define READA			RWA_MASK
#define READ_SYNC		(READ | REQ_SYNC)
#define READ_META		(READ | REQ_META)
#define WRITE_SYNC		(WRITE | REQ_SYNC | REQ_NOIDLE)
#define WRITE_ODIRECT		(WRITE | REQ_SYNC)
#define WRITE_META		(WRITE | REQ_META)
#define WRITE_FLUSH		(WRITE | REQ_SYNC | REQ_NOIDLE | REQ_FLUSH)
#define WRITE_FUA		(WRITE | REQ_SYNC | REQ_NOIDLE | REQ_FUA)
#define WRITE_FLUSH_FUA		(WRITE | REQ_SYNC | REQ_NOIDLE | REQ_FLUSH | REQ_FUA)
#define SEL_IN		1
#define SEL_OUT		2
#define SEL_EX		4
#define FS_REQUIRES_DEV 1
#define FS_BINARY_MOUNTDATA 2
#define FS_HAS_SUBTYPE 4
#define FS_REVAL_DOT	16384
#define FS_RENAME_DOES_D_MOVE	32768
#define MS_RDONLY	 1
#define MS_NOSUID	 2
#define MS_NODEV	 4
#define MS_NOEXEC	 8
#define MS_SYNCHRONOUS	16
#define MS_REMOUNT	32
#define MS_MANDLOCK	64
#define MS_DIRSYNC	128
#define MS_NOATIME	1024
#define MS_NODIRATIME	2048
#define MS_BIND		4096
#define MS_MOVE		8192
#define MS_REC		16384
#define MS_VERBOSE	32768
#define MS_SILENT	32768
#define MS_POSIXACL	(1<<16)
#define MS_UNBINDABLE	(1<<17)
#define MS_PRIVATE	(1<<18)
#define MS_SLAVE	(1<<19)
#define MS_SHARED	(1<<20)
#define MS_RELATIME	(1<<21)
#define MS_KERNMOUNT	(1<<22)
#define MS_I_VERSION	(1<<23)
#define MS_STRICTATIME	(1<<24)
#define MS_NOSEC	(1<<28)
#define MS_BORN		(1<<29)
#define MS_ACTIVE	(1<<30)
#define MS_NOUSER	(1<<31)
#define MS_RMT_MASK	(MS_RDONLY|MS_SYNCHRONOUS|MS_MANDLOCK|MS_I_VERSION)
#define MS_MGC_VAL 0xC0ED0000
#define MS_MGC_MSK 0xffff0000
#define S_SYNC		1
#define S_NOATIME	2
#define S_APPEND	4
#define S_IMMUTABLE	8
#define S_DEAD		16
#define S_NOQUOTA	32
#define S_DIRSYNC	64
#define S_NOCMTIME	128
#define S_SWAPFILE	256
#define S_PRIVATE	512
#define S_IMA		1024
#define S_AUTOMOUNT	2048
#define S_NOSEC		4096
#define __IS_FLG(inode,flg) ((inode)->i_sb->s_flags & (flg))
#define IS_RDONLY(inode) ((inode)->i_sb->s_flags & MS_RDONLY)
#define IS_SYNC(inode)		(__IS_FLG(inode, MS_SYNCHRONOUS) || \
((inode)->i_flags & S_SYNC))
#define IS_DIRSYNC(inode)	(__IS_FLG(inode, MS_SYNCHRONOUS|MS_DIRSYNC) || \
((inode)->i_flags & (S_SYNC|S_DIRSYNC)))
#define IS_MANDLOCK(inode)	__IS_FLG(inode, MS_MANDLOCK)
#define IS_NOATIME(inode)   __IS_FLG(inode, MS_RDONLY|MS_NOATIME)
#define IS_I_VERSION(inode)   __IS_FLG(inode, MS_I_VERSION)
#define IS_NOQUOTA(inode)	((inode)->i_flags & S_NOQUOTA)
#define IS_APPEND(inode)	((inode)->i_flags & S_APPEND)
#define IS_IMMUTABLE(inode)	((inode)->i_flags & S_IMMUTABLE)
#define IS_POSIXACL(inode)	__IS_FLG(inode, MS_POSIXACL)
#define IS_DEADDIR(inode)	((inode)->i_flags & S_DEAD)
#define IS_NOCMTIME(inode)	((inode)->i_flags & S_NOCMTIME)
#define IS_SWAPFILE(inode)	((inode)->i_flags & S_SWAPFILE)
#define IS_PRIVATE(inode)	((inode)->i_flags & S_PRIVATE)
#define IS_IMA(inode)		((inode)->i_flags & S_IMA)
#define IS_AUTOMOUNT(inode)	((inode)->i_flags & S_AUTOMOUNT)
#define IS_NOSEC(inode)		((inode)->i_flags & S_NOSEC)
#define BLKROSET   _IO(0x12,93)
#define BLKROGET   _IO(0x12,94)
#define BLKRRPART  _IO(0x12,95)
#define BLKGETSIZE _IO(0x12,96)
#define BLKFLSBUF  _IO(0x12,97)
#define BLKRASET   _IO(0x12,98)
#define BLKRAGET   _IO(0x12,99)
#define BLKFRASET  _IO(0x12,100)
#define BLKFRAGET  _IO(0x12,101)
#define BLKSECTSET _IO(0x12,102)
#define BLKSECTGET _IO(0x12,103)
#define BLKSSZGET  _IO(0x12,104)
#define BLKBSZGET  _IOR(0x12,112,size_t)
#define BLKBSZSET  _IOW(0x12,113,size_t)
#define BLKGETSIZE64 _IOR(0x12,114,size_t)
#define BLKTRACESETUP _IOWR(0x12,115,struct blk_user_trace_setup)
#define BLKTRACESTART _IO(0x12,116)
#define BLKTRACESTOP _IO(0x12,117)
#define BLKTRACETEARDOWN _IO(0x12,118)
#define BLKDISCARD _IO(0x12,119)
#define BLKIOMIN _IO(0x12,120)
#define BLKIOOPT _IO(0x12,121)
#define BLKALIGNOFF _IO(0x12,122)
#define BLKPBSZGET _IO(0x12,123)
#define BLKDISCARDZEROES _IO(0x12,124)
#define BLKSECDISCARD _IO(0x12,125)
#define BMAP_IOCTL 1
#define FIBMAP	   _IO(0x00,1)
#define FIGETBSZ   _IO(0x00,2)
#define FIFREEZE	_IOWR('X', 119, int)
#define FITHAW		_IOWR('X', 120, int)
#define FITRIM		_IOWR('X', 121, struct fstrim_range)
#define	FS_IOC_GETFLAGS			_IOR('f', 1, long)
#define	FS_IOC_SETFLAGS			_IOW('f', 2, long)
#define	FS_IOC_GETVERSION		_IOR('v', 1, long)
#define	FS_IOC_SETVERSION		_IOW('v', 2, long)
#define FS_IOC_FIEMAP			_IOWR('f', 11, struct fiemap)
#define FS_IOC32_GETFLAGS		_IOR('f', 1, int)
#define FS_IOC32_SETFLAGS		_IOW('f', 2, int)
#define FS_IOC32_GETVERSION		_IOR('v', 1, int)
#define FS_IOC32_SETVERSION		_IOW('v', 2, int)
#define	FS_SECRM_FL			0x00000001
#define	FS_UNRM_FL			0x00000002
#define	FS_COMPR_FL			0x00000004
#define FS_SYNC_FL			0x00000008
#define FS_IMMUTABLE_FL			0x00000010
#define FS_APPEND_FL			0x00000020
#define FS_NODUMP_FL			0x00000040
#define FS_NOATIME_FL			0x00000080
#define FS_DIRTY_FL			0x00000100
#define FS_COMPRBLK_FL			0x00000200
#define FS_NOCOMP_FL			0x00000400
#define FS_ECOMPR_FL			0x00000800
#define FS_BTREE_FL			0x00001000
#define FS_INDEX_FL			0x00001000
#define FS_IMAGIC_FL			0x00002000
#define FS_JOURNAL_DATA_FL		0x00004000
#define FS_NOTAIL_FL			0x00008000
#define FS_DIRSYNC_FL			0x00010000
#define FS_TOPDIR_FL			0x00020000
#define FS_EXTENT_FL			0x00080000
#define FS_DIRECTIO_FL			0x00100000
#define FS_NOCOW_FL			0x00800000
#define FS_RESERVED_FL			0x80000000
#define FS_FL_USER_VISIBLE		0x0003DFFF
#define FS_FL_USER_MODIFIABLE		0x000380FF
#define SYNC_FILE_RANGE_WAIT_BEFORE	1
#define SYNC_FILE_RANGE_WRITE		2
#define SYNC_FILE_RANGE_WAIT_AFTER	4
struct export_operations;
struct hd_geometry;
struct iovec;
struct nameidata;
struct kiocb;
struct kobject;
struct pipe_inode_info;
struct poll_table_struct;
struct kstatfs;
struct vm_area_struct;
struct vfsmount;
struct cred;
extern void __init inode_init(void);
extern void __init inode_init_early(void);
extern void __init files_init(unsigned long);
extern struct files_stat_struct files_stat;
extern unsigned long get_max_files(void);
extern int sysctl_nr_open;
extern struct inodes_stat_t inodes_stat;
extern int leases_enable, lease_break_time;
struct buffer_head;
typedef int (get_block_t)(struct inode *inode, sector_t iblock,
struct buffer_head *bh_result, int create);
typedef void (dio_iodone_t)(struct kiocb *iocb, loff_t offset,
ssize_t bytes, void *private, int ret,
bool is_async);
#define ATTR_MODE	(1 << 0)
#define ATTR_UID	(1 << 1)
#define ATTR_GID	(1 << 2)
#define ATTR_SIZE	(1 << 3)
#define ATTR_ATIME	(1 << 4)
#define ATTR_MTIME	(1 << 5)
#define ATTR_CTIME	(1 << 6)
#define ATTR_ATIME_SET	(1 << 7)
#define ATTR_MTIME_SET	(1 << 8)
#define ATTR_FORCE	(1 << 9)
#define ATTR_ATTR_FLAG	(1 << 10)
#define ATTR_KILL_SUID	(1 << 11)
#define ATTR_KILL_SGID	(1 << 12)
#define ATTR_FILE	(1 << 13)
#define ATTR_KILL_PRIV	(1 << 14)
#define ATTR_OPEN	(1 << 15)
#define ATTR_TIMES_SET	(1 << 16)
struct iattr ;
enum positive_aop_returns ;
#define AOP_FLAG_UNINTERRUPTIBLE	0x0001
#define AOP_FLAG_CONT_EXPAND		0x0002
#define AOP_FLAG_NOFS			0x0004
struct page;
struct address_space;
struct writeback_control;
struct iov_iter ;
size_t iov_iter_copy_from_user_atomic(struct page *page,
struct iov_iter *i, unsigned long offset, size_t bytes);
size_t iov_iter_copy_from_user(struct page *page,
struct iov_iter *i, unsigned long offset, size_t bytes);
void iov_iter_advance(struct iov_iter *i, size_t bytes);
int iov_iter_fault_in_readable(struct iov_iter *i, size_t bytes);
size_t iov_iter_single_seg_count(struct iov_iter *i);
static inline void iov_iter_init(struct iov_iter *i,
const struct iovec *iov, unsigned long nr_segs,
size_t count, size_t written)
static inline size_t iov_iter_count(struct iov_iter *i)
typedef struct  read_descriptor_t;
typedef int (*read_actor_t)(read_descriptor_t *, struct page *,
unsigned long, unsigned long);
struct address_space_operations ;
extern const struct address_space_operations empty_aops;
int pagecache_write_begin(struct file *, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata);
int pagecache_write_end(struct file *, struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata);
struct backing_dev_info;
struct address_space  __attribute__((aligned(sizeof(long))));
struct block_device ;
#define PAGECACHE_TAG_DIRTY	0
#define PAGECACHE_TAG_WRITEBACK	1
#define PAGECACHE_TAG_TOWRITE	2
int mapping_tagged(struct address_space *mapping, int tag);
static inline int mapping_mapped(struct address_space *mapping)
static inline int mapping_writably_mapped(struct address_space *mapping)
#if BITS_PER_LONG==32 && defined(CONFIG_SMP)
#define __NEED_I_SIZE_ORDERED
#define i_size_ordered_init(inode) seqcount_init(&inode->i_size_seqcount)
#define i_size_ordered_init(inode) do  while (0)
struct posix_acl;
#define ACL_NOT_CACHED ((void *)(-1))
struct inode ;
static inline int inode_unhashed(struct inode *inode)
enum inode_i_mutex_lock_class
;
static inline loff_t i_size_read(const struct inode *inode)
static inline void i_size_write(struct inode *inode, loff_t i_size)
static inline unsigned iminor(const struct inode *inode)
static inline unsigned imajor(const struct inode *inode)
extern struct block_device *I_BDEV(struct inode *inode);
struct fown_struct ;
struct file_ra_state ;
static inline int ra_has_index(struct file_ra_state *ra, pgoff_t index)
#define FILE_MNT_WRITE_TAKEN	1
#define FILE_MNT_WRITE_RELEASED	2
struct file ;
struct file_handle ;
#define get_file(x)	atomic_long_inc(&(x)->f_count)
#define fput_atomic(x)	atomic_long_add_unless(&(x)->f_count, -1, 1)
#define file_count(x)	atomic_long_read(&(x)->f_count)
static inline void file_take_write(struct file *f)
static inline void file_release_write(struct file *f)
static inline void file_reset_write(struct file *f)
static inline void file_check_state(struct file *f)
static inline int file_check_writeable(struct file *f)
static inline void file_take_write(struct file *filp)
static inline void file_release_write(struct file *filp)
static inline void file_reset_write(struct file *filp)
static inline void file_check_state(struct file *filp)
static inline int file_check_writeable(struct file *filp)
#define	MAX_NON_LFS	((1UL<<31) - 1)
#if BITS_PER_LONG==32
#define MAX_LFS_FILESIZE	(((u64)PAGE_CACHE_SIZE << (BITS_PER_LONG-1))-1)
#elif BITS_PER_LONG==64
#define MAX_LFS_FILESIZE 	0x7fffffffffffffffUL
#define FL_POSIX	1
#define FL_FLOCK	2
#define FL_ACCESS	8
#define FL_EXISTS	16
#define FL_LEASE	32
#define FL_CLOSE	64
#define FL_SLEEP	128
#define FILE_LOCK_DEFERRED 1
typedef struct files_struct *fl_owner_t;
struct file_lock_operations ;
struct lock_manager_operations ;
struct lock_manager ;
void locks_start_grace(struct lock_manager *);
void locks_end_grace(struct lock_manager *);
int locks_in_grace(void);
struct file_lock ;
#define INT_LIMIT(x)	(~((x)1 << (sizeof(x)*8 - 1)))
#define OFFSET_MAX	INT_LIMIT(loff_t)
#define OFFT_OFFSET_MAX	INT_LIMIT(off_t)
extern void send_sigio(struct fown_struct *fown, int fd, int band);
extern int fcntl_getlk(struct file *, struct flock __user *);
extern int fcntl_setlk(unsigned int, struct file *, unsigned int,
struct flock __user *);
#if BITS_PER_LONG == 32
extern int fcntl_getlk64(struct file *, struct flock64 __user *);
extern int fcntl_setlk64(unsigned int, struct file *, unsigned int,
struct flock64 __user *);
extern int fcntl_setlease(unsigned int fd, struct file *filp, long arg);
extern int fcntl_getlease(struct file *filp);
void locks_free_lock(struct file_lock *fl);
extern void locks_init_lock(struct file_lock *);
extern struct file_lock * locks_alloc_lock(void);
extern void locks_copy_lock(struct file_lock *, struct file_lock *);
extern void __locks_copy_lock(struct file_lock *, const struct file_lock *);
extern void locks_remove_posix(struct file *, fl_owner_t);
extern void locks_remove_flock(struct file *);
extern void locks_release_private(struct file_lock *);
extern void posix_test_lock(struct file *, struct file_lock *);
extern int posix_lock_file(struct file *, struct file_lock *, struct file_lock *);
extern int posix_lock_file_wait(struct file *, struct file_lock *);
extern int posix_unblock_lock(struct file *, struct file_lock *);
extern int vfs_test_lock(struct file *, struct file_lock *);
extern int vfs_lock_file(struct file *, unsigned int, struct file_lock *, struct file_lock *);
extern int vfs_cancel_lock(struct file *filp, struct file_lock *fl);
extern int flock_lock_file_wait(struct file *filp, struct file_lock *fl);
extern int __break_lease(struct inode *inode, unsigned int flags);
extern void lease_get_mtime(struct inode *, struct timespec *time);
extern int generic_setlease(struct file *, long, struct file_lock **);
extern int vfs_setlease(struct file *, long, struct file_lock **);
extern int lease_modify(struct file_lock **, int);
extern int lock_may_read(struct inode *, loff_t start, unsigned long count);
extern int lock_may_write(struct inode *, loff_t start, unsigned long count);
extern void lock_flocks(void);
extern void unlock_flocks(void);
static inline int fcntl_getlk(struct file *file, struct flock __user *user)
static inline int fcntl_setlk(unsigned int fd, struct file *file,
unsigned int cmd, struct flock __user *user)
#if BITS_PER_LONG == 32
static inline int fcntl_getlk64(struct file *file, struct flock64 __user *user)
static inline int fcntl_setlk64(unsigned int fd, struct file *file,
unsigned int cmd, struct flock64 __user *user)
static inline int fcntl_setlease(unsigned int fd, struct file *filp, long arg)
static inline int fcntl_getlease(struct file *filp)
static inline void locks_init_lock(struct file_lock *fl)
static inline void __locks_copy_lock(struct file_lock *new, struct file_lock *fl)
static inline void locks_copy_lock(struct file_lock *new, struct file_lock *fl)
static inline void locks_remove_posix(struct file *filp, fl_owner_t owner)
static inline void locks_remove_flock(struct file *filp)
static inline void posix_test_lock(struct file *filp, struct file_lock *fl)
static inline int posix_lock_file(struct file *filp, struct file_lock *fl,
struct file_lock *conflock)
static inline int posix_lock_file_wait(struct file *filp, struct file_lock *fl)
static inline int posix_unblock_lock(struct file *filp,
struct file_lock *waiter)
static inline int vfs_test_lock(struct file *filp, struct file_lock *fl)
static inline int vfs_lock_file(struct file *filp, unsigned int cmd,
struct file_lock *fl, struct file_lock *conf)
static inline int vfs_cancel_lock(struct file *filp, struct file_lock *fl)
static inline int flock_lock_file_wait(struct file *filp,
struct file_lock *request)
static inline int __break_lease(struct inode *inode, unsigned int mode)
static inline void lease_get_mtime(struct inode *inode, struct timespec *time)
static inline int generic_setlease(struct file *filp, long arg,
struct file_lock **flp)
static inline int vfs_setlease(struct file *filp, long arg,
struct file_lock **lease)
static inline int lease_modify(struct file_lock **before, int arg)
static inline int lock_may_read(struct inode *inode, loff_t start,
unsigned long len)
static inline int lock_may_write(struct inode *inode, loff_t start,
unsigned long len)
static inline void lock_flocks(void)
static inline void unlock_flocks(void)
struct fasync_struct ;
#define FASYNC_MAGIC 0x4601
extern int fasync_helper(int, struct file *, int, struct fasync_struct **);
extern struct fasync_struct *fasync_insert_entry(int, struct file *, struct fasync_struct **, struct fasync_struct *);
extern int fasync_remove_entry(struct file *, struct fasync_struct **);
extern struct fasync_struct *fasync_alloc(void);
extern void fasync_free(struct fasync_struct *);
extern void kill_fasync(struct fasync_struct **, int, int);
extern int __f_setown(struct file *filp, struct pid *, enum pid_type, int force);
extern int f_setown(struct file *filp, unsigned long arg, int force);
extern void f_delown(struct file *filp);
extern pid_t f_getown(struct file *filp);
extern int send_sigurg(struct fown_struct *fown);
#define MNT_FORCE	0x00000001
#define MNT_DETACH	0x00000002
#define MNT_EXPIRE	0x00000004
#define UMOUNT_NOFOLLOW	0x00000008
#define UMOUNT_UNUSED	0x80000000
extern struct list_head super_blocks;
extern spinlock_t sb_lock;
struct super_block ;
extern struct timespec current_fs_time(struct super_block *sb);
enum ;
#define vfs_check_frozen(sb, level) \
wait_event((sb)->s_wait_unfrozen, ((sb)->s_frozen < (level)))
#define get_fs_excl() atomic_inc(&current->fs_excl)
#define put_fs_excl() atomic_dec(&current->fs_excl)
#define has_fs_excl() atomic_read(&current->fs_excl)
extern struct user_namespace init_user_ns;
#define inode_userns(inode) (&init_user_ns)
extern bool inode_owner_or_capable(const struct inode *inode);
extern void lock_super(struct super_block *);
extern void unlock_super(struct super_block *);
extern int vfs_create(struct inode *, struct dentry *, int, struct nameidata *);
extern int vfs_mkdir(struct inode *, struct dentry *, int);
extern int vfs_mknod(struct inode *, struct dentry *, int, dev_t);
extern int vfs_symlink(struct inode *, struct dentry *, const char *);
extern int vfs_link(struct dentry *, struct inode *, struct dentry *);
extern int vfs_rmdir(struct inode *, struct dentry *);
extern int vfs_unlink(struct inode *, struct dentry *);
extern int vfs_rename(struct inode *, struct dentry *, struct inode *, struct dentry *);
extern void dentry_unhash(struct dentry *dentry);
extern int file_permission(struct file *, int);
extern void inode_init_owner(struct inode *inode, const struct inode *dir,
mode_t mode);
struct fiemap_extent_info ;
int fiemap_fill_next_extent(struct fiemap_extent_info *info, u64 logical,
u64 phys, u64 len, u32 flags);
int fiemap_check_flags(struct fiemap_extent_info *fieinfo, u32 fs_flags);
#define DT_UNKNOWN	0
#define DT_FIFO		1
#define DT_CHR		2
#define DT_DIR		4
#define DT_BLK		6
#define DT_REG		8
#define DT_LNK		10
#define DT_SOCK		12
#define DT_WHT		14
typedef int (*filldir_t)(void *, const char *, int, loff_t, u64, unsigned);
struct block_device_operations;
#define HAVE_COMPAT_IOCTL 1
#define HAVE_UNLOCKED_IOCTL 1
struct file_operations ;
#define IPERM_FLAG_RCU	0x0001
struct inode_operations  ____cacheline_aligned;
struct seq_file;
ssize_t rw_copy_check_uvector(int type, const struct iovec __user * uvector,
unsigned long nr_segs, unsigned long fast_segs,
struct iovec *fast_pointer,
struct iovec **ret_pointer);
extern ssize_t vfs_read(struct file *, char __user *, size_t, loff_t *);
extern ssize_t vfs_write(struct file *, const char __user *, size_t, loff_t *);
extern ssize_t vfs_readv(struct file *, const struct iovec __user *,
unsigned long, loff_t *);
extern ssize_t vfs_writev(struct file *, const struct iovec __user *,
unsigned long, loff_t *);
struct super_operations ;
#define I_DIRTY_SYNC		(1 << 0)
#define I_DIRTY_DATASYNC	(1 << 1)
#define I_DIRTY_PAGES		(1 << 2)
#define __I_NEW			3
#define I_NEW			(1 << __I_NEW)
#define I_WILL_FREE		(1 << 4)
#define I_FREEING		(1 << 5)
#define I_CLEAR			(1 << 6)
#define __I_SYNC		7
#define I_SYNC			(1 << __I_SYNC)
#define I_REFERENCED		(1 << 8)
#define I_DIRTY (I_DIRTY_SYNC | I_DIRTY_DATASYNC | I_DIRTY_PAGES)
extern void __mark_inode_dirty(struct inode *, int);
static inline void mark_inode_dirty(struct inode *inode)
static inline void mark_inode_dirty_sync(struct inode *inode)
static inline void inc_nlink(struct inode *inode)
static inline void inode_inc_link_count(struct inode *inode)
static inline void drop_nlink(struct inode *inode)
static inline void clear_nlink(struct inode *inode)
static inline void inode_dec_link_count(struct inode *inode)
static inline void inode_inc_iversion(struct inode *inode)
extern void touch_atime(struct vfsmount *mnt, struct dentry *dentry);
static inline void file_accessed(struct file *file)
int sync_inode(struct inode *inode, struct writeback_control *wbc);
int sync_inode_metadata(struct inode *inode, int wait);
struct file_system_type ;
extern struct dentry *mount_ns(struct file_system_type *fs_type, int flags,
void *data, int (*fill_super)(struct super_block *, void *, int));
extern struct dentry *mount_bdev(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data,
int (*fill_super)(struct super_block *, void *, int));
extern struct dentry *mount_single(struct file_system_type *fs_type,
int flags, void *data,
int (*fill_super)(struct super_block *, void *, int));
extern struct dentry *mount_nodev(struct file_system_type *fs_type,
int flags, void *data,
int (*fill_super)(struct super_block *, void *, int));
void generic_shutdown_super(struct super_block *sb);
void kill_block_super(struct super_block *sb);
void kill_anon_super(struct super_block *sb);
void kill_litter_super(struct super_block *sb);
void deactivate_super(struct super_block *sb);
void deactivate_locked_super(struct super_block *sb);
int set_anon_super(struct super_block *s, void *data);
struct super_block *sget(struct file_system_type *type,
int (*test)(struct super_block *,void *),
int (*set)(struct super_block *,void *),
void *data);
extern struct dentry *mount_pseudo(struct file_system_type *, char *,
const struct super_operations *ops,
const struct dentry_operations *dops,
unsigned long);
static inline void sb_mark_dirty(struct super_block *sb)
static inline void sb_mark_clean(struct super_block *sb)
static inline int sb_is_dirty(struct super_block *sb)
#define fops_get(fops) \
(((fops) && try_module_get((fops)->owner) ? (fops) : NULL))
#define fops_put(fops) \
do  while(0)
extern int register_filesystem(struct file_system_type *);
extern int unregister_filesystem(struct file_system_type *);
extern struct vfsmount *kern_mount_data(struct file_system_type *, void *data);
#define kern_mount(type) kern_mount_data(type, NULL)
extern int may_umount_tree(struct vfsmount *);
extern int may_umount(struct vfsmount *);
extern long do_mount(char *, char *, char *, unsigned long, void *);
extern struct vfsmount *collect_mounts(struct path *);
extern void drop_collected_mounts(struct vfsmount *);
extern int iterate_mounts(int (*)(struct vfsmount *, void *), void *,
struct vfsmount *);
extern int vfs_statfs(struct path *, struct kstatfs *);
extern int user_statfs(const char __user *, struct kstatfs *);
extern int fd_statfs(int, struct kstatfs *);
extern int statfs_by_dentry(struct dentry *, struct kstatfs *);
extern int freeze_super(struct super_block *super);
extern int thaw_super(struct super_block *super);
extern int current_umask(void);
extern struct kobject *fs_kobj;
#define MAX_RW_COUNT (INT_MAX & PAGE_CACHE_MASK)
extern int rw_verify_area(int, struct file *, loff_t *, size_t);
#define FLOCK_VERIFY_READ  1
#define FLOCK_VERIFY_WRITE 2
extern int locks_mandatory_locked(struct inode *);
extern int locks_mandatory_area(int, struct inode *, struct file *, loff_t, size_t);
static inline int __mandatory_lock(struct inode *ino)
static inline int mandatory_lock(struct inode *ino)
static inline int locks_verify_locked(struct inode *inode)
static inline int locks_verify_truncate(struct inode *inode,
struct file *filp,
loff_t size)
static inline int break_lease(struct inode *inode, unsigned int mode)
static inline int locks_mandatory_locked(struct inode *inode)
static inline int locks_mandatory_area(int rw, struct inode *inode,
struct file *filp, loff_t offset,
size_t count)
static inline int __mandatory_lock(struct inode *inode)
static inline int mandatory_lock(struct inode *inode)
static inline int locks_verify_locked(struct inode *inode)
static inline int locks_verify_truncate(struct inode *inode, struct file *filp,
size_t size)
static inline int break_lease(struct inode *inode, unsigned int mode)
extern int do_truncate(struct dentry *, loff_t start, unsigned int time_attrs,
struct file *filp);
extern int do_fallocate(struct file *file, int mode, loff_t offset,
loff_t len);
extern long do_sys_open(int dfd, const char __user *filename, int flags,
int mode);
extern struct file *filp_open(const char *, int, int);
extern struct file *file_open_root(struct dentry *, struct vfsmount *,
const char *, int);
extern struct file * dentry_open(struct dentry *, struct vfsmount *, int,
const struct cred *);
extern int filp_close(struct file *, fl_owner_t id);
extern char * getname(const char __user *);
extern int ioctl_preallocate(struct file *filp, void __user *argp);
extern void __init vfs_caches_init_early(void);
extern void __init vfs_caches_init(unsigned long);
extern struct kmem_cache *names_cachep;
#define __getname_gfp(gfp)	kmem_cache_alloc(names_cachep, (gfp))
#define __getname()		__getname_gfp(GFP_KERNEL)
#define __putname(name)		kmem_cache_free(names_cachep, (void *)(name))
#define putname(name)   __putname(name)
extern void putname(const char *name);
extern int register_blkdev(unsigned int, const char *);
extern void unregister_blkdev(unsigned int, const char *);
extern struct block_device *bdget(dev_t);
extern struct block_device *bdgrab(struct block_device *bdev);
extern void bd_set_size(struct block_device *, loff_t size);
extern void bd_forget(struct inode *inode);
extern void bdput(struct block_device *);
extern void invalidate_bdev(struct block_device *);
extern int sync_blockdev(struct block_device *bdev);
extern struct super_block *freeze_bdev(struct block_device *);
extern void emergency_thaw_all(void);
extern int thaw_bdev(struct block_device *bdev, struct super_block *sb);
extern int fsync_bdev(struct block_device *);
static inline void bd_forget(struct inode *inode)
static inline int sync_blockdev(struct block_device *bdev)
static inline void invalidate_bdev(struct block_device *bdev)
static inline struct super_block *freeze_bdev(struct block_device *sb)
static inline int thaw_bdev(struct block_device *bdev, struct super_block *sb)
extern int sync_filesystem(struct super_block *);
extern const struct file_operations def_blk_fops;
extern const struct file_operations def_chr_fops;
extern const struct file_operations bad_sock_fops;
extern const struct file_operations def_fifo_fops;
extern int ioctl_by_bdev(struct block_device *, unsigned, unsigned long);
extern int blkdev_ioctl(struct block_device *, fmode_t, unsigned, unsigned long);
extern long compat_blkdev_ioctl(struct file *, unsigned, unsigned long);
extern int blkdev_get(struct block_device *bdev, fmode_t mode, void *holder);
extern struct block_device *blkdev_get_by_path(const char *path, fmode_t mode,
void *holder);
extern struct block_device *blkdev_get_by_dev(dev_t dev, fmode_t mode,
void *holder);
extern int blkdev_put(struct block_device *bdev, fmode_t mode);
extern int bd_link_disk_holder(struct block_device *bdev, struct gendisk *disk);
extern void bd_unlink_disk_holder(struct block_device *bdev,
struct gendisk *disk);
static inline int bd_link_disk_holder(struct block_device *bdev,
struct gendisk *disk)
static inline void bd_unlink_disk_holder(struct block_device *bdev,
struct gendisk *disk)
#define CHRDEV_MAJOR_HASH_SIZE	255
extern int alloc_chrdev_region(dev_t *, unsigned, unsigned, const char *);
extern int register_chrdev_region(dev_t, unsigned, const char *);
extern int __register_chrdev(unsigned int major, unsigned int baseminor,
unsigned int count, const char *name,
const struct file_operations *fops);
extern void __unregister_chrdev(unsigned int major, unsigned int baseminor,
unsigned int count, const char *name);
extern void unregister_chrdev_region(dev_t, unsigned);
extern void chrdev_show(struct seq_file *,off_t);
static inline int register_chrdev(unsigned int major, const char *name,
const struct file_operations *fops)
static inline void unregister_chrdev(unsigned int major, const char *name)
#define BDEVNAME_SIZE	32
#define BDEVT_SIZE	10
#define BLKDEV_MAJOR_HASH_SIZE	255
extern const char *__bdevname(dev_t, char *buffer);
extern const char *bdevname(struct block_device *bdev, char *buffer);
extern struct block_device *lookup_bdev(const char *);
extern void blkdev_show(struct seq_file *,off_t);
#define BLKDEV_MAJOR_HASH_SIZE	0
extern void init_special_inode(struct inode *, umode_t, dev_t);
extern void make_bad_inode(struct inode *);
extern int is_bad_inode(struct inode *);
extern const struct file_operations read_pipefifo_fops;
extern const struct file_operations write_pipefifo_fops;
extern const struct file_operations rdwr_pipefifo_fops;
extern int fs_may_remount_ro(struct super_block *);
#define bio_rw(bio)		((bio)->bi_rw & (RW_MASK | RWA_MASK))
#define bio_data_dir(bio)	((bio)->bi_rw & 1)
extern void check_disk_size_change(struct gendisk *disk,
struct block_device *bdev);
extern int revalidate_disk(struct gendisk *);
extern int check_disk_change(struct block_device *);
extern int __invalidate_device(struct block_device *, bool);
extern int invalidate_partition(struct gendisk *, int);
unsigned long invalidate_mapping_pages(struct address_space *mapping,
pgoff_t start, pgoff_t end);
static inline void invalidate_remote_inode(struct inode *inode)
extern int invalidate_inode_pages2(struct address_space *mapping);
extern int invalidate_inode_pages2_range(struct address_space *mapping,
pgoff_t start, pgoff_t end);
extern int write_inode_now(struct inode *, int);
extern int filemap_fdatawrite(struct address_space *);
extern int filemap_flush(struct address_space *);
extern int filemap_fdatawait(struct address_space *);
extern int filemap_fdatawait_range(struct address_space *, loff_t lstart,
loff_t lend);
extern int filemap_write_and_wait(struct address_space *mapping);
extern int filemap_write_and_wait_range(struct address_space *mapping,
loff_t lstart, loff_t lend);
extern int __filemap_fdatawrite_range(struct address_space *mapping,
loff_t start, loff_t end, int sync_mode);
extern int filemap_fdatawrite_range(struct address_space *mapping,
loff_t start, loff_t end);
extern int vfs_fsync_range(struct file *file, loff_t start, loff_t end,
int datasync);
extern int vfs_fsync(struct file *file, int datasync);
extern int generic_write_sync(struct file *file, loff_t pos, loff_t count);
extern void sync_supers(void);
extern void emergency_sync(void);
extern void emergency_remount(void);
extern sector_t bmap(struct inode *, sector_t);
extern int notify_change(struct dentry *, struct iattr *);
extern int inode_permission(struct inode *, int);
extern int generic_permission(struct inode *, int, unsigned int,
int (*check_acl)(struct inode *, int, unsigned int));
static inline bool execute_ok(struct inode *inode)
extern int get_write_access(struct inode *);
extern int deny_write_access(struct file *);
static inline void put_write_access(struct inode * inode)
static inline void allow_write_access(struct file *file)
static inline void i_readcount_dec(struct inode *inode)
static inline void i_readcount_inc(struct inode *inode)
static inline void i_readcount_dec(struct inode *inode)
static inline void i_readcount_inc(struct inode *inode)
extern int do_pipe_flags(int *, int);
extern struct file *create_read_pipe(struct file *f, int flags);
extern struct file *create_write_pipe(int flags);
extern void free_write_pipe(struct file *);
extern int kernel_read(struct file *, loff_t, char *, unsigned long);
extern struct file * open_exec(const char *);
extern int is_subdir(struct dentry *, struct dentry *);
extern int path_is_under(struct path *, struct path *);
extern ino_t find_inode_number(struct dentry *, struct qstr *);
extern loff_t default_llseek(struct file *file, loff_t offset, int origin);
extern loff_t vfs_llseek(struct file *file, loff_t offset, int origin);
extern int inode_init_always(struct super_block *, struct inode *);
extern void inode_init_once(struct inode *);
extern void address_space_init_once(struct address_space *mapping);
extern void ihold(struct inode * inode);
extern void iput(struct inode *);
extern struct inode * igrab(struct inode *);
extern ino_t iunique(struct super_block *, ino_t);
extern int inode_needs_sync(struct inode *inode);
extern int generic_delete_inode(struct inode *inode);
extern int generic_drop_inode(struct inode *inode);
extern struct inode *ilookup5_nowait(struct super_block *sb,
unsigned long hashval, int (*test)(struct inode *, void *),
void *data);
extern struct inode *ilookup5(struct super_block *sb, unsigned long hashval,
int (*test)(struct inode *, void *), void *data);
extern struct inode *ilookup(struct super_block *sb, unsigned long ino);
extern struct inode * iget5_locked(struct super_block *, unsigned long, int (*test)(struct inode *, void *), int (*set)(struct inode *, void *), void *);
extern struct inode * iget_locked(struct super_block *, unsigned long);
extern int insert_inode_locked4(struct inode *, unsigned long, int (*test)(struct inode *, void *), void *);
extern int insert_inode_locked(struct inode *);
extern void unlock_new_inode(struct inode *);
extern unsigned int get_next_ino(void);
extern void __iget(struct inode * inode);
extern void iget_failed(struct inode *);
extern void end_writeback(struct inode *);
extern void __destroy_inode(struct inode *);
extern struct inode *new_inode(struct super_block *);
extern void free_inode_nonrcu(struct inode *inode);
extern int should_remove_suid(struct dentry *);
extern int file_remove_suid(struct file *);
extern void __insert_inode_hash(struct inode *, unsigned long hashval);
extern void remove_inode_hash(struct inode *);
static inline void insert_inode_hash(struct inode *inode)
extern void inode_sb_list_add(struct inode *inode);
extern void submit_bio(int, struct bio *);
extern int bdev_read_only(struct block_device *);
extern int set_blocksize(struct block_device *, int);
extern int sb_set_blocksize(struct super_block *, int);
extern int sb_min_blocksize(struct super_block *, int);
extern int generic_file_mmap(struct file *, struct vm_area_struct *);
extern int generic_file_readonly_mmap(struct file *, struct vm_area_struct *);
extern int file_read_actor(read_descriptor_t * desc, struct page *page, unsigned long offset, unsigned long size);
int generic_write_checks(struct file *file, loff_t *pos, size_t *count, int isblk);
extern ssize_t generic_file_aio_read(struct kiocb *, const struct iovec *, unsigned long, loff_t);
extern ssize_t __generic_file_aio_write(struct kiocb *, const struct iovec *, unsigned long,
loff_t *);
extern ssize_t generic_file_aio_write(struct kiocb *, const struct iovec *, unsigned long, loff_t);
extern ssize_t generic_file_direct_write(struct kiocb *, const struct iovec *,
unsigned long *, loff_t, loff_t *, size_t, size_t);
extern ssize_t generic_file_buffered_write(struct kiocb *, const struct iovec *,
unsigned long, loff_t, loff_t *, size_t, ssize_t);
extern ssize_t do_sync_read(struct file *filp, char __user *buf, size_t len, loff_t *ppos);
extern ssize_t do_sync_write(struct file *filp, const char __user *buf, size_t len, loff_t *ppos);
extern int generic_segment_checks(const struct iovec *iov,
unsigned long *nr_segs, size_t *count, int access_flags);
extern ssize_t blkdev_aio_write(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos);
extern int blkdev_fsync(struct file *filp, int datasync);
extern ssize_t generic_file_splice_read(struct file *, loff_t *,
struct pipe_inode_info *, size_t, unsigned int);
extern ssize_t default_file_splice_read(struct file *, loff_t *,
struct pipe_inode_info *, size_t, unsigned int);
extern ssize_t generic_file_splice_write(struct pipe_inode_info *,
struct file *, loff_t *, size_t, unsigned int);
extern ssize_t generic_splice_sendpage(struct pipe_inode_info *pipe,
struct file *out, loff_t *, size_t len, unsigned int flags);
extern long do_splice_direct(struct file *in, loff_t *ppos, struct file *out,
size_t len, unsigned int flags);
extern void
file_ra_state_init(struct file_ra_state *ra, struct address_space *mapping);
extern loff_t noop_llseek(struct file *file, loff_t offset, int origin);
extern loff_t no_llseek(struct file *file, loff_t offset, int origin);
extern loff_t generic_file_llseek(struct file *file, loff_t offset, int origin);
extern loff_t generic_file_llseek_unlocked(struct file *file, loff_t offset,
int origin);
extern int generic_file_open(struct inode * inode, struct file * filp);
extern int nonseekable_open(struct inode * inode, struct file * filp);
extern ssize_t xip_file_read(struct file *filp, char __user *buf, size_t len,
loff_t *ppos);
extern int xip_file_mmap(struct file * file, struct vm_area_struct * vma);
extern ssize_t xip_file_write(struct file *filp, const char __user *buf,
size_t len, loff_t *ppos);
extern int xip_truncate_page(struct address_space *mapping, loff_t from);
static inline int xip_truncate_page(struct address_space *mapping, loff_t from)
typedef void (dio_submit_t)(int rw, struct bio *bio, struct inode *inode,
loff_t file_offset);
enum ;
void dio_end_io(struct bio *bio, int error);
ssize_t __blockdev_direct_IO(int rw, struct kiocb *iocb, struct inode *inode,
struct block_device *bdev, const struct iovec *iov, loff_t offset,
unsigned long nr_segs, get_block_t get_block, dio_iodone_t end_io,
dio_submit_t submit_io,	int flags);
static inline ssize_t blockdev_direct_IO(int rw, struct kiocb *iocb,
struct inode *inode, struct block_device *bdev, const struct iovec *iov,
loff_t offset, unsigned long nr_segs, get_block_t get_block,
dio_iodone_t end_io)
extern const struct file_operations generic_ro_fops;
#define special_file(m) (S_ISCHR(m)||S_ISBLK(m)||S_ISFIFO(m)||S_ISSOCK(m))
extern int vfs_readlink(struct dentry *, char __user *, int, const char *);
extern int vfs_follow_link(struct nameidata *, const char *);
extern int page_readlink(struct dentry *, char __user *, int);
extern void *page_follow_link_light(struct dentry *, struct nameidata *);
extern void page_put_link(struct dentry *, struct nameidata *, void *);
extern int __page_symlink(struct inode *inode, const char *symname, int len,
int nofs);
extern int page_symlink(struct inode *inode, const char *symname, int len);
extern const struct inode_operations page_symlink_inode_operations;
extern int generic_readlink(struct dentry *, char __user *, int);
extern void generic_fillattr(struct inode *, struct kstat *);
extern int vfs_getattr(struct vfsmount *, struct dentry *, struct kstat *);
void __inode_add_bytes(struct inode *inode, loff_t bytes);
void inode_add_bytes(struct inode *inode, loff_t bytes);
void inode_sub_bytes(struct inode *inode, loff_t bytes);
loff_t inode_get_bytes(struct inode *inode);
void inode_set_bytes(struct inode *inode, loff_t bytes);
extern int vfs_readdir(struct file *, filldir_t, void *);
extern int vfs_stat(const char __user *, struct kstat *);
extern int vfs_lstat(const char __user *, struct kstat *);
extern int vfs_fstat(unsigned int, struct kstat *);
extern int vfs_fstatat(int , const char __user *, struct kstat *, int);
extern int do_vfs_ioctl(struct file *filp, unsigned int fd, unsigned int cmd,
unsigned long arg);
extern int __generic_block_fiemap(struct inode *inode,
struct fiemap_extent_info *fieinfo,
loff_t start, loff_t len,
get_block_t *get_block);
extern int generic_block_fiemap(struct inode *inode,
struct fiemap_extent_info *fieinfo, u64 start,
u64 len, get_block_t *get_block);
extern void get_filesystem(struct file_system_type *fs);
extern void put_filesystem(struct file_system_type *fs);
extern struct file_system_type *get_fs_type(const char *name);
extern struct super_block *get_super(struct block_device *);
extern struct super_block *get_active_super(struct block_device *bdev);
extern struct super_block *user_get_super(dev_t);
extern void drop_super(struct super_block *sb);
extern void iterate_supers(void (*)(struct super_block *, void *), void *);
extern int dcache_dir_open(struct inode *, struct file *);
extern int dcache_dir_close(struct inode *, struct file *);
extern loff_t dcache_dir_lseek(struct file *, loff_t, int);
extern int dcache_readdir(struct file *, void *, filldir_t);
extern int simple_setattr(struct dentry *, struct iattr *);
extern int simple_getattr(struct vfsmount *, struct dentry *, struct kstat *);
extern int simple_statfs(struct dentry *, struct kstatfs *);
extern int simple_link(struct dentry *, struct inode *, struct dentry *);
extern int simple_unlink(struct inode *, struct dentry *);
extern int simple_rmdir(struct inode *, struct dentry *);
extern int simple_rename(struct inode *, struct dentry *, struct inode *, struct dentry *);
extern int noop_fsync(struct file *, int);
extern int simple_empty(struct dentry *);
extern int simple_readpage(struct file *file, struct page *page);
extern int simple_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata);
extern int simple_write_end(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata);
extern struct dentry *simple_lookup(struct inode *, struct dentry *, struct nameidata *);
extern ssize_t generic_read_dir(struct file *, char __user *, size_t, loff_t *);
extern const struct file_operations simple_dir_operations;
extern const struct inode_operations simple_dir_inode_operations;
struct tree_descr ;
struct dentry *d_alloc_name(struct dentry *, const char *);
extern int simple_fill_super(struct super_block *, unsigned long, struct tree_descr *);
extern int simple_pin_fs(struct file_system_type *, struct vfsmount **mount, int *count);
extern void simple_release_fs(struct vfsmount **mount, int *count);
extern ssize_t simple_read_from_buffer(void __user *to, size_t count,
loff_t *ppos, const void *from, size_t available);
extern ssize_t simple_write_to_buffer(void *to, size_t available, loff_t *ppos,
const void __user *from, size_t count);
extern int generic_file_fsync(struct file *, int);
extern int generic_check_addressable(unsigned, u64);
extern int buffer_migrate_page(struct address_space *,
struct page *, struct page *);
#define buffer_migrate_page NULL
extern int inode_change_ok(const struct inode *, struct iattr *);
extern int inode_newsize_ok(const struct inode *, loff_t offset);
extern void setattr_copy(struct inode *inode, const struct iattr *attr);
extern void file_update_time(struct file *file);
extern int generic_show_options(struct seq_file *m, struct vfsmount *mnt);
extern void save_mount_options(struct super_block *sb, char *options);
extern void replace_mount_options(struct super_block *sb, char *options);
static inline ino_t parent_ino(struct dentry *dentry)
struct simple_transaction_argresp ;
#define SIMPLE_TRANSACTION_LIMIT (PAGE_SIZE - sizeof(struct simple_transaction_argresp))
char *simple_transaction_get(struct file *file, const char __user *buf,
size_t size);
ssize_t simple_transaction_read(struct file *file, char __user *buf,
size_t size, loff_t *pos);
int simple_transaction_release(struct inode *inode, struct file *file);
void simple_transaction_set(struct file *file, size_t n);
#define DEFINE_SIMPLE_ATTRIBUTE(__fops, __get, __set, __fmt)		\
static int __fops ## _open(struct inode *inode, struct file *file)	\
\
static const struct file_operations __fops = ;
static inline void __attribute__((format(printf, 1, 2)))
__simple_attr_check_format(const char *fmt, ...)
int simple_attr_open(struct inode *inode, struct file *file,
int (*get)(void *, u64 *), int (*set)(void *, u64),
const char *fmt);
int simple_attr_release(struct inode *inode, struct file *file);
ssize_t simple_attr_read(struct file *file, char __user *buf,
size_t len, loff_t *ppos);
ssize_t simple_attr_write(struct file *file, const char __user *buf,
size_t len, loff_t *ppos);
struct ctl_table;
int proc_nr_files(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos);
int proc_nr_dentry(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos);
int proc_nr_inodes(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos);
int __init get_filesystem_list(char *buf);
#define __FMODE_EXEC		((__force int) FMODE_EXEC)
#define __FMODE_NONOTIFY	((__force int) FMODE_NONOTIFY)
#define ACC_MODE(x) ("\004\002\006\006"[(x)&O_ACCMODE])
#define OPEN_FMODE(flag) ((__force fmode_t)(((flag + 1) & O_ACCMODE) | \
(flag & __FMODE_NONOTIFY)))
static inline int is_sxid(mode_t mode)
static inline void inode_has_no_xattr(struct inode *inode)
