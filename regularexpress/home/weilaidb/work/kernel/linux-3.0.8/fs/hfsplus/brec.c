static struct hfs_bnode *hfs_bnode_split(struct hfs_find_data *fd);
static int hfs_brec_update_parent(struct hfs_find_data *fd);
static int hfs_btree_inc_height(struct hfs_btree *);
u16 hfs_brec_lenoff(struct hfs_bnode *node, u16 rec, u16 *off)
u16 hfs_brec_keylen(struct hfs_bnode *node, u16 rec)
int hfs_brec_insert(struct hfs_find_data *fd, void *entry, int entry_len)
int hfs_brec_remove(struct hfs_find_data *fd)
static struct hfs_bnode *hfs_bnode_split(struct hfs_find_data *fd)
static int hfs_brec_update_parent(struct hfs_find_data *fd)
static int hfs_btree_inc_height(struct hfs_btree *tree)
