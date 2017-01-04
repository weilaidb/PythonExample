MODULE_AUTHOR("Jan Kara");
MODULE_DESCRIPTION("Quota trie support");
MODULE_LICENSE("GPL");
#define __QUOTA_QT_PARANOIA
static int get_index(struct qtree_mem_dqinfo *info, qid_t id, int depth)
static int qtree_dqstr_in_blk(struct qtree_mem_dqinfo *info)
static char *getdqbuf(size_t size)
static ssize_t read_blk(struct qtree_mem_dqinfo *info, uint blk, char *buf)
static ssize_t write_blk(struct qtree_mem_dqinfo *info, uint blk, char *buf)
static int get_free_dqblk(struct qtree_mem_dqinfo *info)
static int put_free_dqblk(struct qtree_mem_dqinfo *info, char *buf, uint blk)
static int remove_free_dqentry(struct qtree_mem_dqinfo *info, char *buf,
uint blk)
static int insert_free_dqentry(struct qtree_mem_dqinfo *info, char *buf,
uint blk)
int qtree_entry_unused(struct qtree_mem_dqinfo *info, char *disk)
EXPORT_SYMBOL(qtree_entry_unused);
static uint find_free_dqentry(struct qtree_mem_dqinfo *info,
struct dquot *dquot, int *err)
static int do_insert_tree(struct qtree_mem_dqinfo *info, struct dquot *dquot,
uint *treeblk, int depth)
static inline int dq_insert_tree(struct qtree_mem_dqinfo *info,
struct dquot *dquot)
int qtree_write_dquot(struct qtree_mem_dqinfo *info, struct dquot *dquot)
EXPORT_SYMBOL(qtree_write_dquot);
static int free_dqentry(struct qtree_mem_dqinfo *info, struct dquot *dquot,
uint blk)
static int remove_tree(struct qtree_mem_dqinfo *info, struct dquot *dquot,
uint *blk, int depth)
int qtree_delete_dquot(struct qtree_mem_dqinfo *info, struct dquot *dquot)
EXPORT_SYMBOL(qtree_delete_dquot);
static loff_t find_block_dqentry(struct qtree_mem_dqinfo *info,
struct dquot *dquot, uint blk)
static loff_t find_tree_dqentry(struct qtree_mem_dqinfo *info,
struct dquot *dquot, uint blk, int depth)
static inline loff_t find_dqentry(struct qtree_mem_dqinfo *info,
struct dquot *dquot)
int qtree_read_dquot(struct qtree_mem_dqinfo *info, struct dquot *dquot)
EXPORT_SYMBOL(qtree_read_dquot);
int qtree_release_dquot(struct qtree_mem_dqinfo *info, struct dquot *dquot)
EXPORT_SYMBOL(qtree_release_dquot);
