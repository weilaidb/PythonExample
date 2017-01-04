static struct gunzip_state gzstate;
struct addr_range ;
#undef DEBUG
static struct addr_range prep_kernel(void)
static struct addr_range prep_initrd(struct addr_range vmlinux, void *chosen,
unsigned long initrd_addr,
unsigned long initrd_size)
static char cmdline[COMMAND_LINE_SIZE]
__attribute__((__section__("__builtin_cmdline")));
static void prep_cmdline(void *chosen)
struct platform_ops platform_ops;
struct dt_ops dt_ops;
struct console_ops console_ops;
struct loader_info loader_info;
void start(void)
