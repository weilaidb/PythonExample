static int enable_midi_input(struct echoaudio *chip, char enable)
static int write_midi(struct echoaudio *chip, u8 *data, int bytes)
static inline int mtc_process_data(struct echoaudio *chip, short midi_byte)
static int midi_service_irq(struct echoaudio *chip)
static int snd_echo_midi_input_open(struct snd_rawmidi_substream *substream)
static void snd_echo_midi_input_trigger(struct snd_rawmidi_substream *substream,
int up)
static int snd_echo_midi_input_close(struct snd_rawmidi_substream *substream)
static int snd_echo_midi_output_open(struct snd_rawmidi_substream *substream)
static void snd_echo_midi_output_write(unsigned long data)
static void snd_echo_midi_output_trigger(struct snd_rawmidi_substream *substream,
int up)
static int snd_echo_midi_output_close(struct snd_rawmidi_substream *substream)
static struct snd_rawmidi_ops snd_echo_midi_input = ;
static struct snd_rawmidi_ops snd_echo_midi_output = ;
static int __devinit snd_echo_midi_create(struct snd_card *card,
struct echoaudio *chip)
