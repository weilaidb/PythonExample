void ff_hqdn3d_row_8_x86(uint8_t *src, uint8_t *dst, uint16_t *line_ant,
uint16_t *frame_ant, ptrdiff_t w, int16_t *spatial,
int16_t *temporal);
void ff_hqdn3d_row_9_x86(uint8_t *src, uint8_t *dst, uint16_t *line_ant,
uint16_t *frame_ant, ptrdiff_t w, int16_t *spatial,
int16_t *temporal);
void ff_hqdn3d_row_10_x86(uint8_t *src, uint8_t *dst, uint16_t *line_ant,
uint16_t *frame_ant, ptrdiff_t w, int16_t *spatial,
int16_t *temporal);
void ff_hqdn3d_row_16_x86(uint8_t *src, uint8_t *dst, uint16_t *line_ant,
uint16_t *frame_ant, ptrdiff_t w, int16_t *spatial,
int16_t *temporal);
av_cold void ff_hqdn3d_init_x86(HQDN3DContext *hqdn3d)
