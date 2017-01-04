static inline int
wf_mpu_status (snd_wavefront_midi_t *midi)
static inline int
input_avail (snd_wavefront_midi_t *midi)
static inline int
output_ready (snd_wavefront_midi_t *midi)
static inline int
read_data (snd_wavefront_midi_t *midi)
static inline void
write_data (snd_wavefront_midi_t *midi, unsigned char byte)
static snd_wavefront_midi_t *
get_wavefront_midi (struct snd_rawmidi_substream *substream)
static void snd_wavefront_midi_output_write(snd_wavefront_card_t *card)
static int snd_wavefront_midi_input_open(struct snd_rawmidi_substream *substream)
static int snd_wavefront_midi_output_open(struct snd_rawmidi_substream *substream)
static int snd_wavefront_midi_input_close(struct snd_rawmidi_substream *substream)
static int snd_wavefront_midi_output_close(struct snd_rawmidi_substream *substream)
static void snd_wavefront_midi_input_trigger(struct snd_rawmidi_substream *substream, int up)
static void snd_wavefront_midi_output_timer(unsigned long data)
static void snd_wavefront_midi_output_trigger(struct snd_rawmidi_substream *substream, int up)
void
snd_wavefront_midi_interrupt (snd_wavefront_card_t *card)
void
snd_wavefront_midi_enable_virtual (snd_wavefront_card_t *card)
void
snd_wavefront_midi_disable_virtual (snd_wavefront_card_t *card)
int __devinit
snd_wavefront_midi_start (snd_wavefront_card_t *card)
struct snd_rawmidi_ops snd_wavefront_midi_output =
;
struct snd_rawmidi_ops snd_wavefront_midi_input =
;
