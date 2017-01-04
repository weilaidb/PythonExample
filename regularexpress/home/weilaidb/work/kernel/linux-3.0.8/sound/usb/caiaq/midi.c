static int snd_usb_caiaq_midi_input_open(struct snd_rawmidi_substream *substream)
static int snd_usb_caiaq_midi_input_close(struct snd_rawmidi_substream *substream)
static void snd_usb_caiaq_midi_input_trigger(struct snd_rawmidi_substream *substream, int up)
static int snd_usb_caiaq_midi_output_open(struct snd_rawmidi_substream *substream)
static int snd_usb_caiaq_midi_output_close(struct snd_rawmidi_substream *substream)
static void snd_usb_caiaq_midi_send(struct snd_usb_caiaqdev *dev,
struct snd_rawmidi_substream *substream)
static void snd_usb_caiaq_midi_output_trigger(struct snd_rawmidi_substream *substream, int up)
static struct snd_rawmidi_ops snd_usb_caiaq_midi_output =
;
static struct snd_rawmidi_ops snd_usb_caiaq_midi_input =
;
void snd_usb_caiaq_midi_handle_input(struct snd_usb_caiaqdev *dev,
int port, const char *buf, int len)
int snd_usb_caiaq_midi_init(struct snd_usb_caiaqdev *device)
void snd_usb_caiaq_midi_output_done(struct urb* urb)
