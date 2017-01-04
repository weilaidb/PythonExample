#define _LINUX_DQBLK_QTREE_H
#define QTREE_INIT_ALLOC 4
#define QTREE_INIT_REWRITE 2
#define QTREE_DEL_ALLOC 0
#define QTREE_DEL_REWRITE 6
struct dquot;
struct qtree_fmt_operations ;
struct qtree_mem_dqinfo ;
int qtree_write_dquot(struct qtree_mem_dqinfo *info, struct dquot *dquot);
int qtree_read_dquot(struct qtree_mem_dqinfo *info, struct dquot *dquot);
int qtree_delete_dquot(struct qtree_mem_dqinfo *info, struct dquot *dquot);
int qtree_release_dquot(struct qtree_mem_dqinfo *info, struct dquot *dquot);
int qtree_entry_unused(struct qtree_mem_dqinfo *info, char *disk);
static inline int qtree_depth(struct qtree_mem_dqinfo *info)
