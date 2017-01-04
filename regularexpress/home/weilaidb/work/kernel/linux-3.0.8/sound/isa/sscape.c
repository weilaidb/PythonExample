MODULE_AUTHOR("Chris Rankin");
MODULE_DESCRIPTION("ENSONIQ SoundScape driver");
MODULE_LICENSE("GPL");
MODULE_FIRMWARE("sndscape.co0");
MODULE_FIRMWARE("sndscape.co1");
MODULE_FIRMWARE("sndscape.co2");
MODULE_FIRMWARE("sndscape.co3");
MODULE_FIRMWARE("sndscape.co4");
MODULE_FIRMWARE("scope.cod");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char* id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static long port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static long wss_port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static int irq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static int mpu_irq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static int dma[SNDRV_CARDS] = SNDRV_DEFAULT_DMA;
static int dma2[SNDRV_CARDS] = SNDRV_DEFAULT_DMA;
static bool joystick[SNDRV_CARDS];
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index number for SoundScape soundcard");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "Description for SoundScape card");
module_param_array(port, long, NULL, 0444);
MODULE_PARM_DESC(port, "Port # for SoundScape driver.");
module_param_array(wss_port, long, NULL, 0444);
MODULE_PARM_DESC(wss_port, "WSS Port # for SoundScape driver.");
module_param_array(irq, int, NULL, 0444);
MODULE_PARM_DESC(irq, "IRQ # for SoundScape driver.");
module_param_array(mpu_irq, int, NULL, 0444);
MODULE_PARM_DESC(mpu_irq, "MPU401 IRQ # for SoundScape driver.");
module_param_array(dma, int, NULL, 0444);
MODULE_PARM_DESC(dma, "DMA # for SoundScape driver.");
module_param_array(dma2, int, NULL, 0444);
MODULE_PARM_DESC(dma2, "DMA2 # for SoundScape driver.");
module_param_array(joystick, bool, NULL, 0444);
MODULE_PARM_DESC(joystick, "Enable gameport.");
static int isa_registered;
static int pnp_registered;
static struct pnp_card_device_id sscape_pnpids[] = ;
MODULE_DEVICE_TABLE(pnp_card, sscape_pnpids);
#define HOST_CTRL_IO(i)  ((i) + 2)
#define HOST_DATA_IO(i)  ((i) + 3)
#define ODIE_ADDR_IO(i)  ((i) + 4)
#define ODIE_DATA_IO(i)  ((i) + 5)
#define CODEC_IO(i)      ((i) + 8)
#define IC_ODIE  1
#define IC_OPUS  2
#define RX_READY 0x01
#define TX_READY 0x02
#define CMD_ACK			0x80
#define CMD_SET_MIDI_VOL	0x84
#define CMD_GET_MIDI_VOL	0x85
#define CMD_XXX_MIDI_VOL	0x86
#define CMD_SET_EXTMIDI		0x8a
#define CMD_GET_EXTMIDI		0x8b
#define CMD_SET_MT32		0x8c
#define CMD_GET_MT32		0x8d
enum GA_REG ;
#define DMA_8BIT  0x80
enum card_type ;
struct soundscape ;
#define INVALID_IRQ  ((unsigned)-1)
static inline struct soundscape *get_card_soundscape(struct snd_card *c)
static struct snd_dma_buffer *get_dmabuf(struct snd_dma_buffer *buf,
unsigned long size)
static void free_dmabuf(struct snd_dma_buffer *buf)
static inline void sscape_write_unsafe(unsigned io_base, enum GA_REG reg,
unsigned char val)
static void sscape_write(struct soundscape *s, enum GA_REG reg,
unsigned char val)
static inline unsigned char sscape_read_unsafe(unsigned io_base,
enum GA_REG reg)
static inline void set_host_mode_unsafe(unsigned io_base)
static inline void set_midi_mode_unsafe(unsigned io_base)
static inline int host_read_unsafe(unsigned io_base)
static int host_read_ctrl_unsafe(unsigned io_base, unsigned timeout)
static inline int host_write_unsafe(unsigned io_base, unsigned char data)
static int host_write_ctrl_unsafe(unsigned io_base, unsigned char data,
unsigned timeout)
static inline int verify_mpu401(const struct snd_mpu401 *mpu)
static inline void initialise_mpu401(const struct snd_mpu401 *mpu)
static void activate_ad1845_unsafe(unsigned io_base)
static void soundscape_free(struct snd_card *c)
static void sscape_start_dma_unsafe(unsigned io_base, enum GA_REG reg)
static int sscape_wait_dma_unsafe(unsigned io_base, enum GA_REG reg,
unsigned timeout)
static int obp_startup_ack(struct soundscape *s, unsigned timeout)
static int host_startup_ack(struct soundscape *s, unsigned timeout)
static int upload_dma_data(struct soundscape *s, const unsigned char *data,
size_t size)
static int sscape_upload_bootblock(struct snd_card *card)
static int sscape_upload_microcode(struct snd_card *card, int version)
static int sscape_midi_info(struct snd_kcontrol *ctl,
struct snd_ctl_elem_info *uinfo)
static int sscape_midi_get(struct snd_kcontrol *kctl,
struct snd_ctl_elem_value *uctl)
static int sscape_midi_put(struct snd_kcontrol *kctl,
struct snd_ctl_elem_value *uctl)
static struct snd_kcontrol_new midi_mixer_ctl = ;
static unsigned __devinit get_irq_config(int sscape_type, int irq)
static int __devinit detect_sscape(struct soundscape *s, long wss_io)
static int mpu401_open(struct snd_mpu401 *mpu)
static int __devinit create_mpu401(struct snd_card *card, int devnum,
unsigned long port, int irq)
static int __devinit create_ad1845(struct snd_card *card, unsigned port,
int irq, int dma1, int dma2)
static int __devinit create_sscape(int dev, struct snd_card *card)
static int __devinit snd_sscape_match(struct device *pdev, unsigned int i)
static int __devinit snd_sscape_probe(struct device *pdev, unsigned int dev)
static int __devexit snd_sscape_remove(struct device *devptr, unsigned int dev)
#define DEV_NAME "sscape"
static struct isa_driver snd_sscape_driver = ;
static inline int __devinit get_next_autoindex(int i)
static int __devinit sscape_pnp_detect(struct pnp_card_link *pcard,
const struct pnp_card_device_id *pid)
static void __devexit sscape_pnp_remove(struct pnp_card_link * pcard)
static struct pnp_card_driver sscape_pnpc_driver = ;
static int __init sscape_init(void)
static void __exit sscape_exit(void)
module_init(sscape_init);
module_exit(sscape_exit);
