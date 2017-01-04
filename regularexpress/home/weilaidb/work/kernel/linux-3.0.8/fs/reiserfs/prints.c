static char error_buf[1024];
static char fmt_buf[1024];
static char off_buf[80];
static char *reiserfs_cpu_offset(struct cpu_key *key)
static char *le_offset(struct reiserfs_key *key)
static char *cpu_type(struct cpu_key *key)
static char *le_type(struct reiserfs_key *key)
static void sprintf_le_key(char *buf, struct reiserfs_key *key)
static void sprintf_cpu_key(char *buf, struct cpu_key *key)
static void sprintf_de_head(char *buf, struct reiserfs_de_head *deh)
static void sprintf_item_head(char *buf, struct item_head *ih)
static void sprintf_direntry(char *buf, struct reiserfs_dir_entry *de)
static void sprintf_block_head(char *buf, struct buffer_head *bh)
static void sprintf_buffer_head(char *buf, struct buffer_head *bh)
static void sprintf_disk_child(char *buf, struct disk_child *dc)
static char *is_there_reiserfs_struct(char *fmt, int *what)
static DEFINE_SPINLOCK(error_lock);
static void prepare_error_buf(const char *fmt, va_list args)
#define do_reiserfs_warning(fmt)\
void __reiserfs_warning(struct super_block *sb, const char *id,
const char *function, const char *fmt, ...)
void reiserfs_info(struct super_block *sb, const char *fmt, ...)
static void reiserfs_printk(const char *fmt, ...)
void reiserfs_debug(struct super_block *s, int level, const char *fmt, ...)
void __reiserfs_panic(struct super_block *sb, const char *id,
const char *function, const char *fmt, ...)
void __reiserfs_error(struct super_block *sb, const char *id,
const char *function, const char *fmt, ...)
void reiserfs_abort(struct super_block *sb, int errno, const char *fmt, ...)
static int print_internal(struct buffer_head *bh, int first, int last)
static int print_leaf(struct buffer_head *bh, int print_mode, int first,
int last)
char *reiserfs_hashname(int code)
static int print_super_block(struct buffer_head *bh)
static int print_desc_block(struct buffer_head *bh)
void print_block(struct buffer_head *bh, ...)
static char print_tb_buf[2048];
void store_print_tb(struct tree_balance *tb)
void print_cur_tb(char *mes)
static void check_leaf_block_head(struct buffer_head *bh)
static void check_internal_block_head(struct buffer_head *bh)
void check_leaf(struct buffer_head *bh)
void check_internal(struct buffer_head *bh)
void print_statistics(struct super_block *s)
