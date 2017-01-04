#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_DESCRIPTION("AMD Microcode Update Driver");
MODULE_AUTHOR("Peter Oruba");
MODULE_LICENSE("GPL v2");
#define UCODE_MAGIC                0x00414d44
#define UCODE_EQUIV_CPU_TABLE_TYPE 0x00000000
#define UCODE_UCODE_TYPE           0x00000001
struct equiv_cpu_entry  __attribute__((packed));
struct microcode_header_amd  __attribute__((packed));
struct microcode_amd ;
#define UCODE_CONTAINER_SECTION_HDR	8
#define UCODE_CONTAINER_HEADER_SIZE	12
static struct equiv_cpu_entry *equiv_cpu_table;
static int collect_cpu_info_amd(int cpu, struct cpu_signature *csig)
static int get_matching_microcode(int cpu, struct microcode_header_amd *mc_hdr,
int rev)
static int apply_microcode_amd(int cpu)
static unsigned int verify_ucode_size(int cpu, const u8 *buf, unsigned int size)
static struct microcode_header_amd *
get_next_ucode(int cpu, const u8 *buf, unsigned int size, unsigned int *mc_size)
static int install_equiv_cpu_table(const u8 *buf)
static void free_equiv_cpu_table(void)
static enum ucode_state
generic_load_microcode(int cpu, const u8 *data, size_t size)
static enum ucode_state request_microcode_amd(int cpu, struct device *device)
static enum ucode_state
request_microcode_user(int cpu, const void __user *buf, size_t size)
static void microcode_fini_cpu_amd(int cpu)
static struct microcode_ops microcode_amd_ops = ;
struct microcode_ops * __init init_amd_microcode(void)
