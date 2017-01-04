void ff_lowpass_line_sse2(uint8_t *dstp, ptrdiff_t linesize,
const uint8_t *srcp,
const uint8_t *srcp_above,
const uint8_t *srcp_below);
void ff_lowpass_line_avx (uint8_t *dstp, ptrdiff_t linesize,
const uint8_t *srcp,
const uint8_t *srcp_above,
const uint8_t *srcp_below);
av_cold void ff_tinterlace_init_x86(TInterlaceContext *s)
