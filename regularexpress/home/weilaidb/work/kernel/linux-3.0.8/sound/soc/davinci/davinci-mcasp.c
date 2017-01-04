#define DAVINCI_MCASP_PID_REG		0x00
#define DAVINCI_MCASP_PWREMUMGT_REG	0x04
#define DAVINCI_MCASP_PFUNC_REG		0x10
#define DAVINCI_MCASP_PDIR_REG		0x14
#define DAVINCI_MCASP_PDOUT_REG		0x18
#define DAVINCI_MCASP_PDSET_REG		0x1c
#define DAVINCI_MCASP_PDCLR_REG		0x20
#define DAVINCI_MCASP_TLGC_REG		0x30
#define DAVINCI_MCASP_TLMR_REG		0x34
#define DAVINCI_MCASP_GBLCTL_REG	0x44
#define DAVINCI_MCASP_AMUTE_REG		0x48
#define DAVINCI_MCASP_LBCTL_REG		0x4c
#define DAVINCI_MCASP_TXDITCTL_REG	0x50
#define DAVINCI_MCASP_GBLCTLR_REG	0x60
#define DAVINCI_MCASP_RXMASK_REG	0x64
#define DAVINCI_MCASP_RXFMT_REG		0x68
#define DAVINCI_MCASP_RXFMCTL_REG	0x6c
#define DAVINCI_MCASP_ACLKRCTL_REG	0x70
#define DAVINCI_MCASP_AHCLKRCTL_REG	0x74
#define DAVINCI_MCASP_RXTDM_REG		0x78
#define DAVINCI_MCASP_EVTCTLR_REG	0x7c
#define DAVINCI_MCASP_RXSTAT_REG	0x80
#define DAVINCI_MCASP_RXTDMSLOT_REG	0x84
#define DAVINCI_MCASP_RXCLKCHK_REG	0x88
#define DAVINCI_MCASP_REVTCTL_REG	0x8c
#define DAVINCI_MCASP_GBLCTLX_REG	0xa0
#define DAVINCI_MCASP_TXMASK_REG	0xa4
#define DAVINCI_MCASP_TXFMT_REG		0xa8
#define DAVINCI_MCASP_TXFMCTL_REG	0xac
#define DAVINCI_MCASP_ACLKXCTL_REG	0xb0
#define DAVINCI_MCASP_AHCLKXCTL_REG	0xb4
#define DAVINCI_MCASP_TXTDM_REG		0xb8
#define DAVINCI_MCASP_EVTCTLX_REG	0xbc
#define DAVINCI_MCASP_TXSTAT_REG	0xc0
#define DAVINCI_MCASP_TXTDMSLOT_REG	0xc4
#define DAVINCI_MCASP_TXCLKCHK_REG	0xc8
#define DAVINCI_MCASP_XEVTCTL_REG	0xcc
#define DAVINCI_MCASP_DITCSRA_REG	0x100
#define DAVINCI_MCASP_DITCSRB_REG	0x118
#define DAVINCI_MCASP_DITUDRA_REG	0x130
#define DAVINCI_MCASP_DITUDRB_REG	0x148
#define DAVINCI_MCASP_XRSRCTL_BASE_REG	0x180
#define DAVINCI_MCASP_XRSRCTL_REG(n)	(DAVINCI_MCASP_XRSRCTL_BASE_REG + \
(n << 2))
#define DAVINCI_MCASP_TXBUF_REG		0x200
#define DAVINCI_MCASP_RXBUF_REG		0x280
#define DAVINCI_MCASP_WFIFOCTL		(0x1010)
#define DAVINCI_MCASP_WFIFOSTS		(0x1014)
#define DAVINCI_MCASP_RFIFOCTL		(0x1018)
#define DAVINCI_MCASP_RFIFOSTS		(0x101C)
#define MCASP_FREE	BIT(0)
#define MCASP_SOFT	BIT(1)
#define AXR(n)		(1<<n)
#define PFUNC_AMUTE	BIT(25)
#define ACLKX		BIT(26)
#define AHCLKX		BIT(27)
#define AFSX		BIT(28)
#define ACLKR		BIT(29)
#define AHCLKR		BIT(30)
#define AFSR		BIT(31)
#define AXR(n)		(1<<n)
#define PDIR_AMUTE	BIT(25)
#define ACLKX		BIT(26)
#define AHCLKX		BIT(27)
#define AFSX		BIT(28)
#define ACLKR		BIT(29)
#define AHCLKR		BIT(30)
#define AFSR		BIT(31)
#define DITEN	BIT(0)
#define VA	BIT(2)
#define VB	BIT(3)
#define TXROT(val)	(val)
#define TXSEL		BIT(3)
#define TXSSZ(val)	(val<<4)
#define TXPBIT(val)	(val<<8)
#define TXPAD(val)	(val<<13)
#define TXORD		BIT(15)
#define FSXDLY(val)	(val<<16)
#define RXROT(val)	(val)
#define RXSEL		BIT(3)
#define RXSSZ(val)	(val<<4)
#define RXPBIT(val)	(val<<8)
#define RXPAD(val)	(val<<13)
#define RXORD		BIT(15)
#define FSRDLY(val)	(val<<16)
#define FSXPOL		BIT(0)
#define AFSXE		BIT(1)
#define FSXDUR		BIT(4)
#define FSXMOD(val)	(val<<7)
#define FSRPOL		BIT(0)
#define AFSRE		BIT(1)
#define FSRDUR		BIT(4)
#define FSRMOD(val)	(val<<7)
#define ACLKXDIV(val)	(val)
#define ACLKXE		BIT(5)
#define TX_ASYNC	BIT(6)
#define ACLKXPOL	BIT(7)
#define ACLKRDIV(val)	(val)
#define ACLKRE		BIT(5)
#define RX_ASYNC	BIT(6)
#define ACLKRPOL	BIT(7)
#define AHCLKXDIV(val)	(val)
#define AHCLKXPOL	BIT(14)
#define AHCLKXE		BIT(15)
#define AHCLKRDIV(val)	(val)
#define AHCLKRPOL	BIT(14)
#define AHCLKRE		BIT(15)
#define MODE(val)	(val)
#define DISMOD		(val)(val<<2)
#define TXSTATE		BIT(4)
#define RXSTATE		BIT(5)
#define LBEN		BIT(0)
#define LBORD		BIT(1)
#define LBGENMODE(val)	(val<<2)
#define TXTDMS(n)	(1<<n)
#define RXTDMS(n)	(1<<n)
#define RXCLKRST	BIT(0)
#define RXHCLKRST	BIT(1)
#define RXSERCLR	BIT(2)
#define RXSMRST		BIT(3)
#define RXFSRST		BIT(4)
#define TXCLKRST	BIT(8)
#define TXHCLKRST	BIT(9)
#define TXSERCLR	BIT(10)
#define TXSMRST		BIT(11)
#define TXFSRST		BIT(12)
#define MUTENA(val)	(val)
#define MUTEINPOL	BIT(2)
#define MUTEINENA	BIT(3)
#define MUTEIN		BIT(4)
#define MUTER		BIT(5)
#define MUTEX		BIT(6)
#define MUTEFSR		BIT(7)
#define MUTEFSX		BIT(8)
#define MUTEBADCLKR	BIT(9)
#define MUTEBADCLKX	BIT(10)
#define MUTERXDMAERR	BIT(11)
#define MUTETXDMAERR	BIT(12)
#define RXDATADMADIS	BIT(0)
#define TXDATADMADIS	BIT(0)
#define FIFO_ENABLE	BIT(16)
#define NUMEVT_MASK	(0xFF << 8)
#define NUMDMA_MASK	(0xFF)
#define DAVINCI_MCASP_NUM_SERIALIZER	16
static inline void mcasp_set_bits(void __iomem *reg, u32 val)
static inline void mcasp_clr_bits(void __iomem *reg, u32 val)
static inline void mcasp_mod_bits(void __iomem *reg, u32 val, u32 mask)
static inline void mcasp_set_reg(void __iomem *reg, u32 val)
static inline u32 mcasp_get_reg(void __iomem *reg)
static inline void mcasp_set_ctl_reg(void __iomem *regs, u32 val)
static void mcasp_start_rx(struct davinci_audio_dev *dev)
static void mcasp_start_tx(struct davinci_audio_dev *dev)
static void davinci_mcasp_start(struct davinci_audio_dev *dev, int stream)
static void mcasp_stop_rx(struct davinci_audio_dev *dev)
static void mcasp_stop_tx(struct davinci_audio_dev *dev)
static void davinci_mcasp_stop(struct davinci_audio_dev *dev, int stream)
static int davinci_mcasp_set_dai_fmt(struct snd_soc_dai *cpu_dai,
unsigned int fmt)
static int davinci_config_channel_size(struct davinci_audio_dev *dev,
int channel_size)
static void davinci_hw_common_param(struct davinci_audio_dev *dev, int stream)
static void davinci_hw_param(struct davinci_audio_dev *dev, int stream)
static void davinci_hw_dit_param(struct davinci_audio_dev *dev)
static int davinci_mcasp_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *cpu_dai)
static int davinci_mcasp_trigger(struct snd_pcm_substream *substream,
int cmd, struct snd_soc_dai *cpu_dai)
static int davinci_mcasp_startup(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static struct snd_soc_dai_ops davinci_mcasp_dai_ops = ;
static struct snd_soc_dai_driver davinci_mcasp_dai[] = ;
static int davinci_mcasp_probe(struct platform_device *pdev)
static int davinci_mcasp_remove(struct platform_device *pdev)
static struct platform_driver davinci_mcasp_driver = ;
static int __init davinci_mcasp_init(void)
module_init(davinci_mcasp_init);
static void __exit davinci_mcasp_exit(void)
module_exit(davinci_mcasp_exit);
MODULE_AUTHOR("Steve Chen");
MODULE_DESCRIPTION("TI DAVINCI McASP SoC Interface");
MODULE_LICENSE("GPL");
