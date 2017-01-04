MODULE_AUTHOR("Bart Hartgers <bart@etpmod.phys.tue.nl>, Andreas Mohr");
MODULE_DESCRIPTION("Avance Logic ALS4000");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
#if defined(CONFIG_GAMEPORT) || (defined(MODULE) && defined(CONFIG_GAMEPORT_MODULE))
#define SUPPORT_JOYSTICK 1
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
static int joystick_port[SNDRV_CARDS];
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for ALS4000 soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for ALS4000 soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable ALS4000 soundcard.");
module_param_array(joystick_port, int, NULL, 0444);
MODULE_PARM_DESC(joystick_port, "Joystick port address for ALS4000 soundcard. (0 = disabled)");
struct snd_card_als4000 ;
static DEFINE_PCI_DEVICE_TABLE(snd_als4000_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_als4000_ids);
enum als4k_iobase_t ;
enum als4k_iobase_0e_t ;
enum als4k_gcr_t ;
enum als4k_gcr8c_t ;
static inline void snd_als4k_iobase_writeb(unsigned long iobase,
enum als4k_iobase_t reg,
u8 val)
static inline void snd_als4k_iobase_writel(unsigned long iobase,
enum als4k_iobase_t reg,
u32 val)
static inline u8 snd_als4k_iobase_readb(unsigned long iobase,
enum als4k_iobase_t reg)
static inline u32 snd_als4k_iobase_readl(unsigned long iobase,
enum als4k_iobase_t reg)
static inline void snd_als4k_gcr_write_addr(unsigned long iobase,
enum als4k_gcr_t reg,
u32 val)
static inline void snd_als4k_gcr_write(struct snd_sb *sb,
enum als4k_gcr_t reg,
u32 val)
static inline u32 snd_als4k_gcr_read_addr(unsigned long iobase,
enum als4k_gcr_t reg)
static inline u32 snd_als4k_gcr_read(struct snd_sb *sb, enum als4k_gcr_t reg)
enum als4k_cr_t ;
enum als4k_cr0_t ;
static inline void snd_als4_cr_write(struct snd_sb *chip,
enum als4k_cr_t reg,
u8 data)
static inline u8 snd_als4_cr_read(struct snd_sb *chip,
enum als4k_cr_t reg)
static void snd_als4000_set_rate(struct snd_sb *chip, unsigned int rate)
static inline void snd_als4000_set_capture_dma(struct snd_sb *chip,
dma_addr_t addr, unsigned size)
static inline void snd_als4000_set_playback_dma(struct snd_sb *chip,
dma_addr_t addr,
unsigned size)
#define ALS4000_FORMAT_SIGNED	(1<<0)
#define ALS4000_FORMAT_16BIT	(1<<1)
#define ALS4000_FORMAT_STEREO	(1<<2)
static int snd_als4000_get_format(struct snd_pcm_runtime *runtime)
static const struct  playback_cmd_vals[]=;
#define playback_cmd(chip) (playback_cmd_vals[(chip)->playback_format])
enum ;
static const unsigned char capture_cmd_vals[]=
;
#define capture_cmd(chip) (capture_cmd_vals[(chip)->capture_format])
static int snd_als4000_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_als4000_hw_free(struct snd_pcm_substream *substream)
static int snd_als4000_capture_prepare(struct snd_pcm_substream *substream)
static int snd_als4000_playback_prepare(struct snd_pcm_substream *substream)
static int snd_als4000_capture_trigger(struct snd_pcm_substream *substream, int cmd)
static int snd_als4000_playback_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t snd_als4000_capture_pointer(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_als4000_playback_pointer(struct snd_pcm_substream *substream)
static irqreturn_t snd_als4000_interrupt(int irq, void *dev_id)
static struct snd_pcm_hardware snd_als4000_playback =
;
static struct snd_pcm_hardware snd_als4000_capture =
;
static int snd_als4000_playback_open(struct snd_pcm_substream *substream)
static int snd_als4000_playback_close(struct snd_pcm_substream *substream)
static int snd_als4000_capture_open(struct snd_pcm_substream *substream)
static int snd_als4000_capture_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_als4000_playback_ops = ;
static struct snd_pcm_ops snd_als4000_capture_ops = ;
static int __devinit snd_als4000_pcm(struct snd_sb *chip, int device)
static void snd_als4000_set_addr(unsigned long iobase,
unsigned int sb_io,
unsigned int mpu_io,
unsigned int opl_io,
unsigned int game_io)
static void snd_als4000_configure(struct snd_sb *chip)
static int __devinit snd_als4000_create_gameport(struct snd_card_als4000 *acard, int dev)
static void snd_als4000_free_gameport(struct snd_card_als4000 *acard)
static inline int snd_als4000_create_gameport(struct snd_card_als4000 *acard, int dev)
static inline void snd_als4000_free_gameport(struct snd_card_als4000 *acard)
static void snd_card_als4000_free( struct snd_card *card )
static int __devinit snd_card_als4000_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit snd_card_als4000_remove(struct pci_dev *pci)
static int snd_als4000_suspend(struct pci_dev *pci, pm_message_t state)
static int snd_als4000_resume(struct pci_dev *pci)
static struct pci_driver driver = ;
static int __init alsa_card_als4000_init(void)
static void __exit alsa_card_als4000_exit(void)
module_init(alsa_card_als4000_init)
module_exit(alsa_card_als4000_exit)
