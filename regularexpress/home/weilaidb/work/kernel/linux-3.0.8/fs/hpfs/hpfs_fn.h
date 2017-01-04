#define EIOERROR  EIO
#define EFSERROR  EPERM
#define EMEMERROR ENOMEM
#define ANODE_ALLOC_FWD	512
#define FNODE_ALLOC_FWD	0
#define ALLOC_FWD_MIN	16
#define ALLOC_FWD_MAX	128
#define ALLOC_M		1
#define FNODE_RD_AHEAD	16
#define ANODE_RD_AHEAD	16
#define DNODE_RD_AHEAD	4
#define FREE_DNODES_ADD	58
#define FREE_DNODES_DEL	29
#define CHKCOND(x,y) if (!(x)) printk y
#define PRINTK(x) printk x
#undef PRINTK
#define PRINTK(x)
struct hpfs_inode_info ;
struct hpfs_sb_info ;
struct quad_buffer_head ;
static inline dnode_secno de_down_pointer (struct hpfs_dirent *de)
static inline struct hpfs_dirent *dnode_first_de (struct dnode *dnode)
static inline struct hpfs_dirent *dnode_end_de (struct dnode *dnode)
static inline struct hpfs_dirent *de_next_de (struct hpfs_dirent *de)
static inline struct extended_attribute *fnode_ea(struct fnode *fnode)
static inline struct extended_attribute *fnode_end_ea(struct fnode *fnode)
static unsigned ea_valuelen(struct extended_attribute *ea)
static inline struct extended_attribute *next_ea(struct extended_attribute *ea)
static inline secno ea_sec(struct extended_attribute *ea)
static inline secno ea_len(struct extended_attribute *ea)
static inline char *ea_data(struct extended_attribute *ea)
static inline unsigned de_size(int namelen, secno down_ptr)
static inline void copy_de(struct hpfs_dirent *dst, struct hpfs_dirent *src)
static inline unsigned tstbits(u32 *bmp, unsigned b, unsigned n)
int hpfs_chk_sectors(struct super_block *, secno, int, char *);
secno hpfs_alloc_sector(struct super_block *, secno, unsigned, int);
int hpfs_alloc_if_possible(struct super_block *, secno);
void hpfs_free_sectors(struct super_block *, secno, unsigned);
int hpfs_check_free_dnodes(struct super_block *, int);
void hpfs_free_dnode(struct super_block *, secno);
struct dnode *hpfs_alloc_dnode(struct super_block *, secno, dnode_secno *, struct quad_buffer_head *);
struct fnode *hpfs_alloc_fnode(struct super_block *, secno, fnode_secno *, struct buffer_head **);
struct anode *hpfs_alloc_anode(struct super_block *, secno, anode_secno *, struct buffer_head **);
secno hpfs_bplus_lookup(struct super_block *, struct inode *, struct bplus_header *, unsigned, struct buffer_head *);
secno hpfs_add_sector_to_btree(struct super_block *, secno, int, unsigned);
void hpfs_remove_btree(struct super_block *, struct bplus_header *);
int hpfs_ea_read(struct super_block *, secno, int, unsigned, unsigned, char *);
int hpfs_ea_write(struct super_block *, secno, int, unsigned, unsigned, const char *);
void hpfs_ea_remove(struct super_block *, secno, int, unsigned);
void hpfs_truncate_btree(struct super_block *, secno, int, unsigned);
void hpfs_remove_fnode(struct super_block *, fnode_secno fno);
void *hpfs_map_sector(struct super_block *, unsigned, struct buffer_head **, int);
void *hpfs_get_sector(struct super_block *, unsigned, struct buffer_head **);
void *hpfs_map_4sectors(struct super_block *, unsigned, struct quad_buffer_head *, int);
void *hpfs_get_4sectors(struct super_block *, unsigned, struct quad_buffer_head *);
void hpfs_brelse4(struct quad_buffer_head *);
void hpfs_mark_4buffers_dirty(struct quad_buffer_head *);
extern const struct dentry_operations hpfs_dentry_operations;
struct dentry *hpfs_lookup(struct inode *, struct dentry *, struct nameidata *);
extern const struct file_operations hpfs_dir_ops;
void hpfs_add_pos(struct inode *, loff_t *);
void hpfs_del_pos(struct inode *, loff_t *);
struct hpfs_dirent *hpfs_add_de(struct super_block *, struct dnode *,
const unsigned char *, unsigned, secno);
int hpfs_add_dirent(struct inode *, const unsigned char *, unsigned,
struct hpfs_dirent *);
int hpfs_remove_dirent(struct inode *, dnode_secno, struct hpfs_dirent *, struct quad_buffer_head *, int);
void hpfs_count_dnodes(struct super_block *, dnode_secno, int *, int *, int *);
dnode_secno hpfs_de_as_down_as_possible(struct super_block *, dnode_secno dno);
struct hpfs_dirent *map_pos_dirent(struct inode *, loff_t *, struct quad_buffer_head *);
struct hpfs_dirent *map_dirent(struct inode *, dnode_secno,
const unsigned char *, unsigned, dnode_secno *,
struct quad_buffer_head *);
void hpfs_remove_dtree(struct super_block *, dnode_secno);
struct hpfs_dirent *map_fnode_dirent(struct super_block *, fnode_secno, struct fnode *, struct quad_buffer_head *);
void hpfs_ea_ext_remove(struct super_block *, secno, int, unsigned);
int hpfs_read_ea(struct super_block *, struct fnode *, char *, char *, int);
char *hpfs_get_ea(struct super_block *, struct fnode *, char *, int *);
void hpfs_set_ea(struct inode *, struct fnode *, const char *,
const char *, int);
int hpfs_file_fsync(struct file *, int);
extern const struct file_operations hpfs_file_ops;
extern const struct inode_operations hpfs_file_iops;
extern const struct address_space_operations hpfs_aops;
void hpfs_init_inode(struct inode *);
void hpfs_read_inode(struct inode *);
void hpfs_write_inode(struct inode *);
void hpfs_write_inode_nolock(struct inode *);
int hpfs_setattr(struct dentry *, struct iattr *);
void hpfs_write_if_changed(struct inode *);
void hpfs_evict_inode(struct inode *);
unsigned *hpfs_map_dnode_bitmap(struct super_block *, struct quad_buffer_head *);
unsigned *hpfs_map_bitmap(struct super_block *, unsigned, struct quad_buffer_head *, char *);
unsigned char *hpfs_load_code_page(struct super_block *, secno);
secno *hpfs_load_bitmap_directory(struct super_block *, secno bmp);
struct fnode *hpfs_map_fnode(struct super_block *s, ino_t, struct buffer_head **);
struct anode *hpfs_map_anode(struct super_block *s, anode_secno, struct buffer_head **);
struct dnode *hpfs_map_dnode(struct super_block *s, dnode_secno, struct quad_buffer_head *);
dnode_secno hpfs_fnode_dno(struct super_block *s, ino_t ino);
unsigned char hpfs_upcase(unsigned char *, unsigned char);
int hpfs_chk_name(const unsigned char *, unsigned *);
unsigned char *hpfs_translate_name(struct super_block *, unsigned char *, unsigned, int, int);
int hpfs_compare_names(struct super_block *, const unsigned char *, unsigned,
const unsigned char *, unsigned, int);
int hpfs_is_name_long(const unsigned char *, unsigned);
void hpfs_adjust_length(const unsigned char *, unsigned *);
extern const struct inode_operations hpfs_dir_iops;
extern const struct address_space_operations hpfs_symlink_aops;
static inline struct hpfs_inode_info *hpfs_i(struct inode *inode)
static inline struct hpfs_sb_info *hpfs_sb(struct super_block *sb)
void hpfs_error(struct super_block *, const char *, ...)
__attribute__((format (printf, 2, 3)));
int hpfs_stop_cycles(struct super_block *, int, int *, int *, char *);
unsigned hpfs_count_one_bitmap(struct super_block *, secno);
static inline time_t local_to_gmt(struct super_block *s, time32_t t)
static inline time32_t gmt_to_local(struct super_block *s, time_t t)
static inline void hpfs_lock(struct super_block *s)
static inline void hpfs_unlock(struct super_block *s)
static inline void hpfs_lock_assert(struct super_block *s)
