static void
snd_emux_proc_info_read(struct snd_info_entry *entry,
struct snd_info_buffer *buf)
void snd_emux_proc_init(struct snd_emux *emu, struct snd_card *card, int device)
void snd_emux_proc_free(struct snd_emux *emu)
