#define _LINUX_BEFS_H
#define BEFS_VERSION "0.9.3"
typedef u64 befs_blocknr_t;
typedef struct befs_mount_options  befs_mount_options;
typedef struct befs_sb_info  befs_sb_info;
typedef struct befs_inode_info  befs_inode_info;
enum befs_err ;
void befs_error(const struct super_block *sb, const char *fmt, ...);
void befs_warning(const struct super_block *sb, const char *fmt, ...);
void befs_debug(const struct super_block *sb, const char *fmt, ...);
void befs_dump_super_block(const struct super_block *sb, befs_super_block *);
void befs_dump_inode(const struct super_block *sb, befs_inode *);
void befs_dump_index_entry(const struct super_block *sb, befs_disk_btree_super *);
void befs_dump_index_node(const struct super_block *sb, befs_btree_nodehead *);
static inline befs_sb_info *
BEFS_SB(const struct super_block *super)
static inline befs_inode_info *
BEFS_I(const struct inode *inode)
static inline befs_blocknr_t
iaddr2blockno(struct super_block *sb, befs_inode_addr * iaddr)
static inline befs_inode_addr
blockno2iaddr(struct super_block *sb, befs_blocknr_t blockno)
static inline unsigned int
befs_iaddrs_per_block(struct super_block *sb)
static inline int
befs_iaddr_is_empty(befs_inode_addr * iaddr)
static inline size_t
befs_brun_size(struct super_block *sb, befs_block_run run)
