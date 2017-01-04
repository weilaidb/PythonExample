unsigned int snd_usb_combine_bytes(unsigned char *bytes, int size)
void *snd_usb_find_desc(void *descstart, int desclen, void *after, u8 dtype)
void *snd_usb_find_csint_desc(void *buffer, int buflen, void *after, u8 dsubtype)
int snd_usb_ctl_msg(struct usb_device *dev, unsigned int pipe, __u8 request,
__u8 requesttype, __u16 value, __u16 index, void *data,
__u16 size, int timeout)
unsigned char snd_usb_parse_datainterval(struct snd_usb_audio *chip,
struct usb_host_interface *alts)
