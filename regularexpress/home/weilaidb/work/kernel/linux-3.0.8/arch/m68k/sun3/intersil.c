#define STOP_VAL (INTERSIL_STOP | INTERSIL_INT_ENABLE | INTERSIL_24H_MODE)
#define START_VAL (INTERSIL_RUN | INTERSIL_INT_ENABLE | INTERSIL_24H_MODE)
unsigned long sun3_gettimeoffset(void)
int sun3_hwclk(int set, struct rtc_time *t)
