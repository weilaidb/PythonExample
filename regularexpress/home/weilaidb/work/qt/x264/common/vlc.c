const vlc_t x264_coeff0_token[6] =
;
const vlc_t x264_coeff_token[6][16][4] =
;
const vlc_t x264_total_zeros[15][16] =
;
const vlc_t x264_total_zeros_2x2_dc[3][4] =
;
const vlc_t x264_total_zeros_2x4_dc[7][8] =
;
static const vlc_t run_before[7][16] =
;
vlc_large_t x264_level_token[7][LEVEL_TABLE_SIZE];
uint32_t x264_run_before[1<<16];
void x264_cavlc_init( x264_t *h )
