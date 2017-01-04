static loff_t get_pos(struct dnode *d, struct hpfs_dirent *fde)
void hpfs_add_pos(struct inode *inode, loff_t *pos)
void hpfs_del_pos(struct inode *inode, loff_t *pos)
static void for_all_poss(struct inode *inode, void (*f)(loff_t *, loff_t, loff_t),
loff_t p1, loff_t p2)
static void hpfs_pos_subst(loff_t *p, loff_t f, loff_t t)
static void hpfs_pos_ins(loff_t *p, loff_t d, loff_t c)
static void hpfs_pos_del(loff_t *p, loff_t d, loff_t c)
static struct hpfs_dirent *dnode_pre_last_de(struct dnode *d)
static struct hpfs_dirent *dnode_last_de(struct dnode *d)
static void set_last_pointer(struct super_block *s, struct dnode *d, dnode_secno ptr)
struct hpfs_dirent *hpfs_add_de(struct super_block *s, struct dnode *d,
const unsigned char *name,
unsigned namelen, secno down_ptr)
static void hpfs_delete_de(struct super_block *s, struct dnode *d,
struct hpfs_dirent *de)
static void fix_up_ptrs(struct super_block *s, struct dnode *d)
static int hpfs_add_to_dnode(struct inode *i, dnode_secno dno,
const unsigned char *name, unsigned namelen,
struct hpfs_dirent *new_de, dnode_secno down_ptr)
int hpfs_add_dirent(struct inode *i,
const unsigned char *name, unsigned namelen,
struct hpfs_dirent *new_de)
static secno move_to_top(struct inode *i, dnode_secno from, dnode_secno to)
static void delete_empty_dnode(struct inode *i, dnode_secno dno)
int hpfs_remove_dirent(struct inode *i, dnode_secno dno, struct hpfs_dirent *de,
struct quad_buffer_head *qbh, int depth)
void hpfs_count_dnodes(struct super_block *s, dnode_secno dno, int *n_dnodes,
int *n_subdirs, int *n_items)
static struct hpfs_dirent *map_nth_dirent(struct super_block *s, dnode_secno dno, int n,
struct quad_buffer_head *qbh, struct dnode **dn)
dnode_secno hpfs_de_as_down_as_possible(struct super_block *s, dnode_secno dno)
struct hpfs_dirent *map_pos_dirent(struct inode *inode, loff_t *posp,
struct quad_buffer_head *qbh)
struct hpfs_dirent *map_dirent(struct inode *inode, dnode_secno dno,
const unsigned char *name, unsigned len,
dnode_secno *dd, struct quad_buffer_head *qbh)
void hpfs_remove_dtree(struct super_block *s, dnode_secno dno)
struct hpfs_dirent *map_fnode_dirent(struct super_block *s, fnode_secno fno,
struct fnode *f, struct quad_buffer_head *qbh)
