typedef void *vpe_handle;
#define ARCH_SHF_SMALL 0
#define INIT_OFFSET_MASK (1UL << (BITS_PER_LONG-1))
static int hw_tcs, hw_vpes;
static char module_name[] = "vpe";
static int major;
static const int minor = 1;
static struct kspd_notifications kspd_events;
static int kspd_events_reqd;
#define P_SIZE (2 * 1024 * 1024)
#define P_SIZE (256 * 1024)
extern unsigned long physical_memsize;
#define MAX_VPES 16
#define VPE_PATH_MAX 256
enum vpe_state ;
enum tc_state ;
struct vpe ;
struct tc ;
struct  vpecontrol = ;
static void release_progmem(void *ptr);
static struct vpe *get_vpe(int minor)
static struct tc *get_tc(int index)
static struct vpe *alloc_vpe(int minor)
static struct tc *alloc_tc(int index)
static void release_vpe(struct vpe *v)
static void __maybe_unused dump_mtregs(void)
static void *alloc_progmem(unsigned long len)
static void release_progmem(void *ptr)
static long get_offset(unsigned long *size, Elf_Shdr * sechdr)
static void layout_sections(struct module *mod, const Elf_Ehdr * hdr,
Elf_Shdr * sechdrs, const char *secstrings)
struct mips_hi16 ;
static struct mips_hi16 *mips_hi16_list;
static unsigned int gp_offs, gp_addr;
static int apply_r_mips_none(struct module *me, uint32_t *location,
Elf32_Addr v)
static int apply_r_mips_gprel16(struct module *me, uint32_t *location,
Elf32_Addr v)
static int apply_r_mips_pc16(struct module *me, uint32_t *location,
Elf32_Addr v)
static int apply_r_mips_32(struct module *me, uint32_t *location,
Elf32_Addr v)
static int apply_r_mips_26(struct module *me, uint32_t *location,
Elf32_Addr v)
static int apply_r_mips_hi16(struct module *me, uint32_t *location,
Elf32_Addr v)
static int apply_r_mips_lo16(struct module *me, uint32_t *location,
Elf32_Addr v)
static int (*reloc_handlers[]) (struct module *me, uint32_t *location,
Elf32_Addr v) = ;
static char *rstrs[] = ;
static int apply_relocations(Elf32_Shdr *sechdrs,
const char *strtab,
unsigned int symindex,
unsigned int relsec,
struct module *me)
static inline void save_gp_address(unsigned int secbase, unsigned int rel)
static void simplify_symbols(Elf_Shdr * sechdrs,
unsigned int symindex,
const char *strtab,
const char *secstrings,
unsigned int nsecs, struct module *mod)
static void dump_elfsymbols(Elf_Shdr * sechdrs, unsigned int symindex,
const char *strtab, struct module *mod)
static int vpe_run(struct vpe * v)
static int find_vpe_symbols(struct vpe * v, Elf_Shdr * sechdrs,
unsigned int symindex, const char *strtab,
struct module *mod)
static int vpe_elfload(struct vpe * v)
static void cleanup_tc(struct tc *tc)
static int getcwd(char *buff, int size)
static int vpe_open(struct inode *inode, struct file *filp)
static int vpe_release(struct inode *inode, struct file *filp)
static ssize_t vpe_write(struct file *file, const char __user * buffer,
size_t count, loff_t * ppos)
static const struct file_operations vpe_fops = ;
vpe_handle vpe_alloc(void)
EXPORT_SYMBOL(vpe_alloc);
int vpe_start(vpe_handle vpe, unsigned long start)
EXPORT_SYMBOL(vpe_start);
int vpe_stop(vpe_handle vpe)
EXPORT_SYMBOL(vpe_stop);
int vpe_free(vpe_handle vpe)
EXPORT_SYMBOL(vpe_free);
void *vpe_get_shared(int index)
EXPORT_SYMBOL(vpe_get_shared);
int vpe_getuid(int index)
EXPORT_SYMBOL(vpe_getuid);
int vpe_getgid(int index)
EXPORT_SYMBOL(vpe_getgid);
int vpe_notify(int index, struct vpe_notifications *notify)
EXPORT_SYMBOL(vpe_notify);
char *vpe_getcwd(int index)
EXPORT_SYMBOL(vpe_getcwd);
static void kspd_sp_exit( int sp_id)
static ssize_t store_kill(struct device *dev, struct device_attribute *attr,
const char *buf, size_t len)
static ssize_t show_ntcs(struct device *cd, struct device_attribute *attr,
char *buf)
static ssize_t store_ntcs(struct device *dev, struct device_attribute *attr,
const char *buf, size_t len)
static struct device_attribute vpe_class_attributes[] = ;
static void vpe_device_release(struct device *cd)
struct class vpe_class = ;
struct device vpe_device;
static int __init vpe_module_init(void)
static void __exit vpe_module_exit(void)
module_init(vpe_module_init);
module_exit(vpe_module_exit);
MODULE_DESCRIPTION("MIPS VPE Loader");
MODULE_AUTHOR("Elizabeth Oldham, MIPS Technologies, Inc.");
MODULE_LICENSE("GPL");
