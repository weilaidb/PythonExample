static inline unsigned get_full_speed_hz(unsigned int usb_rate)
static inline unsigned get_high_speed_hz(unsigned int usb_rate)
static void proc_audio_usbbus_read(struct snd_info_entry *entry, struct snd_info_buffer *buffer)
static void proc_audio_usbid_read(struct snd_info_entry *entry, struct snd_info_buffer *buffer)
void snd_usb_audio_create_proc(struct snd_usb_audio *chip)
static void proc_dump_substream_formats(struct snd_usb_substream *subs, struct snd_info_buffer *buffer)
static void proc_dump_substream_status(struct snd_usb_substream *subs, struct snd_info_buffer *buffer)
static void proc_pcm_format_read(struct snd_info_entry *entry, struct snd_info_buffer *buffer)
void snd_usb_proc_pcm_format_add(struct snd_usb_stream *stream)