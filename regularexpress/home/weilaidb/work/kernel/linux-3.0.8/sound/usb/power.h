#define __USBAUDIO_POWER_H
int snd_usb_autoresume(struct snd_usb_audio *chip);
void snd_usb_autosuspend(struct snd_usb_audio *chip);
static inline int snd_usb_autoresume(struct snd_usb_audio *chip)
static inline void snd_usb_autosuspend(struct snd_usb_audio *chip)
