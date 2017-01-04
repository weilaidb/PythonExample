MODULE_AUTHOR("Jan Kara");
MODULE_DESCRIPTION("Old quota format support");
MODULE_LICENSE("GPL");
#define QUOTABLOCK_BITS 10
#define QUOTABLOCK_SIZE (1 << QUOTABLOCK_BITS)
static inline qsize_t v1_stoqb(qsize_t space)
static inline qsize_t v1_qbtos(qsize_t blocks)
static void v1_disk2mem_dqblk(struct mem_dqblk *m, struct v1_disk_dqblk *d)
static void v1_mem2disk_dqblk(struct v1_disk_dqblk *d, struct mem_dqblk *m)
static int v1_read_dqblk(struct dquot *dquot)
static int v1_commit_dqblk(struct dquot *dquot)
#define V2_INITQMAGICS
struct v2_disk_dqheader ;
static int v1_check_quota_file(struct super_block *sb, int type)
static int v1_read_file_info(struct super_block *sb, int type)
static int v1_write_file_info(struct super_block *sb, int type)
static const struct quota_format_ops v1_format_ops = ;
static struct quota_format_type v1_quota_format = ;
static int __init init_v1_quota_format(void)
static void __exit exit_v1_quota_format(void)
module_init(init_v1_quota_format);
module_exit(exit_v1_quota_format);
