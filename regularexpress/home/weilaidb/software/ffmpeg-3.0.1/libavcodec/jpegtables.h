#define AVCODEC_JPEGTABLES_H
extern av_export const uint8_t avpriv_mjpeg_bits_dc_luminance[];
extern av_export const uint8_t avpriv_mjpeg_val_dc[];
extern av_export const uint8_t avpriv_mjpeg_bits_dc_chrominance[];
extern av_export const uint8_t avpriv_mjpeg_bits_ac_luminance[];
extern av_export const uint8_t avpriv_mjpeg_val_ac_luminance[];
extern av_export const uint8_t avpriv_mjpeg_bits_ac_chrominance[];
extern av_export const uint8_t avpriv_mjpeg_val_ac_chrominance[];
void ff_mjpeg_build_huffman_codes(uint8_t *huff_size, uint16_t *huff_code,
const uint8_t *bits_table,
const uint8_t *val_table);
