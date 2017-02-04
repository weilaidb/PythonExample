#define AVCODEC_JPEGTABLES_H
extern av_export const uint8_t avpriv_mjpeg_bits_dc_luminance[];
extern av_export const uint8_t avpriv_mjpeg_val_dc[];
extern av_export const uint8_t avpriv_mjpeg_bits_dc_chrominance[];
extern av_export const uint8_t avpriv_mjpeg_bits_ac_luminance[];
extern av_export const uint8_t avpriv_mjpeg_val_ac_luminance[];
extern av_export const uint8_t avpriv_mjpeg_bits_ac_chrominance[];
extern av_export const uint8_t avpriv_mjpeg_val_ac_chrominance[];
ff_mjpeg_build_huffman_codes;
