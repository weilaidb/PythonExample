irqreturn_t snd_sb8dsp_midi_interrupt(struct snd_sb *chip)
static int snd_sb8dsp_midi_input_open(struct snd_rawmidi_substream *substream)
static int snd_sb8dsp_midi_output_open(struct snd_rawmidi_substream *substream)
static int snd_sb8dsp_midi_input_close(struct snd_rawmidi_substream *substream)
static int snd_sb8dsp_midi_output_close(struct snd_rawmidi_substream *substream)
static void snd_sb8dsp_midi_input_trigger(struct snd_rawmidi_substream *substream, int up)
static void snd_sb8dsp_midi_output_write(struct snd_rawmidi_substream *substream)
static void snd_sb8dsp_midi_output_timer(unsigned long data)
static void snd_sb8dsp_midi_output_trigger(struct snd_rawmidi_substream *substream, int up)
static struct snd_rawmidi_ops snd_sb8dsp_midi_output =
;
static struct snd_rawmidi_ops snd_sb8dsp_midi_input =
;
int snd_sb8dsp_midi(struct snd_sb *chip, int device, struct snd_rawmidi ** rrawmidi)
