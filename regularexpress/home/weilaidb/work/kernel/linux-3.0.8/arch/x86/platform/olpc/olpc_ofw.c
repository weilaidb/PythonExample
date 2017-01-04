static int (*olpc_ofw_cif)(int *);
u32 olpc_ofw_pgd __initdata;
static DEFINE_SPINLOCK(ofw_lock);
#define MAXARGS 10
void __init setup_olpc_ofw_pgd(void)
int __olpc_ofw(const char *name, int nr_args, const void **args, int nr_res,
void **res)
EXPORT_SYMBOL_GPL(__olpc_ofw);
bool olpc_ofw_present(void)
EXPORT_SYMBOL_GPL(olpc_ofw_present);
#define OFW_MIN 0xff000000
#define OFW_BOUND (1<<20)
void __init olpc_ofw_detect(void)
bool __init olpc_ofw_is_installed(void)
