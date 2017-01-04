const uint32_t ff_tta_shift_1[] = ;
const uint32_t * const ff_tta_shift_16 = ff_tta_shift_1 + 4;
const uint8_t ff_tta_filter_configs[] = ;
void ff_tta_rice_init(TTARice *c, uint32_t k0, uint32_t k1)
void ff_tta_filter_init(TTAFilter *c, int32_t shift)
