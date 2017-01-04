extern void ff_v210_planar_unpack_unaligned_ssse3(const uint32_t *src, uint16_t *y, uint16_t *u, uint16_t *v, int width);
extern void ff_v210_planar_unpack_unaligned_avx(const uint32_t *src, uint16_t *y, uint16_t *u, uint16_t *v, int width);
extern void ff_v210_planar_unpack_aligned_ssse3(const uint32_t *src, uint16_t *y, uint16_t *u, uint16_t *v, int width);
extern void ff_v210_planar_unpack_aligned_avx(const uint32_t *src, uint16_t *y, uint16_t *u, uint16_t *v, int width);
av_cold void ff_v210_x86_init(V210DecContext *s)
