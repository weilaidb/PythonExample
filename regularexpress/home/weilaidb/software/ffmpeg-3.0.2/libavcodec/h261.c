#define IS_FIL(a)    ((a) & MB_TYPE_H261_FIL)
uint8_t ff_h261_rl_table_store[2][2 * MAX_RUN + MAX_LEVEL + 3];
static void h261_loop_filter(uint8_t *src, int stride)
void ff_h261_loop_filter(MpegEncContext *s)
av_cold void ff_h261_common_init(void)
