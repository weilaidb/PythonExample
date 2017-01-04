#define DEFAULT_JNL_PERCENT 5
#define DEFAULT_MAX_JNL (32*1024*1024)
#define DEFAULT_FANOUT 8
#define DEFAULT_JHEADS_CNT 1
#define DEFAULT_IDX_LEB  0
#define DEFAULT_DATA_LEB 1
#define DEFAULT_GC_LEB   2
#define DEFAULT_LSAVE_CNT 256
#define DEFAULT_RP_PERCENT 5
#define DEFAULT_MAX_RP_SIZE (5*1024*1024)
#define DEFAULT_TIME_GRAN 1000000000
static int create_default_filesystem(struct ubifs_info *c)
static int validate_sb(struct ubifs_info *c, struct ubifs_sb_node *sup)
struct ubifs_sb_node *ubifs_read_sb_node(struct ubifs_info *c)
int ubifs_write_sb_node(struct ubifs_info *c, struct ubifs_sb_node *sup)
int ubifs_read_superblock(struct ubifs_info *c)
static int fixup_leb(struct ubifs_info *c, int lnum, int len)
static int fixup_free_space(struct ubifs_info *c)
int ubifs_fixup_free_space(struct ubifs_info *c)
