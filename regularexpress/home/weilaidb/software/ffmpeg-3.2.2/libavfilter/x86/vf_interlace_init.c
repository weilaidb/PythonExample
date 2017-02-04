ff_lowpass_line_sse2;
void ff_lowpass_line_avx (uint8_t *dstp, ptrdiff_t linesize,
const uint8_t *srcp,
const uint8_t *srcp_above,
const uint8_t *srcp_below);
ff_interlace_init_x86
