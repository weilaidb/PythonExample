static void usb6fire_midi_out_handler(struct urb *urb)
static void usb6fire_midi_in_received(
struct midi_runtime *rt, u8 *data, int length)
static int usb6fire_midi_out_open(struct snd_rawmidi_substream *alsa_sub)
static int usb6fire_midi_out_close(struct snd_rawmidi_substream *alsa_sub)
static void usb6fire_midi_out_trigger(
struct snd_rawmidi_substream *alsa_sub, int up)
static void usb6fire_midi_out_drain(struct snd_rawmidi_substream *alsa_sub)
static int usb6fire_midi_in_open(struct snd_rawmidi_substream *alsa_sub)
static int usb6fire_midi_in_close(struct snd_rawmidi_substream *alsa_sub)
static void usb6fire_midi_in_trigger(
struct snd_rawmidi_substream *alsa_sub, int up)
static struct snd_rawmidi_ops out_ops = ;
static struct snd_rawmidi_ops in_ops = ;
int __devinit usb6fire_midi_init(struct sfire_chip *chip)
void usb6fire_midi_abort(struct sfire_chip *chip)
void usb6fire_midi_destroy(struct sfire_chip *chip)
