MODULE_AUTHOR("Jan Kara");
MODULE_DESCRIPTION("Quota format v2 support");
MODULE_LICENSE("GPL");
#define __QUOTA_V2_PARANOIA
static void v2r0_mem2diskdqb(void *dp, struct dquot *dquot);
static void v2r0_disk2memdqb(struct dquot *dquot, void *dp);
static int v2r0_is_id(void *dp, struct dquot *dquot);
static void v2r1_mem2diskdqb(void *dp, struct dquot *dquot);
static void v2r1_disk2memdqb(struct dquot *dquot, void *dp);
static int v2r1_is_id(void *dp, struct dquot *dquot);
static struct qtree_fmt_operations v2r0_qtree_ops = ;
static struct qtree_fmt_operations v2r1_qtree_ops = ;
#define QUOTABLOCK_BITS 10
#define QUOTABLOCK_SIZE (1 << QUOTABLOCK_BITS)
static inline qsize_t v2_stoqb(qsize_t space)
static inline qsize_t v2_qbtos(qsize_t blocks)
static int v2_read_header(struct super_block *sb, int type,
struct v2_disk_dqheader *dqhead)
static int v2_check_quota_file(struct super_block *sb, int type)
static int v2_read_file_info(struct super_block *sb, int type)
static int v2_write_file_info(struct super_block *sb, int type)
static void v2r0_disk2memdqb(struct dquot *dquot, void *dp)
static void v2r0_mem2diskdqb(void *dp, struct dquot *dquot)
static int v2r0_is_id(void *dp, struct dquot *dquot)
static void v2r1_disk2memdqb(struct dquot *dquot, void *dp)
static void v2r1_mem2diskdqb(void *dp, struct dquot *dquot)
static int v2r1_is_id(void *dp, struct dquot *dquot)
static int v2_read_dquot(struct dquot *dquot)
static int v2_write_dquot(struct dquot *dquot)
static int v2_release_dquot(struct dquot *dquot)
static int v2_free_file_info(struct super_block *sb, int type)
static const struct quota_format_ops v2_format_ops = ;
static struct quota_format_type v2r0_quota_format = ;
static struct quota_format_type v2r1_quota_format = ;
static int __init init_v2_quota_format(void)
static void __exit exit_v2_quota_format(void)
module_init(init_v2_quota_format);
module_exit(exit_v2_quota_format);
