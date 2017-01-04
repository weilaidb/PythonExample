enum ;
#define MSM6242_HOUR10_AM	(0 << 2)
#define MSM6242_HOUR10_PM	(1 << 2)
#define MSM6242_HOUR10_HR_MASK	(3 << 0)
#define MSM6242_WEEK_SUNDAY	0
#define MSM6242_WEEK_MONDAY	1
#define MSM6242_WEEK_TUESDAY	2
#define MSM6242_WEEK_WEDNESDAY	3
#define MSM6242_WEEK_THURSDAY	4
#define MSM6242_WEEK_FRIDAY	5
#define MSM6242_WEEK_SATURDAY	6
#define MSM6242_CD_30_S_ADJ	(1 << 3)
#define MSM6242_CD_IRQ_FLAG	(1 << 2)
#define MSM6242_CD_BUSY		(1 << 1)
#define MSM6242_CD_HOLD		(1 << 0)
#define MSM6242_CE_T_MASK	(3 << 2)
#define MSM6242_CE_T_64HZ	(0 << 2)
#define MSM6242_CE_T_1HZ	(1 << 2)
#define MSM6242_CE_T_1MINUTE	(2 << 2)
#define MSM6242_CE_T_1HOUR	(3 << 2)
#define MSM6242_CE_ITRPT_STND	(1 << 1)
#define MSM6242_CE_MASK		(1 << 0)
#define MSM6242_CF_TEST		(1 << 3)
#define MSM6242_CF_12H		(0 << 2)
#define MSM6242_CF_24H		(1 << 2)
#define MSM6242_CF_STOP		(1 << 1)
#define MSM6242_CF_REST		(1 << 0)
struct msm6242_priv ;
static inline unsigned int msm6242_read(struct msm6242_priv *priv,
unsigned int reg)
static inline void msm6242_write(struct msm6242_priv *priv, unsigned int val,
unsigned int reg)
static inline void msm6242_set(struct msm6242_priv *priv, unsigned int val,
unsigned int reg)
static inline void msm6242_clear(struct msm6242_priv *priv, unsigned int val,
unsigned int reg)
static void msm6242_lock(struct msm6242_priv *priv)
static void msm6242_unlock(struct msm6242_priv *priv)
static int msm6242_read_time(struct device *dev, struct rtc_time *tm)
static int msm6242_set_time(struct device *dev, struct rtc_time *tm)
static const struct rtc_class_ops msm6242_rtc_ops = ;
static int __init msm6242_rtc_probe(struct platform_device *dev)
static int __exit msm6242_rtc_remove(struct platform_device *dev)
static struct platform_driver msm6242_rtc_driver = ;
static int __init msm6242_rtc_init(void)
static void __exit msm6242_rtc_fini(void)
module_init(msm6242_rtc_init);
module_exit(msm6242_rtc_fini);
MODULE_AUTHOR("Geert Uytterhoeven <geert@linux-m68k.org>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Oki MSM6242 RTC driver");
MODULE_ALIAS("platform:rtc-msm6242");
