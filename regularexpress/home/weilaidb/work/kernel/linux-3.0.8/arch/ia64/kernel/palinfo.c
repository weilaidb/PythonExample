MODULE_AUTHOR("Stephane Eranian <eranian@hpl.hp.com>");
MODULE_DESCRIPTION("/proc interface to IA-64 PAL");
MODULE_LICENSE("GPL");
#define PALINFO_VERSION "0.5"
typedef int (*palinfo_func_t)(char*);
typedef struct  palinfo_entry_t;
static char *cache_types[] = ;
static const char *cache_mattrib[]=;
static const char *cache_st_hints[]=;
static const char *cache_ld_hints[]=;
static const char *rse_hints[]=;
#define RSE_HINTS_COUNT ARRAY_SIZE(rse_hints)
static const char *mem_attrib[]=;
static char *
bitvector_process(char *p, u64 vector)
static char *
bitregister_process(char *p, u64 *reg_info, int max)
static int
power_info(char *page)
static int
cache_info(char *page)
static int
vm_info(char *page)
static int
register_info(char *page)
static char *proc_features_0[]=;
static char *proc_features_16[]=;
static char **proc_features[]=;
static char * feature_set_info(char *page, u64 avail, u64 status, u64 control,
unsigned long set)
static int
processor_info(char *page)
static const char *bus_features[]=;
static int
bus_info(char *page)
static int
version_info(char *page)
static int
perfmon_info(char *page)
static int
frequency_info(char *page)
static int
tr_info(char *page)
static palinfo_entry_t palinfo_entries[]=;
#define NR_PALINFO_ENTRIES	(int) ARRAY_SIZE(palinfo_entries)
#define NR_PALINFO_PROC_ENTRIES	(NR_CPUS*(NR_PALINFO_ENTRIES+1))
static struct proc_dir_entry *palinfo_proc_entries[NR_PALINFO_PROC_ENTRIES];
static struct proc_dir_entry *palinfo_dir;
typedef union  pal_func_cpu_u_t;
#define req_cpu	pal_func_cpu.req_cpu
#define func_id pal_func_cpu.func_id
typedef struct  palinfo_smp_data_t;
static void
palinfo_smp_call(void *info)
static
int palinfo_handle_smp(pal_func_cpu_u_t *f, char *page)
static
int palinfo_handle_smp(pal_func_cpu_u_t *f, char *page)
static int
palinfo_read_entry(char *page, char **start, off_t off, int count, int *eof, void *data)
static void __cpuinit
create_palinfo_proc_entries(unsigned int cpu)
static void
remove_palinfo_proc_entries(unsigned int hcpu)
static int __cpuinit palinfo_cpu_callback(struct notifier_block *nfb,
unsigned long action, void *hcpu)
static struct notifier_block __refdata palinfo_cpu_notifier =
;
static int __init
palinfo_init(void)
static void __exit
palinfo_exit(void)
module_init(palinfo_init);
module_exit(palinfo_exit);
