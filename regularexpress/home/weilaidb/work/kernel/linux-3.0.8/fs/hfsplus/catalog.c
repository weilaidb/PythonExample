int hfsplus_cat_case_cmp_key(const hfsplus_btree_key *k1,
const hfsplus_btree_key *k2)
int hfsplus_cat_bin_cmp_key(const hfsplus_btree_key *k1,
const hfsplus_btree_key *k2)
void hfsplus_cat_build_key(struct super_block *sb, hfsplus_btree_key *key,
u32 parent, struct qstr *str)
static void hfsplus_cat_build_key_uni(hfsplus_btree_key *key, u32 parent,
struct hfsplus_unistr *name)
void hfsplus_cat_set_perms(struct inode *inode, struct hfsplus_perm *perms)
static int hfsplus_cat_build_record(hfsplus_cat_entry *entry,
u32 cnid, struct inode *inode)
static int hfsplus_fill_cat_thread(struct super_block *sb,
hfsplus_cat_entry *entry, int type,
u32 parentid, struct qstr *str)
int hfsplus_find_cat(struct super_block *sb, u32 cnid,
struct hfs_find_data *fd)
int hfsplus_create_cat(u32 cnid, struct inode *dir,
struct qstr *str, struct inode *inode)
int hfsplus_delete_cat(u32 cnid, struct inode *dir, struct qstr *str)
int hfsplus_rename_cat(u32 cnid,
struct inode *src_dir, struct qstr *src_name,
struct inode *dst_dir, struct qstr *dst_name)
