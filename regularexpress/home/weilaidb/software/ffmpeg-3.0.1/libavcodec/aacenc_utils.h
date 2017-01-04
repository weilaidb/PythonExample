#define AVCODEC_AACENC_UTILS_H
#define ROUND_STANDARD 0.4054f
#define ROUND_TO_ZERO 0.1054f
#define C_QUANT 0.4054f
static inline void abs_pow34_v(float *out, const float *in, const int size)
static inline float pos_pow34(float a)
static inline int quant(float coef, const float Q, const float rounding)
static inline void quantize_bands(int *out, const float *in, const float *scaled,
int size, float Q34, int is_signed, int maxval,
const float rounding)
static inline float find_max_val(int group_len, int swb_size, const float *scaled)
static inline int find_min_book(float maxval, int sf)
static inline float find_form_factor(int group_len, int swb_size, float thresh,
const float *scaled, float nzslope)
static inline uint8_t coef2minsf(float coef)
static inline uint8_t coef2maxsf(float coef)
static inline int quant_array_idx(const float val, const float *arr, const int num)
static av_always_inline float bval2bmax(float b)
static inline void ff_init_nextband_map(const SingleChannelElement *sce, uint8_t *nextband)
static inline void ff_nextband_remove(uint8_t *nextband, int prevband, int band)
static inline int ff_sfdelta_can_remove_band(const SingleChannelElement *sce,
const uint8_t *nextband, int prev_sf, int band)
static inline int ff_sfdelta_can_replace(const SingleChannelElement *sce,
const uint8_t *nextband, int prev_sf, int new_sf, int band)
#define ERROR_IF(cond, ...) \
if (cond)
#define WARN_IF(cond, ...) \
if (cond)
