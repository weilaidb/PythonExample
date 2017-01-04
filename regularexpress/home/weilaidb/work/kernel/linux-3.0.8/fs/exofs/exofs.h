#define __EXOFS_H__
#define EXOFS_ERR(fmt, a...) printk(KERN_ERR "exofs: " fmt, ##a)
#define EXOFS_DBGMSG(fmt, a...) \
printk(KERN_NOTICE "exofs @%s:%d: " fmt, __func__, __LINE__, ##a)
#define EXOFS_DBGMSG(fmt, a...) \
do  while (0)
#define _LLU(x) (unsigned long long)(x)
struct exofs_layout ;
struct exofs_sb_info ;
struct exofs_i_info ;
static inline osd_id exofs_oi_objno(struct exofs_i_info *oi)
struct exofs_io_state;
typedef void (*exofs_io_done_fn)(struct exofs_io_state *or, void *private);
struct exofs_io_state ;
static inline unsigned exofs_io_state_size(unsigned numdevs)
#define OBJ_2BCREATED	0
#define OBJ_CREATED	1
static inline int obj_2bcreated(struct exofs_i_info *oi)
static inline void set_obj_2bcreated(struct exofs_i_info *oi)
static inline int obj_created(struct exofs_i_info *oi)
static inline void set_obj_created(struct exofs_i_info *oi)
int __exofs_wait_obj_created(struct exofs_i_info *oi);
static inline int wait_obj_created(struct exofs_i_info *oi)
static inline struct exofs_i_info *exofs_i(struct inode *inode)
unsigned exofs_layout_od_id(struct exofs_layout *layout,
osd_id obj_no, unsigned layout_index);
#define EXOFS_LINK_MAX           32000
void exofs_make_credential(u8 cred_a[OSD_CAP_LEN],
const struct osd_obj_id *obj);
int exofs_read_kern(struct osd_dev *od, u8 *cred, struct osd_obj_id *obj,
u64 offset, void *p, unsigned length);
int  exofs_get_io_state(struct exofs_layout *layout,
struct exofs_io_state **ios);
void exofs_put_io_state(struct exofs_io_state *ios);
int exofs_check_io(struct exofs_io_state *ios, u64 *resid);
int exofs_sbi_create(struct exofs_io_state *ios);
int exofs_sbi_remove(struct exofs_io_state *ios);
int exofs_sbi_write(struct exofs_io_state *ios);
int exofs_sbi_read(struct exofs_io_state *ios);
int extract_attr_from_ios(struct exofs_io_state *ios, struct osd_attr *attr);
int exofs_oi_truncate(struct exofs_i_info *oi, u64 new_len);
static inline int exofs_oi_write(struct exofs_i_info *oi,
struct exofs_io_state *ios)
static inline int exofs_oi_read(struct exofs_i_info *oi,
struct exofs_io_state *ios)
unsigned exofs_max_io_pages(struct exofs_layout *layout,
unsigned expected_pages);
int exofs_setattr(struct dentry *, struct iattr *);
int exofs_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata);
extern struct inode *exofs_iget(struct super_block *, unsigned long);
struct inode *exofs_new_inode(struct inode *, int);
extern int exofs_write_inode(struct inode *, struct writeback_control *wbc);
extern void exofs_evict_inode(struct inode *);
int exofs_add_link(struct dentry *, struct inode *);
ino_t exofs_inode_by_name(struct inode *, struct dentry *);
int exofs_delete_entry(struct exofs_dir_entry *, struct page *);
int exofs_make_empty(struct inode *, struct inode *);
struct exofs_dir_entry *exofs_find_entry(struct inode *, struct dentry *,
struct page **);
int exofs_empty_dir(struct inode *);
struct exofs_dir_entry *exofs_dotdot(struct inode *, struct page **);
ino_t exofs_parent_ino(struct dentry *child);
int exofs_set_link(struct inode *, struct exofs_dir_entry *, struct page *,
struct inode *);
int exofs_sbi_write_stats(struct exofs_sb_info *sbi);
extern const struct file_operations exofs_dir_operations;
extern const struct inode_operations exofs_file_inode_operations;
extern const struct file_operations exofs_file_operations;
extern const struct address_space_operations exofs_aops;
extern const struct osd_attr g_attr_logical_length;
extern const struct inode_operations exofs_dir_inode_operations;
extern const struct inode_operations exofs_special_inode_operations;
extern const struct inode_operations exofs_symlink_inode_operations;
extern const struct inode_operations exofs_fast_symlink_inode_operations;
