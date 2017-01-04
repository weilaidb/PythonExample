MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("VIA VT82xx modem");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index = -2;
static char *id = SNDRV_DEFAULT_STR1;
static int ac97_clock = 48000;
module_param(index, int, 0444);
MODULE_PARM_DESC(index, "Index value for VIA 82xx bridge.");
module_param(id, charp, 0444);
MODULE_PARM_DESC(id, "ID string for VIA 82xx bridge.");
module_param(ac97_clock, int, 0444);
MODULE_PARM_DESC(ac97_clock, "AC'97 codec clock (default 48000Hz).");
static int enable;
module_param(enable, bool, 0444);
#define VIAREG(via, x) ((via)->port + VIA_REG_##x)
#define VIADEV_REG(viadev, x) ((viadev)->port + VIA_REG_##x)
#define VIA_REG_OFFSET_STATUS		0x00
#define   VIA_REG_STAT_ACTIVE		0x80
#define   VIA_REG_STAT_PAUSED		0x40
#define   VIA_REG_STAT_TRIGGER_QUEUED	0x08
#define   VIA_REG_STAT_STOPPED		0x04
#define   VIA_REG_STAT_EOL		0x02
#define   VIA_REG_STAT_FLAG		0x01
#define VIA_REG_OFFSET_CONTROL		0x01
#define   VIA_REG_CTRL_START		0x80
#define   VIA_REG_CTRL_TERMINATE	0x40
#define   VIA_REG_CTRL_AUTOSTART	0x20
#define   VIA_REG_CTRL_PAUSE		0x08
#define   VIA_REG_CTRL_INT_STOP		0x04
#define   VIA_REG_CTRL_INT_EOL		0x02
#define   VIA_REG_CTRL_INT_FLAG		0x01
#define   VIA_REG_CTRL_RESET		0x01
#define   VIA_REG_CTRL_INT (VIA_REG_CTRL_INT_FLAG | VIA_REG_CTRL_INT_EOL | VIA_REG_CTRL_AUTOSTART)
#define VIA_REG_OFFSET_TYPE		0x02
#define   VIA_REG_TYPE_AUTOSTART	0x80
#define   VIA_REG_TYPE_16BIT		0x20
#define   VIA_REG_TYPE_STEREO		0x10
#define   VIA_REG_TYPE_INT_LLINE	0x00
#define   VIA_REG_TYPE_INT_LSAMPLE	0x04
#define   VIA_REG_TYPE_INT_LESSONE	0x08
#define   VIA_REG_TYPE_INT_MASK		0x0c
#define   VIA_REG_TYPE_INT_EOL		0x02
#define   VIA_REG_TYPE_INT_FLAG		0x01
#define VIA_REG_OFFSET_TABLE_PTR	0x04
#define VIA_REG_OFFSET_CURR_PTR		0x04
#define VIA_REG_OFFSET_STOP_IDX		0x08
#define VIA_REG_OFFSET_CURR_COUNT	0x0c
#define VIA_REG_OFFSET_CURR_INDEX	0x0f
#define DEFINE_VIA_REGSET(name,val) \
enum
DEFINE_VIA_REGSET(MO, 0x40);
DEFINE_VIA_REGSET(MI, 0x50);
#define VIA_REG_AC97			0x80
#define   VIA_REG_AC97_CODEC_ID_MASK	(3<<30)
#define   VIA_REG_AC97_CODEC_ID_SHIFT	30
#define   VIA_REG_AC97_CODEC_ID_PRIMARY	0x00
#define   VIA_REG_AC97_CODEC_ID_SECONDARY 0x01
#define   VIA_REG_AC97_SECONDARY_VALID	(1<<27)
#define   VIA_REG_AC97_PRIMARY_VALID	(1<<25)
#define   VIA_REG_AC97_BUSY		(1<<24)
#define   VIA_REG_AC97_READ		(1<<23)
#define   VIA_REG_AC97_CMD_SHIFT	16
#define   VIA_REG_AC97_CMD_MASK		0x7e
#define   VIA_REG_AC97_DATA_SHIFT	0
#define   VIA_REG_AC97_DATA_MASK	0xffff
#define VIA_REG_SGD_SHADOW		0x84
#define   VIA_REG_SGD_STAT_PB_FLAG	(1<<0)
#define   VIA_REG_SGD_STAT_CP_FLAG	(1<<1)
#define   VIA_REG_SGD_STAT_FM_FLAG	(1<<2)
#define   VIA_REG_SGD_STAT_PB_EOL	(1<<4)
#define   VIA_REG_SGD_STAT_CP_EOL	(1<<5)
#define   VIA_REG_SGD_STAT_FM_EOL	(1<<6)
#define   VIA_REG_SGD_STAT_PB_STOP	(1<<8)
#define   VIA_REG_SGD_STAT_CP_STOP	(1<<9)
#define   VIA_REG_SGD_STAT_FM_STOP	(1<<10)
#define   VIA_REG_SGD_STAT_PB_ACTIVE	(1<<12)
#define   VIA_REG_SGD_STAT_CP_ACTIVE	(1<<13)
#define   VIA_REG_SGD_STAT_FM_ACTIVE	(1<<14)
#define   VIA_REG_SGD_STAT_MR_FLAG      (1<<16)
#define   VIA_REG_SGD_STAT_MW_FLAG      (1<<17)
#define   VIA_REG_SGD_STAT_MR_EOL       (1<<20)
#define   VIA_REG_SGD_STAT_MW_EOL       (1<<21)
#define   VIA_REG_SGD_STAT_MR_STOP      (1<<24)
#define   VIA_REG_SGD_STAT_MW_STOP      (1<<25)
#define   VIA_REG_SGD_STAT_MR_ACTIVE    (1<<28)
#define   VIA_REG_SGD_STAT_MW_ACTIVE    (1<<29)
#define VIA_REG_GPI_STATUS		0x88
#define VIA_REG_GPI_INTR		0x8c
#define VIA_TBL_BIT_FLAG	0x40000000
#define VIA_TBL_BIT_EOL		0x80000000
#define VIA_ACLINK_STAT		0x40
#define  VIA_ACLINK_C11_READY	0x20
#define  VIA_ACLINK_C10_READY	0x10
#define  VIA_ACLINK_C01_READY	0x04
#define  VIA_ACLINK_LOWPOWER	0x02
#define  VIA_ACLINK_C00_READY	0x01
#define VIA_ACLINK_CTRL		0x41
#define  VIA_ACLINK_CTRL_ENABLE	0x80
#define  VIA_ACLINK_CTRL_RESET	0x40
#define  VIA_ACLINK_CTRL_SYNC	0x20
#define  VIA_ACLINK_CTRL_SDO	0x10
#define  VIA_ACLINK_CTRL_VRA	0x08
#define  VIA_ACLINK_CTRL_PCM	0x04
#define  VIA_ACLINK_CTRL_FM	0x02
#define  VIA_ACLINK_CTRL_SB	0x01
#define  VIA_ACLINK_CTRL_INIT	(VIA_ACLINK_CTRL_ENABLE|\
VIA_ACLINK_CTRL_RESET|\
VIA_ACLINK_CTRL_PCM)
#define VIA_FUNC_ENABLE		0x42
#define  VIA_FUNC_MIDI_PNP	0x80
#define  VIA_FUNC_MIDI_IRQMASK	0x40
#define  VIA_FUNC_RX2C_WRITE	0x20
#define  VIA_FUNC_SB_FIFO_EMPTY	0x10
#define  VIA_FUNC_ENABLE_GAME	0x08
#define  VIA_FUNC_ENABLE_FM	0x04
#define  VIA_FUNC_ENABLE_MIDI	0x02
#define  VIA_FUNC_ENABLE_SB	0x01
#define VIA_PNP_CONTROL		0x43
#define VIA_MC97_CTRL		0x44
#define  VIA_MC97_CTRL_ENABLE   0x80
#define  VIA_MC97_CTRL_SECONDARY 0x40
#define  VIA_MC97_CTRL_INIT     (VIA_MC97_CTRL_ENABLE|\
VIA_MC97_CTRL_SECONDARY)
struct snd_via_sg_table  ;
#define VIA_TABLE_SIZE	255
struct viadev ;
enum ;
#define VIA_MAX_MODEM_DEVS	2
struct via82xx_modem ;
static DEFINE_PCI_DEVICE_TABLE(snd_via82xx_modem_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_via82xx_modem_ids);
static int build_via_table(struct viadev *dev, struct snd_pcm_substream *substream,
struct pci_dev *pci,
unsigned int periods, unsigned int fragsize)
static int clean_via_table(struct viadev *dev, struct snd_pcm_substream *substream,
struct pci_dev *pci)
static inline unsigned int snd_via82xx_codec_xread(struct via82xx_modem *chip)
static inline void snd_via82xx_codec_xwrite(struct via82xx_modem *chip, unsigned int val)
static int snd_via82xx_codec_ready(struct via82xx_modem *chip, int secondary)
static int snd_via82xx_codec_valid(struct via82xx_modem *chip, int secondary)
static void snd_via82xx_codec_wait(struct snd_ac97 *ac97)
static void snd_via82xx_codec_write(struct snd_ac97 *ac97,
unsigned short reg,
unsigned short val)
static unsigned short snd_via82xx_codec_read(struct snd_ac97 *ac97, unsigned short reg)
static void snd_via82xx_channel_reset(struct via82xx_modem *chip, struct viadev *viadev)
static irqreturn_t snd_via82xx_interrupt(int irq, void *dev_id)
static int snd_via82xx_pcm_trigger(struct snd_pcm_substream *substream, int cmd)
#define check_invalid_pos(viadev,pos) \
((pos) < viadev->lastpos && ((pos) >= viadev->bufsize2 ||\
viadev->lastpos < viadev->bufsize2))
static inline unsigned int calc_linear_pos(struct viadev *viadev, unsigned int idx,
unsigned int count)
static snd_pcm_uframes_t snd_via686_pcm_pointer(struct snd_pcm_substream *substream)
static int snd_via82xx_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_via82xx_hw_free(struct snd_pcm_substream *substream)
static void snd_via82xx_set_table_ptr(struct via82xx_modem *chip, struct viadev *viadev)
static int snd_via82xx_pcm_prepare(struct snd_pcm_substream *substream)
static struct snd_pcm_hardware snd_via82xx_hw =
;
static int snd_via82xx_modem_pcm_open(struct via82xx_modem *chip, struct viadev *viadev,
struct snd_pcm_substream *substream)
static int snd_via82xx_playback_open(struct snd_pcm_substream *substream)
static int snd_via82xx_capture_open(struct snd_pcm_substream *substream)
static int snd_via82xx_pcm_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_via686_playback_ops = ;
static struct snd_pcm_ops snd_via686_capture_ops = ;
static void init_viadev(struct via82xx_modem *chip, int idx, unsigned int reg_offset,
int direction)
static int __devinit snd_via686_pcm_new(struct via82xx_modem *chip)
static void snd_via82xx_mixer_free_ac97_bus(struct snd_ac97_bus *bus)
static void snd_via82xx_mixer_free_ac97(struct snd_ac97 *ac97)
static int __devinit snd_via82xx_mixer_new(struct via82xx_modem *chip)
static void snd_via82xx_proc_read(struct snd_info_entry *entry, struct snd_info_buffer *buffer)
static void __devinit snd_via82xx_proc_init(struct via82xx_modem *chip)
static int snd_via82xx_chip_init(struct via82xx_modem *chip)
static int snd_via82xx_suspend(struct pci_dev *pci, pm_message_t state)
static int snd_via82xx_resume(struct pci_dev *pci)
static int snd_via82xx_free(struct via82xx_modem *chip)
static int snd_via82xx_dev_free(struct snd_device *device)
static int __devinit snd_via82xx_create(struct snd_card *card,
struct pci_dev *pci,
int chip_type,
int revision,
unsigned int ac97_clock,
struct via82xx_modem ** r_via)
static int __devinit snd_via82xx_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit snd_via82xx_remove(struct pci_dev *pci)
static struct pci_driver driver = ;
static int __init alsa_card_via82xx_init(void)
static void __exit alsa_card_via82xx_exit(void)
module_init(alsa_card_via82xx_init)
module_exit(alsa_card_via82xx_exit)
