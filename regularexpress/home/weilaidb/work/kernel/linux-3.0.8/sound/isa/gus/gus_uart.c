static void snd_gf1_interrupt_midi_in(struct snd_gus_card * gus)
static void snd_gf1_interrupt_midi_out(struct snd_gus_card * gus)
static void snd_gf1_uart_reset(struct snd_gus_card * gus, int close)
static int snd_gf1_uart_output_open(struct snd_rawmidi_substream *substream)
static int snd_gf1_uart_input_open(struct snd_rawmidi_substream *substream)
static int snd_gf1_uart_output_close(struct snd_rawmidi_substream *substream)
static int snd_gf1_uart_input_close(struct snd_rawmidi_substream *substream)
static void snd_gf1_uart_input_trigger(struct snd_rawmidi_substream *substream, int up)
static void snd_gf1_uart_output_trigger(struct snd_rawmidi_substream *substream, int up)
static struct snd_rawmidi_ops snd_gf1_uart_output =
;
static struct snd_rawmidi_ops snd_gf1_uart_input =
;
int snd_gf1_rawmidi_new(struct snd_gus_card * gus, int device, struct snd_rawmidi ** rrawmidi)
