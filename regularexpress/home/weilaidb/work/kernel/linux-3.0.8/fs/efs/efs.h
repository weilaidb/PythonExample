#define _EFS_EFS_H_
#define EFS_VERSION "1.0a"
static const char cprt[] = "EFS: "EFS_VERSION" - (c) 1999 Al Smith <Al.Smith@aeschi.ch.eu.org>";
#define	EFS_BLOCKSIZE_BITS	9
#define	EFS_BLOCKSIZE		(1 << EFS_BLOCKSIZE_BITS)
typedef	int32_t		efs_block_t;
typedef uint32_t	efs_ino_t;
#define	EFS_DIRECTEXTENTS	12
typedef union extent_u  efs_extent;
typedef struct edevs  efs_devs;
struct	efs_dinode ;
struct efs_inode_info ;
#define EFS_DIRBSIZE_BITS	EFS_BLOCKSIZE_BITS
#define EFS_DIRBSIZE		(1 << EFS_DIRBSIZE_BITS)
struct efs_dentry ;
#define EFS_DENTSIZE	(sizeof(struct efs_dentry) - 3 + 1)
#define EFS_MAXNAMELEN  ((1 << (sizeof(char) * 8)) - 1)
#define EFS_DIRBLK_HEADERSIZE	4
#define EFS_DIRBLK_MAGIC	0xbeef
struct efs_dir ;
#define EFS_MAXENTS \
((EFS_DIRBSIZE - EFS_DIRBLK_HEADERSIZE) / \
(EFS_DENTSIZE + sizeof(char)))
#define EFS_SLOTAT(dir, slot) EFS_REALOFF((dir)->space[slot])
#define EFS_REALOFF(offset) ((offset << 1))
static inline struct efs_inode_info *INODE_INFO(struct inode *inode)
static inline struct efs_sb_info *SUPER_INFO(struct super_block *sb)
struct statfs;
struct fid;
extern const struct inode_operations efs_dir_inode_operations;
extern const struct file_operations efs_dir_operations;
extern const struct address_space_operations efs_symlink_aops;
extern struct inode *efs_iget(struct super_block *, unsigned long);
extern efs_block_t efs_map_block(struct inode *, efs_block_t);
extern int efs_get_block(struct inode *, sector_t, struct buffer_head *, int);
extern struct dentry *efs_lookup(struct inode *, struct dentry *, struct nameidata *);
extern struct dentry *efs_fh_to_dentry(struct super_block *sb, struct fid *fid,
int fh_len, int fh_type);
extern struct dentry *efs_fh_to_parent(struct super_block *sb, struct fid *fid,
int fh_len, int fh_type);
extern struct dentry *efs_get_parent(struct dentry *);
extern int efs_bmap(struct inode *, int);
