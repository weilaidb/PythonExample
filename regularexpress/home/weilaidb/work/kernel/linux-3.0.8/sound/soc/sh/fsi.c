#define REG_DO_FMT	0x0000
#define REG_DOFF_CTL	0x0004
#define REG_DOFF_ST	0x0008
#define REG_DI_FMT	0x000C
#define REG_DIFF_CTL	0x0010
#define REG_DIFF_ST	0x0014
#define REG_CKG1	0x0018
#define REG_CKG2	0x001C
#define REG_DIDT	0x0020
#define REG_DODT	0x0024
#define REG_MUTE_ST	0x0028
#define REG_OUT_SEL	0x0030
#define MST_CLK_RST	0x0210
#define MST_SOFT_RST	0x0214
#define MST_FIFO_SZ	0x0218
#define A_MST_CTLR	0x0180
#define B_MST_CTLR	0x01A0
#define CPU_INT_ST	0x01F4
#define CPU_IEMSK	0x01F8
#define CPU_IMSK	0x01FC
#define INT_ST		0x0200
#define IEMSK		0x0204
#define IMSK		0x0208
#define CR_BWS_24	(0x0 << 20)
#define CR_BWS_16	(0x1 << 20)
#define CR_BWS_20	(0x2 << 20)
#define CR_DTMD_PCM		(0x0 << 8)
#define CR_DTMD_SPDIF_PCM	(0x1 << 8)
#define CR_DTMD_SPDIF_STREAM	(0x2 << 8)
#define CR_MONO		(0x0 << 4)
#define CR_MONO_D	(0x1 << 4)
#define CR_PCM		(0x2 << 4)
#define CR_I2S		(0x3 << 4)
#define CR_TDM		(0x4 << 4)
#define CR_TDM_D	(0x5 << 4)
#define IRQ_HALF	0x00100000
#define FIFO_CLR	0x00000001
#define ERR_OVER	0x00000010
#define ERR_UNDER	0x00000001
#define ST_ERR		(ERR_OVER | ERR_UNDER)
#define ACKMD_MASK	0x00007000
#define BPFMD_MASK	0x00000700
#define DIMD		(1 << 4)
#define DOMD		(1 << 0)
#define BP	(1 << 4)
#define SE	(1 << 0)
#define CRB	(1 << 4)
#define CRA	(1 << 0)
#define BI_SHIFT	12
#define BO_SHIFT	8
#define AI_SHIFT	4
#define AO_SHIFT	0
#define AB_IO(param, shift)	(param << shift)
#define PBSR		(1 << 12)
#define PASR		(1 <<  8)
#define IR		(1 <<  4)
#define FSISR		(1 <<  0)
#define DMMD		(1 << 4)
#define FIFO_SZ_MASK	0x7
#define FSI_RATES SNDRV_PCM_RATE_8000_96000
#define FSI_FMTS (SNDRV_PCM_FMTBIT_S24_LE | SNDRV_PCM_FMTBIT_S16_LE)
typedef int (*set_rate_func)(struct device *dev, int is_porta, int rate, int enable);
struct fsi_stream ;
struct fsi_priv ;
struct fsi_core ;
struct fsi_master ;
static void __fsi_reg_write(u32 reg, u32 data)
static u32 __fsi_reg_read(u32 reg)
static void __fsi_reg_mask_set(u32 reg, u32 mask, u32 data)
#define fsi_reg_write(p, r, d)\
__fsi_reg_write((u32)(p->base + REG_##r), d)
#define fsi_reg_read(p, r)\
__fsi_reg_read((u32)(p->base + REG_##r))
#define fsi_reg_mask_set(p, r, m, d)\
__fsi_reg_mask_set((u32)(p->base + REG_##r), m, d)
#define fsi_master_read(p, r) _fsi_master_read(p, MST_##r)
#define fsi_core_read(p, r)   _fsi_master_read(p, p->core->r)
static u32 _fsi_master_read(struct fsi_master *master, u32 reg)
#define fsi_master_mask_set(p, r, m, d) _fsi_master_mask_set(p, MST_##r, m, d)
#define fsi_core_mask_set(p, r, m, d)  _fsi_master_mask_set(p, p->core->r, m, d)
static void _fsi_master_mask_set(struct fsi_master *master,
u32 reg, u32 mask, u32 data)
static struct fsi_master *fsi_get_master(struct fsi_priv *fsi)
static int fsi_is_clk_master(struct fsi_priv *fsi)
static int fsi_is_port_a(struct fsi_priv *fsi)
static struct snd_soc_dai *fsi_get_dai(struct snd_pcm_substream *substream)
static struct fsi_priv *fsi_get_priv_frm_dai(struct snd_soc_dai *dai)
static struct fsi_priv *fsi_get_priv(struct snd_pcm_substream *substream)
static set_rate_func fsi_get_info_set_rate(struct fsi_master *master)
static u32 fsi_get_info_flags(struct fsi_priv *fsi)
static inline int fsi_stream_is_play(int stream)
static inline int fsi_is_play(struct snd_pcm_substream *substream)
static inline struct fsi_stream *fsi_get_stream(struct fsi_priv *fsi,
int is_play)
static u32 fsi_get_port_shift(struct fsi_priv *fsi, int is_play)
static void fsi_stream_push(struct fsi_priv *fsi,
int is_play,
struct snd_pcm_substream *substream,
u32 buffer_len,
u32 period_len)
static void fsi_stream_pop(struct fsi_priv *fsi, int is_play)
static int fsi_get_fifo_data_num(struct fsi_priv *fsi, int is_play)
static int fsi_len2num(int len, int width)
#define fsi_num2offset(a, b) fsi_num2len(a, b)
static int fsi_num2len(int num, int width)
static int fsi_get_frame_width(struct fsi_priv *fsi, int is_play)
static void fsi_count_fifo_err(struct fsi_priv *fsi)
static u8 *fsi_dma_get_area(struct fsi_priv *fsi, int stream)
static void fsi_dma_soft_push16(struct fsi_priv *fsi, int num)
static void fsi_dma_soft_pop16(struct fsi_priv *fsi, int num)
static void fsi_dma_soft_push32(struct fsi_priv *fsi, int num)
static void fsi_dma_soft_pop32(struct fsi_priv *fsi, int num)
static void fsi_irq_enable(struct fsi_priv *fsi, int is_play)
static void fsi_irq_disable(struct fsi_priv *fsi, int is_play)
static u32 fsi_irq_get_status(struct fsi_master *master)
static void fsi_irq_clear_status(struct fsi_priv *fsi)
static void fsi_spdif_clk_ctrl(struct fsi_priv *fsi, int enable)
#define fsi_module_init(m, d)	__fsi_module_clk_ctrl(m, d, 1)
#define fsi_module_kill(m, d)	__fsi_module_clk_ctrl(m, d, 0)
static void __fsi_module_clk_ctrl(struct fsi_master *master,
struct device *dev,
int enable)
#define fsi_port_start(f)	__fsi_port_clk_ctrl(f, 1)
#define fsi_port_stop(f)	__fsi_port_clk_ctrl(f, 0)
static void __fsi_port_clk_ctrl(struct fsi_priv *fsi, int enable)
static void fsi_fifo_init(struct fsi_priv *fsi,
int is_play,
struct snd_soc_dai *dai)
static int fsi_fifo_data_ctrl(struct fsi_priv *fsi, int stream)
static int fsi_data_pop(struct fsi_priv *fsi)
static int fsi_data_push(struct fsi_priv *fsi)
static irqreturn_t fsi_interrupt(int irq, void *data)
static int fsi_dai_startup(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static void fsi_dai_shutdown(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int fsi_dai_trigger(struct snd_pcm_substream *substream, int cmd,
struct snd_soc_dai *dai)
static int fsi_set_fmt_dai(struct fsi_priv *fsi, unsigned int fmt)
static int fsi_set_fmt_spdif(struct fsi_priv *fsi)
static int fsi_dai_set_fmt(struct snd_soc_dai *dai, unsigned int fmt)
static int fsi_dai_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static struct snd_soc_dai_ops fsi_dai_ops = ;
static struct snd_pcm_hardware fsi_pcm_hardware = ;
static int fsi_pcm_open(struct snd_pcm_substream *substream)
static int fsi_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int fsi_hw_free(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t fsi_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_ops fsi_pcm_ops = ;
#define PREALLOC_BUFFER		(32 * 1024)
#define PREALLOC_BUFFER_MAX	(32 * 1024)
static void fsi_pcm_free(struct snd_pcm *pcm)
static int fsi_pcm_new(struct snd_card *card,
struct snd_soc_dai *dai,
struct snd_pcm *pcm)
static struct snd_soc_dai_driver fsi_soc_dai[] = ;
static struct snd_soc_platform_driver fsi_soc_platform = ;
static int fsi_probe(struct platform_device *pdev)
static int fsi_remove(struct platform_device *pdev)
static void __fsi_suspend(struct fsi_priv *fsi,
struct device *dev,
set_rate_func set_rate)
static void __fsi_resume(struct fsi_priv *fsi,
struct device *dev,
set_rate_func set_rate)
static int fsi_suspend(struct device *dev)
static int fsi_resume(struct device *dev)
static int fsi_runtime_nop(struct device *dev)
static struct dev_pm_ops fsi_pm_ops = ;
static struct fsi_core fsi1_core = ;
static struct fsi_core fsi2_core = ;
static struct platform_device_id fsi_id_table[] = ;
MODULE_DEVICE_TABLE(platform, fsi_id_table);
static struct platform_driver fsi_driver = ;
static int __init fsi_mobile_init(void)
static void __exit fsi_mobile_exit(void)
module_init(fsi_mobile_init);
module_exit(fsi_mobile_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("SuperH onchip FSI audio driver");
MODULE_AUTHOR("Kuninori Morimoto <morimoto.kuninori@renesas.com>");
MODULE_ALIAS("platform:fsi-pcm-audio");
