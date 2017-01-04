#define UBIFS_DBG_PRESERVE_UBI
DEFINE_SPINLOCK(dbg_lock);
static char dbg_key_buf0[128];
static char dbg_key_buf1[128];
unsigned int ubifs_chk_flags;
unsigned int ubifs_tst_flags;
module_param_named(debug_chks, ubifs_chk_flags, uint, S_IRUGO | S_IWUSR);
module_param_named(debug_tsts, ubifs_tst_flags, uint, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug_chks, "Debug check flags");
MODULE_PARM_DESC(debug_tsts, "Debug special test flags");
static const char *get_key_fmt(int fmt)
static const char *get_key_hash(int hash)
static const char *get_key_type(int type)
static void sprintf_key(const struct ubifs_info *c, const union ubifs_key *key,
char *buffer)
const char *dbg_key_str0(const struct ubifs_info *c, const union ubifs_key *key)
const char *dbg_key_str1(const struct ubifs_info *c, const union ubifs_key *key)
const char *dbg_ntype(int type)
static const char *dbg_gtype(int type)
const char *dbg_cstate(int cmt_state)
const char *dbg_jhead(int jhead)
static void dump_ch(const struct ubifs_ch *ch)
void dbg_dump_inode(const struct ubifs_info *c, const struct inode *inode)
void dbg_dump_node(const struct ubifs_info *c, const void *node)
void dbg_dump_budget_req(const struct ubifs_budget_req *req)
void dbg_dump_lstats(const struct ubifs_lp_stats *lst)
void dbg_dump_budg(struct ubifs_info *c, const struct ubifs_budg_info *bi)
void dbg_dump_lprop(const struct ubifs_info *c, const struct ubifs_lprops *lp)
void dbg_dump_lprops(struct ubifs_info *c)
void dbg_dump_lpt_info(struct ubifs_info *c)
void dbg_dump_leb(const struct ubifs_info *c, int lnum)
void dbg_dump_znode(const struct ubifs_info *c,
const struct ubifs_znode *znode)
void dbg_dump_heap(struct ubifs_info *c, struct ubifs_lpt_heap *heap, int cat)
void dbg_dump_pnode(struct ubifs_info *c, struct ubifs_pnode *pnode,
struct ubifs_nnode *parent, int iip)
void dbg_dump_tnc(struct ubifs_info *c)
static int dump_znode(struct ubifs_info *c, struct ubifs_znode *znode,
void *priv)
void dbg_dump_index(struct ubifs_info *c)
void dbg_save_space_info(struct ubifs_info *c)
int dbg_check_space_info(struct ubifs_info *c)
int dbg_check_synced_i_size(struct inode *inode)
int dbg_check_dir_size(struct ubifs_info *c, const struct inode *dir)
static int dbg_check_key_order(struct ubifs_info *c, struct ubifs_zbranch *zbr1,
struct ubifs_zbranch *zbr2)
static int dbg_check_znode(struct ubifs_info *c, struct ubifs_zbranch *zbr)
int dbg_check_tnc(struct ubifs_info *c, int extra)
int dbg_walk_index(struct ubifs_info *c, dbg_leaf_callback leaf_cb,
dbg_znode_callback znode_cb, void *priv)
static int add_size(struct ubifs_info *c, struct ubifs_znode *znode, void *priv)
int dbg_check_idx_size(struct ubifs_info *c, long long idx_size)
struct fsck_inode ;
struct fsck_data ;
static struct fsck_inode *add_inode(struct ubifs_info *c,
struct fsck_data *fsckd,
struct ubifs_ino_node *ino)
static struct fsck_inode *search_inode(struct fsck_data *fsckd, ino_t inum)
static struct fsck_inode *read_add_inode(struct ubifs_info *c,
struct fsck_data *fsckd, ino_t inum)
static int check_leaf(struct ubifs_info *c, struct ubifs_zbranch *zbr,
void *priv)
static void free_inodes(struct fsck_data *fsckd)
static int check_inodes(struct ubifs_info *c, struct fsck_data *fsckd)
int dbg_check_filesystem(struct ubifs_info *c)
int dbg_check_data_nodes_order(struct ubifs_info *c, struct list_head *head)
int dbg_check_nondata_nodes_order(struct ubifs_info *c, struct list_head *head)
int dbg_force_in_the_gaps(void)
#define chance(n, d) (simple_rand() <= (n) * 32768LL / (d))
struct failure_mode_info ;
static LIST_HEAD(fmi_list);
static DEFINE_SPINLOCK(fmi_lock);
static unsigned int next;
static int simple_rand(void)
static void failure_mode_init(struct ubifs_info *c)
static void failure_mode_exit(struct ubifs_info *c)
static struct ubifs_info *dbg_find_info(struct ubi_volume_desc *desc)
static int in_failure_mode(struct ubi_volume_desc *desc)
static int do_fail(struct ubi_volume_desc *desc, int lnum, int write)
static void cut_data(const void *buf, int len)
int dbg_leb_read(struct ubi_volume_desc *desc, int lnum, char *buf, int offset,
int len, int check)
int dbg_leb_write(struct ubi_volume_desc *desc, int lnum, const void *buf,
int offset, int len, int dtype)
int dbg_leb_change(struct ubi_volume_desc *desc, int lnum, const void *buf,
int len, int dtype)
int dbg_leb_erase(struct ubi_volume_desc *desc, int lnum)
int dbg_leb_unmap(struct ubi_volume_desc *desc, int lnum)
int dbg_is_mapped(struct ubi_volume_desc *desc, int lnum)
int dbg_leb_map(struct ubi_volume_desc *desc, int lnum, int dtype)
int ubifs_debugging_init(struct ubifs_info *c)
void ubifs_debugging_exit(struct ubifs_info *c)
static struct dentry *dfs_rootdir;
int dbg_debugfs_init(void)
void dbg_debugfs_exit(void)
static int open_debugfs_file(struct inode *inode, struct file *file)
static ssize_t write_debugfs_file(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations dfs_fops = ;
int dbg_debugfs_init_fs(struct ubifs_info *c)
void dbg_debugfs_exit_fs(struct ubifs_info *c)
