#define __UBIFS_DEBUG_H__
typedef int (*dbg_leaf_callback)(struct ubifs_info *c,
struct ubifs_zbranch *zbr, void *priv);
typedef int (*dbg_znode_callback)(struct ubifs_info *c,
struct ubifs_znode *znode, void *priv);
struct ubifs_debug_info ;
#define ubifs_assert(expr) do  while (0)
#define ubifs_assert_cmt_locked(c) do  while (0)
#define dbg_dump_stack() dump_stack()
#define dbg_err(fmt, ...) do  while (0)
const char *dbg_key_str0(const struct ubifs_info *c,
const union ubifs_key *key);
const char *dbg_key_str1(const struct ubifs_info *c,
const union ubifs_key *key);
#define DBGKEY(key) dbg_key_str0(c, (key))
#define DBGKEY1(key) dbg_key_str1(c, (key))
#define ubifs_dbg_msg(type, fmt, ...) do  while (0)
#define dbg_msg(fmt, ...)   ubifs_dbg_msg("msg", fmt, ##__VA_ARGS__)
#define dbg_gen(fmt, ...)   ubifs_dbg_msg("gen", fmt, ##__VA_ARGS__)
#define dbg_jnl(fmt, ...)   ubifs_dbg_msg("jnl", fmt, ##__VA_ARGS__)
#define dbg_tnc(fmt, ...)   ubifs_dbg_msg("tnc", fmt, ##__VA_ARGS__)
#define dbg_lp(fmt, ...)    ubifs_dbg_msg("lp", fmt, ##__VA_ARGS__)
#define dbg_find(fmt, ...)  ubifs_dbg_msg("find", fmt, ##__VA_ARGS__)
#define dbg_mnt(fmt, ...)   ubifs_dbg_msg("mnt", fmt, ##__VA_ARGS__)
#define dbg_io(fmt, ...)    ubifs_dbg_msg("io", fmt, ##__VA_ARGS__)
#define dbg_cmt(fmt, ...)   ubifs_dbg_msg("cmt", fmt, ##__VA_ARGS__)
#define dbg_budg(fmt, ...)  ubifs_dbg_msg("budg", fmt, ##__VA_ARGS__)
#define dbg_log(fmt, ...)   ubifs_dbg_msg("log", fmt, ##__VA_ARGS__)
#define dbg_gc(fmt, ...)    ubifs_dbg_msg("gc", fmt, ##__VA_ARGS__)
#define dbg_scan(fmt, ...)  ubifs_dbg_msg("scan", fmt, ##__VA_ARGS__)
#define dbg_rcvry(fmt, ...) ubifs_dbg_msg("rcvry", fmt, ##__VA_ARGS__)
enum ;
enum ;
extern spinlock_t dbg_lock;
extern unsigned int ubifs_msg_flags;
extern unsigned int ubifs_chk_flags;
extern unsigned int ubifs_tst_flags;
int ubifs_debugging_init(struct ubifs_info *c);
void ubifs_debugging_exit(struct ubifs_info *c);
const char *dbg_ntype(int type);
const char *dbg_cstate(int cmt_state);
const char *dbg_jhead(int jhead);
const char *dbg_get_key_dump(const struct ubifs_info *c,
const union ubifs_key *key);
void dbg_dump_inode(const struct ubifs_info *c, const struct inode *inode);
void dbg_dump_node(const struct ubifs_info *c, const void *node);
void dbg_dump_lpt_node(const struct ubifs_info *c, void *node, int lnum,
int offs);
void dbg_dump_budget_req(const struct ubifs_budget_req *req);
void dbg_dump_lstats(const struct ubifs_lp_stats *lst);
void dbg_dump_budg(struct ubifs_info *c, const struct ubifs_budg_info *bi);
void dbg_dump_lprop(const struct ubifs_info *c, const struct ubifs_lprops *lp);
void dbg_dump_lprops(struct ubifs_info *c);
void dbg_dump_lpt_info(struct ubifs_info *c);
void dbg_dump_leb(const struct ubifs_info *c, int lnum);
void dbg_dump_znode(const struct ubifs_info *c,
const struct ubifs_znode *znode);
void dbg_dump_heap(struct ubifs_info *c, struct ubifs_lpt_heap *heap, int cat);
void dbg_dump_pnode(struct ubifs_info *c, struct ubifs_pnode *pnode,
struct ubifs_nnode *parent, int iip);
void dbg_dump_tnc(struct ubifs_info *c);
void dbg_dump_index(struct ubifs_info *c);
void dbg_dump_lpt_lebs(const struct ubifs_info *c);
int dbg_walk_index(struct ubifs_info *c, dbg_leaf_callback leaf_cb,
dbg_znode_callback znode_cb, void *priv);
void dbg_save_space_info(struct ubifs_info *c);
int dbg_check_space_info(struct ubifs_info *c);
int dbg_check_lprops(struct ubifs_info *c);
int dbg_old_index_check_init(struct ubifs_info *c, struct ubifs_zbranch *zroot);
int dbg_check_old_index(struct ubifs_info *c, struct ubifs_zbranch *zroot);
int dbg_check_cats(struct ubifs_info *c);
int dbg_check_ltab(struct ubifs_info *c);
int dbg_chk_lpt_free_spc(struct ubifs_info *c);
int dbg_chk_lpt_sz(struct ubifs_info *c, int action, int len);
int dbg_check_synced_i_size(struct inode *inode);
int dbg_check_dir_size(struct ubifs_info *c, const struct inode *dir);
int dbg_check_tnc(struct ubifs_info *c, int extra);
int dbg_check_idx_size(struct ubifs_info *c, long long idx_size);
int dbg_check_filesystem(struct ubifs_info *c);
void dbg_check_heap(struct ubifs_info *c, struct ubifs_lpt_heap *heap, int cat,
int add_pos);
int dbg_check_lpt_nodes(struct ubifs_info *c, struct ubifs_cnode *cnode,
int row, int col);
int dbg_check_inode_size(struct ubifs_info *c, const struct inode *inode,
loff_t size);
int dbg_check_data_nodes_order(struct ubifs_info *c, struct list_head *head);
int dbg_check_nondata_nodes_order(struct ubifs_info *c, struct list_head *head);
static inline int dbg_force_in_the_gaps_enabled(void)
int dbg_force_in_the_gaps(void);
#define dbg_failure_mode (ubifs_tst_flags & UBIFS_TST_RCVRY)
#define ubi_leb_read   dbg_leb_read
#define ubi_leb_write  dbg_leb_write
#define ubi_leb_change dbg_leb_change
#define ubi_leb_erase  dbg_leb_erase
#define ubi_leb_unmap  dbg_leb_unmap
#define ubi_is_mapped  dbg_is_mapped
#define ubi_leb_map    dbg_leb_map
int dbg_leb_read(struct ubi_volume_desc *desc, int lnum, char *buf, int offset,
int len, int check);
int dbg_leb_write(struct ubi_volume_desc *desc, int lnum, const void *buf,
int offset, int len, int dtype);
int dbg_leb_change(struct ubi_volume_desc *desc, int lnum, const void *buf,
int len, int dtype);
int dbg_leb_erase(struct ubi_volume_desc *desc, int lnum);
int dbg_leb_unmap(struct ubi_volume_desc *desc, int lnum);
int dbg_is_mapped(struct ubi_volume_desc *desc, int lnum);
int dbg_leb_map(struct ubi_volume_desc *desc, int lnum, int dtype);
static inline int dbg_read(struct ubi_volume_desc *desc, int lnum, char *buf,
int offset, int len)
static inline int dbg_write(struct ubi_volume_desc *desc, int lnum,
const void *buf, int offset, int len)
static inline int dbg_change(struct ubi_volume_desc *desc, int lnum,
const void *buf, int len)
int dbg_debugfs_init(void);
void dbg_debugfs_exit(void);
int dbg_debugfs_init_fs(struct ubifs_info *c);
void dbg_debugfs_exit_fs(struct ubifs_info *c);
#define ubifs_assert(expr)  do  while (0)
#define dbg_err(fmt, ...)   do  while (0)
#define ubifs_dbg_msg(fmt, ...) do  while (0)
#define dbg_dump_stack()
#define ubifs_assert_cmt_locked(c)
#define dbg_msg(fmt, ...)   ubifs_dbg_msg(fmt, ##__VA_ARGS__)
#define dbg_gen(fmt, ...)   ubifs_dbg_msg(fmt, ##__VA_ARGS__)
#define dbg_jnl(fmt, ...)   ubifs_dbg_msg(fmt, ##__VA_ARGS__)
#define dbg_tnc(fmt, ...)   ubifs_dbg_msg(fmt, ##__VA_ARGS__)
#define dbg_lp(fmt, ...)    ubifs_dbg_msg(fmt, ##__VA_ARGS__)
#define dbg_find(fmt, ...)  ubifs_dbg_msg(fmt, ##__VA_ARGS__)
#define dbg_mnt(fmt, ...)   ubifs_dbg_msg(fmt, ##__VA_ARGS__)
#define dbg_io(fmt, ...)    ubifs_dbg_msg(fmt, ##__VA_ARGS__)
#define dbg_cmt(fmt, ...)   ubifs_dbg_msg(fmt, ##__VA_ARGS__)
#define dbg_budg(fmt, ...)  ubifs_dbg_msg(fmt, ##__VA_ARGS__)
#define dbg_log(fmt, ...)   ubifs_dbg_msg(fmt, ##__VA_ARGS__)
#define dbg_gc(fmt, ...)    ubifs_dbg_msg(fmt, ##__VA_ARGS__)
#define dbg_scan(fmt, ...)  ubifs_dbg_msg(fmt, ##__VA_ARGS__)
#define dbg_rcvry(fmt, ...) ubifs_dbg_msg(fmt, ##__VA_ARGS__)
#define DBGKEY(key)  ((char *)(key))
#define DBGKEY1(key) ((char *)(key))
static inline int ubifs_debugging_init(struct ubifs_info *c)
static inline void ubifs_debugging_exit(struct ubifs_info *c)
static inline const char *dbg_ntype(int type)
static inline const char *dbg_cstate(int cmt_state)
static inline const char *dbg_jhead(int jhead)
static inline const char *
dbg_get_key_dump(const struct ubifs_info *c,
const union ubifs_key *key)
static inline void dbg_dump_inode(const struct ubifs_info *c,
const struct inode *inode)
static inline void dbg_dump_node(const struct ubifs_info *c,
const void *node)
static inline void dbg_dump_lpt_node(const struct ubifs_info *c,
void *node, int lnum,
int offs)
static inline void
dbg_dump_budget_req(const struct ubifs_budget_req *req)
static inline void
dbg_dump_lstats(const struct ubifs_lp_stats *lst)
static inline void
dbg_dump_budg(struct ubifs_info *c,
const struct ubifs_budg_info *bi)
static inline void dbg_dump_lprop(const struct ubifs_info *c,
const struct ubifs_lprops *lp)
static inline void dbg_dump_lprops(struct ubifs_info *c)
static inline void dbg_dump_lpt_info(struct ubifs_info *c)
static inline void dbg_dump_leb(const struct ubifs_info *c,
int lnum)
static inline void
dbg_dump_znode(const struct ubifs_info *c,
const struct ubifs_znode *znode)
static inline void dbg_dump_heap(struct ubifs_info *c,
struct ubifs_lpt_heap *heap,
int cat)
static inline void dbg_dump_pnode(struct ubifs_info *c,
struct ubifs_pnode *pnode,
struct ubifs_nnode *parent,
int iip)
static inline void dbg_dump_tnc(struct ubifs_info *c)
static inline void dbg_dump_index(struct ubifs_info *c)
static inline void dbg_dump_lpt_lebs(const struct ubifs_info *c)
static inline int dbg_walk_index(struct ubifs_info *c,
dbg_leaf_callback leaf_cb,
dbg_znode_callback znode_cb,
void *priv)
static inline void dbg_save_space_info(struct ubifs_info *c)
static inline int dbg_check_space_info(struct ubifs_info *c)
static inline int dbg_check_lprops(struct ubifs_info *c)
static inline int
dbg_old_index_check_init(struct ubifs_info *c,
struct ubifs_zbranch *zroot)
static inline int
dbg_check_old_index(struct ubifs_info *c,
struct ubifs_zbranch *zroot)
static inline int dbg_check_cats(struct ubifs_info *c)
static inline int dbg_check_ltab(struct ubifs_info *c)
static inline int dbg_chk_lpt_free_spc(struct ubifs_info *c)
static inline int dbg_chk_lpt_sz(struct ubifs_info *c,
int action, int len)
static inline int dbg_check_synced_i_size(struct inode *inode)
static inline int dbg_check_dir_size(struct ubifs_info *c,
const struct inode *dir)
static inline int dbg_check_tnc(struct ubifs_info *c, int extra)
static inline int dbg_check_idx_size(struct ubifs_info *c,
long long idx_size)
static inline int dbg_check_filesystem(struct ubifs_info *c)
static inline void dbg_check_heap(struct ubifs_info *c,
struct ubifs_lpt_heap *heap,
int cat, int add_pos)
static inline int dbg_check_lpt_nodes(struct ubifs_info *c,
struct ubifs_cnode *cnode, int row, int col)
static inline int dbg_check_inode_size(struct ubifs_info *c,
const struct inode *inode,
loff_t size)
static inline int
dbg_check_data_nodes_order(struct ubifs_info *c,
struct list_head *head)
static inline int
dbg_check_nondata_nodes_order(struct ubifs_info *c,
struct list_head *head)
static inline int dbg_force_in_the_gaps(void)
#define dbg_force_in_the_gaps_enabled() 0
#define dbg_failure_mode                0
static inline int dbg_debugfs_init(void)
static inline void dbg_debugfs_exit(void)
static inline int dbg_debugfs_init_fs(struct ubifs_info *c)
static inline int dbg_debugfs_exit_fs(struct ubifs_info *c)
