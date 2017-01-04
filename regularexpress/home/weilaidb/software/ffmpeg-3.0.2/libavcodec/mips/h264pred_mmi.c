void ff_pred16x16_vertical_8_mmi(uint8_t *src, ptrdiff_t stride)
void ff_pred16x16_horizontal_8_mmi(uint8_t *src, ptrdiff_t stride)
void ff_pred16x16_dc_8_mmi(uint8_t *src, ptrdiff_t stride)
void ff_pred8x8l_top_dc_8_mmi(uint8_t *src, int has_topleft,
int has_topright, ptrdiff_t stride)
void ff_pred8x8l_dc_8_mmi(uint8_t *src, int has_topleft,
int has_topright, ptrdiff_t stride)
void ff_pred8x8l_vertical_8_mmi(uint8_t *src, int has_topleft,
int has_topright, ptrdiff_t stride)
void ff_pred4x4_dc_8_mmi(uint8_t *src, const uint8_t *topright,
ptrdiff_t stride)
void ff_pred8x8_vertical_8_mmi(uint8_t *src, ptrdiff_t stride)
void ff_pred8x8_horizontal_8_mmi(uint8_t *src, ptrdiff_t stride)
static void ff_pred16x16_plane_compat_8_mmi(uint8_t *src, ptrdiff_t stride,
const int svq3, const int rv40)
void ff_pred16x16_plane_svq3_8_mmi(uint8_t *src, ptrdiff_t stride)
void ff_pred16x16_plane_rv40_8_mmi(uint8_t *src, ptrdiff_t stride)
void ff_pred16x16_plane_h264_8_mmi(uint8_t *src, ptrdiff_t stride)
void ff_pred8x8_top_dc_8_mmi(uint8_t *src, ptrdiff_t stride)
void ff_pred8x8_dc_8_mmi(uint8_t *src, ptrdiff_t stride)
void ff_pred8x16_vertical_8_mmi(uint8_t *src, ptrdiff_t stride)
void ff_pred8x16_horizontal_8_mmi(uint8_t *src, ptrdiff_t stride)
