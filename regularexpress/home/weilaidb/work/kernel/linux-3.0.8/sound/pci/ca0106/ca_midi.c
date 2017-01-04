#define ca_midi_write_data(midi, data)	midi->write(midi, data, 0)
#define ca_midi_write_cmd(midi, data)	midi->write(midi, data, 1)
#define ca_midi_read_data(midi)		midi->read(midi, 0)
#define ca_midi_read_stat(midi)		midi->read(midi, 1)
#define ca_midi_input_avail(midi)	(!(ca_midi_read_stat(midi) & midi->input_avail))
#define ca_midi_output_ready(midi)	(!(ca_midi_read_stat(midi) & midi->output_ready))
static void ca_midi_clear_rx(struct snd_ca_midi *midi)
static void ca_midi_interrupt(struct snd_ca_midi *midi, unsigned int status)
static void ca_midi_cmd(struct snd_ca_midi *midi, unsigned char cmd, int ack)
static int ca_midi_input_open(struct snd_rawmidi_substream *substream)
static int ca_midi_output_open(struct snd_rawmidi_substream *substream)
static int ca_midi_input_close(struct snd_rawmidi_substream *substream)
static int ca_midi_output_close(struct snd_rawmidi_substream *substream)
static void ca_midi_input_trigger(struct snd_rawmidi_substream *substream, int up)
static void ca_midi_output_trigger(struct snd_rawmidi_substream *substream, int up)
static struct snd_rawmidi_ops ca_midi_output =
;
static struct snd_rawmidi_ops ca_midi_input =
;
static void ca_midi_free(struct snd_ca_midi *midi)
static void ca_rmidi_free(struct snd_rawmidi *rmidi)
int __devinit ca_midi_init(void *dev_id, struct snd_ca_midi *midi, int device, char *name)
