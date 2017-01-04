#define NAMEI_RA_CHUNKS  2
#define NAMEI_RA_BLOCKS  4
#define NAMEI_RA_SIZE        (NAMEI_RA_CHUNKS * NAMEI_RA_BLOCKS)
#define NAMEI_RA_INDEX(c,b)  (((c) * NAMEI_RA_BLOCKS) + (b))
static struct buffer_head *ext3_append(handle_t *handle,
struct inode *inode,
u32 *block, int *err)
#define assert(test) J_ASSERT(test)
#define dxtrace(command) command
#define dxtrace(command)
struct fake_dirent
;
struct dx_countlimit
;
struct dx_entry
;
struct dx_root
;
struct dx_node
;
struct dx_frame
;
struct dx_map_entry
;
static inline unsigned dx_get_block (struct dx_entry *entry);
static void dx_set_block (struct dx_entry *entry, unsigned value);
static inline unsigned dx_get_hash (struct dx_entry *entry);
static void dx_set_hash (struct dx_entry *entry, unsigned value);
static unsigned dx_get_count (struct dx_entry *entries);
static unsigned dx_get_limit (struct dx_entry *entries);
static void dx_set_count (struct dx_entry *entries, unsigned value);
static void dx_set_limit (struct dx_entry *entries, unsigned value);
static unsigned dx_root_limit (struct inode *dir, unsigned infosize);
static unsigned dx_node_limit (struct inode *dir);
static struct dx_frame *dx_probe(struct qstr *entry,
struct inode *dir,
struct dx_hash_info *hinfo,
struct dx_frame *frame,
int *err);
static void dx_release (struct dx_frame *frames);
static int dx_make_map(struct ext3_dir_entry_2 *de, unsigned blocksize,
struct dx_hash_info *hinfo, struct dx_map_entry map[]);
static void dx_sort_map(struct dx_map_entry *map, unsigned count);
static struct ext3_dir_entry_2 *dx_move_dirents (char *from, char *to,
struct dx_map_entry *offsets, int count);
static struct ext3_dir_entry_2 *dx_pack_dirents(char *base, unsigned blocksize);
static void dx_insert_block (struct dx_frame *frame, u32 hash, u32 block);
static int ext3_htree_next_block(struct inode *dir, __u32 hash,
struct dx_frame *frame,
struct dx_frame *frames,
__u32 *start_hash);
static struct buffer_head * ext3_dx_find_entry(struct inode *dir,
struct qstr *entry, struct ext3_dir_entry_2 **res_dir,
int *err);
static int ext3_dx_add_entry(handle_t *handle, struct dentry *dentry,
struct inode *inode);
static inline struct ext3_dir_entry_2 *
ext3_next_entry(struct ext3_dir_entry_2 *p)
static inline unsigned dx_get_block (struct dx_entry *entry)
static inline void dx_set_block (struct dx_entry *entry, unsigned value)
static inline unsigned dx_get_hash (struct dx_entry *entry)
static inline void dx_set_hash (struct dx_entry *entry, unsigned value)
static inline unsigned dx_get_count (struct dx_entry *entries)
static inline unsigned dx_get_limit (struct dx_entry *entries)
static inline void dx_set_count (struct dx_entry *entries, unsigned value)
static inline void dx_set_limit (struct dx_entry *entries, unsigned value)
static inline unsigned dx_root_limit (struct inode *dir, unsigned infosize)
static inline unsigned dx_node_limit (struct inode *dir)
static void dx_show_index (char * label, struct dx_entry *entries)
struct stats
;
static struct stats dx_show_leaf(struct dx_hash_info *hinfo, struct ext3_dir_entry_2 *de,
int size, int show_names)
struct stats dx_show_entries(struct dx_hash_info *hinfo, struct inode *dir,
struct dx_entry *entries, int levels)
static struct dx_frame *
dx_probe(struct qstr *entry, struct inode *dir,
struct dx_hash_info *hinfo, struct dx_frame *frame_in, int *err)
static void dx_release (struct dx_frame *frames)
static int ext3_htree_next_block(struct inode *dir, __u32 hash,
struct dx_frame *frame,
struct dx_frame *frames,
__u32 *start_hash)
static int htree_dirblock_to_tree(struct file *dir_file,
struct inode *dir, int block,
struct dx_hash_info *hinfo,
__u32 start_hash, __u32 start_minor_hash)
int ext3_htree_fill_tree(struct file *dir_file, __u32 start_hash,
__u32 start_minor_hash, __u32 *next_hash)
static int dx_make_map(struct ext3_dir_entry_2 *de, unsigned blocksize,
struct dx_hash_info *hinfo, struct dx_map_entry *map_tail)
static void dx_sort_map (struct dx_map_entry *map, unsigned count)
static void dx_insert_block(struct dx_frame *frame, u32 hash, u32 block)
static void ext3_update_dx_flag(struct inode *inode)
static inline int ext3_match (int len, const char * const name,
struct ext3_dir_entry_2 * de)
static inline int search_dirblock(struct buffer_head * bh,
struct inode *dir,
struct qstr *child,
unsigned long offset,
struct ext3_dir_entry_2 ** res_dir)
static struct buffer_head *ext3_find_entry(struct inode *dir,
struct qstr *entry,
struct ext3_dir_entry_2 **res_dir)
static struct buffer_head * ext3_dx_find_entry(struct inode *dir,
struct qstr *entry, struct ext3_dir_entry_2 **res_dir,
int *err)
static struct dentry *ext3_lookup(struct inode * dir, struct dentry *dentry, struct nameidata *nd)
struct dentry *ext3_get_parent(struct dentry *child)
#define S_SHIFT 12
static unsigned char ext3_type_by_mode[S_IFMT >> S_SHIFT] = ;
static inline void ext3_set_de_type(struct super_block *sb,
struct ext3_dir_entry_2 *de,
umode_t mode)
static struct ext3_dir_entry_2 *
dx_move_dirents(char *from, char *to, struct dx_map_entry *map, int count)
static struct ext3_dir_entry_2 *dx_pack_dirents(char *base, unsigned blocksize)
static struct ext3_dir_entry_2 *do_split(handle_t *handle, struct inode *dir,
struct buffer_head **bh,struct dx_frame *frame,
struct dx_hash_info *hinfo, int *error)
static int add_dirent_to_buf(handle_t *handle, struct dentry *dentry,
struct inode *inode, struct ext3_dir_entry_2 *de,
struct buffer_head * bh)
static int make_indexed_dir(handle_t *handle, struct dentry *dentry,
struct inode *inode, struct buffer_head *bh)
static int ext3_add_entry (handle_t *handle, struct dentry *dentry,
struct inode *inode)
static int ext3_dx_add_entry(handle_t *handle, struct dentry *dentry,
struct inode *inode)
static int ext3_delete_entry (handle_t *handle,
struct inode * dir,
struct ext3_dir_entry_2 * de_del,
struct buffer_head * bh)
static int ext3_add_nondir(handle_t *handle,
struct dentry *dentry, struct inode *inode)
static int ext3_create (struct inode * dir, struct dentry * dentry, int mode,
struct nameidata *nd)
static int ext3_mknod (struct inode * dir, struct dentry *dentry,
int mode, dev_t rdev)
static int ext3_mkdir(struct inode * dir, struct dentry * dentry, int mode)
static int empty_dir (struct inode * inode)
int ext3_orphan_add(handle_t *handle, struct inode *inode)
int ext3_orphan_del(handle_t *handle, struct inode *inode)
static int ext3_rmdir (struct inode * dir, struct dentry *dentry)
static int ext3_unlink(struct inode * dir, struct dentry *dentry)
static int ext3_symlink (struct inode * dir,
struct dentry *dentry, const char * symname)
static int ext3_link (struct dentry * old_dentry,
struct inode * dir, struct dentry *dentry)
#define PARENT_INO(buffer) \
(ext3_next_entry((struct ext3_dir_entry_2 *)(buffer))->inode)
static int ext3_rename (struct inode * old_dir, struct dentry *old_dentry,
struct inode * new_dir,struct dentry *new_dentry)
const struct inode_operations ext3_dir_inode_operations = ;
const struct inode_operations ext3_special_inode_operations = ;
