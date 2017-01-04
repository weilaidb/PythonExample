void hfs_cat_build_key(struct super_block *sb, btree_key *key, u32 parent, struct qstr *name)
static int hfs_cat_build_record(hfs_cat_rec *rec, u32 cnid, struct inode *inode)
static int hfs_cat_build_thread(struct super_block *sb,
hfs_cat_rec *rec, int type,
u32 parentid, struct qstr *name)
int hfs_cat_create(u32 cnid, struct inode *dir, struct qstr *str, struct inode *inode)
int hfs_cat_keycmp(const btree_key *key1, const btree_key *key2)
int hfs_cat_find_brec(struct super_block *sb, u32 cnid,
struct hfs_find_data *fd)
int hfs_cat_delete(u32 cnid, struct inode *dir, struct qstr *str)
int hfs_cat_move(u32 cnid, struct inode *src_dir, struct qstr *src_name,
struct inode *dst_dir, struct qstr *dst_name)
