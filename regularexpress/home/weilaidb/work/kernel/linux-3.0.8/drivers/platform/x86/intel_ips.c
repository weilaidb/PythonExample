#define PCI_DEVICE_ID_INTEL_THERMAL_SENSOR 0x3b32
#define PLATFORM_INFO	0xce
#define   PLATFORM_TDP		(1<<29)
#define   PLATFORM_RATIO	(1<<28)
#define IA32_MISC_ENABLE	0x1a0
#define   IA32_MISC_TURBO_EN	(1ULL<<38)
#define TURBO_POWER_CURRENT_LIMIT	0x1ac
#define   TURBO_TDC_OVR_EN	(1UL<<31)
#define   TURBO_TDC_MASK	(0x000000007fff0000UL)
#define   TURBO_TDC_SHIFT	(16)
#define   TURBO_TDP_OVR_EN	(1UL<<15)
#define   TURBO_TDP_MASK	(0x0000000000003fffUL)
#define IA32_PERF_CTL		0x199
#define   IA32_PERF_TURBO_DIS	(1ULL<<32)
#define THM_CFG_TBAR	0x10
#define THM_CFG_TBAR_HI	0x14
#define THM_TSIU	0x00
#define THM_TSE		0x01
#define   TSE_EN	0xb8
#define THM_TSS		0x02
#define THM_TSTR	0x03
#define THM_TSTTP	0x04
#define THM_TSCO	0x08
#define THM_TSES	0x0c
#define THM_TSGPEN	0x0d
#define   TSGPEN_HOT_LOHI	(1<<1)
#define   TSGPEN_CRIT_LOHI	(1<<2)
#define THM_TSPC	0x0e
#define THM_PPEC	0x10
#define THM_CTA		0x12
#define THM_PTA		0x14
#define   PTA_SLOPE_MASK	(0xff00)
#define   PTA_SLOPE_SHIFT	8
#define   PTA_OFFSET_MASK	(0x00ff)
#define THM_MGTA	0x16
#define   MGTA_SLOPE_MASK	(0xff00)
#define   MGTA_SLOPE_SHIFT	8
#define   MGTA_OFFSET_MASK	(0x00ff)
#define THM_TRC		0x1a
#define   TRC_CORE2_EN	(1<<15)
#define   TRC_THM_EN	(1<<12)
#define   TRC_C6_WAR	(1<<8)
#define   TRC_CORE1_EN	(1<<7)
#define   TRC_CORE_PWR	(1<<6)
#define   TRC_PCH_EN	(1<<5)
#define   TRC_MCH_EN	(1<<4)
#define   TRC_DIMM4	(1<<3)
#define   TRC_DIMM3	(1<<2)
#define   TRC_DIMM2	(1<<1)
#define   TRC_DIMM1	(1<<0)
#define THM_TES		0x20
#define THM_TEN		0x21
#define   TEN_UPDATE_EN	1
#define THM_PSC		0x24
#define   PSC_NTG	(1<<0)
#define   PSC_NTPC	(1<<1)
#define   PSC_PP_DEF	(0<<2)
#define   PSP_PP_PC	(1<<2)
#define   PSP_PP_BAL	(2<<2)
#define   PSP_PP_GFX	(3<<2)
#define   PSP_PBRT	(1<<4)
#define THM_CTV1	0x30
#define   CTV_TEMP_ERROR (1<<15)
#define   CTV_TEMP_MASK	0x3f
#define   CTV_
#define THM_CTV2	0x32
#define THM_CEC		0x34
#define THM_AE		0x3f
#define THM_HTS		0x50
#define   HTS_PCPL_MASK	(0x7fe00000)
#define   HTS_PCPL_SHIFT 21
#define   HTS_GPL_MASK  (0x001ff000)
#define   HTS_GPL_SHIFT 12
#define   HTS_PP_MASK	(0x00000c00)
#define   HTS_PP_SHIFT  10
#define   HTS_PP_DEF	0
#define   HTS_PP_PROC	1
#define   HTS_PP_BAL	2
#define   HTS_PP_GFX	3
#define   HTS_PCTD_DIS	(1<<9)
#define   HTS_GTD_DIS	(1<<8)
#define   HTS_PTL_MASK  (0x000000fe)
#define   HTS_PTL_SHIFT 1
#define   HTS_NVV	(1<<0)
#define THM_HTSHI	0x54
#define   HTS2_PPL_MASK		(0x03ff)
#define   HTS2_PRST_MASK	(0x3c00)
#define   HTS2_PRST_SHIFT	10
#define   HTS2_PRST_UNLOADED	0
#define   HTS2_PRST_RUNNING	1
#define   HTS2_PRST_TDISOP	2
#define   HTS2_PRST_TDISHT	3
#define   HTS2_PRST_TDISUSR	4
#define   HTS2_PRST_TDISPLAT	5
#define   HTS2_PRST_TDISPM	6
#define   HTS2_PRST_TDISERR	7
#define THM_PTL		0x56
#define THM_MGTV	0x58
#define   TV_MASK	0x000000000000ff00
#define   TV_SHIFT	8
#define THM_PTV		0x60
#define   PTV_MASK	0x00ff
#define THM_MMGPC	0x64
#define THM_MPPC	0x66
#define THM_MPCPC	0x68
#define THM_TSPIEN	0x82
#define   TSPIEN_AUX_LOHI	(1<<0)
#define   TSPIEN_HOT_LOHI	(1<<1)
#define   TSPIEN_CRIT_LOHI	(1<<2)
#define   TSPIEN_AUX2_LOHI	(1<<3)
#define THM_TSLOCK	0x83
#define THM_ATR		0x84
#define THM_TOF		0x87
#define THM_STS		0x98
#define   STS_PCPL_MASK		(0x7fe00000)
#define   STS_PCPL_SHIFT	21
#define   STS_GPL_MASK		(0x001ff000)
#define   STS_GPL_SHIFT		12
#define   STS_PP_MASK		(0x00000c00)
#define   STS_PP_SHIFT		10
#define   STS_PP_DEF		0
#define   STS_PP_PROC		1
#define   STS_PP_BAL		2
#define   STS_PP_GFX		3
#define   STS_PCTD_DIS		(1<<9)
#define   STS_GTD_DIS		(1<<8)
#define   STS_PTL_MASK		(0x000000fe)
#define   STS_PTL_SHIFT		1
#define   STS_NVV		(1<<0)
#define THM_SEC		0x9c
#define   SEC_ACK	(1<<0)
#define THM_TC3		0xa4
#define THM_TC1		0xa8
#define   STS_PPL_MASK		(0x0003ff00)
#define   STS_PPL_SHIFT		16
#define THM_TC2		0xac
#define THM_DTV		0xb0
#define THM_ITV		0xd8
#define   ITV_ME_SEQNO_MASK 0x00ff0000
#define   ITV_ME_SEQNO_SHIFT (16)
#define   ITV_MCH_TEMP_MASK 0x0000ff00
#define   ITV_MCH_TEMP_SHIFT (8)
#define   ITV_PCH_TEMP_MASK 0x000000ff
#define thm_readb(off) readb(ips->regmap + (off))
#define thm_readw(off) readw(ips->regmap + (off))
#define thm_readl(off) readl(ips->regmap + (off))
#define thm_readq(off) readq(ips->regmap + (off))
#define thm_writeb(off, val) writeb((val), ips->regmap + (off))
#define thm_writew(off, val) writew((val), ips->regmap + (off))
#define thm_writel(off, val) writel((val), ips->regmap + (off))
static const int IPS_ADJUST_PERIOD = 5000;
static bool late_i915_load = false;
static const int IPS_SAMPLE_PERIOD = 200;
static const int IPS_SAMPLE_WINDOW = 5000;
#define IPS_SAMPLE_COUNT (IPS_SAMPLE_WINDOW / IPS_SAMPLE_PERIOD)
struct ips_mcp_limits ;
struct ips_mcp_limits ips_sv_limits = ;
struct ips_mcp_limits ips_lv_limits = ;
struct ips_mcp_limits ips_ulv_limits = ;
struct ips_driver ;
static bool
ips_gpu_turbo_enabled(struct ips_driver *ips);
static inline __u64 readq(const volatile void __iomem *addr)
static bool ips_cpu_busy(struct ips_driver *ips)
static void ips_cpu_raise(struct ips_driver *ips)
static void ips_cpu_lower(struct ips_driver *ips)
static void do_enable_cpu_turbo(void *data)
static void ips_enable_cpu_turbo(struct ips_driver *ips)
static void do_disable_cpu_turbo(void *data)
static void ips_disable_cpu_turbo(struct ips_driver *ips)
static bool ips_gpu_busy(struct ips_driver *ips)
static void ips_gpu_raise(struct ips_driver *ips)
static void ips_gpu_lower(struct ips_driver *ips)
static void ips_enable_gpu_turbo(struct ips_driver *ips)
static void ips_disable_gpu_turbo(struct ips_driver *ips)
static bool mcp_exceeded(struct ips_driver *ips)
static bool cpu_exceeded(struct ips_driver *ips, int cpu)
static bool mch_exceeded(struct ips_driver *ips)
static void verify_limits(struct ips_driver *ips)
static void update_turbo_limits(struct ips_driver *ips)
static int ips_adjust(void *data)
static u16 calc_avg_temp(struct ips_driver *ips, u16 *array)
static u16 read_mgtv(struct ips_driver *ips)
static u16 read_ptv(struct ips_driver *ips)
static u16 read_ctv(struct ips_driver *ips, int cpu)
static u32 get_cpu_power(struct ips_driver *ips, u32 *last, int period)
static const u16 temp_decay_factor = 2;
static u16 update_average_temp(u16 avg, u16 val)
static const u16 power_decay_factor = 2;
static u16 update_average_power(u32 avg, u32 val)
static u32 calc_avg_power(struct ips_driver *ips, u32 *array)
static void monitor_timeout(unsigned long arg)
static int ips_monitor(void *data)
static irqreturn_t ips_irq_handler(int irq, void *arg)
static void ips_debugfs_init(struct ips_driver *ips)
static void ips_debugfs_cleanup(struct ips_driver *ips)
struct ips_debugfs_node ;
static int show_cpu_temp(struct seq_file *m, void *data)
static int show_cpu_power(struct seq_file *m, void *data)
static int show_cpu_clamp(struct seq_file *m, void *data)
static int show_mch_temp(struct seq_file *m, void *data)
static int show_mch_power(struct seq_file *m, void *data)
static struct ips_debugfs_node ips_debug_files[] = ;
static int ips_debugfs_open(struct inode *inode, struct file *file)
static const struct file_operations ips_debugfs_ops = ;
static void ips_debugfs_cleanup(struct ips_driver *ips)
static void ips_debugfs_init(struct ips_driver *ips)
static struct ips_mcp_limits *ips_detect_cpu(struct ips_driver *ips)
static bool ips_get_i915_syms(struct ips_driver *ips)
static bool
ips_gpu_turbo_enabled(struct ips_driver *ips)
void
ips_link_to_i915_driver(void)
EXPORT_SYMBOL_GPL(ips_link_to_i915_driver);
static DEFINE_PCI_DEVICE_TABLE(ips_id_table) = ;
MODULE_DEVICE_TABLE(pci, ips_id_table);
static int ips_probe(struct pci_dev *dev, const struct pci_device_id *id)
static void ips_remove(struct pci_dev *dev)
static int ips_suspend(struct pci_dev *dev, pm_message_t state)
static int ips_resume(struct pci_dev *dev)
#define ips_suspend NULL
#define ips_resume NULL
static void ips_shutdown(struct pci_dev *dev)
static struct pci_driver ips_pci_driver = ;
static int __init ips_init(void)
module_init(ips_init);
static void ips_exit(void)
module_exit(ips_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jesse Barnes <jbarnes@virtuousgeek.org>");
MODULE_DESCRIPTION("Intelligent Power Sharing Driver");
