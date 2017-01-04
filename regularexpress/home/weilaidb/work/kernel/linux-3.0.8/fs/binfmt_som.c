static int load_som_binary(struct linux_binprm * bprm, struct pt_regs * regs);
static int load_som_library(struct file *);
#define SOM_PAGESTART(_v) ((_v) & ~(unsigned long)(SOM_PAGESIZE-1))
#define SOM_PAGEOFFSET(_v) ((_v) & (SOM_PAGESIZE-1))
#define SOM_PAGEALIGN(_v) (((_v) + SOM_PAGESIZE - 1) & ~(SOM_PAGESIZE - 1))
static struct linux_binfmt som_format = ;
static void create_som_tables(struct linux_binprm *bprm)
static int check_som_header(struct som_hdr *som_ex)
static int map_som_binary(struct file *file,
const struct som_exec_auxhdr *hpuxhdr)
static int
load_som_binary(struct linux_binprm * bprm, struct pt_regs * regs)
static int load_som_library(struct file *f)
static int __init init_som_binfmt(void)
static void __exit exit_som_binfmt(void)
core_initcall(init_som_binfmt);
module_exit(exit_som_binfmt);
MODULE_LICENSE("GPL");
