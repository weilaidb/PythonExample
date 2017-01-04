#define MSNDMIDI_MODE_BIT_INPUT		0
#define MSNDMIDI_MODE_BIT_OUTPUT		1
#define MSNDMIDI_MODE_BIT_INPUT_TRIGGER	2
#define MSNDMIDI_MODE_BIT_OUTPUT_TRIGGER	3
struct snd_msndmidi ;
static int snd_msndmidi_input_open(struct snd_rawmidi_substream *substream)
static int snd_msndmidi_input_close(struct snd_rawmidi_substream *substream)
static void snd_msndmidi_input_drop(struct snd_msndmidi *mpu)
static void snd_msndmidi_input_trigger(struct snd_rawmidi_substream *substream,
int up)
void snd_msndmidi_input_read(void *mpuv)
EXPORT_SYMBOL(snd_msndmidi_input_read);
static struct snd_rawmidi_ops snd_msndmidi_input = ;
static void snd_msndmidi_free(struct snd_rawmidi *rmidi)
int snd_msndmidi_new(struct snd_card *card, int device)
