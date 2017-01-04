#define HACCR		0x08
#define HACCSAR		0x20
#define HACCSDR		0x24
#define HACPCML		0x28
#define HACPCMR		0x2C
#define HACTIER		0x50
#define	HACTSR		0x54
#define HACRIER		0x58
#define HACRSR		0x5C
#define HACACR		0x60
#define CR_CR		(1 << 15)
#define CR_CDRT		(1 << 11)
#define CR_WMRT		(1 << 10)
#define CR_B9		(1 << 9)
#define CR_ST		(1 << 5)
#define CSAR_RD		(1 << 19)
#define CSAR_WR		(0)
#define TSR_CMDAMT	(1 << 31)
#define TSR_CMDDMT	(1 << 30)
#define RSR_STARY	(1 << 22)
#define RSR_STDRY	(1 << 21)
#define ACR_DMARX16	(1 << 30)
#define ACR_DMATX16	(1 << 29)
#define ACR_TX12ATOM	(1 << 26)
#define ACR_DMARX20	((1 << 24) | (1 << 22))
#define ACR_DMATX20	((1 << 23) | (1 << 21))
#define CSDR_SHIFT	4
#define CSDR_MASK	(0xffff << CSDR_SHIFT)
#define CSAR_SHIFT	12
#define CSAR_MASK	(0x7f << CSAR_SHIFT)
#define AC97_WRITE_RETRY	1
#define AC97_READ_RETRY		5
#define TMO_E1	500
#define TMO_E2	13
#define TMO_E3	21
#define TMO_E4	500
struct hac_priv  hac_cpu_data[] = ;
#define HACREG(reg)	(*(unsigned long *)(hac->mmio + (reg)))
static int hac_get_codec_data(struct hac_priv *hac, unsigned short r,
unsigned short *v)
static unsigned short hac_read_codec_aux(struct hac_priv *hac,
unsigned short reg)
static void hac_ac97_write(struct snd_ac97 *ac97, unsigned short reg,
unsigned short val)
static unsigned short hac_ac97_read(struct snd_ac97 *ac97,
unsigned short reg)
static void hac_ac97_warmrst(struct snd_ac97 *ac97)
static void hac_ac97_coldrst(struct snd_ac97 *ac97)
struct snd_ac97_bus_ops soc_ac97_ops = ;
EXPORT_SYMBOL_GPL(soc_ac97_ops);
static int hac_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
#define AC97_RATES	\
SNDRV_PCM_RATE_8000_192000
#define AC97_FMTS	\
SNDRV_PCM_FMTBIT_S16_LE
static struct snd_soc_dai_ops hac_dai_ops = ;
static struct snd_soc_dai_driver sh4_hac_dai[] = ;
static int __devinit hac_soc_platform_probe(struct platform_device *pdev)
static int __devexit hac_soc_platform_remove(struct platform_device *pdev)
static struct platform_driver hac_pcm_driver = ;
static int __init sh4_hac_pcm_init(void)
module_init(sh4_hac_pcm_init);
static void __exit sh4_hac_pcm_exit(void)
module_exit(sh4_hac_pcm_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("SuperH onchip HAC (AC97) audio driver");
MODULE_AUTHOR("Manuel Lauss <mano@roarinelk.homelinux.net>");
