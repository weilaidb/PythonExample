#define __USBAUDIO_H
#define USB_ID(vendor, product) (((vendor) << 16) | (product))
#define USB_ID_VENDOR(id) ((id) >> 16)
#define USB_ID_PRODUCT(id) ((u16)(id))
struct snd_usb_audio ;
#define QUIRK_NO_INTERFACE		-2
#define QUIRK_ANY_INTERFACE		-1
enum quirk_type ;
struct snd_usb_audio_quirk ;
#define combine_word(s)    ((*(s)) | ((unsigned int)(s)[1] << 8))
#define combine_triple(s)  (combine_word(s) | ((unsigned int)(s)[2] << 16))
#define combine_quad(s)    (combine_triple(s) | ((unsigned int)(s)[3] << 24))
