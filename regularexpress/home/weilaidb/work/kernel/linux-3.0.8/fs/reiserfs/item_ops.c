static int sd_bytes_number(struct item_head *ih, int block_size)
static void sd_decrement_key(struct cpu_key *key)
static int sd_is_left_mergeable(struct reiserfs_key *key, unsigned long bsize)
static char *print_time(time_t t)
static void sd_print_item(struct item_head *ih, char *item)
static void sd_check_item(struct item_head *ih, char *item)
static int sd_create_vi(struct virtual_node *vn,
struct virtual_item *vi,
int is_affected, int insert_size)
static int sd_check_left(struct virtual_item *vi, int free,
int start_skip, int end_skip)
static int sd_check_right(struct virtual_item *vi, int free)
static int sd_part_size(struct virtual_item *vi, int first, int count)
static int sd_unit_num(struct virtual_item *vi)
static void sd_print_vi(struct virtual_item *vi)
static struct item_operations stat_data_ops = ;
static int direct_bytes_number(struct item_head *ih, int block_size)
static void direct_decrement_key(struct cpu_key *key)
static int direct_is_left_mergeable(struct reiserfs_key *key,
unsigned long bsize)
static void direct_print_item(struct item_head *ih, char *item)
static void direct_check_item(struct item_head *ih, char *item)
static int direct_create_vi(struct virtual_node *vn,
struct virtual_item *vi,
int is_affected, int insert_size)
static int direct_check_left(struct virtual_item *vi, int free,
int start_skip, int end_skip)
static int direct_check_right(struct virtual_item *vi, int free)
static int direct_part_size(struct virtual_item *vi, int first, int count)
static int direct_unit_num(struct virtual_item *vi)
static void direct_print_vi(struct virtual_item *vi)
static struct item_operations direct_ops = ;
static int indirect_bytes_number(struct item_head *ih, int block_size)
static void indirect_decrement_key(struct cpu_key *key)
static int indirect_is_left_mergeable(struct reiserfs_key *key,
unsigned long bsize)
static void start_new_sequence(__u32 * start, int *len, __u32 new)
static int sequence_finished(__u32 start, int *len, __u32 new)
static void print_sequence(__u32 start, int len)
static void indirect_print_item(struct item_head *ih, char *item)
static void indirect_check_item(struct item_head *ih, char *item)
static int indirect_create_vi(struct virtual_node *vn,
struct virtual_item *vi,
int is_affected, int insert_size)
static int indirect_check_left(struct virtual_item *vi, int free,
int start_skip, int end_skip)
static int indirect_check_right(struct virtual_item *vi, int free)
static int indirect_part_size(struct virtual_item *vi, int first, int units)
static int indirect_unit_num(struct virtual_item *vi)
static void indirect_print_vi(struct virtual_item *vi)
static struct item_operations indirect_ops = ;
static int direntry_bytes_number(struct item_head *ih, int block_size)
static void direntry_decrement_key(struct cpu_key *key)
static int direntry_is_left_mergeable(struct reiserfs_key *key,
unsigned long bsize)
static void direntry_print_item(struct item_head *ih, char *item)
static void direntry_check_item(struct item_head *ih, char *item)
#define DIRENTRY_VI_FIRST_DIRENTRY_ITEM 1
static inline int old_entry_num(int is_affected, int virtual_entry_num,
int pos_in_item, int mode)
static int direntry_create_vi(struct virtual_node *vn,
struct virtual_item *vi,
int is_affected, int insert_size)
static int direntry_check_left(struct virtual_item *vi, int free,
int start_skip, int end_skip)
static int direntry_check_right(struct virtual_item *vi, int free)
static int direntry_part_size(struct virtual_item *vi, int first, int count)
static int direntry_unit_num(struct virtual_item *vi)
static void direntry_print_vi(struct virtual_item *vi)
static struct item_operations direntry_ops = ;
static int errcatch_bytes_number(struct item_head *ih, int block_size)
static void errcatch_decrement_key(struct cpu_key *key)
static int errcatch_is_left_mergeable(struct reiserfs_key *key,
unsigned long bsize)
static void errcatch_print_item(struct item_head *ih, char *item)
static void errcatch_check_item(struct item_head *ih, char *item)
static int errcatch_create_vi(struct virtual_node *vn,
struct virtual_item *vi,
int is_affected, int insert_size)
static int errcatch_check_left(struct virtual_item *vi, int free,
int start_skip, int end_skip)
static int errcatch_check_right(struct virtual_item *vi, int free)
static int errcatch_part_size(struct virtual_item *vi, int first, int count)
static int errcatch_unit_num(struct virtual_item *vi)
static void errcatch_print_vi(struct virtual_item *vi)
static struct item_operations errcatch_ops = ;
#if ! (TYPE_STAT_DATA == 0 && TYPE_INDIRECT == 1 && TYPE_DIRECT == 2 && TYPE_DIRENTRY == 3)
#error Item types must use disk-format assigned values.
struct item_operations *item_ops[TYPE_ANY + 1] = ;
