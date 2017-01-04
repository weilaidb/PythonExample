enum isofs_file_format ;
struct iso_inode_info ;
struct isofs_sb_info ;
#define ISOFS_INVALID_MODE ((mode_t) -1)
static inline struct isofs_sb_info *ISOFS_SB(struct super_block *sb)
static inline struct iso_inode_info *ISOFS_I(struct inode *inode)
static inline int isonum_711(char *p)
static inline int isonum_712(char *p)
static inline unsigned int isonum_721(char *p)
static inline unsigned int isonum_722(char *p)
static inline unsigned int isonum_723(char *p)
static inline unsigned int isonum_731(char *p)
static inline unsigned int isonum_732(char *p)
static inline unsigned int isonum_733(char *p)
extern int iso_date(char *, int);
struct inode;
extern int parse_rock_ridge_inode(struct iso_directory_record *, struct inode *);
extern int get_rock_ridge_filename(struct iso_directory_record *, char *, struct inode *);
extern int isofs_name_translate(struct iso_directory_record *, char *, struct inode *);
int get_joliet_filename(struct iso_directory_record *, unsigned char *, struct inode *);
int get_acorn_filename(struct iso_directory_record *, char *, struct inode *);
extern struct dentry *isofs_lookup(struct inode *, struct dentry *, struct nameidata *);
extern struct buffer_head *isofs_bread(struct inode *, sector_t);
extern int isofs_get_blocks(struct inode *, sector_t, struct buffer_head **, unsigned long);
extern struct inode *isofs_iget(struct super_block *sb,
unsigned long block,
unsigned long offset);
static inline unsigned long isofs_get_ino(unsigned long block,
unsigned long offset,
unsigned long bufbits)
static inline void
isofs_normalize_block_and_offset(struct iso_directory_record* de,
unsigned long *block,
unsigned long *offset)
extern const struct inode_operations isofs_dir_inode_operations;
extern const struct file_operations isofs_dir_operations;
extern const struct address_space_operations isofs_symlink_aops;
extern const struct export_operations isofs_export_ops;
