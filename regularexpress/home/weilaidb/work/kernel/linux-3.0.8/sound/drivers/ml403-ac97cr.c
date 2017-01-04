#define SND_ML403_AC97CR_DRIVER "ml403-ac97cr"
MODULE_AUTHOR("Joachim Foerster <JOFT@gmx.de>");
MODULE_DESCRIPTION("Xilinx ML403 AC97 Controller Reference");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for ML403 AC97 Controller Reference.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for ML403 AC97 Controller Reference.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable this ML403 AC97 Controller Reference.");
#define SND_PCM_INDIRECT2_STAT
#undef PDEBUG
#define UNKNOWN       (1<<0)
#define CODEC_SUCCESS (1<<1)
#define CODEC_FAKE    (1<<2)
#define INIT_INFO     (1<<3)
#define INIT_FAILURE  (1<<4)
#define WORK_INFO     (1<<5)
#define WORK_FAILURE  (1<<6)
#define PDEBUG_FACILITIES (UNKNOWN | INIT_FAILURE | WORK_FAILURE)
#define PDEBUG(fac, fmt, args...) do  while (0)
#define PDEBUG(fac, fmt, args...)
#define CODEC_TIMEOUT_ON_INIT       5
#define CODEC_WAIT_AFTER_WRITE    100
#define CODEC_TIMEOUT_AFTER_WRITE   5
#define CODEC_TIMEOUT_AFTER_READ    5
#define LM4550_REG_OK        (1<<0)
#define LM4550_REG_DONEREAD  (1<<1)
#define LM4550_REG_NOSAVE    (1<<2)
#define LM4550_REG_NOSHADOW  (1<<3)
#define LM4550_REG_READONLY  (1<<4)
#define LM4550_REG_FAKEPROBE (1<<5)
#define LM4550_REG_FAKEREAD  (1<<6)
#define LM4550_REG_ALLFAKE   (LM4550_REG_FAKEREAD | LM4550_REG_FAKEPROBE)
struct lm4550_reg ;
struct lm4550_reg lm4550_regfile[64] = ;
#define LM4550_RF_OK(reg)    (lm4550_regfile[reg / 2].flag & LM4550_REG_OK)
static void lm4550_regfile_init(void)
static void lm4550_regfile_write_values_after_init(struct snd_ac97 *ac97)
#define CR_REG(ml403_ac97cr, x) ((ml403_ac97cr)->port + CR_REG_##x)
#define CR_REG_PLAYFIFO         0x00
#define   CR_PLAYDATA(a)        ((a) & 0xFFFF)
#define CR_REG_RECFIFO          0x04
#define   CR_RECDATA(a)         ((a) & 0xFFFF)
#define CR_REG_STATUS           0x08
#define   CR_RECOVER            (1<<7)
#define   CR_PLAYUNDER          (1<<6)
#define   CR_CODECREADY         (1<<5)
#define   CR_RAF                (1<<4)
#define   CR_RECEMPTY           (1<<3)
#define   CR_RECFULL            (1<<2)
#define   CR_PLAYHALF           (1<<1)
#define   CR_PLAYFULL           (1<<0)
#define CR_REG_RESETFIFO        0x0C
#define   CR_RECRESET           (1<<1)
#define   CR_PLAYRESET          (1<<0)
#define CR_REG_CODEC_ADDR       0x10
#define   CR_CODEC_ADDR(a)      ((a) << 0)
#define   CR_CODEC_READ         (1<<7)
#define   CR_CODEC_WRITE        (0<<7)
#define CR_REG_CODEC_DATAREAD   0x14
#define   CR_CODEC_DATAREAD(v)  ((v) & 0xFFFF)
#define CR_REG_CODEC_DATAWRITE  0x18
#define   CR_CODEC_DATAWRITE(v) ((v) & 0xFFFF)
#define CR_FIFO_SIZE            32
struct snd_ml403_ac97cr ;
static struct snd_pcm_hardware snd_ml403_ac97cr_playback = ;
static struct snd_pcm_hardware snd_ml403_ac97cr_capture = ;
static size_t
snd_ml403_ac97cr_playback_ind2_zero(struct snd_pcm_substream *substream,
struct snd_pcm_indirect2 *rec)
static size_t
snd_ml403_ac97cr_playback_ind2_copy(struct snd_pcm_substream *substream,
struct snd_pcm_indirect2 *rec,
size_t bytes)
static size_t
snd_ml403_ac97cr_capture_ind2_null(struct snd_pcm_substream *substream,
struct snd_pcm_indirect2 *rec)
static size_t
snd_ml403_ac97cr_capture_ind2_copy(struct snd_pcm_substream *substream,
struct snd_pcm_indirect2 *rec, size_t bytes)
static snd_pcm_uframes_t
snd_ml403_ac97cr_pcm_pointer(struct snd_pcm_substream *substream)
static int
snd_ml403_ac97cr_pcm_playback_trigger(struct snd_pcm_substream *substream,
int cmd)
static int
snd_ml403_ac97cr_pcm_capture_trigger(struct snd_pcm_substream *substream,
int cmd)
static int
snd_ml403_ac97cr_pcm_playback_prepare(struct snd_pcm_substream *substream)
static int
snd_ml403_ac97cr_pcm_capture_prepare(struct snd_pcm_substream *substream)
static int snd_ml403_ac97cr_hw_free(struct snd_pcm_substream *substream)
static int
snd_ml403_ac97cr_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_ml403_ac97cr_playback_open(struct snd_pcm_substream *substream)
static int snd_ml403_ac97cr_capture_open(struct snd_pcm_substream *substream)
static int snd_ml403_ac97cr_playback_close(struct snd_pcm_substream *substream)
static int snd_ml403_ac97cr_capture_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_ml403_ac97cr_playback_ops = ;
static struct snd_pcm_ops snd_ml403_ac97cr_capture_ops = ;
static irqreturn_t snd_ml403_ac97cr_irq(int irq, void *dev_id)
static unsigned short
snd_ml403_ac97cr_codec_read(struct snd_ac97 *ac97, unsigned short reg)
{
struct snd_ml403_ac97cr *ml403_ac97cr = ac97->private_data;
u32 stat;
u32 rafaccess = 0;
unsigned long end_time;
u16 value = 0;
if (!LM4550_RF_OK(reg))
if ((lm4550_regfile[reg / 2].flag &
(LM4550_REG_DONEREAD | LM4550_REG_ALLFAKE)) &&
!(lm4550_regfile[reg / 2].flag & LM4550_REG_NOSHADOW))
if (mutex_lock_interruptible(&ml403_ac97cr->cdc_mutex) != 0)
return 0;
ml403_ac97cr->ac97_read++;
spin_lock(&ml403_ac97cr->reg_lock);
out_be32(CR_REG(ml403_ac97cr, CODEC_ADDR),
CR_CODEC_ADDR(reg) | CR_CODEC_READ);
spin_unlock(&ml403_ac97cr->reg_lock);
end_time = jiffies + (HZ / CODEC_TIMEOUT_AFTER_READ);
do
static void
snd_ml403_ac97cr_codec_write(struct snd_ac97 *ac97, unsigned short reg,
unsigned short val)
{
struct snd_ml403_ac97cr *ml403_ac97cr = ac97->private_data;
u32 stat;
u32 rafaccess = 0;
unsigned long end_time;
if (!LM4550_RF_OK(reg))
if (lm4550_regfile[reg / 2].flag & LM4550_REG_READONLY)
if ((val & lm4550_regfile[reg / 2].wmask) != val)
if (((lm4550_regfile[reg / 2].flag & LM4550_REG_FAKEPROBE) &&
ml403_ac97cr->ac97_fake) &&
!(lm4550_regfile[reg / 2].flag & LM4550_REG_NOSHADOW))
if (mutex_lock_interruptible(&ml403_ac97cr->cdc_mutex) != 0)
return;
ml403_ac97cr->ac97_write++;
spin_lock(&ml403_ac97cr->reg_lock);
out_be32(CR_REG(ml403_ac97cr, CODEC_DATAWRITE),
CR_CODEC_DATAWRITE(val));
out_be32(CR_REG(ml403_ac97cr, CODEC_ADDR),
CR_CODEC_ADDR(reg) | CR_CODEC_WRITE);
spin_unlock(&ml403_ac97cr->reg_lock);
end_time = jiffies + HZ / CODEC_TIMEOUT_AFTER_WRITE;
do
static int __devinit
snd_ml403_ac97cr_chip_init(struct snd_ml403_ac97cr *ml403_ac97cr)
static int snd_ml403_ac97cr_free(struct snd_ml403_ac97cr *ml403_ac97cr)
static int snd_ml403_ac97cr_dev_free(struct snd_device *snddev)
static int __devinit
snd_ml403_ac97cr_create(struct snd_card *card, struct platform_device *pfdev,
struct snd_ml403_ac97cr **rml403_ac97cr)
static void snd_ml403_ac97cr_mixer_free(struct snd_ac97 *ac97)
static int __devinit
snd_ml403_ac97cr_mixer(struct snd_ml403_ac97cr *ml403_ac97cr)
static int __devinit
snd_ml403_ac97cr_pcm(struct snd_ml403_ac97cr *ml403_ac97cr, int device,
struct snd_pcm **rpcm)
static int __devinit snd_ml403_ac97cr_probe(struct platform_device *pfdev)
static int snd_ml403_ac97cr_remove(struct platform_device *pfdev)
MODULE_ALIAS("platform:" SND_ML403_AC97CR_DRIVER);
static struct platform_driver snd_ml403_ac97cr_driver = ;
static int __init alsa_card_ml403_ac97cr_init(void)
static void __exit alsa_card_ml403_ac97cr_exit(void)
module_init(alsa_card_ml403_ac97cr_init)
module_exit(alsa_card_ml403_ac97cr_exit)
