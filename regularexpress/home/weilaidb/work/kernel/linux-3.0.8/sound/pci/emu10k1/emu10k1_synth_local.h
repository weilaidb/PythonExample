#define __EMU10K1_SYNTH_LOCAL_H
int snd_emu10k1_sample_new(struct snd_emux *private_data,
struct snd_sf_sample *sp,
struct snd_util_memhdr *hdr,
const void __user *_data, long count);
int snd_emu10k1_sample_free(struct snd_emux *private_data,
struct snd_sf_sample *sp,
struct snd_util_memhdr *hdr);
int snd_emu10k1_memhdr_init(struct snd_emux *emu);
void snd_emu10k1_ops_setup(struct snd_emux *emu);
int snd_emu10k1_synth_get_voice(struct snd_emu10k1 *hw);
