#define MIDI_H
#define MIDI_BUFFER_SIZE 1024
struct snd_line6_midi ;
extern int line6_init_midi(struct usb_line6 *line6);
extern void line6_midi_receive(struct usb_line6 *line6, unsigned char *data,
int length);
