static inline void zero_ino_node_unused(struct ubifs_ino_node *ino)
static inline void zero_dent_node_unused(struct ubifs_dent_node *dent)
static inline void zero_data_node_unused(struct ubifs_data_node *data)
static inline void zero_trun_node_unused(struct ubifs_trun_node *trun)
static int reserve_space(struct ubifs_info *c, int jhead, int len)
static int write_node(struct ubifs_info *c, int jhead, void *node, int len,
int *lnum, int *offs)
static int write_head(struct ubifs_info *c, int jhead, void *buf, int len,
int *lnum, int *offs, int sync)
static int make_reservation(struct ubifs_info *c, int jhead, int len)
static inline void release_head(struct ubifs_info *c, int jhead)
static void finish_reservation(struct ubifs_info *c)
static int get_dent_type(int mode)
static void pack_inode(struct ubifs_info *c, struct ubifs_ino_node *ino,
const struct inode *inode, int last)
static void mark_inode_clean(struct ubifs_info *c, struct ubifs_inode *ui)
int ubifs_jnl_update(struct ubifs_info *c, const struct inode *dir,
const struct qstr *nm, const struct inode *inode,
int deletion, int xent)
int ubifs_jnl_write_data(struct ubifs_info *c, const struct inode *inode,
const union ubifs_key *key, const void *buf, int len)
int ubifs_jnl_write_inode(struct ubifs_info *c, const struct inode *inode)
int ubifs_jnl_delete_inode(struct ubifs_info *c, const struct inode *inode)
int ubifs_jnl_rename(struct ubifs_info *c, const struct inode *old_dir,
const struct dentry *old_dentry,
const struct inode *new_dir,
const struct dentry *new_dentry, int sync)
static int recomp_data_node(struct ubifs_data_node *dn, int *new_len)
int ubifs_jnl_truncate(struct ubifs_info *c, const struct inode *inode,
loff_t old_size, loff_t new_size)
int ubifs_jnl_delete_xattr(struct ubifs_info *c, const struct inode *host,
const struct inode *inode, const struct qstr *nm)
int ubifs_jnl_change_xattr(struct ubifs_info *c, const struct inode *inode,
const struct inode *host)
