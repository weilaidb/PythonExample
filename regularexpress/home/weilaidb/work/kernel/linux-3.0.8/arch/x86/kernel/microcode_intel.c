#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_DESCRIPTION("Microcode Update Driver");
MODULE_AUTHOR("Tigran Aivazian <tigran@aivazian.fsnet.co.uk>");
MODULE_LICENSE("GPL");
struct microcode_header_intel ;
struct microcode_intel ;
struct extended_signature ;
struct extended_sigtable ;
#define DEFAULT_UCODE_DATASIZE	(2000)
#define MC_HEADER_SIZE		(sizeof(struct microcode_header_intel))
#define DEFAULT_UCODE_TOTALSIZE (DEFAULT_UCODE_DATASIZE + MC_HEADER_SIZE)
#define EXT_HEADER_SIZE		(sizeof(struct extended_sigtable))
#define EXT_SIGNATURE_SIZE	(sizeof(struct extended_signature))
#define DWSIZE			(sizeof(u32))
#define get_totalsize(mc) \
(((struct microcode_intel *)mc)->hdr.totalsize ? \
((struct microcode_intel *)mc)->hdr.totalsize : \
DEFAULT_UCODE_TOTALSIZE)
#define get_datasize(mc) \
(((struct microcode_intel *)mc)->hdr.datasize ? \
((struct microcode_intel *)mc)->hdr.datasize : DEFAULT_UCODE_DATASIZE)
#define sigmatch(s1, s2, p1, p2) \
(((s1) == (s2)) && (((p1) & (p2)) || (((p1) == 0) && ((p2) == 0))))
#define exttable_size(et) ((et)->count * EXT_SIGNATURE_SIZE + EXT_HEADER_SIZE)
static int collect_cpu_info(int cpu_num, struct cpu_signature *csig)
static inline int update_match_cpu(struct cpu_signature *csig, int sig, int pf)
static inline int
update_match_revision(struct microcode_header_intel *mc_header, int rev)
static int microcode_sanity_check(void *mc)
static int
get_matching_microcode(struct cpu_signature *cpu_sig, void *mc, int rev)
static int apply_microcode(int cpu)
static enum ucode_state generic_load_microcode(int cpu, void *data, size_t size,
int (*get_ucode_data)(void *, const void *, size_t))
static int get_ucode_fw(void *to, const void *from, size_t n)
static enum ucode_state request_microcode_fw(int cpu, struct device *device)
static int get_ucode_user(void *to, const void *from, size_t n)
static enum ucode_state
request_microcode_user(int cpu, const void __user *buf, size_t size)
static void microcode_fini_cpu(int cpu)
static struct microcode_ops microcode_intel_ops = ;
struct microcode_ops * __init init_intel_microcode(void)
