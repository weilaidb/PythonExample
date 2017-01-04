static void free_substream(struct snd_usb_substream *subs)
static void snd_usb_audio_stream_free(struct snd_usb_stream *stream)
static void snd_usb_audio_pcm_free(struct snd_pcm *pcm)
int snd_usb_add_audio_endpoint(struct snd_usb_audio *chip, int stream, struct audioformat *fp)
static int parse_uac_endpoint_attributes(struct snd_usb_audio *chip,
struct usb_host_interface *alts,
int protocol, int iface_no)
static struct uac2_input_terminal_descriptor *
snd_usb_find_input_terminal_descriptor(struct usb_host_interface *ctrl_iface,
int terminal_id)
static struct uac2_output_terminal_descriptor *
snd_usb_find_output_terminal_descriptor(struct usb_host_interface *ctrl_iface,
int terminal_id)
int snd_usb_parse_audio_endpoints(struct snd_usb_audio *chip, int iface_no)
