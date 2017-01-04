static bool static_hdmi_pcm;
module_param(static_hdmi_pcm, bool, 0644);
MODULE_PARM_DESC(static_hdmi_pcm, "Don't restrict PCM parameters per ELD info");
#define MAX_HDMI_CVTS	4
#define MAX_HDMI_PINS	4
struct hdmi_spec ;
struct hdmi_audio_infoframe ;
struct dp_audio_infoframe ;
union audio_infoframe ;
enum cea_speaker_placement ;
static int eld_speaker_allocation_bits[] = ;
struct cea_channel_speaker_allocation ;
static int hdmi_channel_mapping[0x32][8] = ;
static struct cea_channel_speaker_allocation channel_allocations[] = ;
static int hda_node_index(hda_nid_t *nids, hda_nid_t nid)
static void hdmi_get_dip_index(struct hda_codec *codec, hda_nid_t pin_nid,
int *packet_index, int *byte_index)
static void hdmi_set_dip_index(struct hda_codec *codec, hda_nid_t pin_nid,
int packet_index, int byte_index)
static void hdmi_write_dip_byte(struct hda_codec *codec, hda_nid_t pin_nid,
unsigned char val)
static void hdmi_enable_output(struct hda_codec *codec, hda_nid_t pin_nid)
static int hdmi_get_channel_count(struct hda_codec *codec, hda_nid_t nid)
static void hdmi_set_channel_count(struct hda_codec *codec,
hda_nid_t nid, int chs)
static void init_channel_allocations(void)
static int hdmi_channel_allocation(struct hda_codec *codec, hda_nid_t nid,
int channels)
static void hdmi_debug_channel_mapping(struct hda_codec *codec,
hda_nid_t pin_nid)
static void hdmi_setup_channel_mapping(struct hda_codec *codec,
hda_nid_t pin_nid,
int ca)
static void hdmi_start_infoframe_trans(struct hda_codec *codec,
hda_nid_t pin_nid)
static void hdmi_stop_infoframe_trans(struct hda_codec *codec,
hda_nid_t pin_nid)
static void hdmi_debug_dip_size(struct hda_codec *codec, hda_nid_t pin_nid)
static void hdmi_clear_dip_buffers(struct hda_codec *codec, hda_nid_t pin_nid)
static void hdmi_checksum_audio_infoframe(struct hdmi_audio_infoframe *hdmi_ai)
static void hdmi_fill_audio_infoframe(struct hda_codec *codec,
hda_nid_t pin_nid,
u8 *dip, int size)
static bool hdmi_infoframe_uptodate(struct hda_codec *codec, hda_nid_t pin_nid,
u8 *dip, int size)
static void hdmi_setup_audio_infoframe(struct hda_codec *codec, hda_nid_t nid,
struct snd_pcm_substream *substream)
static void hdmi_present_sense(struct hda_codec *codec, hda_nid_t pin_nid,
struct hdmi_eld *eld);
static void hdmi_intrinsic_event(struct hda_codec *codec, unsigned int res)
static void hdmi_non_intrinsic_event(struct hda_codec *codec, unsigned int res)
static void hdmi_unsol_event(struct hda_codec *codec, unsigned int res)
#define is_hbr_format(format) \
((format & AC_FMT_TYPE_NON_PCM) && (format & AC_FMT_CHAN_MASK) == 7)
static int hdmi_setup_stream(struct hda_codec *codec, hda_nid_t nid,
u32 stream_tag, int format)
static int hdmi_pcm_open(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int hdmi_read_pin_conn(struct hda_codec *codec, hda_nid_t pin_nid)
static void hdmi_present_sense(struct hda_codec *codec, hda_nid_t pin_nid,
struct hdmi_eld *eld)
static int hdmi_add_pin(struct hda_codec *codec, hda_nid_t pin_nid)
static int hdmi_add_cvt(struct hda_codec *codec, hda_nid_t nid)
static int hdmi_parse_codec(struct hda_codec *codec)
static char *generic_hdmi_pcm_names[MAX_HDMI_CVTS] = ;
static int generic_hdmi_playback_pcm_prepare(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static const struct hda_pcm_stream generic_hdmi_pcm_playback = ;
static int generic_hdmi_build_pcms(struct hda_codec *codec)
static int generic_hdmi_build_controls(struct hda_codec *codec)
static int generic_hdmi_init(struct hda_codec *codec)
static void generic_hdmi_free(struct hda_codec *codec)
static const struct hda_codec_ops generic_hdmi_patch_ops = ;
static int patch_generic_hdmi(struct hda_codec *codec)
#define Nv_VERB_SET_Channel_Allocation          0xF79
#define Nv_VERB_SET_Info_Frame_Checksum         0xF7A
#define Nv_VERB_SET_Audio_Protection_On         0xF98
#define Nv_VERB_SET_Audio_Protection_Off        0xF99
#define nvhdmi_master_con_nid_7x	0x04
#define nvhdmi_master_pin_nid_7x	0x05
static const hda_nid_t nvhdmi_con_nids_7x[4] = ;
static const struct hda_verb nvhdmi_basic_init_7x[] = ;
#define SUPPORTED_RATES		SNDRV_PCM_RATE_48000
#define SUPPORTED_MAXBPS	16
#define SUPPORTED_FORMATS	SNDRV_PCM_FMTBIT_S16_LE
#define SUPPORTED_RATES \
(SNDRV_PCM_RATE_32000 | SNDRV_PCM_RATE_44100 | SNDRV_PCM_RATE_48000 |\
SNDRV_PCM_RATE_88200 | SNDRV_PCM_RATE_96000 | SNDRV_PCM_RATE_176400 |\
SNDRV_PCM_RATE_192000)
#define SUPPORTED_MAXBPS	24
#define SUPPORTED_FORMATS \
(SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S32_LE)
static int nvhdmi_7x_init(struct hda_codec *codec)
static unsigned int channels_2_6_8[] = ;
static unsigned int channels_2_8[] = ;
static struct snd_pcm_hw_constraint_list hw_constraints_2_6_8_channels = ;
static struct snd_pcm_hw_constraint_list hw_constraints_2_8_channels = ;
static int simple_playback_pcm_open(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int simple_playback_pcm_close(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int simple_playback_pcm_prepare(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static void nvhdmi_8ch_7x_set_info_frame_parameters(struct hda_codec *codec,
int channels)
static int nvhdmi_8ch_7x_pcm_close(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int nvhdmi_8ch_7x_pcm_prepare(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static const struct hda_pcm_stream nvhdmi_pcm_playback_8ch_7x = ;
static const struct hda_pcm_stream nvhdmi_pcm_playback_2ch = ;
static const struct hda_codec_ops nvhdmi_patch_ops_8ch_7x = ;
static const struct hda_codec_ops nvhdmi_patch_ops_2ch = ;
static int patch_nvhdmi_2ch(struct hda_codec *codec)
static int patch_nvhdmi_8ch_7x(struct hda_codec *codec)
#define ATIHDMI_CVT_NID		0x02
#define ATIHDMI_PIN_NID		0x03
static int atihdmi_playback_pcm_prepare(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static const struct hda_pcm_stream atihdmi_pcm_digital_playback = ;
static const struct hda_verb atihdmi_basic_init[] = ;
static int atihdmi_init(struct hda_codec *codec)
static const struct hda_codec_ops atihdmi_patch_ops = ;
static int patch_atihdmi(struct hda_codec *codec)
static const struct hda_codec_preset snd_hda_preset_hdmi[] = ;
MODULE_ALIAS("snd-hda-codec-id:1002793c");
MODULE_ALIAS("snd-hda-codec-id:10027919");
MODULE_ALIAS("snd-hda-codec-id:1002791a");
MODULE_ALIAS("snd-hda-codec-id:1002aa01");
MODULE_ALIAS("snd-hda-codec-id:10951390");
MODULE_ALIAS("snd-hda-codec-id:10951392");
MODULE_ALIAS("snd-hda-codec-id:10de0002");
MODULE_ALIAS("snd-hda-codec-id:10de0003");
MODULE_ALIAS("snd-hda-codec-id:10de0005");
MODULE_ALIAS("snd-hda-codec-id:10de0006");
MODULE_ALIAS("snd-hda-codec-id:10de0007");
MODULE_ALIAS("snd-hda-codec-id:10de000a");
MODULE_ALIAS("snd-hda-codec-id:10de000b");
MODULE_ALIAS("snd-hda-codec-id:10de000c");
MODULE_ALIAS("snd-hda-codec-id:10de000d");
MODULE_ALIAS("snd-hda-codec-id:10de0010");
MODULE_ALIAS("snd-hda-codec-id:10de0011");
MODULE_ALIAS("snd-hda-codec-id:10de0012");
MODULE_ALIAS("snd-hda-codec-id:10de0013");
MODULE_ALIAS("snd-hda-codec-id:10de0014");
MODULE_ALIAS("snd-hda-codec-id:10de0015");
MODULE_ALIAS("snd-hda-codec-id:10de0016");
MODULE_ALIAS("snd-hda-codec-id:10de0018");
MODULE_ALIAS("snd-hda-codec-id:10de0019");
MODULE_ALIAS("snd-hda-codec-id:10de001a");
MODULE_ALIAS("snd-hda-codec-id:10de001b");
MODULE_ALIAS("snd-hda-codec-id:10de001c");
MODULE_ALIAS("snd-hda-codec-id:10de0040");
MODULE_ALIAS("snd-hda-codec-id:10de0041");
MODULE_ALIAS("snd-hda-codec-id:10de0042");
MODULE_ALIAS("snd-hda-codec-id:10de0043");
MODULE_ALIAS("snd-hda-codec-id:10de0044");
MODULE_ALIAS("snd-hda-codec-id:10de0067");
MODULE_ALIAS("snd-hda-codec-id:10de8001");
MODULE_ALIAS("snd-hda-codec-id:17e80047");
MODULE_ALIAS("snd-hda-codec-id:80860054");
MODULE_ALIAS("snd-hda-codec-id:80862801");
MODULE_ALIAS("snd-hda-codec-id:80862802");
MODULE_ALIAS("snd-hda-codec-id:80862803");
MODULE_ALIAS("snd-hda-codec-id:80862804");
MODULE_ALIAS("snd-hda-codec-id:80862805");
MODULE_ALIAS("snd-hda-codec-id:80862806");
MODULE_ALIAS("snd-hda-codec-id:808629fb");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("HDMI HD-audio codec");
MODULE_ALIAS("snd-hda-codec-intelhdmi");
MODULE_ALIAS("snd-hda-codec-nvhdmi");
MODULE_ALIAS("snd-hda-codec-atihdmi");
static struct hda_codec_preset_list intel_list = ;
static int __init patch_hdmi_init(void)
static void __exit patch_hdmi_exit(void)
module_init(patch_hdmi_init)
module_exit(patch_hdmi_exit)
