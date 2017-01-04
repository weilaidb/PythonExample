#define SI3054_VERB_READ_NODE  0x900
#define SI3054_VERB_WRITE_NODE 0x100
#define SI3054_EXTENDED_MID    2
#define SI3054_LINE_RATE       3
#define SI3054_LINE_LEVEL      4
#define SI3054_GPIO_CFG        5
#define SI3054_GPIO_POLARITY   6
#define SI3054_GPIO_STICKY     7
#define SI3054_GPIO_WAKEUP     8
#define SI3054_GPIO_STATUS     9
#define SI3054_GPIO_CONTROL   10
#define SI3054_MISC_AFE       11
#define SI3054_CHIPID         12
#define SI3054_LINE_CFG1      13
#define SI3054_LINE_STATUS    14
#define SI3054_DC_TERMINATION 15
#define SI3054_LINE_CONFIG    16
#define SI3054_CALLPROG_ATT   17
#define SI3054_SQ_CONTROL     18
#define SI3054_MISC_CONTROL   19
#define SI3054_RING_CTRL1     20
#define SI3054_RING_CTRL2     21
#define SI3054_MEI_READY 0xf
#define SI3054_ATAG_MASK 0x00f0
#define SI3054_DTAG_MASK 0xf000
#define SI3054_GPIO_OH    0x0001
#define SI3054_GPIO_CID   0x0002
#define SI3054_CHIPID_CODEC_REV_MASK 0x000f
#define SI3054_CHIPID_DAA_REV_MASK   0x00f0
#define SI3054_CHIPID_INTERNATIONAL  0x0100
#define SI3054_CHIPID_DAA_ID         0x0f00
#define SI3054_CHIPID_CODEC_ID      (1<<12)
#define GET_REG(codec,reg) (snd_hda_codec_read(codec,reg,0,SI3054_VERB_READ_NODE,0))
#define SET_REG(codec,reg,val) (snd_hda_codec_write(codec,reg,0,SI3054_VERB_WRITE_NODE,val))
#define SET_REG_CACHE(codec,reg,val) \
snd_hda_codec_write_cache(codec,reg,0,SI3054_VERB_WRITE_NODE,val)
struct si3054_spec ;
#define PRIVATE_VALUE(reg,mask) ((reg<<16)|(mask&0xffff))
#define PRIVATE_REG(val) ((val>>16)&0xffff)
#define PRIVATE_MASK(val) (val&0xffff)
#define si3054_switch_info	snd_ctl_boolean_mono_info
static int si3054_switch_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *uvalue)
static int si3054_switch_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *uvalue)
#define SI3054_KCONTROL(kname,reg,mask)
static const struct snd_kcontrol_new si3054_modem_mixer[] = ;
static int si3054_build_controls(struct hda_codec *codec)
static int si3054_pcm_prepare(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static int si3054_pcm_open(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static const struct hda_pcm_stream si3054_pcm = ;
static int si3054_build_pcms(struct hda_codec *codec)
static int si3054_init(struct hda_codec *codec)
static void si3054_free(struct hda_codec *codec)
static const struct hda_codec_ops si3054_patch_ops = ;
static int patch_si3054(struct hda_codec *codec)
static const struct hda_codec_preset snd_hda_preset_si3054[] = ;
MODULE_ALIAS("snd-hda-codec-id:163c3055");
MODULE_ALIAS("snd-hda-codec-id:163c3155");
MODULE_ALIAS("snd-hda-codec-id:11c13026");
MODULE_ALIAS("snd-hda-codec-id:11c13055");
MODULE_ALIAS("snd-hda-codec-id:11c13155");
MODULE_ALIAS("snd-hda-codec-id:10573055");
MODULE_ALIAS("snd-hda-codec-id:10573057");
MODULE_ALIAS("snd-hda-codec-id:10573155");
MODULE_ALIAS("snd-hda-codec-id:11063288");
MODULE_ALIAS("snd-hda-codec-id:15433155");
MODULE_ALIAS("snd-hda-codec-id:18540018");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Si3054 HD-audio modem codec");
static struct hda_codec_preset_list si3054_list = ;
static int __init patch_si3054_init(void)
static void __exit patch_si3054_exit(void)
module_init(patch_si3054_init)
module_exit(patch_si3054_exit)
