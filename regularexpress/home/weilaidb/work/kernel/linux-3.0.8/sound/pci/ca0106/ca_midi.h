#define CA_MIDI_MODE_INPUT	MPU401_MODE_INPUT
#define CA_MIDI_MODE_OUTPUT	MPU401_MODE_OUTPUT
struct snd_ca_midi ;
int ca_midi_init(void *card, struct snd_ca_midi *midi, int device, char *name);
