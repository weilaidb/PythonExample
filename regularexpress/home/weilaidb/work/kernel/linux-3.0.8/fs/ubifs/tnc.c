enum ;
static int insert_old_idx(struct ubifs_info *c, int lnum, int offs)
int insert_old_idx_znode(struct ubifs_info *c, struct ubifs_znode *znode)
static int ins_clr_old_idx_znode(struct ubifs_info *c,
struct ubifs_znode *znode)
void destroy_old_idx(struct ubifs_info *c)
static struct ubifs_znode *copy_znode(struct ubifs_info *c,
struct ubifs_znode *znode)
static int add_idx_dirt(struct ubifs_info *c, int lnum, int dirt)
static struct ubifs_znode *dirty_cow_znode(struct ubifs_info *c,
struct ubifs_zbranch *zbr)
static int lnc_add(struct ubifs_info *c, struct ubifs_zbranch *zbr,
const void *node)
static int lnc_add_directly(struct ubifs_info *c, struct ubifs_zbranch *zbr,
void *node)
static void lnc_free(struct ubifs_zbranch *zbr)
static int tnc_read_node_nm(struct ubifs_info *c, struct ubifs_zbranch *zbr,
void *node)
static int try_read_node(const struct ubifs_info *c, void *buf, int type,
int len, int lnum, int offs)
static int fallible_read_node(struct ubifs_info *c, const union ubifs_key *key,
struct ubifs_zbranch *zbr, void *node)
static int matches_name(struct ubifs_info *c, struct ubifs_zbranch *zbr,
const struct qstr *nm)
static struct ubifs_znode *get_znode(struct ubifs_info *c,
struct ubifs_znode *znode, int n)
static int tnc_next(struct ubifs_info *c, struct ubifs_znode **zn, int *n)
static int tnc_prev(struct ubifs_info *c, struct ubifs_znode **zn, int *n)
static int resolve_collision(struct ubifs_info *c, const union ubifs_key *key,
struct ubifs_znode **zn, int *n,
const struct qstr *nm)
static int fallible_matches_name(struct ubifs_info *c,
struct ubifs_zbranch *zbr,
const struct qstr *nm)
static int fallible_resolve_collision(struct ubifs_info *c,
const union ubifs_key *key,
struct ubifs_znode **zn, int *n,
const struct qstr *nm, int adding)
static int matches_position(struct ubifs_zbranch *zbr, int lnum, int offs)
static int resolve_collision_directly(struct ubifs_info *c,
const union ubifs_key *key,
struct ubifs_znode **zn, int *n,
int lnum, int offs)
static struct ubifs_znode *dirty_cow_bottom_up(struct ubifs_info *c,
struct ubifs_znode *znode)
int ubifs_lookup_level0(struct ubifs_info *c, const union ubifs_key *key,
struct ubifs_znode **zn, int *n)
static int lookup_level0_dirty(struct ubifs_info *c, const union ubifs_key *key,
struct ubifs_znode **zn, int *n)
static int maybe_leb_gced(struct ubifs_info *c, int lnum, int gc_seq1)
int ubifs_tnc_locate(struct ubifs_info *c, const union ubifs_key *key,
void *node, int *lnum, int *offs)
int ubifs_tnc_get_bu_keys(struct ubifs_info *c, struct bu_info *bu)
static int read_wbuf(struct ubifs_wbuf *wbuf, void *buf, int len, int lnum,
int offs)
static int validate_data_node(struct ubifs_info *c, void *buf,
struct ubifs_zbranch *zbr)
int ubifs_tnc_bulk_read(struct ubifs_info *c, struct bu_info *bu)
static int do_lookup_nm(struct ubifs_info *c, const union ubifs_key *key,
void *node, const struct qstr *nm)
int ubifs_tnc_lookup_nm(struct ubifs_info *c, const union ubifs_key *key,
void *node, const struct qstr *nm)
static void correct_parent_keys(const struct ubifs_info *c,
struct ubifs_znode *znode)
static void insert_zbranch(struct ubifs_znode *znode,
const struct ubifs_zbranch *zbr, int n)
static int tnc_insert(struct ubifs_info *c, struct ubifs_znode *znode,
struct ubifs_zbranch *zbr, int n)
int ubifs_tnc_add(struct ubifs_info *c, const union ubifs_key *key, int lnum,
int offs, int len)
int ubifs_tnc_replace(struct ubifs_info *c, const union ubifs_key *key,
int old_lnum, int old_offs, int lnum, int offs, int len)
int ubifs_tnc_add_nm(struct ubifs_info *c, const union ubifs_key *key,
int lnum, int offs, int len, const struct qstr *nm)
static int tnc_delete(struct ubifs_info *c, struct ubifs_znode *znode, int n)
int ubifs_tnc_remove(struct ubifs_info *c, const union ubifs_key *key)
int ubifs_tnc_remove_nm(struct ubifs_info *c, const union ubifs_key *key,
const struct qstr *nm)
static int key_in_range(struct ubifs_info *c, union ubifs_key *key,
union ubifs_key *from_key, union ubifs_key *to_key)
int ubifs_tnc_remove_range(struct ubifs_info *c, union ubifs_key *from_key,
union ubifs_key *to_key)
int ubifs_tnc_remove_ino(struct ubifs_info *c, ino_t inum)
struct ubifs_dent_node *ubifs_tnc_next_ent(struct ubifs_info *c,
union ubifs_key *key,
const struct qstr *nm)
static void tnc_destroy_cnext(struct ubifs_info *c)
void ubifs_tnc_close(struct ubifs_info *c)
static struct ubifs_znode *left_znode(struct ubifs_info *c,
struct ubifs_znode *znode)
static struct ubifs_znode *right_znode(struct ubifs_info *c,
struct ubifs_znode *znode)
static struct ubifs_znode *lookup_znode(struct ubifs_info *c,
union ubifs_key *key, int level,
int lnum, int offs)
int is_idx_node_in_tnc(struct ubifs_info *c, union ubifs_key *key, int level,
int lnum, int offs)
static int is_leaf_node_in_tnc(struct ubifs_info *c, union ubifs_key *key,
int lnum, int offs)
int ubifs_tnc_has_node(struct ubifs_info *c, union ubifs_key *key, int level,
int lnum, int offs, int is_idx)
int ubifs_dirty_idx_node(struct ubifs_info *c, union ubifs_key *key, int level,
int lnum, int offs)
int dbg_check_inode_size(struct ubifs_info *c, const struct inode *inode,
loff_t size)
