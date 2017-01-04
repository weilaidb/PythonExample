static void print_audio_widget(struct snd_info_buffer *buffer,
struct lola *chip, int nid, const char *name)
static void print_pin_widget(struct snd_info_buffer *buffer,
struct lola *chip, int nid, unsigned int ampcap,
const char *name)
static void print_clock_widget(struct snd_info_buffer *buffer,
struct lola *chip, int nid)
static void print_mixer_widget(struct snd_info_buffer *buffer,
struct lola *chip, int nid)
static void lola_proc_codec_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void lola_proc_codec_rw_write(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void lola_proc_codec_rw_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void lola_proc_regs_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
void __devinit lola_proc_debug_new(struct lola *chip)
