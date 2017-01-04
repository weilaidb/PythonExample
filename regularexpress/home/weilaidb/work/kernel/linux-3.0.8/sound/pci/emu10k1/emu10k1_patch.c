#define BLANK_LOOP_START	4
#define BLANK_LOOP_END		8
#define BLANK_LOOP_SIZE		12
#define BLANK_HEAD_SIZE		32
int
snd_emu10k1_sample_new(struct snd_emux *rec, struct snd_sf_sample *sp,
struct snd_util_memhdr *hdr,
const void __user *data, long count)
int
snd_emu10k1_sample_free(struct snd_emux *rec, struct snd_sf_sample *sp,
struct snd_util_memhdr *hdr)
