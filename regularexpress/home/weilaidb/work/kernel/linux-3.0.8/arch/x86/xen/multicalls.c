#define MC_BATCH	32
#define MC_DEBUG	1
#define MC_ARGS		(MC_BATCH * 16)
struct mc_buffer ;
static DEFINE_PER_CPU(struct mc_buffer, mc_buffer);
DEFINE_PER_CPU(unsigned long, xen_mc_irq_flags);
enum flush_reasons
;
#define NHYPERCALLS	40
static struct  mc_stats;
static u8 zero_stats;
static inline void check_zero(void)
static void mc_add_stats(const struct mc_buffer *mc)
static void mc_stats_flush(enum flush_reasons idx)
static inline void mc_add_stats(const struct mc_buffer *mc)
static inline void mc_stats_flush(enum flush_reasons idx)
void xen_mc_flush(void)
struct multicall_space __xen_mc_entry(size_t args)
struct multicall_space xen_mc_extend_args(unsigned long op, size_t size)
void xen_mc_callback(void (*fn)(void *), void *data)
static struct dentry *d_mc_debug;
static int __init xen_mc_debugfs(void)
fs_initcall(xen_mc_debugfs);
