enum eld_versions ;
enum cea_edid_versions ;
static char *cea_speaker_allocation_names[] = ;
static char *eld_connection_type_names[4] = ;
enum cea_audio_coding_types ;
enum cea_audio_coding_xtypes ;
static char *cea_audio_coding_type_names[] = ;
static int cea_sample_sizes[4] = ;
static int cea_sampling_frequencies[8] = ;
static unsigned char hdmi_get_eld_byte(struct hda_codec *codec, hda_nid_t nid,
int byte_index)
#define GRAB_BITS(buf, byte, lowbit, bits) 		\
()
static void hdmi_update_short_audio_desc(struct cea_sad *a,
const unsigned char *buf)
static int hdmi_update_eld(struct hdmi_eld *e,
const unsigned char *buf, int size)
int snd_hdmi_get_eld_size(struct hda_codec *codec, hda_nid_t nid)
int snd_hdmi_get_eld(struct hdmi_eld *eld,
struct hda_codec *codec, hda_nid_t nid)
static void hdmi_show_short_audio_desc(struct cea_sad *a)
void snd_print_channel_allocation(int spk_alloc, char *buf, int buflen)
void snd_hdmi_show_eld(struct hdmi_eld *e)
static void hdmi_print_sad_info(int i, struct cea_sad *a,
struct snd_info_buffer *buffer)
static void hdmi_print_eld_info(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void hdmi_write_eld_info(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
int snd_hda_eld_proc_new(struct hda_codec *codec, struct hdmi_eld *eld,
int index)
void snd_hda_eld_proc_free(struct hda_codec *codec, struct hdmi_eld *eld)
void hdmi_eld_update_pcm_info(struct hdmi_eld *eld, struct hda_pcm_stream *pcm,
struct hda_pcm_stream *codec_pars)
