#define BH_TRACE 0
static struct xor_block_template *active_template;
void
xor_blocks(unsigned int src_count, unsigned int bytes, void *dest, void **srcs)
EXPORT_SYMBOL(xor_blocks);
static struct xor_block_template *template_list;
#define BENCH_SIZE (PAGE_SIZE)
static void
do_xor_speed(struct xor_block_template *tmpl, void *b1, void *b2)
static int __init
calibrate_xor_blocks(void)
static __exit void xor_exit(void)
MODULE_LICENSE("GPL");
core_initcall(calibrate_xor_blocks);
module_exit(xor_exit);
