#define AVCODEC_MIPS_XVIDIDCT_MIPS_H
void ff_xvid_idct_mmi(int16_t *block);
void ff_xvid_idct_put_mmi(uint8_t *dest, int32_t line_size, int16_t *block);
void ff_xvid_idct_add_mmi(uint8_t *dest, int32_t line_size, int16_t *block);
