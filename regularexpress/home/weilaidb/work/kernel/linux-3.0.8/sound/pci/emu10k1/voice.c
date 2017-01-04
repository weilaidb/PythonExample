static int voice_alloc(struct snd_emu10k1 *emu, int type, int number,
struct snd_emu10k1_voice **rvoice)
int snd_emu10k1_voice_alloc(struct snd_emu10k1 *emu, int type, int number,
struct snd_emu10k1_voice **rvoice)
EXPORT_SYMBOL(snd_emu10k1_voice_alloc);
int snd_emu10k1_voice_free(struct snd_emu10k1 *emu,
struct snd_emu10k1_voice *pvoice)
EXPORT_SYMBOL(snd_emu10k1_voice_free);
