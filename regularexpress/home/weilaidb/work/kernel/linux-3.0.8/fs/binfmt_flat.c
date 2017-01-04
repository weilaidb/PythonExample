#define	DBG_FLT(a...)	printk(a)
#define	DBG_FLT(a...)
#define FLAT_DATA_ALIGN	(0x20)
#define FLAT_STACK_ALIGN	max_t(unsigned long, sizeof(void *), ARCH_SLAB_MINALIGN)
#define RELOC_FAILED 0xff00ff01
#define UNLOADED_LIB 0x7ff000ff
struct lib_info ;
static int load_flat_shared_library(int id, struct lib_info *p);
static int load_flat_binary(struct linux_binprm *, struct pt_regs * regs);
static int flat_core_dump(struct coredump_params *cprm);
static struct linux_binfmt flat_format = ;
static int flat_core_dump(struct coredump_params *cprm)
static unsigned long create_flat_tables(
unsigned long pp,
struct linux_binprm * bprm)
#define LBUFSIZE	4000
#define ASCII_FLAG   0x01
#define CONTINUATION 0x02
#define EXTRA_FIELD  0x04
#define ORIG_NAME    0x08
#define COMMENT      0x10
#define ENCRYPTED    0x20
#define RESERVED     0xC0
static int decompress_exec(
struct linux_binprm *bprm,
unsigned long offset,
char *dst,
long len,
int fd)
static unsigned long
calc_reloc(unsigned long r, struct lib_info *p, int curid, int internalp)
void old_reloc(unsigned long rl)
static int load_flat_file(struct linux_binprm * bprm,
struct lib_info *libinfo, int id, unsigned long *extra_stack)
static int load_flat_shared_library(int id, struct lib_info *libs)
static int load_flat_binary(struct linux_binprm * bprm, struct pt_regs * regs)
static int __init init_flat_binfmt(void)
core_initcall(init_flat_binfmt);
