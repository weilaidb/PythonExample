#define __EMU8000_LOCAL_H
int snd_emu8000_sample_new(struct snd_emux *rec, struct snd_sf_sample *sp,
struct snd_util_memhdr *hdr,
const void __user *data, long count);
int snd_emu8000_sample_free(struct snd_emux *rec, struct snd_sf_sample *sp,
struct snd_util_memhdr *hdr);
void snd_emu8000_sample_reset(struct snd_emux *rec);
void snd_emu8000_ops_setup(struct snd_emu8000 *emu);
int snd_emu8000_pcm_new(struct snd_card *card, struct snd_emu8000 *emu, int index);
