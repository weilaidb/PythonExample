#define __USBMIDI_H
#define MIDI_MAX_ENDPOINTS 2
struct snd_usb_midi_endpoint_info ;
int snd_usbmidi_create(struct snd_card *card,
struct usb_interface *iface,
struct list_head *midi_list,
const struct snd_usb_audio_quirk *quirk);
void snd_usbmidi_input_stop(struct list_head* p);
void snd_usbmidi_input_start(struct list_head* p);
void snd_usbmidi_disconnect(struct list_head *p);
