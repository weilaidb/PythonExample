#define __SOUND_PCM_PARAMS_H
int snd_pcm_hw_param_first(struct snd_pcm_substream *pcm,
struct snd_pcm_hw_params *params,
snd_pcm_hw_param_t var, int *dir);
int snd_pcm_hw_param_last(struct snd_pcm_substream *pcm,
struct snd_pcm_hw_params *params,
snd_pcm_hw_param_t var, int *dir);
int snd_pcm_hw_param_value(const struct snd_pcm_hw_params *params,
snd_pcm_hw_param_t var, int *dir);
#define SNDRV_MASK_BITS	64
#define SNDRV_MASK_SIZE	(SNDRV_MASK_BITS / 32)
#define MASK_OFS(i)	((i) >> 5)
#define MASK_BIT(i)	(1U << ((i) & 31))
static inline unsigned int ld2(u_int32_t v)
static inline size_t snd_mask_sizeof(void)
static inline void snd_mask_none(struct snd_mask *mask)
static inline void snd_mask_any(struct snd_mask *mask)
static inline int snd_mask_empty(const struct snd_mask *mask)
static inline unsigned int snd_mask_min(const struct snd_mask *mask)
static inline unsigned int snd_mask_max(const struct snd_mask *mask)
static inline void snd_mask_set(struct snd_mask *mask, unsigned int val)
static inline void snd_mask_reset(struct snd_mask *mask, unsigned int val)
static inline void snd_mask_set_range(struct snd_mask *mask,
unsigned int from, unsigned int to)
static inline void snd_mask_reset_range(struct snd_mask *mask,
unsigned int from, unsigned int to)
static inline void snd_mask_leave(struct snd_mask *mask, unsigned int val)
static inline void snd_mask_intersect(struct snd_mask *mask,
const struct snd_mask *v)
static inline int snd_mask_eq(const struct snd_mask *mask,
const struct snd_mask *v)
static inline void snd_mask_copy(struct snd_mask *mask,
const struct snd_mask *v)
static inline int snd_mask_test(const struct snd_mask *mask, unsigned int val)
static inline int snd_mask_single(const struct snd_mask *mask)
static inline int snd_mask_refine(struct snd_mask *mask,
const struct snd_mask *v)
static inline int snd_mask_refine_first(struct snd_mask *mask)
static inline int snd_mask_refine_last(struct snd_mask *mask)
static inline int snd_mask_refine_min(struct snd_mask *mask, unsigned int val)
static inline int snd_mask_refine_max(struct snd_mask *mask, unsigned int val)
static inline int snd_mask_refine_set(struct snd_mask *mask, unsigned int val)
static inline int snd_mask_value(const struct snd_mask *mask)
static inline void snd_interval_any(struct snd_interval *i)
static inline void snd_interval_none(struct snd_interval *i)
static inline int snd_interval_checkempty(const struct snd_interval *i)
static inline int snd_interval_empty(const struct snd_interval *i)
static inline int snd_interval_single(const struct snd_interval *i)
static inline int snd_interval_value(const struct snd_interval *i)
static inline int snd_interval_min(const struct snd_interval *i)
static inline int snd_interval_max(const struct snd_interval *i)
static inline int snd_interval_test(const struct snd_interval *i, unsigned int val)
static inline void snd_interval_copy(struct snd_interval *d, const struct snd_interval *s)
static inline int snd_interval_setinteger(struct snd_interval *i)
static inline int snd_interval_eq(const struct snd_interval *i1, const struct snd_interval *i2)
static inline unsigned int add(unsigned int a, unsigned int b)
static inline unsigned int sub(unsigned int a, unsigned int b)
