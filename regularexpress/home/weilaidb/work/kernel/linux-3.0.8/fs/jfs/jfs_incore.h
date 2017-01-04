#define _H_JFS_INCORE
#define JFS_SUPER_MAGIC 0x3153464a
struct jfs_inode_info ;
#define i_xtroot u.file._xtroot
#define i_imap u.file._imap
#define i_dirtable u.dir._table
#define i_dtroot u.dir._dtroot
#define i_inline u.link._inline
#define i_inline_ea u.link._inline_ea
#define IREAD_LOCK(ip, subclass) \
down_read_nested(&JFS_IP(ip)->rdwrlock, subclass)
#define IREAD_UNLOCK(ip)	up_read(&JFS_IP(ip)->rdwrlock)
#define IWRITE_LOCK(ip, subclass) \
down_write_nested(&JFS_IP(ip)->rdwrlock, subclass)
#define IWRITE_UNLOCK(ip)	up_write(&JFS_IP(ip)->rdwrlock)
enum cflags ;
enum commit_mutex_class
;
enum rdwrlock_class
;
#define set_cflag(flag, ip)	set_bit(flag, &(JFS_IP(ip)->cflag))
#define clear_cflag(flag, ip)	clear_bit(flag, &(JFS_IP(ip)->cflag))
#define test_cflag(flag, ip)	test_bit(flag, &(JFS_IP(ip)->cflag))
#define test_and_clear_cflag(flag, ip) \
test_and_clear_bit(flag, &(JFS_IP(ip)->cflag))
struct jfs_sb_info ;
#define IN_LAZYCOMMIT 1
static inline struct jfs_inode_info *JFS_IP(struct inode *inode)
static inline int jfs_dirtable_inline(struct inode *inode)
static inline struct jfs_sb_info *JFS_SBI(struct super_block *sb)
static inline int isReadOnly(struct inode *inode)
