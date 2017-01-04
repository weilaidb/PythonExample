#define BRGATXSAR	0x00
#define BRGARXDAR	0x04
#define BRGATXTCR	0x08
#define BRGARXTCR	0x0C
#define BRGACR		0x10
#define BRGATXTCNT	0x14
#define BRGARXTCNT	0x18
#define ACR_RAR		(1 << 18)
#define ACR_RDS		(1 << 17)
#define ACR_RDE		(1 << 16)
#define ACR_TAR		(1 << 2)
#define ACR_TDS		(1 << 1)
#define ACR_TDE		(1 << 0)
#define ACR_RAM_NONE	(0 << 24)
#define ACR_RAM_4BYTE	(1 << 24)
#define ACR_RAM_2WORD	(2 << 24)
#define ACR_TAM_NONE	(0 << 8)
#define ACR_TAM_4BYTE	(1 << 8)
#define ACR_TAM_2WORD	(2 << 8)
struct camelot_pcm  cam_pcm_data[2] = ;
#define BRGREG(x)	(*(unsigned long *)(cam->mmio + (x)))
#define DMABRG_PERIOD_MIN		16 * 1024
#define DMABRG_PERIOD_MAX		0x03fffffc
#define DMABRG_PREALLOC_BUFFER		32 * 1024
#define DMABRG_PREALLOC_BUFFER_MAX	32 * 1024
#define DMABRG_RATES	\
SNDRV_PCM_RATE_8000_192000
#define DMABRG_FMTS	\
(SNDRV_PCM_FMTBIT_S8      | SNDRV_PCM_FMTBIT_U8      |	\
SNDRV_PCM_FMTBIT_S16_LE  | SNDRV_PCM_FMTBIT_U16_LE  |	\
SNDRV_PCM_FMTBIT_S20_3LE | SNDRV_PCM_FMTBIT_U20_3LE |	\
SNDRV_PCM_FMTBIT_S24_3LE | SNDRV_PCM_FMTBIT_U24_3LE |	\
SNDRV_PCM_FMTBIT_S32_LE  | SNDRV_PCM_FMTBIT_U32_LE)
static struct snd_pcm_hardware camelot_pcm_hardware = ;
static void camelot_txdma(void *data)
static void camelot_rxdma(void *data)
static int camelot_pcm_open(struct snd_pcm_substream *substream)
static int camelot_pcm_close(struct snd_pcm_substream *substream)
static int camelot_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int camelot_hw_free(struct snd_pcm_substream *substream)
static int camelot_prepare(struct snd_pcm_substream *substream)
static inline void dmabrg_play_dma_start(struct camelot_pcm *cam)
static inline void dmabrg_play_dma_stop(struct camelot_pcm *cam)
static inline void dmabrg_rec_dma_start(struct camelot_pcm *cam)
static inline void dmabrg_rec_dma_stop(struct camelot_pcm *cam)
static int camelot_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t camelot_pos(struct snd_pcm_substream *substream)
static struct snd_pcm_ops camelot_pcm_ops = ;
static void camelot_pcm_free(struct snd_pcm *pcm)
static int camelot_pcm_new(struct snd_card *card,
struct snd_soc_dai *dai,
struct snd_pcm *pcm)
static struct snd_soc_platform sh7760_soc_platform = ;
static int __devinit sh7760_soc_platform_probe(struct platform_device *pdev)
static int __devexit sh7760_soc_platform_remove(struct platform_device *pdev)
static struct platform_driver sh7760_pcm_driver = ;
static int __init snd_sh7760_pcm_init(void)
module_init(snd_sh7760_pcm_init);
static void __exit snd_sh7760_pcm_exit(void)
module_exit(snd_sh7760_pcm_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("SH7760 Audio DMA (DMABRG) driver");
MODULE_AUTHOR("Manuel Lauss <mano@roarinelk.homelinux.net>");
