#define __USBMIXER_H
struct usb_mixer_interface ;
#define MAX_CHANNELS	16
enum ;
struct usb_mixer_elem_info ;
int snd_usb_create_mixer(struct snd_usb_audio *chip, int ctrlif,
int ignore_error);
void snd_usb_mixer_disconnect(struct list_head *p);
void snd_usb_mixer_notify_id(struct usb_mixer_interface *mixer, int unitid);
int snd_usb_mixer_set_ctl_value(struct usb_mixer_elem_info *cval,
int request, int validx, int value_set);
void snd_usb_mixer_inactivate(struct usb_mixer_interface *mixer);
int snd_usb_mixer_activate(struct usb_mixer_interface *mixer);
int snd_usb_mixer_add_control(struct usb_mixer_interface *mixer,
struct snd_kcontrol *kctl);
