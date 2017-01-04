#define BIT_DEPTH 8
static inline void put_tpel_pixels_mc00_c(uint8_t *dst, const uint8_t *src,
int stride, int width, int height)
static inline void put_tpel_pixels_mc10_c(uint8_t *dst, const uint8_t *src,
int stride, int width, int height)
static inline void put_tpel_pixels_mc20_c(uint8_t *dst, const uint8_t *src,
int stride, int width, int height)
static inline void put_tpel_pixels_mc01_c(uint8_t *dst, const uint8_t *src,
int stride, int width, int height)
static inline void put_tpel_pixels_mc11_c(uint8_t *dst, const uint8_t *src,
int stride, int width, int height)
static inline void put_tpel_pixels_mc12_c(uint8_t *dst, const uint8_t *src,
int stride, int width, int height)
static inline void put_tpel_pixels_mc02_c(uint8_t *dst, const uint8_t *src,
int stride, int width, int height)
static inline void put_tpel_pixels_mc21_c(uint8_t *dst, const uint8_t *src,
int stride, int width, int height)
static inline void put_tpel_pixels_mc22_c(uint8_t *dst, const uint8_t *src,
int stride, int width, int height)
static inline void avg_tpel_pixels_mc00_c(uint8_t *dst, const uint8_t *src,
int stride, int width, int height)
static inline void avg_tpel_pixels_mc10_c(uint8_t *dst, const uint8_t *src,
int stride, int width, int height)
static inline void avg_tpel_pixels_mc20_c(uint8_t *dst, const uint8_t *src,
int stride, int width, int height)
static inline void avg_tpel_pixels_mc01_c(uint8_t *dst, const uint8_t *src,
int stride, int width, int height)
static inline void avg_tpel_pixels_mc11_c(uint8_t *dst, const uint8_t *src,
int stride, int width, int height)
static inline void avg_tpel_pixels_mc12_c(uint8_t *dst, const uint8_t *src,
int stride, int width, int height)
static inline void avg_tpel_pixels_mc02_c(uint8_t *dst, const uint8_t *src,
int stride, int width, int height)
static inline void avg_tpel_pixels_mc21_c(uint8_t *dst, const uint8_t *src,
int stride, int width, int height)
static inline void avg_tpel_pixels_mc22_c(uint8_t *dst, const uint8_t *src,
int stride, int width, int height)
av_cold void ff_tpeldsp_init(TpelDSPContext *c)
