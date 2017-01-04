#define KMSG_COMPONENT "sclp_cmd"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define SCLP_CMDW_READ_SCP_INFO		0x00020001
#define SCLP_CMDW_READ_SCP_INFO_FORCED	0x00120001
struct read_info_sccb  __attribute__((packed, aligned(PAGE_SIZE)));
static struct read_info_sccb __initdata early_read_info_sccb;
static int __initdata early_read_info_sccb_valid;
u64 sclp_facilities;
static u8 sclp_fac84;
static unsigned long long rzm;
static unsigned long long rnmax;
static int __init sclp_cmd_sync_early(sclp_cmdw_t cmd, void *sccb)
static void __init sclp_read_info_early(void)
void __init sclp_facilities_detect(void)
unsigned long long sclp_get_rnmax(void)
unsigned long long sclp_get_rzm(void)
void __init sclp_get_ipl_info(struct sclp_ipl_info *info)
static void sclp_sync_callback(struct sclp_req *req, void *data)
static int do_sync_request(sclp_cmdw_t cmd, void *sccb)
#define SCLP_CMDW_READ_CPU_INFO		0x00010001
#define SCLP_CMDW_CONFIGURE_CPU		0x00110001
#define SCLP_CMDW_DECONFIGURE_CPU	0x00100001
struct read_cpu_info_sccb  __attribute__((packed, aligned(PAGE_SIZE)));
static void sclp_fill_cpu_info(struct sclp_cpu_info *info,
struct read_cpu_info_sccb *sccb)
int sclp_get_cpu_info(struct sclp_cpu_info *info)
struct cpu_configure_sccb  __attribute__((packed, aligned(8)));
static int do_cpu_configure(sclp_cmdw_t cmd)
int sclp_cpu_configure(u8 cpu)
int sclp_cpu_deconfigure(u8 cpu)
static DEFINE_MUTEX(sclp_mem_mutex);
static LIST_HEAD(sclp_mem_list);
static u8 sclp_max_storage_id;
static unsigned long sclp_storage_ids[256 / BITS_PER_LONG];
static int sclp_mem_state_changed;
struct memory_increment ;
struct assign_storage_sccb  __packed;
int arch_get_memory_phys_device(unsigned long start_pfn)
static unsigned long long rn2addr(u16 rn)
static int do_assign_storage(sclp_cmdw_t cmd, u16 rn)
static int sclp_assign_storage(u16 rn)
static int sclp_unassign_storage(u16 rn)
struct attach_storage_sccb  __packed;
static int sclp_attach_storage(u8 id)
static int sclp_mem_change_state(unsigned long start, unsigned long size,
int online)
static int sclp_mem_notifier(struct notifier_block *nb,
unsigned long action, void *data)
static struct notifier_block sclp_mem_nb = ;
static void __init add_memory_merged(u16 rn)
static void __init sclp_add_standby_memory(void)
static void __init insert_increment(u16 rn, int standby, int assigned)
static int sclp_mem_freeze(struct device *dev)
struct read_storage_sccb  __packed;
static const struct dev_pm_ops sclp_mem_pm_ops = ;
static struct platform_driver sclp_mem_pdrv = ;
static int __init sclp_detect_standby_memory(void)
__initcall(sclp_detect_standby_memory);
#define SCLP_CMDW_CONFIGURE_CHPATH		0x000f0001
#define SCLP_CMDW_DECONFIGURE_CHPATH		0x000e0001
#define SCLP_CMDW_READ_CHPATH_INFORMATION	0x00030001
struct chp_cfg_sccb  __attribute__((packed));
static int do_chp_configure(sclp_cmdw_t cmd)
int sclp_chp_configure(struct chp_id chpid)
int sclp_chp_deconfigure(struct chp_id chpid)
struct chp_info_sccb  __attribute__((packed));
int sclp_chp_read_info(struct sclp_chp_info *info)
