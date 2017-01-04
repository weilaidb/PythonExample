#define NFORCE2_XTAL 25
#define NFORCE2_BOOTFSB 0x48
#define NFORCE2_PLLENABLE 0xa8
#define NFORCE2_PLLREG 0xa4
#define NFORCE2_PLLADR 0xa0
#define NFORCE2_PLL(mul, div) (0x100000 | (mul << 8) | div)
#define NFORCE2_MIN_FSB 50
#define NFORCE2_SAFE_DISTANCE 50
static struct pci_dev *nforce2_dev;
static int fid;
static int min_fsb;
static int max_fsb;
MODULE_AUTHOR("Sebastian Witt <se.witt@gmx.net>");
MODULE_DESCRIPTION("nForce2 FSB changing cpufreq driver");
MODULE_LICENSE("GPL");
module_param(fid, int, 0444);
module_param(min_fsb, int, 0444);
MODULE_PARM_DESC(fid, "CPU multiplier to use (11.5 = 115)");
MODULE_PARM_DESC(min_fsb,
"Minimum FSB to use, if not defined: current FSB - 50");
#define PFX "cpufreq-nforce2: "
static int nforce2_calc_fsb(int pll)
static int nforce2_calc_pll(unsigned int fsb)
static void nforce2_write_pll(int pll)
static unsigned int nforce2_fsb_read(int bootfsb)
static int nforce2_set_fsb(unsigned int fsb)
static unsigned int nforce2_get(unsigned int cpu)
static int nforce2_target(struct cpufreq_policy *policy,
unsigned int target_freq, unsigned int relation)
static int nforce2_verify(struct cpufreq_policy *policy)
static int nforce2_cpu_init(struct cpufreq_policy *policy)
static int nforce2_cpu_exit(struct cpufreq_policy *policy)
static struct cpufreq_driver nforce2_driver = ;
static int nforce2_detect_chipset(void)
static int __init nforce2_init(void)
static void __exit nforce2_exit(void)
module_init(nforce2_init);
module_exit(nforce2_exit);
