extern int lv1_panic(u64 in_1);
extern int lv1_get_logical_partition_id(u64 *out_1);
extern int lv1_get_logical_ppe_id(u64 *out_1);
extern int lv1_get_repository_node_value(u64 in_1, u64 in_2, u64 in_3,
u64 in_4, u64 in_5, u64 *out_1, u64 *out_2);
#define DBG(fmt...) printf(fmt)
static inline int __attribute__ ((format (printf, 1, 2))) DBG(
const char *fmt, ...)
BSS_STACK(4096);
static char cmdline[COMMAND_LINE_SIZE]
__attribute__((__section__("__builtin_cmdline")));
static void prep_cmdline(void *chosen)
static void ps3_console_write(const char *buf, int len)
static void ps3_exit(void)
static int ps3_repository_read_rm_size(u64 *rm_size)
void ps3_copy_vectors(void)
void platform_init(unsigned long null_check)
