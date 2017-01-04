#define RAMOOPS_KERNMSG_HDR "===="
#define RECORD_SIZE 4096UL
static ulong mem_address;
module_param(mem_address, ulong, 0400);
MODULE_PARM_DESC(mem_address,
"start of reserved RAM used to store oops/panic logs");
static ulong mem_size;
module_param(mem_size, ulong, 0400);
MODULE_PARM_DESC(mem_size,
"size of reserved RAM used to store oops/panic logs");
static int dump_oops = 1;
module_param(dump_oops, int, 0600);
MODULE_PARM_DESC(dump_oops,
"set to 1 to dump oopses, 0 to only dump panics (default 1)");
static struct ramoops_context  oops_cxt;
static void ramoops_do_dump(struct kmsg_dumper *dumper,
enum kmsg_dump_reason reason, const char *s1, unsigned long l1,
const char *s2, unsigned long l2)
static int __init ramoops_probe(struct platform_device *pdev)
static int __exit ramoops_remove(struct platform_device *pdev)
static struct platform_driver ramoops_driver = ;
static int __init ramoops_init(void)
static void __exit ramoops_exit(void)
module_init(ramoops_init);
module_exit(ramoops_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Marco Stornelli <marco.stornelli@gmail.com>");
MODULE_DESCRIPTION("RAM Oops/Panic logger/driver");
