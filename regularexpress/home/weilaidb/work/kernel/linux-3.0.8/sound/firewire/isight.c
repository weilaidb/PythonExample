#define OUI_APPLE		0x000a27
#define MODEL_APPLE_ISIGHT	0x000008
#define SW_ISIGHT_AUDIO		0x000010
#define REG_AUDIO_ENABLE	0x000
#define  AUDIO_ENABLE		0x80000000
#define REG_DEF_AUDIO_GAIN	0x204
#define REG_GAIN_RAW_START	0x210
#define REG_GAIN_RAW_END	0x214
#define REG_GAIN_DB_START	0x218
#define REG_GAIN_DB_END		0x21c
#define REG_SAMPLE_RATE_INQUIRY	0x280
#define REG_ISO_TX_CONFIG	0x300
#define  SPEED_SHIFT		16
#define REG_SAMPLE_RATE		0x400
#define  RATE_48000		0x80000000
#define REG_GAIN		0x500
#define REG_MUTE		0x504
#define MAX_FRAMES_PER_PACKET	475
#define QUEUE_LENGTH		20
struct isight ;
struct audio_payload ;
MODULE_DESCRIPTION("iSight audio driver");
MODULE_AUTHOR("Clemens Ladisch <clemens@ladisch.de>");
MODULE_LICENSE("GPL v2");
static struct fw_iso_packet audio_packet = ;
static void isight_update_pointers(struct isight *isight, unsigned int count)
static void isight_samples(struct isight *isight,
const __be16 *samples, unsigned int count)
static void isight_pcm_abort(struct isight *isight)
static void isight_dropped_samples(struct isight *isight, unsigned int total)
static void isight_packet(struct fw_iso_context *context, u32 cycle,
size_t header_length, void *header, void *data)
static int isight_connect(struct isight *isight)
static int isight_open(struct snd_pcm_substream *substream)
static int isight_close(struct snd_pcm_substream *substream)
static int isight_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int reg_read(struct isight *isight, int offset, __be32 *value)
static int reg_write(struct isight *isight, int offset, __be32 value)
static void isight_stop_streaming(struct isight *isight)
static int isight_hw_free(struct snd_pcm_substream *substream)
static int isight_start_streaming(struct isight *isight)
static int isight_prepare(struct snd_pcm_substream *substream)
static int isight_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t isight_pointer(struct snd_pcm_substream *substream)
static int isight_create_pcm(struct isight *isight)
static int isight_gain_info(struct snd_kcontrol *ctl,
struct snd_ctl_elem_info *info)
static int isight_gain_get(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int isight_gain_put(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int isight_mute_get(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int isight_mute_put(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int isight_create_mixer(struct isight *isight)
static void isight_card_free(struct snd_card *card)
static u64 get_unit_base(struct fw_unit *unit)
static int isight_probe(struct device *unit_dev)
static int isight_remove(struct device *dev)
static void isight_bus_reset(struct fw_unit *unit)
static const struct ieee1394_device_id isight_id_table[] = ;
MODULE_DEVICE_TABLE(ieee1394, isight_id_table);
static struct fw_driver isight_driver = ;
static int __init alsa_isight_init(void)
static void __exit alsa_isight_exit(void)
module_init(alsa_isight_init);
module_exit(alsa_isight_exit);
