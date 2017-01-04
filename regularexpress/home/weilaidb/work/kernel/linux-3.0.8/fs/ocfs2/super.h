#define OCFS2_SUPER_H
extern struct workqueue_struct *ocfs2_wq;
int ocfs2_publish_get_mount_state(struct ocfs2_super *osb,
int node_num);
void __ocfs2_error(struct super_block *sb,
const char *function,
const char *fmt, ...)
__attribute__ ((format (printf, 3, 4)));
#define ocfs2_error(sb, fmt, args...) __ocfs2_error(sb, __PRETTY_FUNCTION__, fmt, ##args)
void __ocfs2_abort(struct super_block *sb,
const char *function,
const char *fmt, ...)
__attribute__ ((format (printf, 3, 4)));
#define ocfs2_abort(sb, fmt, args...) __ocfs2_abort(sb, __PRETTY_FUNCTION__, fmt, ##args)
void ocfs2_block_signals(sigset_t *oldset);
void ocfs2_unblock_signals(sigset_t *oldset);
