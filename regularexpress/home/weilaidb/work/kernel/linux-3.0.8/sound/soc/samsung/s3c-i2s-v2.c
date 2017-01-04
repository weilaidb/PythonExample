#undef S3C_IIS_V2_SUPPORTED
#if defined(CONFIG_CPU_S3C2412) || defined(CONFIG_CPU_S3C2413) \
|| defined(CONFIG_CPU_S5PV210)
#define S3C_IIS_V2_SUPPORTED
#define S3C_IIS_V2_SUPPORTED
#error Unsupported CPU model
#define S3C2412_I2S_DEBUG_CON 0
static inline struct s3c_i2sv2_info *to_info(struct snd_soc_dai *cpu_dai)
#define bit_set(v, b) (((v) & (b)) ? 1 : 0)
#if S3C2412_I2S_DEBUG_CON
static void dbg_showcon(const char *fn, u32 con)
static inline void dbg_showcon(const char *fn, u32 con)
static void s3c2412_snd_txctrl(struct s3c_i2sv2_info *i2s, int on)
static void s3c2412_snd_rxctrl(struct s3c_i2sv2_info *i2s, int on)
#define msecs_to_loops(t) (loops_per_jiffy / 1000 * HZ * t)
static int s3c2412_snd_lrsync(struct s3c_i2sv2_info *i2s)
static int s3c2412_i2s_set_fmt(struct snd_soc_dai *cpu_dai,
unsigned int fmt)
static int s3c_i2sv2_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int s3c_i2sv2_set_sysclk(struct snd_soc_dai *cpu_dai,
int clk_id, unsigned int freq, int dir)
static int s3c2412_i2s_trigger(struct snd_pcm_substream *substream, int cmd,
struct snd_soc_dai *dai)
static int s3c2412_i2s_set_clkdiv(struct snd_soc_dai *cpu_dai,
int div_id, int div)
static snd_pcm_sframes_t s3c2412_i2s_delay(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
struct clk *s3c_i2sv2_get_clock(struct snd_soc_dai *cpu_dai)
EXPORT_SYMBOL_GPL(s3c_i2sv2_get_clock);
static unsigned int iis_fs_tab[] = ;
int s3c_i2sv2_iis_calc_rate(struct s3c_i2sv2_rate_calc *info,
unsigned int *fstab,
unsigned int rate, struct clk *clk)
EXPORT_SYMBOL_GPL(s3c_i2sv2_iis_calc_rate);
int s3c_i2sv2_probe(struct snd_soc_dai *dai,
struct s3c_i2sv2_info *i2s,
unsigned long base)
EXPORT_SYMBOL_GPL(s3c_i2sv2_probe);
static int s3c2412_i2s_suspend(struct snd_soc_dai *dai)
static int s3c2412_i2s_resume(struct snd_soc_dai *dai)
#define s3c2412_i2s_suspend NULL
#define s3c2412_i2s_resume  NULL
int s3c_i2sv2_register_dai(struct device *dev, int id,
struct snd_soc_dai_driver *drv)
EXPORT_SYMBOL_GPL(s3c_i2sv2_register_dai);
MODULE_LICENSE("GPL");
