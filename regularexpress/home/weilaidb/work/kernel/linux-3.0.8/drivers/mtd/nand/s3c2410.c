#define DEBUG
static int hardware_ecc = 1;
static int hardware_ecc = 0;
static const int clock_stop = 1;
static const int clock_stop = 0;
static struct nand_ecclayout nand_hw_eccoob = ;
struct s3c2410_nand_info;
struct s3c2410_nand_mtd ;
enum s3c_cpu_type ;
enum s3c_nand_clk_state ;
struct s3c2410_nand_info ;
static struct s3c2410_nand_mtd *s3c2410_nand_mtd_toours(struct mtd_info *mtd)
static struct s3c2410_nand_info *s3c2410_nand_mtd_toinfo(struct mtd_info *mtd)
static struct s3c2410_nand_info *to_nand_info(struct platform_device *dev)
static struct s3c2410_platform_nand *to_nand_plat(struct platform_device *dev)
static inline int allow_clk_suspend(struct s3c2410_nand_info *info)
static void s3c2410_nand_clk_set_state(struct s3c2410_nand_info *info,
enum s3c_nand_clk_state new_state)
#define NS_IN_KHZ 1000000
static int s3c_nand_calc_rate(int wanted, unsigned long clk, int max)
#define to_ns(ticks,clk) (((ticks) * NS_IN_KHZ) / (unsigned int)(clk))
static int s3c2410_nand_setrate(struct s3c2410_nand_info *info)
static int s3c2410_nand_inithw(struct s3c2410_nand_info *info)
static void s3c2410_nand_select_chip(struct mtd_info *mtd, int chip)
static void s3c2410_nand_hwcontrol(struct mtd_info *mtd, int cmd,
unsigned int ctrl)
static void s3c2440_nand_hwcontrol(struct mtd_info *mtd, int cmd,
unsigned int ctrl)
static int s3c2410_nand_devready(struct mtd_info *mtd)
static int s3c2440_nand_devready(struct mtd_info *mtd)
static int s3c2412_nand_devready(struct mtd_info *mtd)
static int s3c2410_nand_correct_data(struct mtd_info *mtd, u_char *dat,
u_char *read_ecc, u_char *calc_ecc)
static void s3c2410_nand_enable_hwecc(struct mtd_info *mtd, int mode)
static void s3c2412_nand_enable_hwecc(struct mtd_info *mtd, int mode)
static void s3c2440_nand_enable_hwecc(struct mtd_info *mtd, int mode)
static int s3c2410_nand_calculate_ecc(struct mtd_info *mtd, const u_char *dat, u_char *ecc_code)
static int s3c2412_nand_calculate_ecc(struct mtd_info *mtd, const u_char *dat, u_char *ecc_code)
static int s3c2440_nand_calculate_ecc(struct mtd_info *mtd, const u_char *dat, u_char *ecc_code)
static void s3c2410_nand_read_buf(struct mtd_info *mtd, u_char *buf, int len)
static void s3c2440_nand_read_buf(struct mtd_info *mtd, u_char *buf, int len)
static void s3c2410_nand_write_buf(struct mtd_info *mtd, const u_char *buf, int len)
static void s3c2440_nand_write_buf(struct mtd_info *mtd, const u_char *buf, int len)
static int s3c2410_nand_cpufreq_transition(struct notifier_block *nb,
unsigned long val, void *data)
static inline int s3c2410_nand_cpufreq_register(struct s3c2410_nand_info *info)
static inline void s3c2410_nand_cpufreq_deregister(struct s3c2410_nand_info *info)
static inline int s3c2410_nand_cpufreq_register(struct s3c2410_nand_info *info)
static inline void s3c2410_nand_cpufreq_deregister(struct s3c2410_nand_info *info)
static int s3c24xx_nand_remove(struct platform_device *pdev)
const char *part_probes[] = ;
static int s3c2410_nand_add_partition(struct s3c2410_nand_info *info,
struct s3c2410_nand_mtd *mtd,
struct s3c2410_nand_set *set)
static void s3c2410_nand_init_chip(struct s3c2410_nand_info *info,
struct s3c2410_nand_mtd *nmtd,
struct s3c2410_nand_set *set)
static void s3c2410_nand_update_chip(struct s3c2410_nand_info *info,
struct s3c2410_nand_mtd *nmtd)
static int s3c24xx_nand_probe(struct platform_device *pdev)
static int s3c24xx_nand_suspend(struct platform_device *dev, pm_message_t pm)
static int s3c24xx_nand_resume(struct platform_device *dev)
#define s3c24xx_nand_suspend NULL
#define s3c24xx_nand_resume NULL
static struct platform_device_id s3c24xx_driver_ids[] = ;
MODULE_DEVICE_TABLE(platform, s3c24xx_driver_ids);
static struct platform_driver s3c24xx_nand_driver = ;
static int __init s3c2410_nand_init(void)
static void __exit s3c2410_nand_exit(void)
module_init(s3c2410_nand_init);
module_exit(s3c2410_nand_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Ben Dooks <ben@simtec.co.uk>");
MODULE_DESCRIPTION("S3C24XX MTD NAND driver");
