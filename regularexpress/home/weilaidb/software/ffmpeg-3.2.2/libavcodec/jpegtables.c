const uint8_t avpriv_mjpeg_bits_dc_luminance[17] =
;
const uint8_t avpriv_mjpeg_val_dc[12] =
;
const uint8_t avpriv_mjpeg_bits_dc_chrominance[17] =
;
const uint8_t avpriv_mjpeg_bits_ac_luminance[17] =
;
const uint8_t avpriv_mjpeg_val_ac_luminance[] =
;
const uint8_t avpriv_mjpeg_bits_ac_chrominance[17] =
;
const uint8_t avpriv_mjpeg_val_ac_chrominance[] =
;
void ff_mjpeg_build_huffman_codes(uint8_t *huff_size, uint16_t *huff_code,
const uint8_t *bits_table,
const uint8_t *val_table)
