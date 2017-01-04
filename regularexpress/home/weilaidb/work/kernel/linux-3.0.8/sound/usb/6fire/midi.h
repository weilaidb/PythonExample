#define USB6FIRE_MIDI_H
enum ;
struct midi_runtime ;
int __devinit usb6fire_midi_init(struct sfire_chip *chip);
void usb6fire_midi_abort(struct sfire_chip *chip);
void usb6fire_midi_destroy(struct sfire_chip *chip);
