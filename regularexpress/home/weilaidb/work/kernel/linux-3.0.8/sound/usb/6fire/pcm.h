#define USB6FIRE_PCM_H
enum
;
struct pcm_urb ;
struct pcm_substream ;
struct pcm_runtime ;
int __devinit usb6fire_pcm_init(struct sfire_chip *chip);
void usb6fire_pcm_abort(struct sfire_chip *chip);
void usb6fire_pcm_destroy(struct sfire_chip *chip);
