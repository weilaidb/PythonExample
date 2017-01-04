#define NR_BANKS          6
#define NR_BLOCKS         9
#define THRESHOLD_MAX     0xFFF
#define INT_TYPE_APIC     0x00020000
#define MASK_VALID_HI     0x80000000
#define MASK_CNTP_HI      0x40000000
#define MASK_LOCKED_HI    0x20000000
#define MASK_LVTOFF_HI    0x00F00000
#define MASK_COUNT_EN_HI  0x00080000
#define MASK_INT_TYPE_HI  0x00060000
#define MASK_OVERFLOW_HI  0x00010000
#define MASK_ERR_COUNT_HI 0x00000FFF
#define MASK_BLKPTR_LO    0xFF000000
#define MCG_XBLK_ADDR     0xC0000400
struct threshold_block ;
struct threshold_bank ;
static DEFINE_PER_CPU(struct threshold_bank * [NR_BANKS], threshold_banks);
static unsigned char shared_bank[NR_BANKS] = ;
static DEFINE_PER_CPU(unsigned char, bank_map);
static void amd_threshold_interrupt(void);
struct thresh_restart ;
static int lvt_off_valid(struct threshold_block *b, int apic, u32 lo, u32 hi)
;
static void threshold_restart_bank(void *_tr)
static void mce_threshold_block_init(struct threshold_block *b, int offset)
;
static int setup_APIC_mce(int reserved, int new)
void mce_amd_feature_init(struct cpuinfo_x86 *c)
static void amd_threshold_interrupt(void)
struct threshold_attr ;
#define SHOW_FIELDS(name)						\
static ssize_t show_ ## name(struct threshold_block *b, char *buf)	\
SHOW_FIELDS(interrupt_enable)
SHOW_FIELDS(threshold_limit)
static ssize_t
store_interrupt_enable(struct threshold_block *b, const char *buf, size_t size)
static ssize_t
store_threshold_limit(struct threshold_block *b, const char *buf, size_t size)
struct threshold_block_cross_cpu ;
static void local_error_count_handler(void *_tbcc)
static ssize_t show_error_count(struct threshold_block *b, char *buf)
static ssize_t store_error_count(struct threshold_block *b,
const char *buf, size_t count)
#define RW_ATTR(val)							\
static struct threshold_attr val = ;
RW_ATTR(interrupt_enable);
RW_ATTR(threshold_limit);
RW_ATTR(error_count);
static struct attribute *default_attrs[] = ;
#define to_block(k)	container_of(k, struct threshold_block, kobj)
#define to_attr(a)	container_of(a, struct threshold_attr, attr)
static ssize_t show(struct kobject *kobj, struct attribute *attr, char *buf)
static ssize_t store(struct kobject *kobj, struct attribute *attr,
const char *buf, size_t count)
static const struct sysfs_ops threshold_ops = ;
static struct kobj_type threshold_ktype = ;
static __cpuinit int allocate_threshold_blocks(unsigned int cpu,
unsigned int bank,
unsigned int block,
u32 address)
static __cpuinit long
local_allocate_threshold_blocks(int cpu, unsigned int bank)
static __cpuinit int threshold_create_bank(unsigned int cpu, unsigned int bank)
static __cpuinit int threshold_create_device(unsigned int cpu)
static void deallocate_threshold_block(unsigned int cpu,
unsigned int bank)
static void threshold_remove_bank(unsigned int cpu, int bank)
static void threshold_remove_device(unsigned int cpu)
static void __cpuinit
amd_64_threshold_cpu_callback(unsigned long action, unsigned int cpu)
static __init int threshold_init_device(void)
device_initcall(threshold_init_device);
