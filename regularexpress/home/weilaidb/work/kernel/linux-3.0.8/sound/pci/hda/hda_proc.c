static char *bits_names(unsigned int bits, char *names[], int size)
static const char *get_wid_type_name(unsigned int wid_value)
static void print_nid_array(struct snd_info_buffer *buffer,
struct hda_codec *codec, hda_nid_t nid,
struct snd_array *array)
static void print_nid_pcms(struct snd_info_buffer *buffer,
struct hda_codec *codec, hda_nid_t nid)
static void print_amp_caps(struct snd_info_buffer *buffer,
struct hda_codec *codec, hda_nid_t nid, int dir)
static void print_amp_vals(struct snd_info_buffer *buffer,
struct hda_codec *codec, hda_nid_t nid,
int dir, int stereo, int indices)
static void print_pcm_rates(struct snd_info_buffer *buffer, unsigned int pcm)
static void print_pcm_bits(struct snd_info_buffer *buffer, unsigned int pcm)
static void print_pcm_formats(struct snd_info_buffer *buffer,
unsigned int streams)
static void print_pcm_caps(struct snd_info_buffer *buffer,
struct hda_codec *codec, hda_nid_t nid)
static const char *get_jack_connection(u32 cfg)
static const char *get_jack_color(u32 cfg)
static void print_pin_caps(struct snd_info_buffer *buffer,
struct hda_codec *codec, hda_nid_t nid,
int *supports_vref)
static void print_pin_ctls(struct snd_info_buffer *buffer,
struct hda_codec *codec, hda_nid_t nid,
int supports_vref)
static void print_vol_knob(struct snd_info_buffer *buffer,
struct hda_codec *codec, hda_nid_t nid)
static void print_audio_io(struct snd_info_buffer *buffer,
struct hda_codec *codec, hda_nid_t nid,
unsigned int wid_type)
static void print_digital_conv(struct snd_info_buffer *buffer,
struct hda_codec *codec, hda_nid_t nid)
static const char *get_pwr_state(u32 state)
static void print_power_state(struct snd_info_buffer *buffer,
struct hda_codec *codec, hda_nid_t nid)
static void print_unsol_cap(struct snd_info_buffer *buffer,
struct hda_codec *codec, hda_nid_t nid)
static void print_proc_caps(struct snd_info_buffer *buffer,
struct hda_codec *codec, hda_nid_t nid)
static void print_conn_list(struct snd_info_buffer *buffer,
struct hda_codec *codec, hda_nid_t nid,
unsigned int wid_type, hda_nid_t *conn,
int conn_len)
static void print_gpio(struct snd_info_buffer *buffer,
struct hda_codec *codec, hda_nid_t nid)
static void print_codec_info(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
int snd_hda_codec_proc_new(struct hda_codec *codec)
